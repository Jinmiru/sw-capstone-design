// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/RendererSettings.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRendererSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings();
ENGINE_API UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URendererSettings();
ENGINE_API UClass* Z_Construct_UClass_URendererSettings_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAlphaChannelMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAntiAliasingMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEarlyZPass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EFixedFoveationLevels();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGBufferFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightUnits();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileLocalLightSetting();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMobileShadingPath();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EReflectionMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EScreenPercentageMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShaderCompressionFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowMapMethod();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucentSortPolicy();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVelocityOutputPass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EWorkingColorSpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformBool();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EClearSceneOptions
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EClearSceneOptions;
static UEnum* EClearSceneOptions_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EClearSceneOptions.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EClearSceneOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EClearSceneOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EClearSceneOptions"));
	}
	return Z_Registration_Info_UEnum_EClearSceneOptions.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EClearSceneOptions::Type>()
{
	return EClearSceneOptions_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EClearSceneOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates ways to clear a scene.\n */" },
		{ "HardwareClear.DisplayName", "Hardware clear" },
		{ "HardwareClear.Name", "EClearSceneOptions::HardwareClear" },
		{ "HardwareClear.ToolTip", "Perform a full hardware clear before rendering. Most projects should use this option." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "NoClear.DisplayName", "Do not clear" },
		{ "NoClear.Name", "EClearSceneOptions::NoClear" },
		{ "NoClear.ToolTip", "This option is fastest but can cause artifacts unless you render to every pixel. Make sure to use a skybox with this option!" },
		{ "QuadAtMaxZ.DisplayName", "Clear at far plane" },
		{ "QuadAtMaxZ.Name", "EClearSceneOptions::QuadAtMaxZ" },
		{ "QuadAtMaxZ.ToolTip", "Draws a quad to perform the clear at the far plane, this is faster than a hardware clear on some GPUs." },
		{ "ToolTip", "Enumerates ways to clear a scene." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EClearSceneOptions::NoClear", (int64)EClearSceneOptions::NoClear },
		{ "EClearSceneOptions::HardwareClear", (int64)EClearSceneOptions::HardwareClear },
		{ "EClearSceneOptions::QuadAtMaxZ", (int64)EClearSceneOptions::QuadAtMaxZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EClearSceneOptions",
	"EClearSceneOptions::Type",
	Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EClearSceneOptions()
{
	if (!Z_Registration_Info_UEnum_EClearSceneOptions.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EClearSceneOptions.InnerSingleton, Z_Construct_UEnum_Engine_EClearSceneOptions_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EClearSceneOptions.InnerSingleton;
}
// End Enum EClearSceneOptions

// Begin Enum ECompositingSampleCount
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompositingSampleCount;
static UEnum* ECompositingSampleCount_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECompositingSampleCount.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECompositingSampleCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECompositingSampleCount, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECompositingSampleCount"));
	}
	return Z_Registration_Info_UEnum_ECompositingSampleCount.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECompositingSampleCount::Type>()
{
	return ECompositingSampleCount_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates available compositing sample counts.\n */" },
		{ "Eight.DisplayName", "8x MSAA" },
		{ "Eight.Name", "ECompositingSampleCount::Eight" },
		{ "Four.DisplayName", "4x MSAA" },
		{ "Four.Name", "ECompositingSampleCount::Four" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "One.DisplayName", "No MSAA" },
		{ "One.Name", "ECompositingSampleCount::One" },
		{ "ToolTip", "Enumerates available compositing sample counts." },
		{ "Two.DisplayName", "2x MSAA" },
		{ "Two.Name", "ECompositingSampleCount::Two" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECompositingSampleCount::One", (int64)ECompositingSampleCount::One },
		{ "ECompositingSampleCount::Two", (int64)ECompositingSampleCount::Two },
		{ "ECompositingSampleCount::Four", (int64)ECompositingSampleCount::Four },
		{ "ECompositingSampleCount::Eight", (int64)ECompositingSampleCount::Eight },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECompositingSampleCount",
	"ECompositingSampleCount::Type",
	Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECompositingSampleCount()
{
	if (!Z_Registration_Info_UEnum_ECompositingSampleCount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompositingSampleCount.InnerSingleton, Z_Construct_UEnum_Engine_ECompositingSampleCount_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECompositingSampleCount.InnerSingleton;
}
// End Enum ECompositingSampleCount

// Begin Enum ECustomDepthStencil
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECustomDepthStencil;
static UEnum* ECustomDepthStencil_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECustomDepthStencil.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECustomDepthStencil.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECustomDepthStencil, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECustomDepthStencil"));
	}
	return Z_Registration_Info_UEnum_ECustomDepthStencil.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECustomDepthStencil::Type>()
{
	return ECustomDepthStencil_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates available options for custom depth.\n */" },
		{ "Disabled.Name", "ECustomDepthStencil::Disabled" },
		{ "Enabled.Name", "ECustomDepthStencil::Enabled" },
		{ "Enabled.ToolTip", "Depth buffer created immediately. Stencil disabled." },
		{ "EnabledOnDemand.Name", "ECustomDepthStencil::EnabledOnDemand" },
		{ "EnabledOnDemand.ToolTip", "Depth buffer created on first use, can save memory but cause stalls. Stencil disabled." },
		{ "EnabledWithStencil.Name", "ECustomDepthStencil::EnabledWithStencil" },
		{ "EnabledWithStencil.ToolTip", "Depth buffer created immediately. Stencil available for read/write." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates available options for custom depth." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECustomDepthStencil::Disabled", (int64)ECustomDepthStencil::Disabled },
		{ "ECustomDepthStencil::Enabled", (int64)ECustomDepthStencil::Enabled },
		{ "ECustomDepthStencil::EnabledOnDemand", (int64)ECustomDepthStencil::EnabledOnDemand },
		{ "ECustomDepthStencil::EnabledWithStencil", (int64)ECustomDepthStencil::EnabledWithStencil },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECustomDepthStencil",
	"ECustomDepthStencil::Type",
	Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECustomDepthStencil()
{
	if (!Z_Registration_Info_UEnum_ECustomDepthStencil.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECustomDepthStencil.InnerSingleton, Z_Construct_UEnum_Engine_ECustomDepthStencil_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECustomDepthStencil.InnerSingleton;
}
// End Enum ECustomDepthStencil

// Begin Enum EEarlyZPass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEarlyZPass;
static UEnum* EEarlyZPass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEarlyZPass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEarlyZPass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EEarlyZPass, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EEarlyZPass"));
	}
	return Z_Registration_Info_UEnum_EEarlyZPass.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EEarlyZPass::Type>()
{
	return EEarlyZPass_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EEarlyZPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.DisplayName", "Decide automatically" },
		{ "Auto.Name", "EEarlyZPass::Auto" },
		{ "Auto.ToolTip", "Let the engine decide what to render in the early Z pass based on the features being used." },
		{ "Comment", "/**\n * Enumerates available options for early Z-passes.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EEarlyZPass::None" },
		{ "OpaqueAndMasked.DisplayName", "Opaque and masked meshes" },
		{ "OpaqueAndMasked.Name", "EEarlyZPass::OpaqueAndMasked" },
		{ "OpaqueOnly.DisplayName", "Opaque meshes only" },
		{ "OpaqueOnly.Name", "EEarlyZPass::OpaqueOnly" },
		{ "ToolTip", "Enumerates available options for early Z-passes." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEarlyZPass::None", (int64)EEarlyZPass::None },
		{ "EEarlyZPass::OpaqueOnly", (int64)EEarlyZPass::OpaqueOnly },
		{ "EEarlyZPass::OpaqueAndMasked", (int64)EEarlyZPass::OpaqueAndMasked },
		{ "EEarlyZPass::Auto", (int64)EEarlyZPass::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EEarlyZPass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EEarlyZPass",
	"EEarlyZPass::Type",
	Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EEarlyZPass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EEarlyZPass()
{
	if (!Z_Registration_Info_UEnum_EEarlyZPass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEarlyZPass.InnerSingleton, Z_Construct_UEnum_Engine_EEarlyZPass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEarlyZPass.InnerSingleton;
}
// End Enum EEarlyZPass

// Begin Enum EVelocityOutputPass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVelocityOutputPass;
static UEnum* EVelocityOutputPass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVelocityOutputPass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVelocityOutputPass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVelocityOutputPass, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVelocityOutputPass"));
	}
	return Z_Registration_Info_UEnum_EVelocityOutputPass.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVelocityOutputPass::Type>()
{
	return EVelocityOutputPass_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AfterBasePass.DisplayName", "Write after base pass" },
		{ "AfterBasePass.Name", "EVelocityOutputPass::AfterBasePass" },
		{ "BasePass.DisplayName", "Write during base pass" },
		{ "BasePass.Name", "EVelocityOutputPass::BasePass" },
		{ "Comment", "/**\n * Enumerates available options for velocity pass.\n */" },
		{ "DepthPass.DisplayName", "Write during depth pass" },
		{ "DepthPass.Name", "EVelocityOutputPass::DepthPass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates available options for velocity pass." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVelocityOutputPass::DepthPass", (int64)EVelocityOutputPass::DepthPass },
		{ "EVelocityOutputPass::BasePass", (int64)EVelocityOutputPass::BasePass },
		{ "EVelocityOutputPass::AfterBasePass", (int64)EVelocityOutputPass::AfterBasePass },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVelocityOutputPass",
	"EVelocityOutputPass::Type",
	Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVelocityOutputPass()
{
	if (!Z_Registration_Info_UEnum_EVelocityOutputPass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVelocityOutputPass.InnerSingleton, Z_Construct_UEnum_Engine_EVelocityOutputPass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVelocityOutputPass.InnerSingleton;
}
// End Enum EVelocityOutputPass

// Begin Enum EVertexDeformationOutputsVelocity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity;
static UEnum* EVertexDeformationOutputsVelocity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVertexDeformationOutputsVelocity"));
	}
	return Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVertexDeformationOutputsVelocity::Type>()
{
	return EVertexDeformationOutputsVelocity_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Auto.Name", "EVertexDeformationOutputsVelocity::Auto" },
		{ "Auto.ToolTip", "On when the performance cost is low (velocity in depth or base pass)." },
		{ "Comment", "/**\n * Enumerates available options for Vertex Deformation Outputs Velocity.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "Off.Name", "EVertexDeformationOutputsVelocity::Off" },
		{ "Off.ToolTip", "Always off" },
		{ "On.Name", "EVertexDeformationOutputsVelocity::On" },
		{ "On.ToolTip", "Always on" },
		{ "ToolTip", "Enumerates available options for Vertex Deformation Outputs Velocity." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVertexDeformationOutputsVelocity::Off", (int64)EVertexDeformationOutputsVelocity::Off },
		{ "EVertexDeformationOutputsVelocity::On", (int64)EVertexDeformationOutputsVelocity::On },
		{ "EVertexDeformationOutputsVelocity::Auto", (int64)EVertexDeformationOutputsVelocity::Auto },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVertexDeformationOutputsVelocity",
	"EVertexDeformationOutputsVelocity::Type",
	Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity()
{
	if (!Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.InnerSingleton, Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity.InnerSingleton;
}
// End Enum EVertexDeformationOutputsVelocity

// Begin Enum EAlphaChannelMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAlphaChannelMode;
static UEnum* EAlphaChannelMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAlphaChannelMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAlphaChannelMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAlphaChannelMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAlphaChannelMode"));
	}
	return Z_Registration_Info_UEnum_EAlphaChannelMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAlphaChannelMode::Type>()
{
	return EAlphaChannelMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AllowThroughTonemapper.Comment", "/** Maintain alpha channel within linear color space, but also pass it through the tonemapper.\n\x09\x09 *\n\x09\x09 * CAUTION: Passing the alpha channel through the tonemapper can unevitably lead to pretty poor compositing quality as\n\x09\x09 * opposed to linear color space compositing, especially on purely additive pixels bloom can generate. This settings is\n\x09\x09 * exclusively targeting broadcast industry in case of hardware unable to do linear color space compositing and\n\x09\x09 * tonemapping.\n\x09\x09 */" },
		{ "AllowThroughTonemapper.DisplayName", "Allow through tonemapper" },
		{ "AllowThroughTonemapper.Name", "EAlphaChannelMode::AllowThroughTonemapper" },
		{ "AllowThroughTonemapper.ToolTip", "Maintain alpha channel within linear color space, but also pass it through the tonemapper.\n\nCAUTION: Passing the alpha channel through the tonemapper can unevitably lead to pretty poor compositing quality as\nopposed to linear color space compositing, especially on purely additive pixels bloom can generate. This settings is\nexclusively targeting broadcast industry in case of hardware unable to do linear color space compositing and\ntonemapping." },
		{ "Comment", "/**\n * Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA\n * with alpha as translucency (0 = fully opaque; 1 = fully translucent).\n */" },
		{ "Disabled.Comment", "/** Disabled, reducing GPU cost to the minimum. (default). */" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EAlphaChannelMode::Disabled" },
		{ "Disabled.ToolTip", "Disabled, reducing GPU cost to the minimum. (default)." },
		{ "LinearColorSpaceOnly.Comment", "/** Maintain alpha channel only within linear color space. Tonemapper won't output alpha channel. */" },
		{ "LinearColorSpaceOnly.DisplayName", "Linear color space only" },
		{ "LinearColorSpaceOnly.Name", "EAlphaChannelMode::LinearColorSpaceOnly" },
		{ "LinearColorSpaceOnly.ToolTip", "Maintain alpha channel only within linear color space. Tonemapper won't output alpha channel." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates available options for alpha channel through post processing. The renderer will always generate premultiplied RGBA\nwith alpha as translucency (0 = fully opaque; 1 = fully translucent)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAlphaChannelMode::Disabled", (int64)EAlphaChannelMode::Disabled },
		{ "EAlphaChannelMode::LinearColorSpaceOnly", (int64)EAlphaChannelMode::LinearColorSpaceOnly },
		{ "EAlphaChannelMode::AllowThroughTonemapper", (int64)EAlphaChannelMode::AllowThroughTonemapper },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAlphaChannelMode",
	"EAlphaChannelMode::Type",
	Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAlphaChannelMode()
{
	if (!Z_Registration_Info_UEnum_EAlphaChannelMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAlphaChannelMode.InnerSingleton, Z_Construct_UEnum_Engine_EAlphaChannelMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAlphaChannelMode.InnerSingleton;
}
// End Enum EAlphaChannelMode

// Begin Enum EAutoExposureMethodUI
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoExposureMethodUI;
static UEnum* EAutoExposureMethodUI_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoExposureMethodUI.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoExposureMethodUI.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EAutoExposureMethodUI, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EAutoExposureMethodUI"));
	}
	return Z_Registration_Info_UEnum_EAutoExposureMethodUI.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EAutoExposureMethodUI::Type>()
{
	return EAutoExposureMethodUI_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AEM_Basic.Comment", "/** faster method that computes single value by downsampling */" },
		{ "AEM_Basic.DisplayName", "Auto Exposure Basic" },
		{ "AEM_Basic.Name", "EAutoExposureMethodUI::AEM_Basic" },
		{ "AEM_Basic.ToolTip", "faster method that computes single value by downsampling" },
		{ "AEM_Histogram.Comment", "/** requires compute shader to construct 64 bin histogram */" },
		{ "AEM_Histogram.DisplayName", "Auto Exposure Histogram" },
		{ "AEM_Histogram.Name", "EAutoExposureMethodUI::AEM_Histogram" },
		{ "AEM_Histogram.ToolTip", "requires compute shader to construct 64 bin histogram" },
		{ "AEM_Manual.Comment", "/** Uses camera settings. */" },
		{ "AEM_Manual.DisplayName", "Manual" },
		{ "AEM_Manual.Name", "EAutoExposureMethodUI::AEM_Manual" },
		{ "AEM_Manual.ToolTip", "Uses camera settings." },
		{ "AEM_MAX.Name", "EAutoExposureMethodUI::AEM_MAX" },
		{ "Comment", "/** used by FPostProcessSettings AutoExposure*/" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "used by FPostProcessSettings AutoExposure" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoExposureMethodUI::AEM_Histogram", (int64)EAutoExposureMethodUI::AEM_Histogram },
		{ "EAutoExposureMethodUI::AEM_Basic", (int64)EAutoExposureMethodUI::AEM_Basic },
		{ "EAutoExposureMethodUI::AEM_Manual", (int64)EAutoExposureMethodUI::AEM_Manual },
		{ "EAutoExposureMethodUI::AEM_MAX", (int64)EAutoExposureMethodUI::AEM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EAutoExposureMethodUI",
	"EAutoExposureMethodUI::Type",
	Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EAutoExposureMethodUI()
{
	if (!Z_Registration_Info_UEnum_EAutoExposureMethodUI.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoExposureMethodUI.InnerSingleton, Z_Construct_UEnum_Engine_EAutoExposureMethodUI_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoExposureMethodUI.InnerSingleton;
}
// End Enum EAutoExposureMethodUI

// Begin Enum EDefaultBackBufferPixelFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat;
static UEnum* EDefaultBackBufferPixelFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDefaultBackBufferPixelFormat"));
	}
	return Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDefaultBackBufferPixelFormat::Type>()
{
	return EDefaultBackBufferPixelFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** used by GetDefaultBackBufferPixelFormat*/" },
		{ "DBBPF_A16B16G16R16_DEPRECATED.DisplayName", "DEPRECATED - 16bit RGBA" },
		{ "DBBPF_A16B16G16R16_DEPRECATED.Hidden", "" },
		{ "DBBPF_A16B16G16R16_DEPRECATED.Name", "EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED" },
		{ "DBBPF_A2B10G10R10.DisplayName", "10bit RGB, 2bit Alpha" },
		{ "DBBPF_A2B10G10R10.Name", "EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10" },
		{ "DBBPF_B8G8R8A8.DisplayName", "8bit RGBA" },
		{ "DBBPF_B8G8R8A8.Name", "EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8" },
		{ "DBBPF_FloatRGB_DEPRECATED.DisplayName", "DEPRECATED - Float RGB" },
		{ "DBBPF_FloatRGB_DEPRECATED.Hidden", "" },
		{ "DBBPF_FloatRGB_DEPRECATED.Name", "EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED" },
		{ "DBBPF_FloatRGBA.DisplayName", "Float RGBA" },
		{ "DBBPF_FloatRGBA.Name", "EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA" },
		{ "DBBPF_MAX.Name", "EDefaultBackBufferPixelFormat::DBBPF_MAX" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "used by GetDefaultBackBufferPixelFormat" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8", (int64)EDefaultBackBufferPixelFormat::DBBPF_B8G8R8A8 },
		{ "EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED", (int64)EDefaultBackBufferPixelFormat::DBBPF_A16B16G16R16_DEPRECATED },
		{ "EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED", (int64)EDefaultBackBufferPixelFormat::DBBPF_FloatRGB_DEPRECATED },
		{ "EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA", (int64)EDefaultBackBufferPixelFormat::DBBPF_FloatRGBA },
		{ "EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10", (int64)EDefaultBackBufferPixelFormat::DBBPF_A2B10G10R10 },
		{ "EDefaultBackBufferPixelFormat::DBBPF_MAX", (int64)EDefaultBackBufferPixelFormat::DBBPF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDefaultBackBufferPixelFormat",
	"EDefaultBackBufferPixelFormat::Type",
	Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat()
{
	if (!Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.InnerSingleton, Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat.InnerSingleton;
}
// End Enum EDefaultBackBufferPixelFormat

// Begin Enum EFixedFoveationLevels
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFixedFoveationLevels;
static UEnum* EFixedFoveationLevels_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFixedFoveationLevels.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFixedFoveationLevels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EFixedFoveationLevels, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EFixedFoveationLevels"));
	}
	return Z_Registration_Info_UEnum_EFixedFoveationLevels.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EFixedFoveationLevels::Type>()
{
	return EFixedFoveationLevels_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Enumerates VRS Fixed-foveation levels\n*/" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "EFixedFoveationLevels::Disabled" },
		{ "High.DisplayName", "High" },
		{ "High.Name", "EFixedFoveationLevels::High" },
		{ "HighTop.DisplayName", "High Top" },
		{ "HighTop.Name", "EFixedFoveationLevels::HighTop" },
		{ "Low.DisplayName", "Low" },
		{ "Low.Name", "EFixedFoveationLevels::Low" },
		{ "Medium.DisplayName", "Medium" },
		{ "Medium.Name", "EFixedFoveationLevels::Medium" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enumerates VRS Fixed-foveation levels" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFixedFoveationLevels::Disabled", (int64)EFixedFoveationLevels::Disabled },
		{ "EFixedFoveationLevels::Low", (int64)EFixedFoveationLevels::Low },
		{ "EFixedFoveationLevels::Medium", (int64)EFixedFoveationLevels::Medium },
		{ "EFixedFoveationLevels::High", (int64)EFixedFoveationLevels::High },
		{ "EFixedFoveationLevels::HighTop", (int64)EFixedFoveationLevels::HighTop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EFixedFoveationLevels",
	"EFixedFoveationLevels::Type",
	Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EFixedFoveationLevels()
{
	if (!Z_Registration_Info_UEnum_EFixedFoveationLevels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFixedFoveationLevels.InnerSingleton, Z_Construct_UEnum_Engine_EFixedFoveationLevels_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFixedFoveationLevels.InnerSingleton;
}
// End Enum EFixedFoveationLevels

// Begin Enum EMobileAntiAliasingMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileAntiAliasingMethod;
static UEnum* EMobileAntiAliasingMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobileAntiAliasingMethod"));
	}
	return Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMobileAntiAliasingMethod::Type>()
{
	return EMobileAntiAliasingMethod_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FXAA.DisplayName", "Fast Approximate Anti-Aliasing (FXAA)" },
		{ "FXAA.Name", "EMobileAntiAliasingMethod::FXAA" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "MSAA.Comment", "/** Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount. */" },
		{ "MSAA.DisplayName", "Multisample Anti-Aliasing (MSAA)" },
		{ "MSAA.Name", "EMobileAntiAliasingMethod::MSAA" },
		{ "MSAA.ToolTip", "Only supported with forward shading.  MSAA sample count is controlled by r.MSAACount." },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EMobileAntiAliasingMethod::None" },
		{ "TemporalAA.DisplayName", "Temporal Anti-Aliasing (TAA)" },
		{ "TemporalAA.Name", "EMobileAntiAliasingMethod::TemporalAA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMobileAntiAliasingMethod::None", (int64)EMobileAntiAliasingMethod::None },
		{ "EMobileAntiAliasingMethod::FXAA", (int64)EMobileAntiAliasingMethod::FXAA },
		{ "EMobileAntiAliasingMethod::TemporalAA", (int64)EMobileAntiAliasingMethod::TemporalAA },
		{ "EMobileAntiAliasingMethod::MSAA", (int64)EMobileAntiAliasingMethod::MSAA },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMobileAntiAliasingMethod",
	"EMobileAntiAliasingMethod::Type",
	Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod()
{
	if (!Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.InnerSingleton, Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMobileAntiAliasingMethod.InnerSingleton;
}
// End Enum EMobileAntiAliasingMethod

// Begin Enum EMobileFloatPrecisionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileFloatPrecisionMode;
static UEnum* EMobileFloatPrecisionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobileFloatPrecisionMode"));
	}
	return Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMobileFloatPrecisionMode::Type>()
{
	return EMobileFloatPrecisionMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** The default float precision for material's pixel shaders on mobile devices*/" },
		{ "Full.Comment", "/** All the floats are full-precision */" },
		{ "Full.DisplayName", "Use Full-precision for every float" },
		{ "Full.Name", "EMobileFloatPrecisionMode::Full" },
		{ "Full.ToolTip", "All the floats are full-precision" },
		{ "Full_MaterialExpressionOnly.Comment", "/** Half precision, except Full precision for material floats and explicit floats in .ush/.usf*/" },
		{ "Full_MaterialExpressionOnly.DisplayName", "Use Full-precision for MaterialExpressions only" },
		{ "Full_MaterialExpressionOnly.Name", "EMobileFloatPrecisionMode::Full_MaterialExpressionOnly" },
		{ "Full_MaterialExpressionOnly.ToolTip", "Half precision, except Full precision for material floats and explicit floats in .ush/.usf" },
		{ "Half.Comment", "/** Half precision, except explict 'float' in .ush/.usf*/" },
		{ "Half.DisplayName", "Use Half-precision" },
		{ "Half.Name", "EMobileFloatPrecisionMode::Half" },
		{ "Half.ToolTip", "Half precision, except explict 'float' in .ush/.usf" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The default float precision for material's pixel shaders on mobile devices" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMobileFloatPrecisionMode::Half", (int64)EMobileFloatPrecisionMode::Half },
		{ "EMobileFloatPrecisionMode::Full_MaterialExpressionOnly", (int64)EMobileFloatPrecisionMode::Full_MaterialExpressionOnly },
		{ "EMobileFloatPrecisionMode::Full", (int64)EMobileFloatPrecisionMode::Full },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMobileFloatPrecisionMode",
	"EMobileFloatPrecisionMode::Type",
	Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode()
{
	if (!Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.InnerSingleton, Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMobileFloatPrecisionMode.InnerSingleton;
}
// End Enum EMobileFloatPrecisionMode

// Begin Enum EMobileShadingPath
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMobileShadingPath;
static UEnum* EMobileShadingPath_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMobileShadingPath.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMobileShadingPath.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMobileShadingPath, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMobileShadingPath"));
	}
	return Z_Registration_Info_UEnum_EMobileShadingPath.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMobileShadingPath::Type>()
{
	return EMobileShadingPath_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMobileShadingPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Deferred.Comment", "/** Use deferred shading. This path supports additional features compared to the Forward option but requires more modern devices. Features include: IES light profiles, light functions, lit deferred decals. Does not support MSAA. */" },
		{ "Deferred.DisplayName", "Deferred Shading" },
		{ "Deferred.Name", "EMobileShadingPath::Deferred" },
		{ "Deferred.ToolTip", "Use deferred shading. This path supports additional features compared to the Forward option but requires more modern devices. Features include: IES light profiles, light functions, lit deferred decals. Does not support MSAA." },
		{ "Forward.Comment", "/** The default shading path for mobile, supported on all devices. */" },
		{ "Forward.DisplayName", "Forward Shading" },
		{ "Forward.Name", "EMobileShadingPath::Forward" },
		{ "Forward.ToolTip", "The default shading path for mobile, supported on all devices." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMobileShadingPath::Forward", (int64)EMobileShadingPath::Forward },
		{ "EMobileShadingPath::Deferred", (int64)EMobileShadingPath::Deferred },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMobileShadingPath",
	"EMobileShadingPath::Type",
	Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMobileShadingPath()
{
	if (!Z_Registration_Info_UEnum_EMobileShadingPath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMobileShadingPath.InnerSingleton, Z_Construct_UEnum_Engine_EMobileShadingPath_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMobileShadingPath.InnerSingleton;
}
// End Enum EMobileShadingPath

// Begin Enum ELightFunctionAtlasPixelFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat;
static UEnum* ELightFunctionAtlasPixelFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELightFunctionAtlasPixelFormat"));
	}
	return Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELightFunctionAtlasPixelFormat::Type>()
{
	return ELightFunctionAtlasPixelFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LFAPF_R8.DisplayName", "8 bits Gray Scale" },
		{ "LFAPF_R8.Name", "ELightFunctionAtlasPixelFormat::LFAPF_R8" },
		{ "LFAPF_R8G8B8.DisplayName", "8 bits RGB  Color" },
		{ "LFAPF_R8G8B8.Name", "ELightFunctionAtlasPixelFormat::LFAPF_R8G8B8" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELightFunctionAtlasPixelFormat::LFAPF_R8", (int64)ELightFunctionAtlasPixelFormat::LFAPF_R8 },
		{ "ELightFunctionAtlasPixelFormat::LFAPF_R8G8B8", (int64)ELightFunctionAtlasPixelFormat::LFAPF_R8G8B8 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELightFunctionAtlasPixelFormat",
	"ELightFunctionAtlasPixelFormat::Type",
	Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat()
{
	if (!Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat.InnerSingleton, Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat.InnerSingleton;
}
// End Enum ELightFunctionAtlasPixelFormat

// Begin Enum EShaderCompressionFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShaderCompressionFormat;
static UEnum* EShaderCompressionFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShaderCompressionFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShaderCompressionFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EShaderCompressionFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EShaderCompressionFormat"));
	}
	return Z_Registration_Info_UEnum_EShaderCompressionFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EShaderCompressionFormat::Type>()
{
	return EShaderCompressionFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates supported shader compression formats.\n */" },
		{ "LZ4.DisplayName", "LZ4" },
		{ "LZ4.Name", "EShaderCompressionFormat::LZ4" },
		{ "LZ4.ToolTip", "Compressing using LZ4" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "None.DisplayName", "Do not compress" },
		{ "None.Name", "EShaderCompressionFormat::None" },
		{ "None.ToolTip", "Fastest, but disk and memory footprint will be large" },
		{ "Oodle.DisplayName", "Oodle" },
		{ "Oodle.Name", "EShaderCompressionFormat::Oodle" },
		{ "Oodle.ToolTip", "Compressing using Oodle (default)" },
		{ "ToolTip", "Enumerates supported shader compression formats." },
		{ "Zlib.DisplayName", "ZLib" },
		{ "Zlib.Name", "EShaderCompressionFormat::Zlib" },
		{ "Zlib.ToolTip", "Compressing using Zlib" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShaderCompressionFormat::None", (int64)EShaderCompressionFormat::None },
		{ "EShaderCompressionFormat::LZ4", (int64)EShaderCompressionFormat::LZ4 },
		{ "EShaderCompressionFormat::Oodle", (int64)EShaderCompressionFormat::Oodle },
		{ "EShaderCompressionFormat::Zlib", (int64)EShaderCompressionFormat::Zlib },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EShaderCompressionFormat",
	"EShaderCompressionFormat::Type",
	Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EShaderCompressionFormat()
{
	if (!Z_Registration_Info_UEnum_EShaderCompressionFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShaderCompressionFormat.InnerSingleton, Z_Construct_UEnum_Engine_EShaderCompressionFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShaderCompressionFormat.InnerSingleton;
}
// End Enum EShaderCompressionFormat

// Begin Enum ELumenSoftwareTracingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumenSoftwareTracingMode;
static UEnum* ELumenSoftwareTracingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELumenSoftwareTracingMode"));
	}
	return Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELumenSoftwareTracingMode::Type>()
{
	return ELumenSoftwareTracingMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DetailTracing.DisplayName", "Detail Tracing" },
		{ "DetailTracing.Name", "ELumenSoftwareTracingMode::DetailTracing" },
		{ "DetailTracing.ToolTip", "When using Software Ray Tracing, Lumen will trace against individual mesh's Distance Fields for highest quality.  Cost can be high in scenes with many overlapping instances." },
		{ "GlobalTracing.DisplayName", "Global Tracing" },
		{ "GlobalTracing.Name", "ELumenSoftwareTracingMode::GlobalTracing" },
		{ "GlobalTracing.ToolTip", "When using Software Ray Tracing, Lumen will trace against the Global Distance Field for fastest traces." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELumenSoftwareTracingMode::DetailTracing", (int64)ELumenSoftwareTracingMode::DetailTracing },
		{ "ELumenSoftwareTracingMode::GlobalTracing", (int64)ELumenSoftwareTracingMode::GlobalTracing },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELumenSoftwareTracingMode",
	"ELumenSoftwareTracingMode::Type",
	Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode()
{
	if (!Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.InnerSingleton, Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELumenSoftwareTracingMode.InnerSingleton;
}
// End Enum ELumenSoftwareTracingMode

// Begin Enum ELumenRayLightingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELumenRayLightingMode;
static UEnum* ELumenRayLightingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELumenRayLightingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELumenRayLightingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ELumenRayLightingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ELumenRayLightingMode"));
	}
	return Z_Registration_Info_UEnum_ELumenRayLightingMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ELumenRayLightingMode>()
{
	return ELumenRayLightingMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HitLighting.Comment", "/* Calculate lighting at the ray hit point.  This method gives the highest reflection quality, but greatly increases GPU cost, as the material needs to be evaluated and shadow rays traced.  The Surface Cache will still be used for Diffuse Indirect lighting (GI seen in Reflections). */" },
		{ "HitLighting.DisplayName", "Hit Lighting for Reflections" },
		{ "HitLighting.Name", "ELumenRayLightingMode::HitLighting" },
		{ "HitLighting.ToolTip", "Calculate lighting at the ray hit point.  This method gives the highest reflection quality, but greatly increases GPU cost, as the material needs to be evaluated and shadow rays traced.  The Surface Cache will still be used for Diffuse Indirect lighting (GI seen in Reflections)." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "SurfaceCache.Comment", "/* Use the Lumen Surface Cache to light reflection rays.  This method gives the best reflection performance. */" },
		{ "SurfaceCache.DisplayName", "Surface Cache" },
		{ "SurfaceCache.Name", "ELumenRayLightingMode::SurfaceCache" },
		{ "SurfaceCache.ToolTip", "Use the Lumen Surface Cache to light reflection rays.  This method gives the best reflection performance." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELumenRayLightingMode::SurfaceCache", (int64)ELumenRayLightingMode::SurfaceCache },
		{ "ELumenRayLightingMode::HitLighting", (int64)ELumenRayLightingMode::HitLighting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ELumenRayLightingMode",
	"ELumenRayLightingMode",
	Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ELumenRayLightingMode()
{
	if (!Z_Registration_Info_UEnum_ELumenRayLightingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELumenRayLightingMode.InnerSingleton, Z_Construct_UEnum_Engine_ELumenRayLightingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELumenRayLightingMode.InnerSingleton;
}
// End Enum ELumenRayLightingMode

// Begin Enum EWorkingColorSpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWorkingColorSpace;
static UEnum* EWorkingColorSpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWorkingColorSpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWorkingColorSpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EWorkingColorSpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EWorkingColorSpace"));
	}
	return Z_Registration_Info_UEnum_EWorkingColorSpace.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EWorkingColorSpace::Type>()
{
	return EWorkingColorSpace_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ACESAP0.DIsplayName", "ACES AP0" },
		{ "ACESAP0.Name", "EWorkingColorSpace::ACESAP0" },
		{ "ACESAP0.ToolTip", "ACES AP0 wide gamut primaries, with D60 white point." },
		{ "ACESAP1.DIsplayName", "ACES AP1 / ACEScg" },
		{ "ACESAP1.Name", "EWorkingColorSpace::ACESAP1" },
		{ "ACESAP1.ToolTip", "ACES AP1 / ACEScg wide gamut primaries, with D60 white point." },
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EWorkingColorSpace::Custom" },
		{ "Custom.ToolTip", "User defined color space and white point." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "P3D65.DisplayName", "P3D65" },
		{ "P3D65.Name", "EWorkingColorSpace::P3D65" },
		{ "P3D65.ToolTip", "P3 (Display) primaries, with D65 white point." },
		{ "P3DCI.DisplayName", "P3DCI" },
		{ "P3DCI.Name", "EWorkingColorSpace::P3DCI" },
		{ "P3DCI.ToolTip", "P3 (Theater) primaries, with DCI Calibration white point." },
		{ "Rec2020.DisplayName", "Rec2020" },
		{ "Rec2020.Name", "EWorkingColorSpace::Rec2020" },
		{ "Rec2020.ToolTip", "Rec2020 (BT.2020) primaries with D65 white point." },
		{ "sRGB.DisplayName", "sRGB / Rec709" },
		{ "sRGB.Name", "EWorkingColorSpace::sRGB" },
		{ "sRGB.ToolTip", "sRGB / Rec709 (BT.709) color primaries, with D65 white point." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWorkingColorSpace::sRGB", (int64)EWorkingColorSpace::sRGB },
		{ "EWorkingColorSpace::Rec2020", (int64)EWorkingColorSpace::Rec2020 },
		{ "EWorkingColorSpace::ACESAP0", (int64)EWorkingColorSpace::ACESAP0 },
		{ "EWorkingColorSpace::ACESAP1", (int64)EWorkingColorSpace::ACESAP1 },
		{ "EWorkingColorSpace::P3DCI", (int64)EWorkingColorSpace::P3DCI },
		{ "EWorkingColorSpace::P3D65", (int64)EWorkingColorSpace::P3D65 },
		{ "EWorkingColorSpace::Custom", (int64)EWorkingColorSpace::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EWorkingColorSpace",
	"EWorkingColorSpace::Type",
	Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EWorkingColorSpace()
{
	if (!Z_Registration_Info_UEnum_EWorkingColorSpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWorkingColorSpace.InnerSingleton, Z_Construct_UEnum_Engine_EWorkingColorSpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWorkingColorSpace.InnerSingleton;
}
// End Enum EWorkingColorSpace

// Begin Class URendererSettings
void URendererSettings::StaticRegisterNativesURendererSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URendererSettings);
UClass* Z_Construct_UClass_URendererSettings_NoRegister()
{
	return URendererSettings::StaticClass();
}
struct Z_Construct_UClass_URendererSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Rendering settings.\n */" },
		{ "DisplayName", "Rendering" },
		{ "IncludePath", "Engine/RendererSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Rendering settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileShadingPath_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.ShadingPath" },
		{ "DisplayName", "Mobile Shading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The shading path to use on mobile platforms. Changing this setting requires restarting the editor. Mobile HDR is required for Deferred Shading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileSupportDeferredOnOpenGL_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDeferredShadingOpenGL" },
		{ "DisplayName", "Allow Deferred Shading on OpenGL" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow Deferred Shading on OpenGL, requires the DXC shader compiler and Mobile Shading set to deferred" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileSupportGPUScene_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.SupportGPUScene" },
		{ "DisplayName", "Enable GPUScene on Mobile" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to enable GPUScene on mobile. GPUScene is required for mesh auto-instancing. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileAntiAliasing_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConsoleVariable", "r.Mobile.AntiAliasing" },
		{ "DisplayName", "Mobile Anti-Aliasing Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The mobile default anti-aliasing method." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileFloatPrecisionMode_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.FloatPrecisionMode" },
		{ "DisplayName", "Mobile Float Precision Mode" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Project wide mobile float precision mode for shaders and materials. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDitheredLODTransition_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDitheredLODTransition" },
		{ "DisplayName", "Allow Dithered LOD Transition" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support 'Dithered LOD Transition' material option on mobile platforms. Enabling this may degrade performance as rendering will not benefit from Early-Z optimization." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileVirtualTextures_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.VirtualTextures" },
		{ "DisplayName", "Enable virtual texture support on Mobile" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support virtual textures on mobile. Requires general virtual texturing option enabled as well. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardUnusedQualityLevels_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConsoleVariable", "r.DiscardUnusedQuality" },
		{ "DisplayName", "Game Discards Unused Material Quality Levels" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When running in game mode, whether to keep shaders for all quality levels in memory or only those needed for the current quality level.\nUnchecked: Keep all quality levels in memory allowing a runtime quality level change. (default)\nChecked: Discard unused quality levels when loading content for the game, saving some memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShaderCompressionFormat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOcclusionCulling_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.AllowOcclusionQueries" },
		{ "DisplayName", "Occlusion Culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allows occluded meshes to be culled and not rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForLights_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForLights" },
		{ "DisplayName", "Min Screen Radius for Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which lights are culled. Larger values can improve performance but causes lights to pop off when they affect a small area of the screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForEarlyZPass_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForDepthPrepass" },
		{ "DisplayName", "Min Screen Radius for Early Z Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which objects are culled for the early Z pass. Larger values can improve performance but very large values can degrade performance if large occluders are not rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScreenRadiusForCSMdepth_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.MinScreenRadiusForCSMDepth" },
		{ "DisplayName", "Min Screen Radius for Cascaded Shadow Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which objects are culled for cascaded shadow map depth passes. Larger values can improve performance but can cause artifacts as objects stop casting shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPrecomputedVisibilityWarning_MetaData[] = {
		{ "Category", "Culling" },
		{ "ConsoleVariable", "r.PrecomputedVisibilityWarning" },
		{ "DisplayName", "Warn about no precomputed visibility" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Displays a warning when no precomputed visibility data is available for the current camera location. This can be helpful if you are making a game that relies on precomputed visibility, e.g. a first person mobile game." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTextureStreaming_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConsoleVariable", "r.TextureStreaming" },
		{ "DisplayName", "Texture Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled textures will stream in based on what is visible on screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseDXT5NormalMaps_MetaData[] = {
		{ "Category", "Textures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "Compat.UseDXT5NormalMaps" },
		{ "DisplayName", "Use DXT5 Normal Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use DXT5 for normal maps, otherwise BC5 will be used, which is not supported on all hardware. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VirtualTextures" },
		{ "DisplayName", "Enable virtual texture support" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, Textures can be streamed using the virtual texture system. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureEnableAutoImport_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.VT.EnableAutoImport" },
		{ "DisplayName", "Enable virtual texture on texture import" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Set the 'Virtual Texture Streaming' setting for imported textures based on 'Auto Virtual Texturing Size' in the texture import settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTexturedLightmaps_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VirtualTexturedLightmaps" },
		{ "DisplayName", "Enable virtual texture lightmaps" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, lightmaps will be streamed using the virtual texture system. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVirtualTextureAnisotropicFiltering_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.AnisotropicFiltering" },
		{ "DisplayName", "Enable virtual texture anisotropic filtering" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, virtual textures will use anisotropic filtering. This adds a cost to all shaders using virtual textures. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVirtualTextureOpacityMask_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "DisplayName", "Enable virtual textures for Opacity Mask" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Relax restriction on virtual textures contributing to Opacity Mask. In some edge cases this can lead to low resolution shadow edges." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.TileSize" },
		{ "DisplayName", "Tile size" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Size in pixels for virtual texture tiles, will be rounded to next power-of-2. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureTileBorderSize_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VT.TileBorderSize" },
		{ "DisplayName", "Tile border size" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Size in pixels for virtual texture tile borders, will be rounded to next power-of-2. Larger borders allow higher degree of anisotropic filtering, but uses more disk/cache memory. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureFeedbackFactor_MetaData[] = {
		{ "Category", "VirtualTextures" },
		{ "ConsoleVariable", "r.vt.FeedbackFactor" },
		{ "DisplayName", "Feedback resolution factor" },
		{ "EditCondition", "bVirtualTextures" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Lower factor will increase virtual texture feedback resolution which increases CPU/GPU overhead, but may decrease streaming latency, especially if materials use many virtual textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorkingColorSpaceChoice_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Working Color Space" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Choose from list of provided working color spaces, or custom to provide user-defined space." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space red chromaticity coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GreenChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space green chromaticity coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space blue chromaticity coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WhiteChromaticityCoordinate_MetaData[] = {
		{ "Category", "WorkingColorSpace" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "EditCondition", "WorkingColorSpaceChoice == EWorkingColorSpace::Custom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Working color space white chromaticity coordinates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearCoatEnableSecondNormal_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ClearCoatNormal" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Use a separate normal map for the bottom layer of a clear coat material. This is a higher quality feature that is expensive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicGlobalIllumination_MetaData[] = {
		{ "Category", "GlobalIllumination" },
		{ "ConsoleVariable", "r.DynamicGlobalIlluminationMethod" },
		{ "DisplayName", "Dynamic Global Illumination Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Dynamic Global Illumination Method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reflections_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionMethod" },
		{ "DisplayName", "Reflection Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Reflection Method" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionCaptureResolution_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionCaptureResolution" },
		{ "DisplayName", "Reflection Capture Resolution" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The cubemap resolution for all reflection capture probes. Must be power of 2. Note that for very high values the memory and performance impact may be severe." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConsoleVariable", "r.ReflectionEnvironmentLightmapMixBasedOnRoughness" },
		{ "DisplayName", "Reduce lightmap mixing on smooth surfaces" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to reduce lightmap mixing with reflection captures for very smooth surfaces.  This is useful to make sure reflection captures match SSR / planar reflections in brightness." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHardwareRayTracingForLumen_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.HardwareRayTracing" },
		{ "DisplayName", "Use Hardware Ray Tracing when available" },
		{ "EditCondition", "bEnableRayTracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Uses Hardware Ray Tracing for Lumen features, when supported by the video card + RHI + Operating System. Lumen will fall back to Software Ray Tracing otherwise. Note: Hardware ray tracing has significant scene update costs for scenes with more than 100k instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenRayLightingMode_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.HardwareRayTracing.LightingMode" },
		{ "DisplayName", "Ray Lighting Mode" },
		{ "EditCondition", "bEnableRayTracing && bUseHardwareRayTracingForLumen" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls how Lumen Reflection rays are lit when Lumen is using Hardware Ray Tracing.  By default, Lumen uses the Surface Cache for best performance, but can be set to 'Hit Lighting' for higher quality." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenFrontLayerTranslucencyReflections_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.TranslucencyReflections.FrontLayer.EnableForProject" },
		{ "DisplayName", "High Quality Translucency Reflections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use high quality mirror reflections on the front layer of translucent surfaces.  Other layers will use the lower quality Radiance Cache method that can only produce glossy reflections.  Increases GPU cost when enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenSoftwareTracingMode_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.TraceMeshSDFs" },
		{ "DisplayName", "Software Ray Tracing Mode" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls which tracing method Lumen uses when using Software Ray Tracing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LumenRayTracedTranslucentRefractions_MetaData[] = {
		{ "Category", "Lumen" },
		{ "ConsoleVariable", "r.Lumen.Reflections.HardwareRayTracing.Translucent.Refraction.EnableForProject" },
		{ "DisplayName", "Ray Traced Translucent Refractions" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use Lumen refraction tracing from surfaces when using harware ray tracing and hit lighting. This will require shader recompilation to compile of translucent card capture Lumen shaders. Increases GPU cost when enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowMapMethod_MetaData[] = {
		{ "Category", "Shadows" },
		{ "ConsoleVariable", "r.Shadow.Virtual.Enable" },
		{ "DisplayName", "Shadow Map Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select the primary shadow mapping method. Automatically uses 'Shadow Maps' when Forward Shading is enabled for the project as Virtual Shadow Maps are not supported." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracing_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.RayTracing" },
		{ "DisplayName", "Support Hardware Ray Tracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support Hardware Ray Tracing features.  Requires 'Support Compute Skincache' before project is allowed to set this." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingShadows_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConsoleVariable", "r.RayTracing.Shadows" },
		{ "DisplayName", "Ray Traced Shadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Controls whether Ray Traced Shadows are used by default. Lights can still override and force Ray Traced shadows on or off. Requires Hardware Ray Tracing to be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingSkylight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRayTracingTextureLOD_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.RayTracing.UseTextureLod" },
		{ "DisplayName", "Texture LOD" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable automatic texture mip level selection in ray tracing material shaders. Unchecked: highest resolution mip level is used for all texture (default). Checked: texture LOD is approximated based on total ray length, output resolution and texel density at hit point (ray cone method)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePathTracing_MetaData[] = {
		{ "Category", "HardwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.PathTracing" },
		{ "DisplayName", "Path Tracing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables the Path Tracing renderer. This enables additional material permutations. Requires Hardware Ray Tracing to be enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateMeshDistanceFields_MetaData[] = {
		{ "Category", "SoftwareRayTracing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to build distance fields of static meshes, needed for Software Ray Tracing in Lumen, and distance field AO, which is used to implement Movable SkyLight shadows, and ray traced distance field shadows on directional lights.  Enabling will increase the build times, memory usage and disk size of static meshes.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldVoxelDensity_MetaData[] = {
		{ "Category", "SoftwareRayTracing" },
		{ "ClampMax", ".4" },
		{ "ClampMin", ".05" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DistanceFields.DefaultVoxelDensity" },
		{ "EditCondition", "bGenerateMeshDistanceFields" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Determines how the default scale of a mesh converts into distance field voxel dimensions. Changing this will cause all distance fields to be rebuilt.  Large values can consume memory very quickly!  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNanite_MetaData[] = {
		{ "Category", "Nanite" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Nanite.ProjectEnabled" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to enable Nanite rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStaticLighting_MetaData[] = {
		{ "Category", "MiscLighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.AllowStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow any static lighting to be generated and used, like lightmaps and shadowmaps. Games that only use dynamic lighting should set this to 0 to save some static lighting overhead. Disabling allows Material AO and Material BentNormal to work with Lumen Global Illumination.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseNormalMapsForStaticLighting_MetaData[] = {
		{ "Category", "MiscLighting" },
		{ "ConsoleVariable", "r.NormalMapsForStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to allow any static lighting to use normal maps for lighting computations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForwardShading_MetaData[] = {
		{ "Category", "ForwardRenderer" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.ForwardShading" },
		{ "DisplayName", "Forward Shading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use forward shading on desktop platforms, requires Shader Model 5 hardware.  Forward shading supports MSAA and has lower default cost, but fewer features supported overall.  Materials have to opt-in to more expensive features like high quality reflections.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVertexFoggingForOpaque_MetaData[] = {
		{ "Category", "ForwardRenderer" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VertexFoggingForOpaque" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Causes opaque materials to use per-vertex fogging, which costs slightly less.  Only supported with forward shading. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeparateTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.SeparateTranslucency" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow translucency to be rendered to a separate render targeted and composited after depth of field. Prevents translucency from appearing out of focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortPolicy_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.TranslucentSortPolicy" },
		{ "DisplayName", "Translucent Sort Policy" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sort mode for translucent primitives, affecting how they are ordered and how they change order as the camera moves. Requires that Separate Translucency (under Postprocessing) is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSortAxis_MetaData[] = {
		{ "Category", "Translucency" },
		{ "DisplayName", "Translucent Sort Axis" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The axis that sorting will occur along when Translucent Sort Policy is set to SortAlongAxis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocalFogVolumeApplyOnTranslucent_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConsoleVariable", "r.LocalFogVolume.ApplyOnTranslucent" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow translucency to be rendered to a separate render targeted and composited after depth of field. Prevents translucency from appearing out of focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FoveationLevel_MetaData[] = {
		{ "Category", "VR" },
		{ "ConsoleVariable", "xr.VRS.FoveationLevel" },
		{ "DisplayName", "Stereo Foveation Level (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Set the level of foveation to apply when generating the Variable Rate Shading attachment. This feature is currently experimental.\nThis can yield some fairly significant performance benefits on GPUs that support Tier 2 VRS.\nLower settings will result in almost no discernible artifacting on most HMDs; higher settings will show some artifacts towards the edges of the view." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicFoveation_MetaData[] = {
		{ "Category", "VR" },
		{ "ConsoleVariable", "xr.VRS.DynamicFoveation" },
		{ "DisplayName", "Dynamic Foveation (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allows foveation level to adjust dynamically based on GPU utilization.\nLevel will range between none at the minimum, and the currently selected foveation level at the maximum." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencil_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConsoleVariable", "r.CustomDepth" },
		{ "DisplayName", "Custom Depth-Stencil Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the custom depth pass for tagging primitives for postprocessing passes is enabled. Enabling it on demand can save memory but may cause a hitch the first time the feature is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomDepthTaaJitter_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConsoleVariable", "r.CustomDepthTemporalAAJitter" },
		{ "DisplayName", "Custom Depth with TemporalAA Jitter" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the custom depth pass has the TemporalAA jitter enabled. Disabling this can be useful when the result of the CustomDepth Pass is used after TAA (e.g. after Tonemapping)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAlphaChannelInPostProcessing_MetaData[] = {
		{ "Category", "Postprocessing" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.PostProcessing.PropagateAlpha" },
		{ "DisplayName", "Enable alpha channel support in post processing (experimental)." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Configures alpha channel support in renderer's post processing chain. Still experimental: works only with Temporal AA, Motion Blur, Circle Depth Of Field. This option also force disable the separate translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureBloom_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.Bloom" },
		{ "DisplayName", "Bloom" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for Bloom is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusion_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusion" },
		{ "DisplayName", "Ambient Occlusion" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AmbientOcclusion is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AmbientOcclusionStaticFraction" },
		{ "DisplayName", "Ambient Occlusion Static Fraction (AO for baked lighting)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AmbientOcclusionStaticFraction is enabled or not (only useful for baked lighting and if AO is on, allows to have SSAO affect baked lighting as well, costs performance, postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureAutoExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for AutoExposure is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposure_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Method" },
		{ "DisplayName", "Auto Exposure" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The default method for AutoExposure(postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAutoExposureBias_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.Bias" },
		{ "DisplayName", "Auto Exposure Bias" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default Value for auto exposure bias." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange" },
		{ "DisplayName", "Extend default luminance range in Auto Exposure settings" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default values for AutoExposure should support an extended range of scene luminance. Also changes the exposure settings to be expressed in EV100. Having this setting disabled is deprecated and can only be done manually using r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureLocalExposureHighlightContrast_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ConsoleVariable", "r.DefaultFeature.LocalExposure.HighlightContrastScale" },
		{ "DisplayName", "Local Exposure Highlight Contrast" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default Value for Local Exposure Highlight Contrast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureLocalExposureShadowContrast_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ConsoleVariable", "r.DefaultFeature.LocalExposure.ShadowContrastScale" },
		{ "DisplayName", "Local Exposure Shadow Contrast" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default Value for Local Exposure Shadow Contrast." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureMotionBlur_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.MotionBlur" },
		{ "DisplayName", "Motion Blur" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for MotionBlur is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultFeatureLensFlare_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.LensFlare" },
		{ "DisplayName", "Lens Flares (Image based)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether the default for LensFlare is enabled or not (postprocess volume/camera/game setting can still override and enable or disable it independently)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTemporalUpsampling_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.TemporalAA.Upsampling" },
		{ "DisplayName", "Temporal Upsampling" },
		{ "EditCondition", "DefaultFeatureAntiAliasing == EAntiAliasingMethod::AAM_TemporalAA" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to do primary screen percentage upscale with Temporal AA pass or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFeatureAntiAliasing_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.AntiAliasingMethod" },
		{ "DisplayName", "Anti-Aliasing Method" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Selects the anti-aliasing method to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MSAASampleCount_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.MSAACount" },
		{ "DisplayName", "MSAA Sample Count" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default number of samples for MSAA." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLightUnits_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.DefaultFeature.LightUnits" },
		{ "DisplayName", "Light Units" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Which units to use for newly placed point, spot and rect lights" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBackBufferPixelFormat_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DefaultBackBufferPixelFormat" },
		{ "DisplayName", "Frame Buffer Pixel Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Pixel format used for back buffer, when not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultManualScreenPercentage_MetaData[] = {
		{ "Category", "DefaultScreenPercentage" },
		{ "ConsoleVariable", "r.ScreenPercentage.Default" },
		{ "DisplayName", "Manual Screen Percentage" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenPercentageDesktopMode_MetaData[] = {
		{ "Category", "DefaultScreenPercentage" },
		{ "ConsoleVariable", "r.ScreenPercentage.Default.Desktop.Mode" },
		{ "DisplayName", "Screen Percentage Mode for Desktop renderer" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenPercentageMobileMode_MetaData[] = {
		{ "Category", "DefaultScreenPercentage" },
		{ "ConsoleVariable", "r.ScreenPercentage.Default.Mobile.Mode" },
		{ "DisplayName", "Screen Percentage Mode for Mobile renderer" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenPercentageVRMode_MetaData[] = {
		{ "Category", "DefaultScreenPercentage" },
		{ "ConsoleVariable", "r.ScreenPercentage.Default.VR.Mode" },
		{ "DisplayName", "Screen Percentage Mode for VR" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultScreenPercentagePathTracerMode_MetaData[] = {
		{ "Category", "DefaultScreenPercentage" },
		{ "ConsoleVariable", "r.ScreenPercentage.Default.PathTracer.Mode" },
		{ "DisplayName", "Screen Percentage Mode for PathTracer" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Shadow.UnbuiltPreviewInGame" },
		{ "DisplayName", "Render Unbuilt Preview Shadows in game" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to render unbuilt preview shadows in game.  When enabled and lighting is not built, expensive preview shadows will be rendered in game.  When disabled, lighting in game and editor won't match which can appear to be a bug." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStencilForLODDither_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.StencilForLODDither" },
		{ "DisplayName", "Use Stencil for LOD Dither Fading" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use stencil for LOD dither fading.  This saves GPU time in the base pass for materials with dither fading enabled, but forces a full prepass. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EarlyZPass_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.EarlyZPass" },
		{ "DisplayName", "Early Z-pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use a depth only pass to initialize Z culling for the base pass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEarlyZPassOnlyMaterialMasking_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.EarlyZPassOnlyMaterialMasking" },
		{ "DisplayName", "Mask material only in early Z-pass" },
		{ "EditCondition", "EarlyZPass == EEarlyZPass::OpaqueAndMasked" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to compute materials' mask opacity only in early Z pass. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCSMCaching_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Shadow.CSMCaching" },
		{ "DisplayName", "Enable CSM Caching" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable caching CSM to reduce draw calls for casting CSM and probably improve performance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDBuffer_MetaData[] = {
		{ "Category", "MiscLighting" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.DBuffer" },
		{ "DisplayName", "DBuffer Decals" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to accumulate decal properties to a buffer before the base pass.  DBuffer decals correctly affect lightmap and sky lighting, unlike regular deferred decals.  DBuffer enabled forces a full prepass.  Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearSceneMethod_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.ClearSceneMethod" },
		{ "DisplayName", "Clear Scene" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select how the g-buffer is cleared in game mode (only affects deferred shading)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityPass_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.VelocityOutputPass" },
		{ "DisplayName", "Velocity Pass" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When to write velocity buffer. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexDeformationOutputsVelocity_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.Velocity.EnableVertexDeformation" },
		{ "DisplayName", "Output velocities due to vertex deformation" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables materials with World Position Offset and/or World Displacement to output velocities during the velocity pass even when the actor has not moved. \nIf the VelocityPass is set to 'Write after base pass' this can incur a performance cost due to additional draw calls. \nThat performance cost is higher if many objects are using World Position Offset. A forest of trees for example." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelectiveBasePassOutputs_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SelectiveBasePassOutputs" },
		{ "DisplayName", "Selectively output to the GBuffer rendertargets" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables not exporting to the GBuffer rendertargets that are not relevant. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultParticleCutouts_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "DisplayName", "Enable Particle Cutouts by default" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled, after changing the material on a Required particle module a Particle Cutout texture will be chosen automatically from the Opacity Mask texture if it exists, if not the Opacity Texture will be used if it exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSimulationTextureSizeX_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "fx.GPUSimulationTextureSizeX" },
		{ "DisplayName", "GPU Particle simulation texture size - X" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The X size of the GPU simulation texture size. SizeX*SizeY determines the maximum number of GPU simulated particles in an emitter. Potentially overridden by CVar settings in BaseDeviceProfile.ini." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GPUSimulationTextureSizeY_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "fx.GPUSimulationTextureSizeY" },
		{ "DisplayName", "GPU Particle simulation texture size - Y" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The Y size of the GPU simulation texture size. SizeX*SizeY determines the maximum number of GPU simulated particles in an emitter. Potentially overridden by CVar settings in BaseDeviceProfile.ini." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGlobalClipPlane_MetaData[] = {
		{ "Category", "Reflections" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.AllowGlobalClipPlane" },
		{ "DisplayName", "Support global clip plane for Planar Reflections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to support the global clip plane needed for planar reflections.  Enabling this increases BasePass triangle cost by ~15% regardless of whether planar reflections are active. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GBufferFormat_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GBufferFormat" },
		{ "DisplayName", "GBuffer Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Selects which GBuffer format should be used. Affects performance primarily via how much GPU memory bandwidth used. This also controls Substrate normal quality and, in this case, a restart is required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGPUMorphTargets_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.MorphTarget.Mode" },
		{ "DisplayName", "Use GPU for computing morph targets" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use original CPU method (loop per morph then by vertex) or use a GPU-based method on Shader Model 5 hardware." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MorphTargetMaxBlendWeight_MetaData[] = {
		{ "Category", "DefaultSettings" },
		{ "ConsoleVariable", "r.MorphTarget.MaxBlendWeight" },
		{ "DisplayName", "Maximum absolute value accepted as a morph target blend weight, positive or negative." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Blend target weights will be checked against this value for validation. Absolue values greather than this number will be clamped to [-MorphTargetMaxBlendWeight, MorphTargetMaxBlendWeight]." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSkyAtmosphere_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportSkyAtmosphere" },
		{ "DisplayName", "Support Sky Atmosphere" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sky atmosphere component requires extra samplers/textures to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportSkyAtmosphereAffectsHeightFog" },
		{ "DisplayName", "Support Sky Atmosphere Affecting Height Fog" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The sky atmosphere component can light up the height fog but it requires extra samplers/textures to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation). It requires r.SupportSkyAtmosphere to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLocalFogVolumes_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportLocalFogVolumes" },
		{ "DisplayName", "Support Local Fog Volumes" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Local fog volume components can will need to be applied on translucent, and opaque in forward, so resources will need to be bound to apply aerial perspective on transparent surfaces (and all surfaces on mobile via per vertex evaluation). It requires r.SupportLocalFogVolumes to be true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportCloudShadowOnForwardLitTranslucent" },
		{ "DisplayName", "Support Cloud Shadow On Forward Lit Translucent" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable cloud shadow on translucent surface not relying on the translucenct lighting volume, e.g. using Forward lighting. This is evaluated per vertex to reduce GPU cost and requires extra samplers/textures to be bound to vertex shaders. This is not implemented on mobile as VolumetricClouds are not available on these platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionAtlasPixelFormat_MetaData[] = {
		{ "Category", "LightFunctionAtlas" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.LightFunctionAtlas.Format" },
		{ "DisplayName", "Light Function Atlas Format" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select the format of the light function atlas texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVolumetricFogUsesLightFunctionAtlas_MetaData[] = {
		{ "Category", "LightFunctionAtlas" },
		{ "ConsoleVariable", "r.VolumetricFog.LightFunction" },
		{ "DisplayName", "Volumetric Fog Uses Light Function Atlas." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable support for light function on volumetric fog, when the light function atlas is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDeferredLightingUsesLightFunctionAtlas_MetaData[] = {
		{ "Category", "LightFunctionAtlas" },
		{ "ConsoleVariable", "r.Deferred.UsesLightFunctionAtlas" },
		{ "DisplayName", "Deferred Lighting Uses Light Function Atlas." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable support for light function on deferred lighting (multi-pass and clustered), when the light function atlas is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleLayerWaterUsesLightFunctionAtlas_MetaData[] = {
		{ "Category", "LightFunctionAtlas" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SingleLayerWater.UsesLightFunctionAtlas" },
		{ "DisplayName", "Single Layer Water Uses Light Function Atlas." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable support for light function on Single Layer Water when the light function atlas is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTranslucentUsesLightFunctionAtlas_MetaData[] = {
		{ "Category", "LightFunctionAtlas" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Translucent.UsesLightFunctionAtlas" },
		{ "DisplayName", "Translucent Uses Light Function Atlas." },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable support for light function on Translucent material using Forward Shading mode, when the light function atlas is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportIESProfileOnTranslucent_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Translucent.UsesIESProfiles" },
		{ "DisplayName", "Support IES profiles On Translucent Materials (When Using ForwardShading)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable IES profile evaluation on translucent materials when using the Forward Shading mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportRectLightOnTranslucent_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Translucent.UsesRectLights" },
		{ "DisplayName", "Support Rect Light On Translucent Materials (When Using ForwardShading)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable rect light evaluation on translucent materials when using the Forward Shading mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNvidiaAftermathEnabled_MetaData[] = {
		{ "Category", "Debugging" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUCrashDebugging" },
		{ "DisplayName", "Enable vendor specific GPU crash analysis tools" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enables vendor specific GPU crash analysis tools." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMultiView_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.InstancedStereo" },
		{ "DisplayName", "Instanced Stereo" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable single-pass stereoscopic rendering through view instancing or draw call instancing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobilePostProcessing_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MobileHDR" },
		{ "DisplayName", "Mobile HDR" },
		{ "EditCondition", "MobileShadingPath == 0" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true, mobile pipelines include a full post-processing pass with tonemapping. Disable this setting for a performance boost and to enable stereoscopic rendering optimizations. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileMultiView_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "vr.MobileMultiView" },
		{ "DisplayName", "Mobile Multi-View" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable single-pass stereoscopic rendering on mobile platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileUseHWsRGBEncoding_MetaData[] = {
		{ "ConsoleVariable", "r.Mobile.UseHWsRGBEncoding" },
		{ "DisplayName", "Single-pass linear rendering" },
		{ "EditCondition", "!bMobilePostProcessing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If true then mobile single-pass (without post-processing) rendering will use HW accelerated sRGB encoding/decoding. Available only on Oculus for now." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoundRobinOcclusion_MetaData[] = {
		{ "Category", "VR" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "vr.RoundRobinOcclusion" },
		{ "DisplayName", "Round Robin Occlusion Queries" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable round-robin scheduling of occlusion queries for VR." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMeshStreaming_MetaData[] = {
		{ "Category", "Mesh Streaming" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.MeshStreaming" },
		{ "DisplayName", "Mesh Streaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When enabled mesh LODs will stream in based on what is visible on screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeterogeneousVolumes_MetaData[] = {
		{ "Category", "Heterogeneous Volumes" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "ConsoleVariable", "r.HeterogeneousVolumes" },
		{ "DisplayName", "Heterogeneous Volumes (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable rendering with the heterogeneous volumes subsystem." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldHeterogeneousVolumesCastShadows_MetaData[] = {
		{ "Category", "Heterogeneous Volumes" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.HeterogeneousVolumes.Shadows" },
		{ "DisplayName", "Shadow Casting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable heterogeneous volumes to cast shadows onto the environment." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCompositeHeterogeneousVolumesWithTranslucency_MetaData[] = {
		{ "Category", "Heterogeneous Volumes" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Translucency.HeterogeneousVolumes" },
		{ "DisplayName", "Composite with Translucency" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable compositing with heterogeneous volumes when rendering translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireframeCullThreshold_MetaData[] = {
		{ "Category", "Editor" },
		{ "ConsoleVariable", "r.WireframeCullThreshold" },
		{ "DisplayName", "Wireframe Cull Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Screen radius at which wireframe objects are culled. Larger values can improve performance when viewing a scene in wireframe." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportStationarySkylight_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportStationarySkylight" },
		{ "DisplayName", "Support Stationary Skylight" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Stationary skylight requires permutations of the basepass shaders.  Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportLowQualityLightmaps_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportLowQualityLightmaps" },
		{ "DisplayName", "Support low quality lightmap shader permutations" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Low quality lightmap requires permutations of the lightmap rendering shaders.  Disabling will reduce the number of shader permutations required per material. Note that the mobile renderer requires low quality lightmaps, so disabling this setting is not recommended for mobile titles using static lighting. Changing this setting requires restarting the editor.\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportPointLightWholeSceneShadows_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportPointLightWholeSceneShadows" },
		{ "DisplayName", "Support PointLight WholeSceneShadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "PointLight WholeSceneShadows requires many vertex and geometry shader permutations for cubemap rendering. Disabling will reduce the number of shader permutations required per material. Changing this setting requires restarting the editor.\"" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportTranslucentPerObjectShadow_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Shadow.TranslucentPerObject.ProjectEnabled" },
		{ "DisplayName", "Support Volumetric Translucent Self Shadowing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable translucent volumetric self-shadow, requires vertex and pixel shader permutations for all tranlucent materials even if not used by any light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Water.SingleLayerWater.SupportCloudShadow" },
		{ "DisplayName", "Support Cloud Shadow On SingleLayerWater" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable cloud shadow on SingleLayerWater. This is evaluated per vertex to reduce GPU cost and requires extra samplers/textures to be bound to vertex shaders. This is not implemented on mobile as VolumetricClouds are not available on these platforms." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSubstrate_MetaData[] = {
		{ "Category", "Substrate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Substrate" },
		{ "DisplayName", "Substrate materials (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Substrate materials (Experimental)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstrateOpaqueMaterialRoughRefraction_MetaData[] = {
		{ "Category", "Substrate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Substrate.OpaqueMaterialRoughRefraction" },
		{ "DisplayName", "Substrate opaque material rough refraction" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Substrate opaque material rough refractions effect from top layers over layers below." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubstrateDebugAdvancedVisualizationShaders_MetaData[] = {
		{ "Category", "Substrate" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Substrate.Debug.AdvancedVisualizationShaders" },
		{ "DisplayName", "Substrate advanced visualization shaders" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable advanced Substrate material debug visualization shaders. Base pass shaders can output such advanced data." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialRoughDiffuse_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Material.RoughDiffuse" },
		{ "DisplayName", "Enable Rough Diffuse Material" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Rough Diffuse Material. Please note that when Substrate is enabled, energy conservation is forced to ENABLED." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialEnergyConservation_MetaData[] = {
		{ "Category", "Materials" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Material.EnergyConservation" },
		{ "DisplayName", "Enable Energy Conservation on Material" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable Energy Conservation on Material. Please note that when Substrate is enabled, energy conservation is forced to ENABLED." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOrderedIndependentTransparencyEnable_MetaData[] = {
		{ "Category", "Translucency" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.OIT.SortedPixels" },
		{ "DisplayName", "Enable Order Independent Transparency (Experimental)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable support for Order-Independent-Transparency on translucent surfaces, which remove most of the sorting artifact among translucent surfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHairStrandsAutoLODMode_MetaData[] = {
		{ "Category", "HairStrands" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.HairStrands.LODMode" },
		{ "DisplayName", "Enable Hair Strands 'Auto' LOD mode" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Enable hair strands Auto LOD mode by default. Otherwise use Manual LOD mode. Auto LOD mode adapts hair curves based on screen coverage. Manual LOD mode relies on LODs manually setup per groom asset. This global behavior can be overridden per groom asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportSkinCacheShaders_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkinCache.CompileShaders" },
		{ "DisplayName", "Support Compute Skin Cache" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Cannot be disabled while Ray Tracing is enabled as it is then required." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipCompilingGPUSkinVF_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SkinCache.SkipCompilingGPUSkinVF" },
		{ "DisplayName", "Reduce GPU Skin Vertex Factory shader permutations" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Cannot be enabled while the skin cache is turned off." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSkinCacheBehavior_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.SkinCache.DefaultBehavior" },
		{ "DisplayName", "Default Skin Cache Behavior" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Default behavior if all skeletal meshes are included/excluded from the skin cache. If Support Ray Tracing is enabled on a mesh, the skin cache will be used for Ray Tracing updates on that mesh regardless of this setting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkinCacheSceneMemoryLimitInMB_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConsoleVariable", "r.SkinCache.SceneMemoryLimitInMB" },
		{ "DisplayName", "Maximum memory for Compute Skin Cache per world (MB)" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Maximum amount of memory (in MB) per world/scene allowed for the Compute Skin Cache to generate output vertex data and recompute tangents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableStaticAndCSMShadowReceivers" },
		{ "DisplayName", "Support Combined Static and CSM Shadowing" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Allow primitives to receive both static and CSM shadows from a stationary light. Disabling will free a mobile texture sampler and reduce shader permutations. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableLightCSMShaderCulling" },
		{ "DisplayName", "Support movable light CSM shader culling" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Primitives lit by a movable directional light will render with the CSM shader only when determined to be within CSM range. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileLocalLightSetting_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.Forward.EnableLocalLights" },
		{ "DisplayName", "Mobile Local Light Setting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Select which Local Light Setting to use for Mobile. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileForwardEnableClusteredReflections_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.Forward.EnableClusteredReflections" },
		{ "DisplayName", "Enable clustered reflections on mobile forward" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to enable clustered reflections on mobile forward (including translucency in deferred). Always supported for opaque geometry on mobile deferred. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableNoPrecomputedLightingCSMShader" },
		{ "DisplayName", "Support CSM on levels with Force No Precomputed Lighting enabled" },
		{ "EditCondition", "bAllowStaticLighting" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When Allow Static Lighting is enabled, shaders to support CSM without any precomputed lighting are not normally generated. This setting allows CSM for this case at the cost of extra shader permutations. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowDistanceFieldShadows_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowDistanceFieldShadows" },
		{ "DisplayName", "Support Pre-baked Distance Field Shadow Maps" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for static primitives render Lightmass-baked distance field shadow maps from stationary directional lights. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableDirectionalLights_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AllowMovableDirectionalLights" },
		{ "DisplayName", "Support Movable Directional Lights" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive movable directional lights. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAllowMovableSpotlightShadows_MetaData[] = {
		{ "Category", "MobileShaderPermutationReduction" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.EnableMovableSpotlightsShadow" },
		{ "DisplayName", "Support Movable SpotlightShadows" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Generate shaders for primitives to receive shadow from movable spotlights. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupport16BitBoneIndex_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.Support16BitBoneIndex" },
		{ "DisplayName", "Support 16-bit Bone Index" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If enabled, a new mesh imported will use 8 bit (if <=256 bones) or 16 bit (if > 256 bones) bone indices for rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGPUSkinLimit2BoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.Limit2BoneInfluences" },
		{ "DisplayName", "Limit GPU skinning to 2 bones influence" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to use 2 bone influences instead of the default of 4 for GPU skinning. This does not change skeletal mesh assets but reduces the number of instructions required by the GPU skin vertex shaders. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportDepthOnlyIndexBuffers_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportDepthOnlyIndexBuffers" },
		{ "DisplayName", "Support depth-only index buffers" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support depth-only index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportReversedIndexBuffers_MetaData[] = {
		{ "Category", "Optimizations" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportReversedIndexBuffers" },
		{ "DisplayName", "Support reversed index buffers" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support reversed index buffers, which provide a minor rendering speedup at the expense of using twice the index buffer memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileAmbientOcclusion_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.AmbientOcclusion" },
		{ "DisplayName", "Mobile Ambient Occlusion" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Mobile Ambient Occlusion. Causion: An extra sampler will be occupied in mobile base pass pixel shader after enable the mobile ambient occlusion. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileDBuffer_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.DBuffer" },
		{ "DisplayName", "Mobile DBuffer Decals" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to accumulate decal properties to a buffer before the base pass with mobile rendering. DBuffer enabled forces a full prepass. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseUnlimitedBoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.UnlimitedBoneInfluences" },
		{ "DisplayName", "Use Unlimited Bone Influences" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "If enabled, a new mesh imported will use unlimited bone buffer instead of fixed MaxBoneInfluences for rendering." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.GPUSkin.AlwaysUseDeformerForUnlimitedBoneInfluences" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Any mesh LODs using Unlimited Bone Influences will always be rendered with a Mesh Deformer. This reduces the number of shader permutations needed for skeletal mesh materials, saving memory at the cost of performance. Has no effect if either Unlimited Bone Influences or Deformer Graph is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnlimitedBonInfluencesThreshold_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ConsoleVariable", "r.GPUSkin.UnlimitedBoneInfluencesThreshold" },
		{ "DisplayName", "Unlimited Bone Influences Threshold" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When Unlimited Bone Influence is enabled, it still uses a fixed bone inflence buffer until the max bone influence of a mesh exceeds this value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBoneInfluenceLimit_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ClampMin", "0" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When BoneInfluenceLimit on a skeletal mesh LOD is set to 0, this setting is used instead. If this setting is 0, no limit will be applied here and the max bone influences will be determined by other project settings. Changing this setting requires restarting the editor." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSkinBones_MetaData[] = {
		{ "Category", "Skinning" },
		{ "ClampMin", "12" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Maximum bones per Sections" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Max number of bones that can be skinned on the GPU in a single draw call. The default value is set by the Compat.MAX_GPUSKIN_BONES consolevariable. Changing this setting requires restarting the editor." },
		{ "UIMin", "12" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobilePlanarReflectionMode_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.PlanarReflectionMode" },
		{ "DisplayName", "Planar Reflection Mode" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "The PlanarReflection will work differently on different mode on mobile platform, choose the proper mode as expect. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileSupportsGen4TAA_MetaData[] = {
		{ "Category", "Mobile" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.Mobile.SupportsGen4TAA" },
		{ "DisplayName", "Support desktop Gen4 TAA on mobile" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Support desktop Gen4 TAA with mobile rendering. Changing this setting requires restarting the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreamSkeletalMeshLODs_MetaData[] = {
		{ "Category", "Mesh Streaming|Skeletal Mesh" },
		{ "DisplayName", "Stream LODs by default" },
		{ "EditCondition", "bMeshStreaming" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to stream skeletal mesh LODs by default." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData[] = {
		{ "Category", "Mesh Streaming|Skeletal Mesh" },
		{ "DisplayName", "Discard optional LODs" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "Whether to discard skeletal mesh LODs below minimum LOD levels at cook time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationColorMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Color Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationColor show flag is enabled, this path will be used as the post-process material to render. The post-process material's Blendable Location property must be set to \"After Tonemapping\" for proper calibration display." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationCustomMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Custom Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationCustom show flag is enabled, this path will be used as the post-process material to render. The post-process material's Blendable Location property must be set to \"After Tonemapping\" for proper calibration display." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Material" },
		{ "Category", "PostProcessCalibrationMaterials" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Visualize Calibration Grayscale Material Path" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "When the VisualizeCalibrationGrayscale show flag is enabled, this path will be used as the post-process material to render. The post-process material's Blendable Location property must be set to \"After Tonemapping\" for proper calibration display." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MobileShadingPath;
	static void NewProp_bMobileSupportDeferredOnOpenGL_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileSupportDeferredOnOpenGL;
	static void NewProp_bMobileSupportGPUScene_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileSupportGPUScene;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MobileAntiAliasing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MobileFloatPrecisionMode;
	static void NewProp_bMobileAllowDitheredLODTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDitheredLODTransition;
	static void NewProp_bMobileVirtualTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileVirtualTextures;
	static void NewProp_bDiscardUnusedQualityLevels_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDiscardUnusedQualityLevels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShaderCompressionFormat;
	static void NewProp_bOcclusionCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOcclusionCulling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForLights;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForEarlyZPass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScreenRadiusForCSMdepth;
	static void NewProp_bPrecomputedVisibilityWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecomputedVisibilityWarning;
	static void NewProp_bTextureStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextureStreaming;
	static void NewProp_bUseDXT5NormalMaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseDXT5NormalMaps;
	static void NewProp_bVirtualTextures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextures;
	static void NewProp_bVirtualTextureEnableAutoImport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureEnableAutoImport;
	static void NewProp_bVirtualTexturedLightmaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTexturedLightmaps;
	static void NewProp_bVirtualTextureAnisotropicFiltering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVirtualTextureAnisotropicFiltering;
	static void NewProp_bEnableVirtualTextureOpacityMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVirtualTextureOpacityMask;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureTileSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureTileBorderSize;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_VirtualTextureFeedbackFactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorkingColorSpaceChoice;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RedChromaticityCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GreenChromaticityCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BlueChromaticityCoordinate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WhiteChromaticityCoordinate;
	static void NewProp_bClearCoatEnableSecondNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearCoatEnableSecondNormal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DynamicGlobalIllumination;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Reflections;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReflectionCaptureResolution;
	static void NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness;
	static void NewProp_bUseHardwareRayTracingForLumen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHardwareRayTracingForLumen;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LumenRayLightingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LumenRayLightingMode;
	static void NewProp_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LumenFrontLayerTranslucencyReflections;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LumenSoftwareTracingMode;
	static void NewProp_LumenRayTracedTranslucentRefractions_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LumenRayTracedTranslucentRefractions;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowMapMethod;
	static void NewProp_bEnableRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracing;
	static void NewProp_bEnableRayTracingShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingShadows;
	static void NewProp_bEnableRayTracingSkylight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingSkylight;
	static void NewProp_bEnableRayTracingTextureLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRayTracingTextureLOD;
	static void NewProp_bEnablePathTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePathTracing;
	static void NewProp_bGenerateMeshDistanceFields_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateMeshDistanceFields;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldVoxelDensity;
	static void NewProp_bNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNanite;
	static void NewProp_bAllowStaticLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStaticLighting;
	static void NewProp_bUseNormalMapsForStaticLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseNormalMapsForStaticLighting;
	static void NewProp_bForwardShading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardShading;
	static void NewProp_bVertexFoggingForOpaque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVertexFoggingForOpaque;
	static void NewProp_bSeparateTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeparateTranslucency;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslucentSortPolicy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslucentSortAxis;
	static void NewProp_bLocalFogVolumeApplyOnTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocalFogVolumeApplyOnTranslucent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FoveationLevel;
	static void NewProp_bDynamicFoveation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicFoveation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencil;
	static void NewProp_bCustomDepthTaaJitter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomDepthTaaJitter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_bEnableAlphaChannelInPostProcessing;
	static void NewProp_bDefaultFeatureBloom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureBloom;
	static void NewProp_bDefaultFeatureAmbientOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusion;
	static void NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAmbientOcclusionStaticFraction;
	static void NewProp_bDefaultFeatureAutoExposure_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureAutoExposure;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAutoExposure;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFeatureAutoExposureBias;
	static void NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFeatureLocalExposureHighlightContrast;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFeatureLocalExposureShadowContrast;
	static void NewProp_bDefaultFeatureMotionBlur_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureMotionBlur;
	static void NewProp_bDefaultFeatureLensFlare_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultFeatureLensFlare;
	static void NewProp_bTemporalUpsampling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemporalUpsampling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultFeatureAntiAliasing;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MSAASampleCount;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultLightUnits_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultLightUnits;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultBackBufferPixelFormat;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultManualScreenPercentage;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultScreenPercentageDesktopMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultScreenPercentageDesktopMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultScreenPercentageMobileMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultScreenPercentageMobileMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultScreenPercentageVRMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultScreenPercentageVRMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultScreenPercentagePathTracerMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultScreenPercentagePathTracerMode;
	static void NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderUnbuiltPreviewShadowsInGame;
	static void NewProp_bStencilForLODDither_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStencilForLODDither;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EarlyZPass;
	static void NewProp_bEarlyZPassOnlyMaterialMasking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEarlyZPassOnlyMaterialMasking;
	static void NewProp_bEnableCSMCaching_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCSMCaching;
	static void NewProp_bDBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDBuffer;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ClearSceneMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VelocityPass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexDeformationOutputsVelocity;
	static void NewProp_bSelectiveBasePassOutputs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelectiveBasePassOutputs;
	static void NewProp_bDefaultParticleCutouts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultParticleCutouts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GPUSimulationTextureSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GPUSimulationTextureSizeY;
	static void NewProp_bGlobalClipPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGlobalClipPlane;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GBufferFormat;
	static void NewProp_bUseGPUMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGPUMorphTargets;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MorphTargetMaxBlendWeight;
	static void NewProp_bSupportSkyAtmosphere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSkyAtmosphere;
	static void NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSkyAtmosphereAffectsHeightFog;
	static void NewProp_bSupportLocalFogVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLocalFogVolumes;
	static void NewProp_bSupportCloudShadowOnForwardLitTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportCloudShadowOnForwardLitTranslucent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightFunctionAtlasPixelFormat;
	static void NewProp_bVolumetricFogUsesLightFunctionAtlas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVolumetricFogUsesLightFunctionAtlas;
	static void NewProp_bDeferredLightingUsesLightFunctionAtlas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeferredLightingUsesLightFunctionAtlas;
	static void NewProp_bSingleLayerWaterUsesLightFunctionAtlas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleLayerWaterUsesLightFunctionAtlas;
	static void NewProp_bTranslucentUsesLightFunctionAtlas_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTranslucentUsesLightFunctionAtlas;
	static void NewProp_bSupportIESProfileOnTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportIESProfileOnTranslucent;
	static void NewProp_bSupportRectLightOnTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportRectLightOnTranslucent;
	static void NewProp_bNvidiaAftermathEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNvidiaAftermathEnabled;
	static void NewProp_bMultiView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMultiView;
	static void NewProp_bMobilePostProcessing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobilePostProcessing;
	static void NewProp_bMobileMultiView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileMultiView;
	static void NewProp_bMobileUseHWsRGBEncoding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileUseHWsRGBEncoding;
	static void NewProp_bRoundRobinOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoundRobinOcclusion;
	static void NewProp_bMeshStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMeshStreaming;
	static void NewProp_bEnableHeterogeneousVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeterogeneousVolumes;
	static void NewProp_bShouldHeterogeneousVolumesCastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldHeterogeneousVolumesCastShadows;
	static void NewProp_bCompositeHeterogeneousVolumesWithTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompositeHeterogeneousVolumesWithTranslucency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WireframeCullThreshold;
	static void NewProp_bSupportStationarySkylight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportStationarySkylight;
	static void NewProp_bSupportLowQualityLightmaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportLowQualityLightmaps;
	static void NewProp_bSupportPointLightWholeSceneShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportPointLightWholeSceneShadows;
	static void NewProp_bSupportTranslucentPerObjectShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportTranslucentPerObjectShadow;
	static void NewProp_bSupportCloudShadowOnSingleLayerWater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportCloudShadowOnSingleLayerWater;
	static void NewProp_bEnableSubstrate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSubstrate;
	static void NewProp_SubstrateOpaqueMaterialRoughRefraction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SubstrateOpaqueMaterialRoughRefraction;
	static void NewProp_SubstrateDebugAdvancedVisualizationShaders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SubstrateDebugAdvancedVisualizationShaders;
	static void NewProp_bMaterialRoughDiffuse_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterialRoughDiffuse;
	static void NewProp_bMaterialEnergyConservation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterialEnergyConservation;
	static void NewProp_bOrderedIndependentTransparencyEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOrderedIndependentTransparencyEnable;
	static void NewProp_bUseHairStrandsAutoLODMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHairStrandsAutoLODMode;
	static void NewProp_bSupportSkinCacheShaders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportSkinCacheShaders;
	static void NewProp_bSkipCompilingGPUSkinVF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipCompilingGPUSkinVF;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultSkinCacheBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultSkinCacheBehavior;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkinCacheSceneMemoryLimitInMB;
	static void NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableStaticAndCSMShadowReceivers;
	static void NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableMovableLightCSMShaderCulling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MobileLocalLightSetting;
	static void NewProp_bMobileForwardEnableClusteredReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileForwardEnableClusteredReflections;
	static void NewProp_bMobileEnableNoPrecomputedLightingCSMShader_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableNoPrecomputedLightingCSMShader;
	static void NewProp_bMobileAllowDistanceFieldShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowDistanceFieldShadows;
	static void NewProp_bMobileAllowMovableDirectionalLights_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableDirectionalLights;
	static void NewProp_bMobileAllowMovableSpotlightShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAllowMovableSpotlightShadows;
	static void NewProp_bSupport16BitBoneIndex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupport16BitBoneIndex;
	static void NewProp_bGPUSkinLimit2BoneInfluences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGPUSkinLimit2BoneInfluences;
	static void NewProp_bSupportDepthOnlyIndexBuffers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportDepthOnlyIndexBuffers;
	static void NewProp_bSupportReversedIndexBuffers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportReversedIndexBuffers;
	static void NewProp_bMobileAmbientOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileAmbientOcclusion;
	static void NewProp_bMobileDBuffer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileDBuffer;
	static void NewProp_bUseUnlimitedBoneInfluences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseUnlimitedBoneInfluences;
	static void NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UnlimitedBonInfluencesThreshold;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBoneInfluenceLimit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxSkinBones;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MobilePlanarReflectionMode;
	static void NewProp_bMobileSupportsGen4TAA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileSupportsGen4TAA;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bStreamSkeletalMeshLODs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_bDiscardSkeletalMeshOptionalLODs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationColorMaterialPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationCustomMaterialPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisualizeCalibrationGrayscaleMaterialPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath = { "MobileShadingPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MobileShadingPath), Z_Construct_UEnum_Engine_EMobileShadingPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileShadingPath_MetaData), NewProp_MobileShadingPath_MetaData) }; // 903186649
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportDeferredOnOpenGL_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileSupportDeferredOnOpenGL = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportDeferredOnOpenGL = { "bMobileSupportDeferredOnOpenGL", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportDeferredOnOpenGL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileSupportDeferredOnOpenGL_MetaData), NewProp_bMobileSupportDeferredOnOpenGL_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileSupportGPUScene = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene = { "bMobileSupportGPUScene", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileSupportGPUScene_MetaData), NewProp_bMobileSupportGPUScene_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing = { "MobileAntiAliasing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MobileAntiAliasing), Z_Construct_UEnum_Engine_EMobileAntiAliasingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileAntiAliasing_MetaData), NewProp_MobileAntiAliasing_MetaData) }; // 3861066958
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode = { "MobileFloatPrecisionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MobileFloatPrecisionMode), Z_Construct_UEnum_Engine_EMobileFloatPrecisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileFloatPrecisionMode_MetaData), NewProp_MobileFloatPrecisionMode_MetaData) }; // 1861866984
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileAllowDitheredLODTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition = { "bMobileAllowDitheredLODTransition", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileAllowDitheredLODTransition_MetaData), NewProp_bMobileAllowDitheredLODTransition_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileVirtualTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures = { "bMobileVirtualTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileVirtualTextures_MetaData), NewProp_bMobileVirtualTextures_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDiscardUnusedQualityLevels = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels = { "bDiscardUnusedQualityLevels", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDiscardUnusedQualityLevels_MetaData), NewProp_bDiscardUnusedQualityLevels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat = { "ShaderCompressionFormat", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, ShaderCompressionFormat_DEPRECATED), Z_Construct_UEnum_Engine_EShaderCompressionFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShaderCompressionFormat_MetaData), NewProp_ShaderCompressionFormat_MetaData) }; // 2796130150
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bOcclusionCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling = { "bOcclusionCulling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOcclusionCulling_MetaData), NewProp_bOcclusionCulling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights = { "MinScreenRadiusForLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForLights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScreenRadiusForLights_MetaData), NewProp_MinScreenRadiusForLights_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass = { "MinScreenRadiusForEarlyZPass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForEarlyZPass), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScreenRadiusForEarlyZPass_MetaData), NewProp_MinScreenRadiusForEarlyZPass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth = { "MinScreenRadiusForCSMdepth", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MinScreenRadiusForCSMdepth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScreenRadiusForCSMdepth_MetaData), NewProp_MinScreenRadiusForCSMdepth_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bPrecomputedVisibilityWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning = { "bPrecomputedVisibilityWarning", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPrecomputedVisibilityWarning_MetaData), NewProp_bPrecomputedVisibilityWarning_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bTextureStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming = { "bTextureStreaming", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTextureStreaming_MetaData), NewProp_bTextureStreaming_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bUseDXT5NormalMaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps = { "bUseDXT5NormalMaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseDXT5NormalMaps_MetaData), NewProp_bUseDXT5NormalMaps_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bVirtualTextures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures = { "bVirtualTextures", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTextures_MetaData), NewProp_bVirtualTextures_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bVirtualTextureEnableAutoImport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport = { "bVirtualTextureEnableAutoImport", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTextureEnableAutoImport_MetaData), NewProp_bVirtualTextureEnableAutoImport_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bVirtualTexturedLightmaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps = { "bVirtualTexturedLightmaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTexturedLightmaps_MetaData), NewProp_bVirtualTexturedLightmaps_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bVirtualTextureAnisotropicFiltering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering = { "bVirtualTextureAnisotropicFiltering", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVirtualTextureAnisotropicFiltering_MetaData), NewProp_bVirtualTextureAnisotropicFiltering_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableVirtualTextureOpacityMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask = { "bEnableVirtualTextureOpacityMask", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVirtualTextureOpacityMask_MetaData), NewProp_bEnableVirtualTextureOpacityMask_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize = { "VirtualTextureTileSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VirtualTextureTileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureTileSize_MetaData), NewProp_VirtualTextureTileSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize = { "VirtualTextureTileBorderSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VirtualTextureTileBorderSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureTileBorderSize_MetaData), NewProp_VirtualTextureTileBorderSize_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor = { "VirtualTextureFeedbackFactor", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VirtualTextureFeedbackFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureFeedbackFactor_MetaData), NewProp_VirtualTextureFeedbackFactor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice = { "WorkingColorSpaceChoice", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, WorkingColorSpaceChoice), Z_Construct_UEnum_Engine_EWorkingColorSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorkingColorSpaceChoice_MetaData), NewProp_WorkingColorSpaceChoice_MetaData) }; // 992633440
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate = { "RedChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, RedChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedChromaticityCoordinate_MetaData), NewProp_RedChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate = { "GreenChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, GreenChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GreenChromaticityCoordinate_MetaData), NewProp_GreenChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate = { "BlueChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, BlueChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueChromaticityCoordinate_MetaData), NewProp_BlueChromaticityCoordinate_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate = { "WhiteChromaticityCoordinate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, WhiteChromaticityCoordinate), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WhiteChromaticityCoordinate_MetaData), NewProp_WhiteChromaticityCoordinate_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bClearCoatEnableSecondNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal = { "bClearCoatEnableSecondNormal", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearCoatEnableSecondNormal_MetaData), NewProp_bClearCoatEnableSecondNormal_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination = { "DynamicGlobalIllumination", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DynamicGlobalIllumination), Z_Construct_UEnum_Engine_EDynamicGlobalIlluminationMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicGlobalIllumination_MetaData), NewProp_DynamicGlobalIllumination_MetaData) }; // 2546568098
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections = { "Reflections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, Reflections), Z_Construct_UEnum_Engine_EReflectionMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reflections_MetaData), NewProp_Reflections_MetaData) }; // 569687725
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution = { "ReflectionCaptureResolution", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, ReflectionCaptureResolution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionCaptureResolution_MetaData), NewProp_ReflectionCaptureResolution_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->ReflectionEnvironmentLightmapMixBasedOnRoughness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness = { "ReflectionEnvironmentLightmapMixBasedOnRoughness", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData), NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bUseHardwareRayTracingForLumen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen = { "bUseHardwareRayTracingForLumen", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHardwareRayTracingForLumen_MetaData), NewProp_bUseHardwareRayTracingForLumen_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode = { "LumenRayLightingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, LumenRayLightingMode), Z_Construct_UEnum_Engine_ELumenRayLightingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenRayLightingMode_MetaData), NewProp_LumenRayLightingMode_MetaData) }; // 1348078731
void Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->LumenFrontLayerTranslucencyReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections = { "LumenFrontLayerTranslucencyReflections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenFrontLayerTranslucencyReflections_MetaData), NewProp_LumenFrontLayerTranslucencyReflections_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode = { "LumenSoftwareTracingMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, LumenSoftwareTracingMode), Z_Construct_UEnum_Engine_ELumenSoftwareTracingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenSoftwareTracingMode_MetaData), NewProp_LumenSoftwareTracingMode_MetaData) }; // 2919508242
void Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayTracedTranslucentRefractions_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->LumenRayTracedTranslucentRefractions = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayTracedTranslucentRefractions = { "LumenRayTracedTranslucentRefractions", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayTracedTranslucentRefractions_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LumenRayTracedTranslucentRefractions_MetaData), NewProp_LumenRayTracedTranslucentRefractions_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod = { "ShadowMapMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, ShadowMapMethod), Z_Construct_UEnum_Engine_EShadowMapMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowMapMethod_MetaData), NewProp_ShadowMapMethod_MetaData) }; // 422023146
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing = { "bEnableRayTracing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRayTracing_MetaData), NewProp_bEnableRayTracing_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableRayTracingShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows = { "bEnableRayTracingShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRayTracingShadows_MetaData), NewProp_bEnableRayTracingShadows_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableRayTracingSkylight_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight = { "bEnableRayTracingSkylight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRayTracingSkylight_MetaData), NewProp_bEnableRayTracingSkylight_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableRayTracingTextureLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD = { "bEnableRayTracingTextureLOD", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableRayTracingTextureLOD_MetaData), NewProp_bEnableRayTracingTextureLOD_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnablePathTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing = { "bEnablePathTracing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePathTracing_MetaData), NewProp_bEnablePathTracing_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bGenerateMeshDistanceFields = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields = { "bGenerateMeshDistanceFields", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateMeshDistanceFields_MetaData), NewProp_bGenerateMeshDistanceFields_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity = { "DistanceFieldVoxelDensity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DistanceFieldVoxelDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldVoxelDensity_MetaData), NewProp_DistanceFieldVoxelDensity_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite = { "bNanite", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNanite_MetaData), NewProp_bNanite_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bAllowStaticLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting = { "bAllowStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStaticLighting_MetaData), NewProp_bAllowStaticLighting_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bUseNormalMapsForStaticLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting = { "bUseNormalMapsForStaticLighting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseNormalMapsForStaticLighting_MetaData), NewProp_bUseNormalMapsForStaticLighting_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bForwardShading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading = { "bForwardShading", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForwardShading_MetaData), NewProp_bForwardShading_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bVertexFoggingForOpaque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque = { "bVertexFoggingForOpaque", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVertexFoggingForOpaque_MetaData), NewProp_bVertexFoggingForOpaque_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSeparateTranslucency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency = { "bSeparateTranslucency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeparateTranslucency_MetaData), NewProp_bSeparateTranslucency_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy = { "TranslucentSortPolicy", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, TranslucentSortPolicy), Z_Construct_UEnum_Engine_ETranslucentSortPolicy, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentSortPolicy_MetaData), NewProp_TranslucentSortPolicy_MetaData) }; // 3225792253
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis = { "TranslucentSortAxis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, TranslucentSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentSortAxis_MetaData), NewProp_TranslucentSortAxis_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bLocalFogVolumeApplyOnTranslucent_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bLocalFogVolumeApplyOnTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bLocalFogVolumeApplyOnTranslucent = { "bLocalFogVolumeApplyOnTranslucent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bLocalFogVolumeApplyOnTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocalFogVolumeApplyOnTranslucent_MetaData), NewProp_bLocalFogVolumeApplyOnTranslucent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_FoveationLevel = { "FoveationLevel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, FoveationLevel), Z_Construct_UEnum_Engine_EFixedFoveationLevels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FoveationLevel_MetaData), NewProp_FoveationLevel_MetaData) }; // 3683826976
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDynamicFoveation_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDynamicFoveation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDynamicFoveation = { "bDynamicFoveation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDynamicFoveation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDynamicFoveation_MetaData), NewProp_bDynamicFoveation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil = { "CustomDepthStencil", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, CustomDepthStencil), Z_Construct_UEnum_Engine_ECustomDepthStencil, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencil_MetaData), NewProp_CustomDepthStencil_MetaData) }; // 1998646889
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bCustomDepthTaaJitter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter = { "bCustomDepthTaaJitter", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomDepthTaaJitter_MetaData), NewProp_bCustomDepthTaaJitter_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing = { "bEnableAlphaChannelInPostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, bEnableAlphaChannelInPostProcessing), Z_Construct_UEnum_Engine_EAlphaChannelMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAlphaChannelInPostProcessing_MetaData), NewProp_bEnableAlphaChannelInPostProcessing_MetaData) }; // 2174415650
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultFeatureBloom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom = { "bDefaultFeatureBloom", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFeatureBloom_MetaData), NewProp_bDefaultFeatureBloom_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion = { "bDefaultFeatureAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFeatureAmbientOcclusion_MetaData), NewProp_bDefaultFeatureAmbientOcclusion_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultFeatureAmbientOcclusionStaticFraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction = { "bDefaultFeatureAmbientOcclusionStaticFraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData), NewProp_bDefaultFeatureAmbientOcclusionStaticFraction_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultFeatureAutoExposure = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure = { "bDefaultFeatureAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFeatureAutoExposure_MetaData), NewProp_bDefaultFeatureAutoExposure_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure = { "DefaultFeatureAutoExposure", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposure), Z_Construct_UEnum_Engine_EAutoExposureMethodUI, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFeatureAutoExposure_MetaData), NewProp_DefaultFeatureAutoExposure_MetaData) }; // 2459228929
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias = { "DefaultFeatureAutoExposureBias", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureAutoExposureBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFeatureAutoExposureBias_MetaData), NewProp_DefaultFeatureAutoExposureBias_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bExtendDefaultLuminanceRangeInAutoExposureSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings = { "bExtendDefaultLuminanceRangeInAutoExposureSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData), NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureLocalExposureHighlightContrast = { "DefaultFeatureLocalExposureHighlightContrast", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureLocalExposureHighlightContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFeatureLocalExposureHighlightContrast_MetaData), NewProp_DefaultFeatureLocalExposureHighlightContrast_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureLocalExposureShadowContrast = { "DefaultFeatureLocalExposureShadowContrast", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureLocalExposureShadowContrast), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFeatureLocalExposureShadowContrast_MetaData), NewProp_DefaultFeatureLocalExposureShadowContrast_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultFeatureMotionBlur = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur = { "bDefaultFeatureMotionBlur", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFeatureMotionBlur_MetaData), NewProp_bDefaultFeatureMotionBlur_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultFeatureLensFlare = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare = { "bDefaultFeatureLensFlare", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultFeatureLensFlare_MetaData), NewProp_bDefaultFeatureLensFlare_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bTemporalUpsampling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling = { "bTemporalUpsampling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTemporalUpsampling_MetaData), NewProp_bTemporalUpsampling_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing = { "DefaultFeatureAntiAliasing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultFeatureAntiAliasing), Z_Construct_UEnum_Engine_EAntiAliasingMethod, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFeatureAntiAliasing_MetaData), NewProp_DefaultFeatureAntiAliasing_MetaData) }; // 1912678732
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount = { "MSAASampleCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MSAASampleCount), Z_Construct_UEnum_Engine_ECompositingSampleCount, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MSAASampleCount_MetaData), NewProp_MSAASampleCount_MetaData) }; // 237758145
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits = { "DefaultLightUnits", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultLightUnits), Z_Construct_UEnum_Engine_ELightUnits, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLightUnits_MetaData), NewProp_DefaultLightUnits_MetaData) }; // 3885668745
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat = { "DefaultBackBufferPixelFormat", nullptr, (EPropertyFlags)0x0010040000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultBackBufferPixelFormat), Z_Construct_UEnum_Engine_EDefaultBackBufferPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBackBufferPixelFormat_MetaData), NewProp_DefaultBackBufferPixelFormat_MetaData) }; // 3285217297
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultManualScreenPercentage = { "DefaultManualScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultManualScreenPercentage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultManualScreenPercentage_MetaData), NewProp_DefaultManualScreenPercentage_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageDesktopMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageDesktopMode = { "DefaultScreenPercentageDesktopMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultScreenPercentageDesktopMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScreenPercentageDesktopMode_MetaData), NewProp_DefaultScreenPercentageDesktopMode_MetaData) }; // 4136715601
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageMobileMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageMobileMode = { "DefaultScreenPercentageMobileMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultScreenPercentageMobileMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScreenPercentageMobileMode_MetaData), NewProp_DefaultScreenPercentageMobileMode_MetaData) }; // 4136715601
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageVRMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageVRMode = { "DefaultScreenPercentageVRMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultScreenPercentageVRMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScreenPercentageVRMode_MetaData), NewProp_DefaultScreenPercentageVRMode_MetaData) }; // 4136715601
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentagePathTracerMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentagePathTracerMode = { "DefaultScreenPercentagePathTracerMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultScreenPercentagePathTracerMode), Z_Construct_UEnum_Engine_EScreenPercentageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultScreenPercentagePathTracerMode_MetaData), NewProp_DefaultScreenPercentagePathTracerMode_MetaData) }; // 4136715601
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bRenderUnbuiltPreviewShadowsInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame = { "bRenderUnbuiltPreviewShadowsInGame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData), NewProp_bRenderUnbuiltPreviewShadowsInGame_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bStencilForLODDither = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither = { "bStencilForLODDither", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStencilForLODDither_MetaData), NewProp_bStencilForLODDither_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass = { "EarlyZPass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, EarlyZPass), Z_Construct_UEnum_Engine_EEarlyZPass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EarlyZPass_MetaData), NewProp_EarlyZPass_MetaData) }; // 3550653525
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEarlyZPassOnlyMaterialMasking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking = { "bEarlyZPassOnlyMaterialMasking", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEarlyZPassOnlyMaterialMasking_MetaData), NewProp_bEarlyZPassOnlyMaterialMasking_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableCSMCaching = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching = { "bEnableCSMCaching", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCSMCaching_MetaData), NewProp_bEnableCSMCaching_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer = { "bDBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDBuffer_MetaData), NewProp_bDBuffer_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod = { "ClearSceneMethod", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, ClearSceneMethod), Z_Construct_UEnum_Engine_EClearSceneOptions, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearSceneMethod_MetaData), NewProp_ClearSceneMethod_MetaData) }; // 559062915
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass = { "VelocityPass", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VelocityPass), Z_Construct_UEnum_Engine_EVelocityOutputPass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityPass_MetaData), NewProp_VelocityPass_MetaData) }; // 1134982849
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity = { "VertexDeformationOutputsVelocity", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VertexDeformationOutputsVelocity), Z_Construct_UEnum_Engine_EVertexDeformationOutputsVelocity, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexDeformationOutputsVelocity_MetaData), NewProp_VertexDeformationOutputsVelocity_MetaData) }; // 287859434
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSelectiveBasePassOutputs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs = { "bSelectiveBasePassOutputs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelectiveBasePassOutputs_MetaData), NewProp_bSelectiveBasePassOutputs_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDefaultParticleCutouts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts = { "bDefaultParticleCutouts", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDefaultParticleCutouts_MetaData), NewProp_bDefaultParticleCutouts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX = { "GPUSimulationTextureSizeX", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, GPUSimulationTextureSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSimulationTextureSizeX_MetaData), NewProp_GPUSimulationTextureSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY = { "GPUSimulationTextureSizeY", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, GPUSimulationTextureSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GPUSimulationTextureSizeY_MetaData), NewProp_GPUSimulationTextureSizeY_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bGlobalClipPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane = { "bGlobalClipPlane", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGlobalClipPlane_MetaData), NewProp_bGlobalClipPlane_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat = { "GBufferFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, GBufferFormat), Z_Construct_UEnum_Engine_EGBufferFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GBufferFormat_MetaData), NewProp_GBufferFormat_MetaData) }; // 386253386
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bUseGPUMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets = { "bUseGPUMorphTargets", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGPUMorphTargets_MetaData), NewProp_bUseGPUMorphTargets_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MorphTargetMaxBlendWeight = { "MorphTargetMaxBlendWeight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MorphTargetMaxBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MorphTargetMaxBlendWeight_MetaData), NewProp_MorphTargetMaxBlendWeight_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportSkyAtmosphere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere = { "bSupportSkyAtmosphere", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportSkyAtmosphere_MetaData), NewProp_bSupportSkyAtmosphere_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportSkyAtmosphereAffectsHeightFog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog = { "bSupportSkyAtmosphereAffectsHeightFog", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData), NewProp_bSupportSkyAtmosphereAffectsHeightFog_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLocalFogVolumes_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportLocalFogVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLocalFogVolumes = { "bSupportLocalFogVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLocalFogVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLocalFogVolumes_MetaData), NewProp_bSupportLocalFogVolumes_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportCloudShadowOnForwardLitTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent = { "bSupportCloudShadowOnForwardLitTranslucent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData), NewProp_bSupportCloudShadowOnForwardLitTranslucent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_LightFunctionAtlasPixelFormat = { "LightFunctionAtlasPixelFormat", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, LightFunctionAtlasPixelFormat), Z_Construct_UEnum_Engine_ELightFunctionAtlasPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightFunctionAtlasPixelFormat_MetaData), NewProp_LightFunctionAtlasPixelFormat_MetaData) }; // 78756766
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bVolumetricFogUsesLightFunctionAtlas_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bVolumetricFogUsesLightFunctionAtlas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bVolumetricFogUsesLightFunctionAtlas = { "bVolumetricFogUsesLightFunctionAtlas", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bVolumetricFogUsesLightFunctionAtlas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVolumetricFogUsesLightFunctionAtlas_MetaData), NewProp_bVolumetricFogUsesLightFunctionAtlas_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bDeferredLightingUsesLightFunctionAtlas_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bDeferredLightingUsesLightFunctionAtlas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDeferredLightingUsesLightFunctionAtlas = { "bDeferredLightingUsesLightFunctionAtlas", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bDeferredLightingUsesLightFunctionAtlas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDeferredLightingUsesLightFunctionAtlas_MetaData), NewProp_bDeferredLightingUsesLightFunctionAtlas_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSingleLayerWaterUsesLightFunctionAtlas_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSingleLayerWaterUsesLightFunctionAtlas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSingleLayerWaterUsesLightFunctionAtlas = { "bSingleLayerWaterUsesLightFunctionAtlas", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSingleLayerWaterUsesLightFunctionAtlas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleLayerWaterUsesLightFunctionAtlas_MetaData), NewProp_bSingleLayerWaterUsesLightFunctionAtlas_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bTranslucentUsesLightFunctionAtlas_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bTranslucentUsesLightFunctionAtlas = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bTranslucentUsesLightFunctionAtlas = { "bTranslucentUsesLightFunctionAtlas", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bTranslucentUsesLightFunctionAtlas_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTranslucentUsesLightFunctionAtlas_MetaData), NewProp_bTranslucentUsesLightFunctionAtlas_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportIESProfileOnTranslucent_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportIESProfileOnTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportIESProfileOnTranslucent = { "bSupportIESProfileOnTranslucent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportIESProfileOnTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportIESProfileOnTranslucent_MetaData), NewProp_bSupportIESProfileOnTranslucent_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportRectLightOnTranslucent_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportRectLightOnTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportRectLightOnTranslucent = { "bSupportRectLightOnTranslucent", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportRectLightOnTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportRectLightOnTranslucent_MetaData), NewProp_bSupportRectLightOnTranslucent_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bNvidiaAftermathEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled = { "bNvidiaAftermathEnabled", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNvidiaAftermathEnabled_MetaData), NewProp_bNvidiaAftermathEnabled_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMultiView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView = { "bMultiView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMultiView_MetaData), NewProp_bMultiView_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobilePostProcessing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing = { "bMobilePostProcessing", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobilePostProcessing_MetaData), NewProp_bMobilePostProcessing_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileMultiView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView = { "bMobileMultiView", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileMultiView_MetaData), NewProp_bMobileMultiView_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileUseHWsRGBEncoding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding = { "bMobileUseHWsRGBEncoding", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileUseHWsRGBEncoding_MetaData), NewProp_bMobileUseHWsRGBEncoding_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bRoundRobinOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion = { "bRoundRobinOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoundRobinOcclusion_MetaData), NewProp_bRoundRobinOcclusion_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMeshStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming = { "bMeshStreaming", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMeshStreaming_MetaData), NewProp_bMeshStreaming_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableHeterogeneousVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes = { "bEnableHeterogeneousVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHeterogeneousVolumes_MetaData), NewProp_bEnableHeterogeneousVolumes_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bShouldHeterogeneousVolumesCastShadows_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bShouldHeterogeneousVolumesCastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bShouldHeterogeneousVolumesCastShadows = { "bShouldHeterogeneousVolumesCastShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bShouldHeterogeneousVolumesCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldHeterogeneousVolumesCastShadows_MetaData), NewProp_bShouldHeterogeneousVolumesCastShadows_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompositeHeterogeneousVolumesWithTranslucency_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bCompositeHeterogeneousVolumesWithTranslucency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompositeHeterogeneousVolumesWithTranslucency = { "bCompositeHeterogeneousVolumesWithTranslucency", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompositeHeterogeneousVolumesWithTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCompositeHeterogeneousVolumesWithTranslucency_MetaData), NewProp_bCompositeHeterogeneousVolumesWithTranslucency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold = { "WireframeCullThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, WireframeCullThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireframeCullThreshold_MetaData), NewProp_WireframeCullThreshold_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportStationarySkylight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight = { "bSupportStationarySkylight", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportStationarySkylight_MetaData), NewProp_bSupportStationarySkylight_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportLowQualityLightmaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps = { "bSupportLowQualityLightmaps", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportLowQualityLightmaps_MetaData), NewProp_bSupportLowQualityLightmaps_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportPointLightWholeSceneShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows = { "bSupportPointLightWholeSceneShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportPointLightWholeSceneShadows_MetaData), NewProp_bSupportPointLightWholeSceneShadows_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportTranslucentPerObjectShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow = { "bSupportTranslucentPerObjectShadow", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportTranslucentPerObjectShadow_MetaData), NewProp_bSupportTranslucentPerObjectShadow_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportCloudShadowOnSingleLayerWater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater = { "bSupportCloudShadowOnSingleLayerWater", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData), NewProp_bSupportCloudShadowOnSingleLayerWater_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableSubstrate_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bEnableSubstrate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableSubstrate = { "bEnableSubstrate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableSubstrate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSubstrate_MetaData), NewProp_bEnableSubstrate_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateOpaqueMaterialRoughRefraction_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->SubstrateOpaqueMaterialRoughRefraction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateOpaqueMaterialRoughRefraction = { "SubstrateOpaqueMaterialRoughRefraction", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateOpaqueMaterialRoughRefraction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstrateOpaqueMaterialRoughRefraction_MetaData), NewProp_SubstrateOpaqueMaterialRoughRefraction_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateDebugAdvancedVisualizationShaders_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->SubstrateDebugAdvancedVisualizationShaders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateDebugAdvancedVisualizationShaders = { "SubstrateDebugAdvancedVisualizationShaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateDebugAdvancedVisualizationShaders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubstrateDebugAdvancedVisualizationShaders_MetaData), NewProp_SubstrateDebugAdvancedVisualizationShaders_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMaterialRoughDiffuse = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse = { "bMaterialRoughDiffuse", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaterialRoughDiffuse_MetaData), NewProp_bMaterialRoughDiffuse_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMaterialEnergyConservation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation = { "bMaterialEnergyConservation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaterialEnergyConservation_MetaData), NewProp_bMaterialEnergyConservation_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bOrderedIndependentTransparencyEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable = { "bOrderedIndependentTransparencyEnable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOrderedIndependentTransparencyEnable_MetaData), NewProp_bOrderedIndependentTransparencyEnable_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHairStrandsAutoLODMode_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bUseHairStrandsAutoLODMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHairStrandsAutoLODMode = { "bUseHairStrandsAutoLODMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHairStrandsAutoLODMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHairStrandsAutoLODMode_MetaData), NewProp_bUseHairStrandsAutoLODMode_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportSkinCacheShaders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders = { "bSupportSkinCacheShaders", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportSkinCacheShaders_MetaData), NewProp_bSupportSkinCacheShaders_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSkipCompilingGPUSkinVF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF = { "bSkipCompilingGPUSkinVF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipCompilingGPUSkinVF_MetaData), NewProp_bSkipCompilingGPUSkinVF_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior = { "DefaultSkinCacheBehavior", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultSkinCacheBehavior), Z_Construct_UEnum_Engine_ESkinCacheDefaultBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSkinCacheBehavior_MetaData), NewProp_DefaultSkinCacheBehavior_MetaData) }; // 3858089192
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB = { "SkinCacheSceneMemoryLimitInMB", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, SkinCacheSceneMemoryLimitInMB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkinCacheSceneMemoryLimitInMB_MetaData), NewProp_SkinCacheSceneMemoryLimitInMB_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileEnableStaticAndCSMShadowReceivers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers = { "bMobileEnableStaticAndCSMShadowReceivers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData), NewProp_bMobileEnableStaticAndCSMShadowReceivers_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileEnableMovableLightCSMShaderCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling = { "bMobileEnableMovableLightCSMShaderCulling", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData), NewProp_bMobileEnableMovableLightCSMShaderCulling_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileLocalLightSetting = { "MobileLocalLightSetting", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MobileLocalLightSetting), Z_Construct_UEnum_Engine_EMobileLocalLightSetting, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileLocalLightSetting_MetaData), NewProp_MobileLocalLightSetting_MetaData) }; // 3415821172
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileForwardEnableClusteredReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections = { "bMobileForwardEnableClusteredReflections", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileForwardEnableClusteredReflections_MetaData), NewProp_bMobileForwardEnableClusteredReflections_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileEnableNoPrecomputedLightingCSMShader = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader = { "bMobileEnableNoPrecomputedLightingCSMShader", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData), NewProp_bMobileEnableNoPrecomputedLightingCSMShader_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileAllowDistanceFieldShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows = { "bMobileAllowDistanceFieldShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileAllowDistanceFieldShadows_MetaData), NewProp_bMobileAllowDistanceFieldShadows_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileAllowMovableDirectionalLights = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights = { "bMobileAllowMovableDirectionalLights", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileAllowMovableDirectionalLights_MetaData), NewProp_bMobileAllowMovableDirectionalLights_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileAllowMovableSpotlightShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows = { "bMobileAllowMovableSpotlightShadows", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileAllowMovableSpotlightShadows_MetaData), NewProp_bMobileAllowMovableSpotlightShadows_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupport16BitBoneIndex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex = { "bSupport16BitBoneIndex", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupport16BitBoneIndex_MetaData), NewProp_bSupport16BitBoneIndex_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bGPUSkinLimit2BoneInfluences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences = { "bGPUSkinLimit2BoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGPUSkinLimit2BoneInfluences_MetaData), NewProp_bGPUSkinLimit2BoneInfluences_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportDepthOnlyIndexBuffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers = { "bSupportDepthOnlyIndexBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportDepthOnlyIndexBuffers_MetaData), NewProp_bSupportDepthOnlyIndexBuffers_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bSupportReversedIndexBuffers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers = { "bSupportReversedIndexBuffers", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportReversedIndexBuffers_MetaData), NewProp_bSupportReversedIndexBuffers_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileAmbientOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion = { "bMobileAmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileAmbientOcclusion_MetaData), NewProp_bMobileAmbientOcclusion_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDBuffer_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileDBuffer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDBuffer = { "bMobileDBuffer", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDBuffer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileDBuffer_MetaData), NewProp_bMobileDBuffer_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bUseUnlimitedBoneInfluences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences = { "bUseUnlimitedBoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseUnlimitedBoneInfluences_MetaData), NewProp_bUseUnlimitedBoneInfluences_MetaData) };
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bAlwaysUseDeformerForUnlimitedBoneInfluences = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences = { "bAlwaysUseDeformerForUnlimitedBoneInfluences", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences_MetaData), NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold = { "UnlimitedBonInfluencesThreshold", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, UnlimitedBonInfluencesThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnlimitedBonInfluencesThreshold_MetaData), NewProp_UnlimitedBonInfluencesThreshold_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit = { "DefaultBoneInfluenceLimit", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, DefaultBoneInfluenceLimit), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBoneInfluenceLimit_MetaData), NewProp_DefaultBoneInfluenceLimit_MetaData) }; // 1262733314
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones = { "MaxSkinBones", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MaxSkinBones), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSkinBones_MetaData), NewProp_MaxSkinBones_MetaData) }; // 1262733314
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode = { "MobilePlanarReflectionMode", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, MobilePlanarReflectionMode), Z_Construct_UEnum_Engine_EMobilePlanarReflectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobilePlanarReflectionMode_MetaData), NewProp_MobilePlanarReflectionMode_MetaData) }; // 3506034162
void Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_SetBit(void* Obj)
{
	((URendererSettings*)Obj)->bMobileSupportsGen4TAA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA = { "bMobileSupportsGen4TAA", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererSettings), &Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileSupportsGen4TAA_MetaData), NewProp_bMobileSupportsGen4TAA_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs = { "bStreamSkeletalMeshLODs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, bStreamSkeletalMeshLODs), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreamSkeletalMeshLODs_MetaData), NewProp_bStreamSkeletalMeshLODs_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs = { "bDiscardSkeletalMeshOptionalLODs", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, bDiscardSkeletalMeshOptionalLODs), Z_Construct_UScriptStruct_FPerPlatformBool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData), NewProp_bDiscardSkeletalMeshOptionalLODs_MetaData) }; // 846681800
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath = { "VisualizeCalibrationColorMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationColorMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeCalibrationColorMaterialPath_MetaData), NewProp_VisualizeCalibrationColorMaterialPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath = { "VisualizeCalibrationCustomMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationCustomMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeCalibrationCustomMaterialPath_MetaData), NewProp_VisualizeCalibrationCustomMaterialPath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath = { "VisualizeCalibrationGrayscaleMaterialPath", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URendererSettings, VisualizeCalibrationGrayscaleMaterialPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData), NewProp_VisualizeCalibrationGrayscaleMaterialPath_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileShadingPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportDeferredOnOpenGL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportGPUScene,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileAntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileFloatPrecisionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDitheredLODTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileVirtualTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardUnusedQualityLevels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ShaderCompressionFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bOcclusionCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForEarlyZPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MinScreenRadiusForCSMdepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bPrecomputedVisibilityWarning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTextureStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseDXT5NormalMaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureEnableAutoImport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTexturedLightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVirtualTextureAnisotropicFiltering,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableVirtualTextureOpacityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureTileBorderSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VirtualTextureFeedbackFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WorkingColorSpaceChoice,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_RedChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GreenChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_BlueChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WhiteChromaticityCoordinate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bClearCoatEnableSecondNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DynamicGlobalIllumination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_Reflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionCaptureResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ReflectionEnvironmentLightmapMixBasedOnRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHardwareRayTracingForLumen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayLightingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenFrontLayerTranslucencyReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenSoftwareTracingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LumenRayTracedTranslucentRefractions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ShadowMapMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingSkylight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableRayTracingTextureLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnablePathTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGenerateMeshDistanceFields,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DistanceFieldVoxelDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bAllowStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseNormalMapsForStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bForwardShading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVertexFoggingForOpaque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSeparateTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortPolicy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_TranslucentSortAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bLocalFogVolumeApplyOnTranslucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_FoveationLevel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDynamicFoveation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_CustomDepthStencil,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bCustomDepthTaaJitter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableAlphaChannelInPostProcessing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureBloom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAmbientOcclusionStaticFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureAutoExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposure,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAutoExposureBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bExtendDefaultLuminanceRangeInAutoExposureSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureLocalExposureHighlightContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureLocalExposureShadowContrast,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureMotionBlur,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultFeatureLensFlare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTemporalUpsampling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultFeatureAntiAliasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MSAASampleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultLightUnits,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBackBufferPixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultManualScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageDesktopMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageDesktopMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageMobileMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageMobileMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageVRMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentageVRMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentagePathTracerMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultScreenPercentagePathTracerMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bRenderUnbuiltPreviewShadowsInGame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bStencilForLODDither,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_EarlyZPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEarlyZPassOnlyMaterialMasking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableCSMCaching,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_ClearSceneMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VelocityPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VertexDeformationOutputsVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSelectiveBasePassOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDefaultParticleCutouts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GPUSimulationTextureSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGlobalClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_GBufferFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseGPUMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MorphTargetMaxBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkyAtmosphereAffectsHeightFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLocalFogVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnForwardLitTranslucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_LightFunctionAtlasPixelFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bVolumetricFogUsesLightFunctionAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDeferredLightingUsesLightFunctionAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSingleLayerWaterUsesLightFunctionAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bTranslucentUsesLightFunctionAtlas,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportIESProfileOnTranslucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportRectLightOnTranslucent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bNvidiaAftermathEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMultiView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobilePostProcessing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileMultiView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileUseHWsRGBEncoding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bRoundRobinOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMeshStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableHeterogeneousVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bShouldHeterogeneousVolumesCastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bCompositeHeterogeneousVolumesWithTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_WireframeCullThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportStationarySkylight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportLowQualityLightmaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportPointLightWholeSceneShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportTranslucentPerObjectShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportCloudShadowOnSingleLayerWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bEnableSubstrate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateOpaqueMaterialRoughRefraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_SubstrateDebugAdvancedVisualizationShaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialRoughDiffuse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMaterialEnergyConservation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bOrderedIndependentTransparencyEnable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseHairStrandsAutoLODMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportSkinCacheShaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSkipCompilingGPUSkinVF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultSkinCacheBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_SkinCacheSceneMemoryLimitInMB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableStaticAndCSMShadowReceivers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableMovableLightCSMShaderCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobileLocalLightSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileForwardEnableClusteredReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileEnableNoPrecomputedLightingCSMShader,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowDistanceFieldShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableDirectionalLights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAllowMovableSpotlightShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupport16BitBoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bGPUSkinLimit2BoneInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportDepthOnlyIndexBuffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bSupportReversedIndexBuffers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileAmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileDBuffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bUseUnlimitedBoneInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bAlwaysUseDeformerForUnlimitedBoneInfluences,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_UnlimitedBonInfluencesThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_DefaultBoneInfluenceLimit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MaxSkinBones,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_MobilePlanarReflectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bMobileSupportsGen4TAA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bStreamSkeletalMeshLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_bDiscardSkeletalMeshOptionalLODs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationColorMaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationCustomMaterialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererSettings_Statics::NewProp_VisualizeCalibrationGrayscaleMaterialPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URendererSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URendererSettings_Statics::ClassParams = {
	&URendererSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URendererSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::PropPointers),
	0,
	0x000800A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URendererSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URendererSettings()
{
	if (!Z_Registration_Info_UClass_URendererSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URendererSettings.OuterSingleton, Z_Construct_UClass_URendererSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URendererSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URendererSettings>()
{
	return URendererSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URendererSettings);
URendererSettings::~URendererSettings() {}
// End Class URendererSettings

// Begin Class URendererOverrideSettings
void URendererOverrideSettings::StaticRegisterNativesURendererOverrideSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URendererOverrideSettings);
UClass* Z_Construct_UClass_URendererOverrideSettings_NoRegister()
{
	return URendererOverrideSettings::StaticClass();
}
struct Z_Construct_UClass_URendererOverrideSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Rendering Overrides (Local)" },
		{ "IncludePath", "Engine/RendererSettings.h" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSupportAllShaderPermutations_MetaData[] = {
		{ "Category", "ShaderPermutationReduction" },
		{ "Comment", "/**\n\x09\x09\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"\n\x09*/" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "ConsoleVariable", "r.SupportAllShaderPermutations" },
		{ "DisplayName", "Force all shader permutation support" },
		{ "ModuleRelativePath", "Classes/Engine/RendererSettings.h" },
		{ "ToolTip", "\"Enabling will locally override all ShaderPermutationReduction settings from the Renderer section to be enabled.  Saved to local user config only..\"" },
	};
#endif // WITH_METADATA
	static void NewProp_bSupportAllShaderPermutations_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSupportAllShaderPermutations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URendererOverrideSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_SetBit(void* Obj)
{
	((URendererOverrideSettings*)Obj)->bSupportAllShaderPermutations = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations = { "bSupportAllShaderPermutations", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(URendererOverrideSettings), &Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSupportAllShaderPermutations_MetaData), NewProp_bSupportAllShaderPermutations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URendererOverrideSettings_Statics::NewProp_bSupportAllShaderPermutations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URendererOverrideSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URendererOverrideSettings_Statics::ClassParams = {
	&URendererOverrideSettings::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::PropPointers),
	0,
	0x000800E4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URendererOverrideSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URendererOverrideSettings()
{
	if (!Z_Registration_Info_UClass_URendererOverrideSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URendererOverrideSettings.OuterSingleton, Z_Construct_UClass_URendererOverrideSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URendererOverrideSettings.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<URendererOverrideSettings>()
{
	return URendererOverrideSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URendererOverrideSettings);
URendererOverrideSettings::~URendererOverrideSettings() {}
// End Class URendererOverrideSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EClearSceneOptions_StaticEnum, TEXT("EClearSceneOptions"), &Z_Registration_Info_UEnum_EClearSceneOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 559062915U) },
		{ ECompositingSampleCount_StaticEnum, TEXT("ECompositingSampleCount"), &Z_Registration_Info_UEnum_ECompositingSampleCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 237758145U) },
		{ ECustomDepthStencil_StaticEnum, TEXT("ECustomDepthStencil"), &Z_Registration_Info_UEnum_ECustomDepthStencil, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1998646889U) },
		{ EEarlyZPass_StaticEnum, TEXT("EEarlyZPass"), &Z_Registration_Info_UEnum_EEarlyZPass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3550653525U) },
		{ EVelocityOutputPass_StaticEnum, TEXT("EVelocityOutputPass"), &Z_Registration_Info_UEnum_EVelocityOutputPass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1134982849U) },
		{ EVertexDeformationOutputsVelocity_StaticEnum, TEXT("EVertexDeformationOutputsVelocity"), &Z_Registration_Info_UEnum_EVertexDeformationOutputsVelocity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 287859434U) },
		{ EAlphaChannelMode_StaticEnum, TEXT("EAlphaChannelMode"), &Z_Registration_Info_UEnum_EAlphaChannelMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2174415650U) },
		{ EAutoExposureMethodUI_StaticEnum, TEXT("EAutoExposureMethodUI"), &Z_Registration_Info_UEnum_EAutoExposureMethodUI, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2459228929U) },
		{ EDefaultBackBufferPixelFormat_StaticEnum, TEXT("EDefaultBackBufferPixelFormat"), &Z_Registration_Info_UEnum_EDefaultBackBufferPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3285217297U) },
		{ EFixedFoveationLevels_StaticEnum, TEXT("EFixedFoveationLevels"), &Z_Registration_Info_UEnum_EFixedFoveationLevels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3683826976U) },
		{ EMobileAntiAliasingMethod_StaticEnum, TEXT("EMobileAntiAliasingMethod"), &Z_Registration_Info_UEnum_EMobileAntiAliasingMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3861066958U) },
		{ EMobileFloatPrecisionMode_StaticEnum, TEXT("EMobileFloatPrecisionMode"), &Z_Registration_Info_UEnum_EMobileFloatPrecisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1861866984U) },
		{ EMobileShadingPath_StaticEnum, TEXT("EMobileShadingPath"), &Z_Registration_Info_UEnum_EMobileShadingPath, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 903186649U) },
		{ ELightFunctionAtlasPixelFormat_StaticEnum, TEXT("ELightFunctionAtlasPixelFormat"), &Z_Registration_Info_UEnum_ELightFunctionAtlasPixelFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 78756766U) },
		{ EShaderCompressionFormat_StaticEnum, TEXT("EShaderCompressionFormat"), &Z_Registration_Info_UEnum_EShaderCompressionFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2796130150U) },
		{ ELumenSoftwareTracingMode_StaticEnum, TEXT("ELumenSoftwareTracingMode"), &Z_Registration_Info_UEnum_ELumenSoftwareTracingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2919508242U) },
		{ ELumenRayLightingMode_StaticEnum, TEXT("ELumenRayLightingMode"), &Z_Registration_Info_UEnum_ELumenRayLightingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1348078731U) },
		{ EWorkingColorSpace_StaticEnum, TEXT("EWorkingColorSpace"), &Z_Registration_Info_UEnum_EWorkingColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 992633440U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URendererSettings, URendererSettings::StaticClass, TEXT("URendererSettings"), &Z_Registration_Info_UClass_URendererSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URendererSettings), 1924566162U) },
		{ Z_Construct_UClass_URendererOverrideSettings, URendererOverrideSettings::StaticClass, TEXT("URendererOverrideSettings"), &Z_Registration_Info_UClass_URendererOverrideSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URendererOverrideSettings), 488333147U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_2014793223(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_RendererSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
