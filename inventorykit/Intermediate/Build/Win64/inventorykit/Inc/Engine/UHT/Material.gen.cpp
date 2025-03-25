// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialOverrideNanite.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterial() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
ENGINE_API UClass* Z_Construct_UClass_UMaterial();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialEditorOnlyData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionComment_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData();
ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterialMask_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendableLocation();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDecalBlendMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDecalResponse();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialDomain();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialFloatPrecisionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingRate();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialStencilCompare();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialTranslucencyPass();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERefractionCoverageMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERefractionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETranslucencyLightingMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDisplacementScaling();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialAttributesInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialExpressionCollection();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverrideNanite();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialShadingModelField();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterGroupData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FShadingModelMaterialInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSubstrateMaterialInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector2MaterialInput();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorMaterialInput();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDecalBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecalBlendMode;
static UEnum* EDecalBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDecalBlendMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDecalBlendMode"));
	}
	return Z_Registration_Info_UEnum_EDecalBlendMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDecalBlendMode>()
{
	return EDecalBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDecalBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines how the GBuffer channels are getting manipulated by a decal material pass. Actual index is used to control shader parameters so don't change order. */" },
		{ "DBM_AlphaComposite.Comment", "/** Blend with existing scene color. Decal color is already pre-multiplied by alpha. */" },
		{ "DBM_AlphaComposite.DisplayName", "AlphaComposite (Premultiplied Alpha)" },
		{ "DBM_AlphaComposite.Name", "DBM_AlphaComposite" },
		{ "DBM_AlphaComposite.ToolTip", "Blend with existing scene color. Decal color is already pre-multiplied by alpha." },
		{ "DBM_AmbientOcclusion.Comment", "/** Ambient occlusion. */" },
		{ "DBM_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "DBM_AmbientOcclusion.Name", "DBM_AmbientOcclusion" },
		{ "DBM_AmbientOcclusion.ToolTip", "Ambient occlusion." },
		{ "DBM_DBuffer_AlphaComposite.DisplayName", "DBuffer AlphaComposite (Premultiplied Alpha)" },
		{ "DBM_DBuffer_AlphaComposite.Hidden", "" },
		{ "DBM_DBuffer_AlphaComposite.Name", "DBM_DBuffer_AlphaComposite" },
		{ "DBM_DBuffer_Color.Comment", "/** Put into DBuffer to work for baked lighting as well. */" },
		{ "DBM_DBuffer_Color.DisplayName", "DBuffer Translucent Color" },
		{ "DBM_DBuffer_Color.Name", "DBM_DBuffer_Color" },
		{ "DBM_DBuffer_Color.ToolTip", "Put into DBuffer to work for baked lighting as well." },
		{ "DBM_DBuffer_ColorNormal.Comment", "/** Put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Color if normal is not hooked up). */" },
		{ "DBM_DBuffer_ColorNormal.DisplayName", "DBuffer Translucent Color,Normal" },
		{ "DBM_DBuffer_ColorNormal.Name", "DBM_DBuffer_ColorNormal" },
		{ "DBM_DBuffer_ColorNormal.ToolTip", "Put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Color if normal is not hooked up)." },
		{ "DBM_DBuffer_ColorNormalRoughness.Comment", "/** Put into DBuffer to work for baked lighting as well (becomes DBM_TranslucentNormal if normal is not hooked up). */" },
		{ "DBM_DBuffer_ColorNormalRoughness.DisplayName", "DBuffer Translucent Color,Normal,Roughness" },
		{ "DBM_DBuffer_ColorNormalRoughness.Name", "DBM_DBuffer_ColorNormalRoughness" },
		{ "DBM_DBuffer_ColorNormalRoughness.ToolTip", "Put into DBuffer to work for baked lighting as well (becomes DBM_TranslucentNormal if normal is not hooked up)." },
		{ "DBM_DBuffer_ColorRoughness.Comment", "/** Put into DBuffer to work for baked lighting as well. */" },
		{ "DBM_DBuffer_ColorRoughness.DisplayName", "DBuffer Translucent Color,Roughness" },
		{ "DBM_DBuffer_ColorRoughness.Name", "DBM_DBuffer_ColorRoughness" },
		{ "DBM_DBuffer_ColorRoughness.ToolTip", "Put into DBuffer to work for baked lighting as well." },
		{ "DBM_DBuffer_Emissive.Comment", "/** Internal DBffer decal blend modes used for auto-converted decals */" },
		{ "DBM_DBuffer_Emissive.DisplayName", "DBuffer Emissive" },
		{ "DBM_DBuffer_Emissive.Hidden", "" },
		{ "DBM_DBuffer_Emissive.Name", "DBM_DBuffer_Emissive" },
		{ "DBM_DBuffer_Emissive.ToolTip", "Internal DBffer decal blend modes used for auto-converted decals" },
		{ "DBM_DBuffer_EmissiveAlphaComposite.DisplayName", "DBuffer Emissive AlphaComposite (Premultiplied Alpha)" },
		{ "DBM_DBuffer_EmissiveAlphaComposite.Hidden", "" },
		{ "DBM_DBuffer_EmissiveAlphaComposite.Name", "DBM_DBuffer_EmissiveAlphaComposite" },
		{ "DBM_DBuffer_Normal.Comment", "/** Put into DBuffer to work for baked lighting as well. */" },
		{ "DBM_DBuffer_Normal.DisplayName", "DBuffer Translucent Normal" },
		{ "DBM_DBuffer_Normal.Name", "DBM_DBuffer_Normal" },
		{ "DBM_DBuffer_Normal.ToolTip", "Put into DBuffer to work for baked lighting as well." },
		{ "DBM_DBuffer_NormalRoughness.Comment", "/** Put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Roughness if normal is not hooked up). */" },
		{ "DBM_DBuffer_NormalRoughness.DisplayName", "DBuffer Translucent Normal,Roughness" },
		{ "DBM_DBuffer_NormalRoughness.Name", "DBM_DBuffer_NormalRoughness" },
		{ "DBM_DBuffer_NormalRoughness.ToolTip", "Put into DBuffer to work for baked lighting as well (becomes DBM_DBuffer_Roughness if normal is not hooked up)." },
		{ "DBM_DBuffer_Roughness.Comment", "/** Put into DBuffer to work for baked lighting as well. */" },
		{ "DBM_DBuffer_Roughness.DisplayName", "DBuffer Translucent Roughness" },
		{ "DBM_DBuffer_Roughness.Name", "DBM_DBuffer_Roughness" },
		{ "DBM_DBuffer_Roughness.ToolTip", "Put into DBuffer to work for baked lighting as well." },
		{ "DBM_Emissive.Comment", "/** Additive emissive only. */" },
		{ "DBM_Emissive.DisplayName", "Emissive" },
		{ "DBM_Emissive.Name", "DBM_Emissive" },
		{ "DBM_Emissive.ToolTip", "Additive emissive only." },
		{ "DBM_MAX.Name", "DBM_MAX" },
		{ "DBM_Normal.Comment", "/** Only blend normal, updating the GBuffer, does not work for baked lighting. */" },
		{ "DBM_Normal.DisplayName", "Normal" },
		{ "DBM_Normal.Name", "DBM_Normal" },
		{ "DBM_Normal.ToolTip", "Only blend normal, updating the GBuffer, does not work for baked lighting." },
		{ "DBM_Stain.Comment", "/** Modulate BaseColor, blend rest, updating the GBuffer, does not work for baked lighting. Does not work in DBuffer mode (approximated as Translucent). */" },
		{ "DBM_Stain.DisplayName", "Stain" },
		{ "DBM_Stain.Name", "DBM_Stain" },
		{ "DBM_Stain.ToolTip", "Modulate BaseColor, blend rest, updating the GBuffer, does not work for baked lighting. Does not work in DBuffer mode (approximated as Translucent)." },
		{ "DBM_Translucent.Comment", "/** Blend full material, updating the GBuffer, does not work for baked lighting. */" },
		{ "DBM_Translucent.DisplayName", "Translucent" },
		{ "DBM_Translucent.Name", "DBM_Translucent" },
		{ "DBM_Translucent.ToolTip", "Blend full material, updating the GBuffer, does not work for baked lighting." },
		{ "DBM_Volumetric_DistanceFunction.Comment", "/** Output signed distance in Opacity depending on LightVector. Note: Can be costly, no shadow casting but receiving, no per pixel normal yet, no quality settings yet */" },
		{ "DBM_Volumetric_DistanceFunction.DisplayName", "Volumetric Distance Function (experimental)" },
		{ "DBM_Volumetric_DistanceFunction.Name", "DBM_Volumetric_DistanceFunction" },
		{ "DBM_Volumetric_DistanceFunction.ToolTip", "Output signed distance in Opacity depending on LightVector. Note: Can be costly, no shadow casting but receiving, no per pixel normal yet, no quality settings yet" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Defines how the GBuffer channels are getting manipulated by a decal material pass. Actual index is used to control shader parameters so don't change order." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "DBM_Translucent", (int64)DBM_Translucent },
		{ "DBM_Stain", (int64)DBM_Stain },
		{ "DBM_Normal", (int64)DBM_Normal },
		{ "DBM_Emissive", (int64)DBM_Emissive },
		{ "DBM_DBuffer_ColorNormalRoughness", (int64)DBM_DBuffer_ColorNormalRoughness },
		{ "DBM_DBuffer_Color", (int64)DBM_DBuffer_Color },
		{ "DBM_DBuffer_ColorNormal", (int64)DBM_DBuffer_ColorNormal },
		{ "DBM_DBuffer_ColorRoughness", (int64)DBM_DBuffer_ColorRoughness },
		{ "DBM_DBuffer_Normal", (int64)DBM_DBuffer_Normal },
		{ "DBM_DBuffer_NormalRoughness", (int64)DBM_DBuffer_NormalRoughness },
		{ "DBM_DBuffer_Roughness", (int64)DBM_DBuffer_Roughness },
		{ "DBM_DBuffer_Emissive", (int64)DBM_DBuffer_Emissive },
		{ "DBM_DBuffer_AlphaComposite", (int64)DBM_DBuffer_AlphaComposite },
		{ "DBM_DBuffer_EmissiveAlphaComposite", (int64)DBM_DBuffer_EmissiveAlphaComposite },
		{ "DBM_Volumetric_DistanceFunction", (int64)DBM_Volumetric_DistanceFunction },
		{ "DBM_AlphaComposite", (int64)DBM_AlphaComposite },
		{ "DBM_AmbientOcclusion", (int64)DBM_AmbientOcclusion },
		{ "DBM_MAX", (int64)DBM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDecalBlendMode",
	"EDecalBlendMode",
	Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDecalBlendMode()
{
	if (!Z_Registration_Info_UEnum_EDecalBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecalBlendMode.InnerSingleton, Z_Construct_UEnum_Engine_EDecalBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDecalBlendMode.InnerSingleton;
}
// End Enum EDecalBlendMode

// Begin Enum EMaterialDecalResponse
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialDecalResponse;
static UEnum* EMaterialDecalResponse_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialDecalResponse, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialDecalResponse"));
	}
	return Z_Registration_Info_UEnum_EMaterialDecalResponse.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialDecalResponse>()
{
	return EMaterialDecalResponse_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines how the material reacts on DBuffer decals, later we can expose more variants between None and Default. */" },
		{ "MDR_Color.Comment", "/** Receive Decals, applies color DBuffer channels. */" },
		{ "MDR_Color.DisplayName", "Color" },
		{ "MDR_Color.Name", "MDR_Color" },
		{ "MDR_Color.ToolTip", "Receive Decals, applies color DBuffer channels." },
		{ "MDR_ColorNormal.Comment", "/** Receive Decals, applies color and normal DBuffer channels. */" },
		{ "MDR_ColorNormal.DisplayName", "Color Normal" },
		{ "MDR_ColorNormal.Name", "MDR_ColorNormal" },
		{ "MDR_ColorNormal.ToolTip", "Receive Decals, applies color and normal DBuffer channels." },
		{ "MDR_ColorNormalRoughness.Comment", "/** Receive Decals, applies all DBuffer channels. */" },
		{ "MDR_ColorNormalRoughness.DisplayName", "Color Normal Roughness" },
		{ "MDR_ColorNormalRoughness.Name", "MDR_ColorNormalRoughness" },
		{ "MDR_ColorNormalRoughness.ToolTip", "Receive Decals, applies all DBuffer channels." },
		{ "MDR_ColorRoughness.Comment", "/** Receive Decals, applies color, roughness, specular and metallic DBuffer channels. */" },
		{ "MDR_ColorRoughness.DisplayName", "Color Roughness" },
		{ "MDR_ColorRoughness.Name", "MDR_ColorRoughness" },
		{ "MDR_ColorRoughness.ToolTip", "Receive Decals, applies color, roughness, specular and metallic DBuffer channels." },
		{ "MDR_MAX.Name", "MDR_MAX" },
		{ "MDR_None.Comment", "/** Do not receive decals (Later we still can read the DBuffer channels to customize the effect, this frees up some interpolators). */" },
		{ "MDR_None.DisplayName", "None" },
		{ "MDR_None.Name", "MDR_None" },
		{ "MDR_None.ToolTip", "Do not receive decals (Later we still can read the DBuffer channels to customize the effect, this frees up some interpolators)." },
		{ "MDR_Normal.Comment", "/** Receive Decals, applies normal DBuffer channels. */" },
		{ "MDR_Normal.DisplayName", "Normal" },
		{ "MDR_Normal.Name", "MDR_Normal" },
		{ "MDR_Normal.ToolTip", "Receive Decals, applies normal DBuffer channels." },
		{ "MDR_NormalRoughness.Comment", "/** Receive Decals, applies normal, roughness, specular and metallic DBuffer channels. */" },
		{ "MDR_NormalRoughness.DisplayName", "Normal Roughness" },
		{ "MDR_NormalRoughness.Name", "MDR_NormalRoughness" },
		{ "MDR_NormalRoughness.ToolTip", "Receive Decals, applies normal, roughness, specular and metallic DBuffer channels." },
		{ "MDR_Roughness.Comment", "/** Receive Decals, applies roughness, specular and metallic DBuffer channels. */" },
		{ "MDR_Roughness.DisplayName", "Roughness" },
		{ "MDR_Roughness.Name", "MDR_Roughness" },
		{ "MDR_Roughness.ToolTip", "Receive Decals, applies roughness, specular and metallic DBuffer channels." },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Defines how the material reacts on DBuffer decals, later we can expose more variants between None and Default." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MDR_None", (int64)MDR_None },
		{ "MDR_ColorNormalRoughness", (int64)MDR_ColorNormalRoughness },
		{ "MDR_Color", (int64)MDR_Color },
		{ "MDR_ColorNormal", (int64)MDR_ColorNormal },
		{ "MDR_ColorRoughness", (int64)MDR_ColorRoughness },
		{ "MDR_Normal", (int64)MDR_Normal },
		{ "MDR_NormalRoughness", (int64)MDR_NormalRoughness },
		{ "MDR_Roughness", (int64)MDR_Roughness },
		{ "MDR_MAX", (int64)MDR_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialDecalResponse",
	"EMaterialDecalResponse",
	Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialDecalResponse()
{
	if (!Z_Registration_Info_UEnum_EMaterialDecalResponse.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialDecalResponse.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialDecalResponse_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialDecalResponse.InnerSingleton;
}
// End Enum EMaterialDecalResponse

// Begin Enum EMaterialTranslucencyPass
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialTranslucencyPass;
static UEnum* EMaterialTranslucencyPass_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialTranslucencyPass, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialTranslucencyPass"));
	}
	return Z_Registration_Info_UEnum_EMaterialTranslucencyPass.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialTranslucencyPass>()
{
	return EMaterialTranslucencyPass_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies which separate translucency pass to render in. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "MTP_AfterDOF.Comment", "/** Render after depth of field. */" },
		{ "MTP_AfterDOF.DisplayName", "After DOF" },
		{ "MTP_AfterDOF.Name", "MTP_AfterDOF" },
		{ "MTP_AfterDOF.ToolTip", "Render after depth of field." },
		{ "MTP_AfterMotionBlur.Comment", "/** Render after motion blur. Disables depth test (the reconstruction post MB and TSR would otherwise flicker due to the TSR camera jittering making the depth buffer unstable). Because of that Lumen high quality reflections is also disabled to avoid visual discrepancy at depth intersection. */" },
		{ "MTP_AfterMotionBlur.DisplayName", "After Motion Blur" },
		{ "MTP_AfterMotionBlur.Name", "MTP_AfterMotionBlur" },
		{ "MTP_AfterMotionBlur.ToolTip", "Render after motion blur. Disables depth test (the reconstruction post MB and TSR would otherwise flicker due to the TSR camera jittering making the depth buffer unstable). Because of that Lumen high quality reflections is also disabled to avoid visual discrepancy at depth intersection." },
		{ "MTP_BeforeDOF.Comment", "/** Render before depth of field. */" },
		{ "MTP_BeforeDOF.DisplayName", "Before DOF" },
		{ "MTP_BeforeDOF.Name", "MTP_BeforeDOF" },
		{ "MTP_BeforeDOF.ToolTip", "Render before depth of field." },
		{ "MTP_MAX.Name", "MTP_MAX" },
		{ "ToolTip", "Specifies which separate translucency pass to render in." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MTP_BeforeDOF", (int64)MTP_BeforeDOF },
		{ "MTP_AfterDOF", (int64)MTP_AfterDOF },
		{ "MTP_AfterMotionBlur", (int64)MTP_AfterMotionBlur },
		{ "MTP_MAX", (int64)MTP_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialTranslucencyPass",
	"EMaterialTranslucencyPass",
	Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialTranslucencyPass()
{
	if (!Z_Registration_Info_UEnum_EMaterialTranslucencyPass.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialTranslucencyPass.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialTranslucencyPass_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialTranslucencyPass.InnerSingleton;
}
// End Enum EMaterialTranslucencyPass

// Begin ScriptStruct FMaterialInput
struct Z_Construct_UScriptStruct_FMaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "// Material input structs.\n//@warning: manually mirrored in MaterialShared.h\n" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Material input structs.\n@warning: manually mirrored in MaterialShared.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expression_MetaData[] = {
		{ "Comment", "/** Material expression that this input is connected to, or NULL if not connected. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Material expression that this input is connected to, or NULL if not connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
		{ "Comment", "/** Index into Expression's outputs array that this input is connected to. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Index into Expression's outputs array that this input is connected to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[] = {
		{ "Comment", "/** \n\x09 * Optional name of the input.  \n\x09 * Note that this is the only member which is not derived from the output currently connected. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Optional name of the input.\nNote that this is the only member which is not derived from the output currently connected." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskR_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskG_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskB_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskA_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expression;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InputName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Mask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskG;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskB;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaskA;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression = { "Expression", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, Expression), Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expression_MetaData), NewProp_Expression_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, OutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIndex_MetaData), NewProp_OutputIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, InputName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputName_MetaData), NewProp_InputName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask = { "Mask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, Mask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mask_MetaData), NewProp_Mask_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR = { "MaskR", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, MaskR), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskR_MetaData), NewProp_MaskR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG = { "MaskG", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, MaskG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskG_MetaData), NewProp_MaskG_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB = { "MaskB", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, MaskB), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskB_MetaData), NewProp_MaskB_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA = { "MaskA", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInput, MaskA), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskA_MetaData), NewProp_MaskA_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Expression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_OutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_InputName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_Mask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInput_Statics::NewProp_MaskA,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	nullptr,
	"MaterialInput",
	Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::PropPointers),
	sizeof(FMaterialInput),
	alignof(FMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FMaterialInput

// Begin ScriptStruct FColorMaterialInput
struct Z_Construct_UScriptStruct_FColorMaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
	struct FColorMaterialInput : public FMaterialInput
	{
		uint8 UseConstant:1;
		FColor Constant;
	};

	static_assert(sizeof(FColorMaterialInput) < MAX_uint16);
	static_assert(alignof(FColorMaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseConstant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
{
	((FColorMaterialInput*)Obj)->UseConstant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FColorMaterialInput), &Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseConstant_MetaData), NewProp_UseConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FColorMaterialInput, Constant), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_UseConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FColorMaterialInput_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FColorMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMaterialInput,
	nullptr,
	"ColorMaterialInput",
	Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::PropPointers),
	sizeof(FColorMaterialInput),
	alignof(FColorMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FColorMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FColorMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FColorMaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FColorMaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FColorMaterialInput

// Begin ScriptStruct FScalarMaterialInput
struct Z_Construct_UScriptStruct_FScalarMaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
	struct FScalarMaterialInput : public FMaterialInput
	{
		uint8 UseConstant:1;
		float Constant;
	};

	static_assert(sizeof(FScalarMaterialInput) < MAX_uint16);
	static_assert(alignof(FScalarMaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseConstant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
{
	((FScalarMaterialInput*)Obj)->UseConstant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FScalarMaterialInput), &Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseConstant_MetaData), NewProp_UseConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarMaterialInput, Constant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_UseConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMaterialInput,
	nullptr,
	"ScalarMaterialInput",
	Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::PropPointers),
	sizeof(FScalarMaterialInput),
	alignof(FScalarMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScalarMaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScalarMaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FScalarMaterialInput

// Begin ScriptStruct FShadingModelMaterialInput
struct Z_Construct_UScriptStruct_FShadingModelMaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
	struct FShadingModelMaterialInput : public FMaterialInput
	{
	};

	static_assert(sizeof(FShadingModelMaterialInput) < MAX_uint16);
	static_assert(alignof(FShadingModelMaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FShadingModelMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMaterialInput,
	nullptr,
	"ShadingModelMaterialInput",
	nullptr,
	0,
	sizeof(FShadingModelMaterialInput),
	alignof(FShadingModelMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FShadingModelMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FShadingModelMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FShadingModelMaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FShadingModelMaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FShadingModelMaterialInput

// Begin ScriptStruct FSubstrateMaterialInput
struct Z_Construct_UScriptStruct_FSubstrateMaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
	struct FSubstrateMaterialInput : public FMaterialInput
	{
	};

	static_assert(sizeof(FSubstrateMaterialInput) < MAX_uint16);
	static_assert(alignof(FSubstrateMaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubstrateMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMaterialInput,
	nullptr,
	"SubstrateMaterialInput",
	nullptr,
	0,
	sizeof(FSubstrateMaterialInput),
	alignof(FSubstrateMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubstrateMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubstrateMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubstrateMaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubstrateMaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FSubstrateMaterialInput

// Begin ScriptStruct FVectorMaterialInput
struct Z_Construct_UScriptStruct_FVectorMaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
	struct FVectorMaterialInput : public FMaterialInput
	{
		uint8 UseConstant:1;
		FVector3f Constant;
	};

	static_assert(sizeof(FVectorMaterialInput) < MAX_uint16);
	static_assert(alignof(FVectorMaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseConstant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
{
	((FVectorMaterialInput*)Obj)->UseConstant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVectorMaterialInput), &Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseConstant_MetaData), NewProp_UseConstant_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant = { "Constant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorMaterialInput, Constant), Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constant_MetaData), NewProp_Constant_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_UseConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::NewProp_Constant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMaterialInput,
	nullptr,
	"VectorMaterialInput",
	Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::PropPointers),
	sizeof(FVectorMaterialInput),
	alignof(FVectorMaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVectorMaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVectorMaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FVectorMaterialInput

// Begin ScriptStruct FVector2MaterialInput
struct Z_Construct_UScriptStruct_FVector2MaterialInput_Statics
{
	struct FMaterialInput
	{
		TObjectPtr<UMaterialExpression> Expression;
		int32 OutputIndex;
		FName InputName;
		int32 Mask;
		int32 MaskR;
		int32 MaskG;
		int32 MaskB;
		int32 MaskA;
	};

	static_assert(sizeof(FMaterialInput) < MAX_uint16);
	static_assert(alignof(FMaterialInput) < MAX_uint8);
	struct FVector2MaterialInput : public FMaterialInput
	{
		uint8 UseConstant:1;
		float ConstantX;
		float ConstantY;
	};

	static_assert(sizeof(FVector2MaterialInput) < MAX_uint16);
	static_assert(alignof(FVector2MaterialInput) < MAX_uint8);
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseConstant_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstantY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static void NewProp_UseConstant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseConstant;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstantY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_SetBit(void* Obj)
{
	((FVector2MaterialInput*)Obj)->UseConstant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant = { "UseConstant", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FVector2MaterialInput), &Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseConstant_MetaData), NewProp_UseConstant_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX = { "ConstantX", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2MaterialInput, ConstantX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantX_MetaData), NewProp_ConstantX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY = { "ConstantY", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVector2MaterialInput, ConstantY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstantY_MetaData), NewProp_ConstantY_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_UseConstant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::NewProp_ConstantY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FMaterialInput,
	nullptr,
	"Vector2MaterialInput",
	Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::PropPointers),
	sizeof(FVector2MaterialInput),
	alignof(FVector2MaterialInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000008),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVector2MaterialInput()
{
	static UScriptStruct* ReturnStruct = nullptr;
	if (!ReturnStruct)
	{
		UECodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVector2MaterialInput_Statics::StructParams);
	}
	return ReturnStruct;
}
// End ScriptStruct FVector2MaterialInput

// Begin ScriptStruct FParameterGroupData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ParameterGroupData;
class UScriptStruct* FParameterGroupData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterGroupData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ParameterGroupData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FParameterGroupData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ParameterGroupData"));
	}
	return Z_Registration_Info_UScriptStruct_ParameterGroupData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FParameterGroupData>()
{
	return FParameterGroupData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FParameterGroupData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[] = {
		{ "Category", "Group Sorting" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroupSortPriority_MetaData[] = {
		{ "Category", "Group Sorting" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_GroupName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GroupSortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FParameterGroupData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterGroupData, GroupName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupName_MetaData), NewProp_GroupName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority = { "GroupSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FParameterGroupData, GroupSortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroupSortPriority_MetaData), NewProp_GroupSortPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewProp_GroupSortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FParameterGroupData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ParameterGroupData",
	Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::PropPointers),
	sizeof(FParameterGroupData),
	alignof(FParameterGroupData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FParameterGroupData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FParameterGroupData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FParameterGroupData()
{
	if (!Z_Registration_Info_UScriptStruct_ParameterGroupData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ParameterGroupData.InnerSingleton, Z_Construct_UScriptStruct_FParameterGroupData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ParameterGroupData.InnerSingleton;
}
// End ScriptStruct FParameterGroupData

// Begin Class UMaterialEditorOnlyData
void UMaterialEditorOnlyData::StaticRegisterNativesUMaterialEditorOnlyData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialEditorOnlyData);
UClass* Z_Construct_UClass_UMaterialEditorOnlyData_NoRegister()
{
	return UMaterialEditorOnlyData::StaticClass();
}
struct Z_Construct_UClass_UMaterialEditorOnlyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/Material.h" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[] = {
		{ "Comment", "// Reflection\n" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Reflection" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anisotropy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "Comment", "// Transmission.\n" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Transmission." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[] = {
		{ "Comment", "/** Adds to world position in the vertex shader. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Adds to world position in the vertex shader." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Displacement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[] = {
		{ "Comment", "/** Inner material color, only used for ShadingModel=Subsurface */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Inner material color, only used for ShadingModel=Subsurface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[] = {
		{ "Comment", "/** output ambient occlusion to the GBuffer */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "output ambient occlusion to the GBuffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "Comment", "/**\n\x09 * output refraction index for translucent rendering\n\x09 * Air:1.0 Water:1.333 Ice:1.3 Glass:~1.6 Diamond:2.42\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "output refraction index for translucent rendering\nAir:1.0 Water:1.333 Ice:1.3 Glass:~1.6 Diamond:2.42" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizedUVs_MetaData[] = {
		{ "Comment", "/**\n\x09 * These inputs are evaluated in the vertex shader and allow artists to do arbitrary vertex shader operations and access them in the pixel shader.\n\x09 * When unconnected or hidden they default to passing through the vertex UVs.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "These inputs are evaluated in the vertex shader and allow artists to do arbitrary vertex shader operations and access them in the pixel shader.\nWhen unconnected or hidden they default to passing through the vertex UVs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDepthOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModelFromMaterialExpression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceThickness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionCollection_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterGroupData_MetaData[] = {
		{ "Category", "Group Sorting" },
		{ "Comment", "/** Controls where this parameter group is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls where this parameter group is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metallic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anisotropy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpacityMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Displacement;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoatRoughness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Refraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizedUVs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelDepthOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadingModelFromMaterialExpression;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceThickness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrontMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionCollection;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterGroupData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterGroupData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialEditorOnlyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, BaseColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseColor_MetaData), NewProp_BaseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Metallic), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metallic_MetaData), NewProp_Metallic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Specular), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Specular_MetaData), NewProp_Specular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Roughness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roughness_MetaData), NewProp_Roughness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Anisotropy), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anisotropy_MetaData), NewProp_Anisotropy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Normal), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Tangent), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, EmissiveColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveColor_MetaData), NewProp_EmissiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Opacity), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_OpacityMask = { "OpacityMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, OpacityMask), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMask_MetaData), NewProp_OpacityMask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_WorldPositionOffset = { "WorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, WorldPositionOffset), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffset_MetaData), NewProp_WorldPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Displacement = { "Displacement", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Displacement), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Displacement_MetaData), NewProp_Displacement_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_SubsurfaceColor = { "SubsurfaceColor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, SubsurfaceColor), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsurfaceColor_MetaData), NewProp_SubsurfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ClearCoat = { "ClearCoat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, ClearCoat), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearCoat_MetaData), NewProp_ClearCoat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ClearCoatRoughness = { "ClearCoatRoughness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, ClearCoatRoughness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearCoatRoughness_MetaData), NewProp_ClearCoatRoughness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, AmbientOcclusion), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientOcclusion_MetaData), NewProp_AmbientOcclusion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, Refraction), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_CustomizedUVs = { "CustomizedUVs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(CustomizedUVs, UMaterialEditorOnlyData), STRUCT_OFFSET(UMaterialEditorOnlyData, CustomizedUVs), Z_Construct_UScriptStruct_FVector2MaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizedUVs_MetaData), NewProp_CustomizedUVs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, MaterialAttributes), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributes_MetaData), NewProp_MaterialAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_PixelDepthOffset = { "PixelDepthOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, PixelDepthOffset), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDepthOffset_MetaData), NewProp_PixelDepthOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ShadingModelFromMaterialExpression = { "ShadingModelFromMaterialExpression", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, ShadingModelFromMaterialExpression), Z_Construct_UScriptStruct_FShadingModelMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModelFromMaterialExpression_MetaData), NewProp_ShadingModelFromMaterialExpression_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_SurfaceThickness = { "SurfaceThickness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, SurfaceThickness), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceThickness_MetaData), NewProp_SurfaceThickness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_FrontMaterial = { "FrontMaterial", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, FrontMaterial), Z_Construct_UScriptStruct_FSubstrateMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontMaterial_MetaData), NewProp_FrontMaterial_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ExpressionCollection = { "ExpressionCollection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, ExpressionCollection), Z_Construct_UScriptStruct_FMaterialExpressionCollection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionCollection_MetaData), NewProp_ExpressionCollection_MetaData) }; // 721167884
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ParameterGroupData_Inner = { "ParameterGroupData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterGroupData, METADATA_PARAMS(0, nullptr) }; // 1351999071
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ParameterGroupData = { "ParameterGroupData", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialEditorOnlyData, ParameterGroupData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterGroupData_MetaData), NewProp_ParameterGroupData_MetaData) }; // 1351999071
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialEditorOnlyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_BaseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Metallic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Specular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Roughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Anisotropy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_EmissiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_OpacityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_WorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Displacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_SubsurfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ClearCoat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ClearCoatRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_AmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_Refraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_CustomizedUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_MaterialAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_PixelDepthOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ShadingModelFromMaterialExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_SurfaceThickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_FrontMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ExpressionCollection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ParameterGroupData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialEditorOnlyData_Statics::NewProp_ParameterGroupData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOnlyData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialEditorOnlyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialInterfaceEditorOnlyData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOnlyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialEditorOnlyData_Statics::ClassParams = {
	&UMaterialEditorOnlyData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialEditorOnlyData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOnlyData_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialEditorOnlyData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialEditorOnlyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialEditorOnlyData()
{
	if (!Z_Registration_Info_UClass_UMaterialEditorOnlyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialEditorOnlyData.OuterSingleton, Z_Construct_UClass_UMaterialEditorOnlyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialEditorOnlyData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialEditorOnlyData>()
{
	return UMaterialEditorOnlyData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialEditorOnlyData);
UMaterialEditorOnlyData::~UMaterialEditorOnlyData() {}
// End Class UMaterialEditorOnlyData

// Begin Class UMaterial
void UMaterial::StaticRegisterNativesUMaterial()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterial);
UClass* Z_Construct_UClass_UMaterial_NoRegister()
{
	return UMaterial::StaticClass();
}
struct Z_Construct_UClass_UMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A Material is an asset which can be applied to a mesh to control the visual look of the scene. \n * When light from the scene hits the surface, the shading model of the material is used to calculate how that light interacts with the surface. \n *\n * Warning: Creating new materials directly increases shader compile times!  Consider creating a Material Instance off of an existing material instead.\n */" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/Material.h" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "PrioritizeCategories", "Material Nanite Translucency TranslucencySelfShadowing Refraction WorldPositionOffset PostProcessMaterial Mobile ForwardShading PhysicalMaterial PhysicalMaterialMask Usage Lightmass Previewing ImportSettings" },
		{ "ToolTip", "A Material is an asset which can be applied to a mesh to control the visual look of the scene.\nWhen light from the scene hits the surface, the shading model of the material is used to calculate how that light interacts with the surface.\n\nWarning: Creating new materials directly increases shader compile times!  Consider creating a Material Instance off of an existing material instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Physical material to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterialMask_MetaData[] = {
		{ "Category", "PhysicalMaterial" },
		{ "Comment", "/** Physical material mask to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Physical material mask to use for this graphics material. Used for sounds, effects etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMap_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.EPhysicalMaterialMaskColor" },
		{ "Category", "PhysicalMaterialMask" },
		{ "Comment", "/** Physical material mask map to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Physical material mask map to use for this graphics material. Used for sounds, effects etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTracePhysicalMaterialOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDomain_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** \n\x09 * The domain that the material's attributes will be evaluated in. \n\x09 * Certain pieces of material functionality are only valid in certain domains, for example vertex normal is only valid on a surface.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "The domain that the material's attributes will be evaluated in.\nCertain pieces of material functionality are only valid in certain domains, for example vertex normal is only valid on a surface." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Determines how the material's color is blended with background colors. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Determines how the material's color is blended with background colors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalBlendMode_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "No longer used." },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDecalResponse_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** \n\x09 * Defines how the material reacts on DBuffer decals (Affects look, performance and texture/sample usage).\n\x09 * Non DBuffer Decals can be disabled on the primitive (e.g. static mesh)\n\x09 */" },
		{ "DisplayName", "Decal Response (DBuffer)" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Defines how the material reacts on DBuffer decals (Affects look, performance and texture/sample usage).\nNon DBuffer Decals can be disabled on the primitive (e.g. static mesh)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteOverrideMaterial_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/** An override material which will be used instead of this one when rendering with Nanite. */" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "An override material which will be used instead of this one when rendering with Nanite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementScaling_MetaData[] = {
		{ "Category", "Nanite" },
		{ "DisplayName", "Displacement" },
		{ "EditCondition", "bEnableTessellation" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModel_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Determines how inputs are combined to create the material's final color. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Determines how inputs are combined to create the material's final color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadowAsMasked_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should cast shadows as masked even though it has a translucent blend mode. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the material should cast shadows as masked even though it has a translucent blend mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModels_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsedShadingModels_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** These are the shading models present in this material. Note that all these shading models might not be used in all feature levels and quality levels. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "These are the shading models present in this material. Note that all these shading models might not be used in all feature levels and quality levels." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMaskClipValue_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/**\n\x09 * If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue.\n\x09 * If BlendMode is BLEND_Translucent, BLEND_Additive, or BLEND_Modulate, and \"Output Depth and Velocity\" is enabled,\n\x09 * the object velocity is not rendered where Opacity < OpacityMaskClipValue.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If BlendMode is BLEND_Masked, the surface is not rendered where OpacityMask < OpacityMaskClipValue.\nIf BlendMode is BLEND_Translucent, BLEND_Additive, or BLEND_Modulate, and \"Output Depth and Velocity\" is enabled,\nthe object velocity is not rendered where Opacity < OpacityMaskClipValue." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSeparateTranslucency_MetaData[] = {
		{ "Comment", "/** Deprecated. Use TranslucencyPass instead. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Deprecated. Use TranslucencyPass instead." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableResponsiveAA_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/**\n\x09 * Indicates that the material should be rendered using responsive anti-aliasing. Improves sharpness of small moving particles such as sparks.\n\x09 * Only use for small moving features because it will cause aliasing of the background.\n\x09 */" },
		{ "DisplayName", "Responsive AA" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material should be rendered using responsive anti-aliasing. Improves sharpness of small moving particles such as sparks.\nOnly use for small moving features because it will cause aliasing of the background." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceReflections_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** SSR on translucency */" },
		{ "DisplayName", "Screen Space Reflections" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "SSR on translucency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bContactShadows_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Contact shadows on translucency */" },
		{ "DisplayName", "Contact Shadows" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Contact shadows on translucency" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material should be rendered without backface culling and the normal should be flipped for backfaces." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsThinSurface_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Indicates that the material should be rendered as a thin surface (i.e., without inner volume). Only used by Substrate materials. Enabling ThinSurface will disable subsurface profiles. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material should be rendered as a thin surface (i.e., without inner volume). Only used by Substrate materials. Enabling ThinSurface will disable subsurface profiles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitheredLODTransition_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether meshes rendered with the material should support dithered LOD transitions. */" },
		{ "DisplayName", "Dithered LOD Transition" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether meshes rendered with the material should support dithered LOD transitions." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DitherOpacityMask_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Dither opacity mask. When combined with Temporal AA this can be used as a form of limited translucency which supports all lighting features. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Dither opacity mask. When combined with Temporal AA this can be used as a form of limited translucency which supports all lighting features." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNegativeEmissiveColor_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the material should allow outputting negative emissive color values.  Only allowed on unlit materials. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the material should allow outputting negative emissive color values.  Only allowed on unlit materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasPixelAnimation_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether the opaque material has any pixel animations happening, that isn't included in the geometric velocities.\n\x09 * This allows to disable renderer's heuristics that assumes animation is fully described with motion vector, such as TSR's anti-flickering heuristic.\n\x09 */" },
		{ "DisplayName", "Has Pixel Animation" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the opaque material has any pixel animations happening, that isn't included in the geometric velocities.\nThis allows to disable renderer's heuristics that assumes animation is fully described with motion vector, such as TSR's anti-flickering heuristic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTessellation_MetaData[] = {
		{ "Category", "Nanite" },
		{ "Comment", "/** Whether tessellation is enabled on the material. NOTE: Required for displacement to work. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether tessellation is enabled on the material. NOTE: Required for displacement to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyPass_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/**\n\x09 * Specifies the separate pass in which to render translucency.\n\x09 * This can be used to avoid artifacts caused by certain post processing effects.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Specifies the separate pass in which to render translucency.\nThis can be used to avoid artifacts caused by certain post processing effects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyLightingMode_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Sets the lighting mode that will be used on this material if it is translucent. */" },
		{ "DisplayName", "Lighting Mode" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Sets the lighting mode that will be used on this material if it is translucent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMobileSeparateTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Indicates that the translucent material should not be affected by bloom or DOF. (Note: Depth testing is not available) */" },
		{ "DisplayName", "Mobile Separate Translucency" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the translucent material should not be affected by bloom or DOF. (Note: Depth testing is not available)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumCustomizedUVs_MetaData[] = {
		{ "Category", "Material" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of customized UV inputs to display.  Unconnected customized UV inputs will just pass through the vertex UVs. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Number of customized UV inputs to display.  Unconnected customized UV inputs will just pass through the vertex UVs." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencyDirectionalLightingIntensity_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** \n\x09 * Useful for artificially increasing the influence of the normal on the lighting result for translucency.\n\x09 * A value larger than 1 increases the influence of the normal, a value smaller than 1 makes the lighting more ambient.\n\x09 */" },
		{ "DisplayName", "Directional Lighting Intensity" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Useful for artificially increasing the influence of the normal on the lighting result for translucency.\nA value larger than 1 increases the influence of the normal, a value smaller than 1 makes the lighting more ambient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentShadowDensityScale_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** Scale used to make translucent shadows more or less opaque than the material's actual opacity. */" },
		{ "DisplayName", "Shadow Density Scale" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Scale used to make translucent shadows more or less opaque than the material's actual opacity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowDensityScale_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** \n\x09 * Scale used to make translucent self-shadowing more or less opaque than the material's shadow on other objects. \n\x09 * This is only used when the object is casting a volumetric translucent shadow.\n\x09 */" },
		{ "DisplayName", "Self Shadow Density Scale" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Scale used to make translucent self-shadowing more or less opaque than the material's shadow on other objects.\nThis is only used when the object is casting a volumetric translucent shadow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowSecondDensityScale_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** Used to make a second self shadow gradient, to add interesting shading in the shadow of the first. */" },
		{ "DisplayName", "Second Density Scale" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Used to make a second self shadow gradient, to add interesting shading in the shadow of the first." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentSelfShadowSecondOpacity_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** Controls the strength of the second self shadow gradient. */" },
		{ "DisplayName", "Second Opacity" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls the strength of the second self shadow gradient." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentBackscatteringExponent_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** \n\x09 * Controls how diffuse the material's backscattering is when using the MSM_Subsurface shading model.\n\x09 * Larger exponents give a less diffuse look (smaller, brighter backscattering highlight).\n\x09 * This is only used when the object is casting a volumetric translucent shadow from a directional light.\n\x09 */" },
		{ "DisplayName", "Backscattering Exponent" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls how diffuse the material's backscattering is when using the MSM_Subsurface shading model.\nLarger exponents give a less diffuse look (smaller, brighter backscattering highlight).\nThis is only used when the object is casting a volumetric translucent shadow from a directional light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentMultipleScatteringExtinction_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** \n\x09 * Colored extinction factor used to approximate multiple scattering in dense volumes. \n\x09 * This is only used when the object is casting a volumetric translucent shadow.\n\x09 */" },
		{ "DisplayName", "Multiple Scattering Extinction" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Colored extinction factor used to approximate multiple scattering in dense volumes.\nThis is only used when the object is casting a volumetric translucent shadow." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentShadowStartOffset_MetaData[] = {
		{ "Category", "TranslucencySelfShadowing" },
		{ "Comment", "/** Local space distance to bias the translucent shadow.  Positive values move the shadow away from the light. */" },
		{ "DisplayName", "Start Offset" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Local space distance to bias the translucent shadow.  Positive values move the shadow away from the light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDepthTest_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Whether to draw on top of opaque pixels even if behind them. This only has meaning for translucency. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether to draw on top of opaque pixels even if behind them. This only has meaning for translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWriteOnlyAlpha_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Whether the transluency pass should write its alpha, and only the alpha, into the framebuffer */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the transluency pass should write its alpha, and only the alpha, into the framebuffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateSphericalParticleNormals_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Whether to generate spherical normals for particles that use this material. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether to generate spherical normals for particles that use this material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTangentSpaceNormal_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/**\n\x09 * Whether the material takes a tangent space normal or a world space normal as input.\n\x09 * (TangentSpace requires extra instructions but is often more convenient).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether the material takes a tangent space normal or a world space normal as input.\n(TangentSpace requires extra instructions but is often more convenient)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseEmissiveForDynamicAreaLighting_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/**\n\x09 * If enabled, the material's emissive colour is injected into the LightPropagationVolume\n\x09 */" },
		{ "DisplayName", "Emissive (Dynamic Area Light)" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If enabled, the material's emissive colour is injected into the LightPropagationVolume" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedAsSpecialEngineMaterial_MetaData[] = {
		{ "Comment", "/** \n\x09 * This is a special usage flag that allows a material to be assignable to any primitive type.\n\x09 * This is useful for materials used by code to implement certain viewmodes, for example the default material or lighting only material.\n\x09 * The cost is that nearly 20x more shaders will be compiled for the material than the average material, which will greatly increase shader compile time and memory usage.\n\x09 * This flag should only be enabled when absolutely necessary, and is purposefully not exposed to the UI to prevent abuse.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "This is a special usage flag that allows a material to be assignable to any primitive type.\nThis is useful for materials used by code to implement certain viewmodes, for example the default material or lighting only material.\nThe cost is that nearly 20x more shaders will be compiled for the material than the average material, which will greatly increase shader compile time and memory usage.\nThis flag should only be enabled when absolutely necessary, and is purposefully not exposed to the UI to prevent abuse." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithSkeletalMesh_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with skeletal meshes.  \n\x09 * This will result in the shaders required to support skeletal meshes being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with skeletal meshes.\nThis will result in the shaders required to support skeletal meshes being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithEditorCompositing_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with editor compositing  \n\x09 * This will result in the shaders required to support editor compositing being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with editor compositing\nThis will result in the shaders required to support editor compositing being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithParticleSprites_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with particle sprites \n\x09 * This will result in the shaders required to support particle sprites being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with particle sprites\nThis will result in the shaders required to support particle sprites being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithBeamTrails_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with beam trails\n\x09 * This will result in the shaders required to support beam trails being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with beam trails\nThis will result in the shaders required to support beam trails being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithMeshParticles_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with mesh particles\n\x09 * This will result in the shaders required to support mesh particles being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with mesh particles\nThis will result in the shaders required to support mesh particles being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraSprites_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09* Indicates that the material and its instances can be used with Niagara sprites (meshes and ribbons, respectively)\n\x09* This will result in the shaders required to support Niagara sprites being compiled which will increase shader compile time and memory usage.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with Niagara sprites (meshes and ribbons, respectively)\nThis will result in the shaders required to support Niagara sprites being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraRibbons_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNiagaraMeshParticles_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithGeometryCache_MetaData[] = {
		{ "Category", "Usage" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithStaticLighting_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with static lighting\n\x09 * This will result in the shaders required to support static lighting being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with static lighting\nThis will result in the shaders required to support static lighting being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithMorphTargets_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with morph targets\n\x09 * This will result in the shaders required to support morph targets being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with morph targets\nThis will result in the shaders required to support morph targets being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithSplineMeshes_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with spline meshes\n\x09 * This will result in the shaders required to support spline meshes being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with spline meshes\nThis will result in the shaders required to support spline meshes being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithInstancedStaticMeshes_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with instanced static meshes\n\x09 * This will result in the shaders required to support instanced static meshes being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with instanced static meshes\nThis will result in the shaders required to support instanced static meshes being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithGeometryCollections_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances can be use with geometry collections\n\x09 * This will result in the shaders required to support geometry collections being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with geometry collections\nThis will result in the shaders required to support geometry collections being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsesDistortion_MetaData[] = {
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with distortion\n\x09 * This will result in the shaders required to support distortion being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with distortion\nThis will result in the shaders required to support distortion being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRootNodeOverridesDefaultDistortion_MetaData[] = {
		{ "Comment", "/** \n\x09 * Indicates that the material do not use the material physically based refraction (e.g. IOR from reflectivity F0), but overrides it for artistic purposes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material do not use the material physically based refraction (e.g. IOR from reflectivity F0), but overrides it for artistic purposes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithClothing_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with clothing\n\x09 * This will result in the shaders required to support clothing being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with clothing\nThis will result in the shaders required to support clothing being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithWater_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances can be use with water\n\x09 * This will result in the shaders required to support water meshes being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with water\nThis will result in the shaders required to support water meshes being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithHairStrands_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances can be use with hair strands\n\x09 * This will result in the shaders required to support hair strands geometries being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with hair strands\nThis will result in the shaders required to support hair strands geometries being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithLidarPointCloud_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances can be use with LiDAR Point Clouds\n\x09 * This will result in the shaders required to support LiDAR Point Cloud geometries being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be use with LiDAR Point Clouds\nThis will result in the shaders required to support LiDAR Point Cloud geometries being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithVirtualHeightfieldMesh_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances can be used with Virtual Heightfield Mesh.\n\x09 * This will result in the shaders required to support Virtual Heightfield Mesh geometries being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with Virtual Heightfield Mesh.\nThis will result in the shaders required to support Virtual Heightfield Mesh geometries being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNanite_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances can be used with Nanite meshes.\n\x09 * This will result in the shaders required to support Nanite geometries being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with Nanite meshes.\nThis will result in the shaders required to support Nanite geometries being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithVolumetricCloud_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances with volumetric cloud. Without that flag, it can only be used on volumetric fog.\n\x09 * This will result in the shaders required to support Volumetric Cloud rendering being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances with volumetric cloud. Without that flag, it can only be used on volumetric fog.\nThis will result in the shaders required to support Volumetric Cloud rendering being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithHeterogeneousVolumes_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/**\n\x09 * Indicates that the material and its instances with heterogeneous volumes. Without that flag, it can only be used on volumetric fog.\n\x09 * This will result in the shaders required to support Heterogeneous Volumes rendering being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances with heterogeneous volumes. Without that flag, it can only be used on volumetric fog.\nThis will result in the shaders required to support Heterogeneous Volumes rendering being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithUI_MetaData[] = {
		{ "Comment", "/** \n\x09 * Indicates that the material and its instances can be used with Slate UI and UMG\n\x09 * This will result in the shaders required to support UI materials being compiled which will increase shader compile time and memory usage.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with Slate UI and UMG\nThis will result in the shaders required to support UI materials being compiled which will increase shader compile time and memory usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallySetUsageInEditor_MetaData[] = {
		{ "Category", "Usage" },
		{ "Comment", "/** \n\x09 * Whether to automatically set usage flags based on what the material is applied to in the editor.\n\x09 * It can be useful to disable this on a base material with many instances, where adding another usage flag accidentally (eg bUsedWithSkeletalMeshes) can add a lot of shader permutations.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Whether to automatically set usage flags based on what the material is applied to in the editor.\nIt can be useful to disable this on a base material with many instances, where adding another usage flag accidentally (eg bUsedWithSkeletalMeshes) can add a lot of shader permutations." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFullyRough_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/* Forces the material to be completely rough. Saves a number of instructions and one sampler. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Forces the material to be completely rough. Saves a number of instructions and one sampler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFullPrecision_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09""Deprecated. Use FloatPrecisionMode instead.\n\x09 *  Forces this material to use full (highp) precision in the pixel shader.\n\x09 *\x09This is slower than the default (mediump) but can be used to work around precision-related rendering errors.\n\x09 *\x09This setting has no effect on older mobile devices that do not support high precision.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Deprecated. Use FloatPrecisionMode instead.\nForces this material to use full (highp) precision in the pixel shader.\nThis is slower than the default (mediump) but can be used to work around precision-related rendering errors.\nThis setting has no effect on older mobile devices that do not support high precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatPrecisionMode_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/**\n\x09 *\x09How to use full (highp) precision in the pixel shader.\n\x09 *\x09highp is slower than the default (mediump) but can be used to work around precision-related rendering errors.\n\x09 *  Use 'Full-precision for MaterialExpressions only' if you still want to keep the precision of the halfs in .ush/.usf\n\x09 *\x09This setting has no effect on older mobile devices that do not support high precision.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "How to use full (highp) precision in the pixel shader.\nhighp is slower than the default (mediump) but can be used to work around precision-related rendering errors.\nUse 'Full-precision for MaterialExpressions only' if you still want to keep the precision of the halfs in .ush/.usf\nThis setting has no effect on older mobile devices that do not support high precision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseLightmapDirectionality_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/* Use lightmap directionality and per pixel normals. If disabled, lighting from lightmaps will be flat but cheaper. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Use lightmap directionality and per pixel normals. If disabled, lighting from lightmaps will be flat but cheaper." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMobileEnableHighQualityBRDF_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/* Use the high quality brdf functions on mobile to get better visual effects but adds GPU cost. */" },
		{ "DisplayName", "Mobile High Quality BRDF" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Use the high quality brdf functions on mobile to get better visual effects but adds GPU cost." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAlphaToCoverage_MetaData[] = {
		{ "Category", "Mobile" },
		{ "Comment", "/* Use alpha to coverage for masked material on mobile, make sure MSAA is enabled as well. */" },
		{ "EditCondition", "BlendMode != EBlendMode::BLEND_Opaque" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Use alpha to coverage for masked material on mobile, make sure MSAA is enabled as well." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_MetaData[] = {
		{ "Category", "ForwardShading" },
		{ "Comment", "/* Forward (including mobile) renderer: use preintegrated GF lut for simple IBL, but will use one more sampler. */" },
		{ "DisplayName", "PreintegratedGF For Simple IBL" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Forward (including mobile) renderer: use preintegrated GF lut for simple IBL, but will use one more sampler." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseHQForwardReflections_MetaData[] = {
		{ "Category", "ForwardShading" },
		{ "Comment", "/* \n\x09 * Forward renderer: enables multiple parallax-corrected reflection captures that blend together.\n\x09 */" },
		{ "DisplayName", "High Quality Reflections" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "* Forward renderer: enables multiple parallax-corrected reflection captures that blend together." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForwardBlendsSkyLightCubemaps_MetaData[] = {
		{ "Category", "ForwardShading" },
		{ "Comment", "/* \n\x09 * Enables blending of sky light cubemap textures. When disabled, the secondary cubemap is only visible when the blend factor is 1.\n\x09 */" },
		{ "DisplayName", "Blend Sky Light Cubemaps" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "* Enables blending of sky light cubemap textures. When disabled, the secondary cubemap is only visible when the blend factor is 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePlanarForwardReflections_MetaData[] = {
		{ "Category", "ForwardShading" },
		{ "Comment", "/* Enables planar reflection when using the forward renderer or mobile. Enabling this setting reduces the number of samplers available to the material as one more sampler will be used for the planar reflection. */" },
		{ "DisplayName", "Planar Reflections" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Enables planar reflection when using the forward renderer or mobile. Enabling this setting reduces the number of samplers available to the material as one more sampler will be used for the planar reflection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalCurvatureToRoughness_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/* Reduce roughness based on screen space normal changes. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Reduce roughness based on screen space normal changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowTranslucentCustomDepthWrites_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Allows a translucent material to be used with custom depth writing by compiling additional shaders. */" },
		{ "DisplayName", "Allow Custom Depth Writes" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Allows a translucent material to be used with custom depth writing by compiling additional shaders." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowFrontLayerTranslucency_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** Allows a translucent material to be used with Front Layer Translucency by compiling additional shaders. Useful for controlling what should be included in Front Layer Translucency. */" },
		{ "DisplayName", "Allow Front Layer Translucency" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Allows a translucent material to be used with Front Layer Translucency by compiling additional shaders. Useful for controlling what should be included in Front Layer Translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Wireframe_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Enables a wireframe view of the mesh the material is applied to.  */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Enables a wireframe view of the mesh the material is applied to." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingRate_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/**\n\x09 * Select what shading rate to apply, on platforms that support variable rate shading.\n\x09 * Non-1x1 rates will reduce the rasterization fidelity for the material; they will not super-sample the material.\n\x09 * This can save GPU performance on materials where reduced fidelity is acceptable.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Select what shading rate to apply, on platforms that support variable rate shading.\nNon-1x1 rates will reduce the rasterization fidelity for the material; they will not super-sample the material.\nThis can save GPU performance on materials where reduced fidelity is acceptable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowVariableRateShading_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Allows the use of variable rate shading when evaluating this material. This will only apply to the base/translucency pass. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Allows the use of variable rate shading when evaluating this material. This will only apply to the base/translucency pass." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorPitch_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorYaw_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanMaskedBeAssumedOpaque_MetaData[] = {
		{ "Comment", "/** true if this Material can be assumed Opaque when set to masked. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if this Material can be assumed Opaque when set to masked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMasked_MetaData[] = {
		{ "Comment", "/** true if Material is masked and uses custom opacity */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if Material is masked and uses custom opacity" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsPreviewMaterial_MetaData[] = {
		{ "Comment", "/** true if Material is the preview material used in the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if Material is the preview material used in the material editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFunctionPreviewMaterial_MetaData[] = {
		{ "Comment", "/** true if Material is the function preview material used in the material instance editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if Material is the function preview material used in the material instance editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialAttributes_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** when true, the material attributes pin is used instead of the regular pins. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "when true, the material attributes pin is used instead of the regular pins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableExecWire_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableNewHLSLGenerator_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastRayTracedShadows_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** when true, the material casts ray tracing shadows. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "when true, the material casts ray tracing shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTranslucencyVertexFog_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** When true, translucent materials are fogged. Defaults to true. */" },
		{ "DisplayName", "Apply Fogging" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "When true, translucent materials are fogged. Defaults to true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyCloudFogging_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** When true, translucent materials receive cloud contribution as part of the fog evaluation, per vertex or per pixel according to the other selected options. This is a rough approximation but can help in some cases. Defaults to false. Fog is applied on clouds, so Apply Fogging must be true to use this feature. */" },
		{ "DisplayName", "Apply Cloud Fogging" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "When true, translucent materials receive cloud contribution as part of the fog evaluation, per vertex or per pixel according to the other selected options. This is a rough approximation but can help in some cases. Defaults to false. Fog is applied on clouds, so Apply Fogging must be true to use this feature." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSky_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Unlit and Opaque materials can be used as sky material on a sky dome mesh. When IsSky is true, these meshes will not receive any contribution from the aerial perspective. Height and Volumetric fog effects will still be applied. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Unlit and Opaque materials can be used as sky material on a sky dome mesh. When IsSky is true, these meshes will not receive any contribution from the aerial perspective. Height and Volumetric fog effects will still be applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bComputeFogPerPixel_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** When true, translucent materials have fog computed for every pixel, which costs more but fixes artifacts due to low tessellation. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "When true, translucent materials have fog computed for every pixel, which costs more but fixes artifacts due to low tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOutputTranslucentVelocity_MetaData[] = {
		{ "Category", "Translucency" },
		{ "Comment", "/** When true, translucent materials will output motion vectors and write to depth buffer in velocity pass. */" },
		{ "DisplayName", "Output Depth and Velocity" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "When true, translucent materials will output motion vectors and write to depth buffer in velocity pass." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDevelopmentShaderCompile_MetaData[] = {
		{ "Comment", "/** If true the compilation environment will be changed to remove the global COMPILE_SHADERS_FOR_DEVELOPMENT flag. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If true the compilation environment will be changed to remove the global COMPILE_SHADERS_FOR_DEVELOPMENT flag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMaterialEditorStatsMaterial_MetaData[] = {
		{ "Comment", "/** true if this is a special material used for stats by the material editor. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if this is a special material used for stats by the material editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendableLocation_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/** Where the node is inserted in the (post processing) graph, only used if domain is PostProcess */" },
		{ "DisplayName", "Blendable Location" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Where the node is inserted in the (post processing) graph, only used if domain is PostProcess" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendableOutputAlpha_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/** If this is enabled, the blendable will output alpha */" },
		{ "DisplayName", "Output Alpha" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If this is enabled, the blendable will output alpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedWithNeuralNetworks_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/**\n\x09* Indicates that the material and its instances can be used with neural network engine.\n\x09* This will result in the shaders required to support neural network engine being compiled which will increase shader compile time and memory usage.\n\x09* In addition, an additional pass will run before the postprocess pass for neural network engine, which will increase the rendering cost due to\n\x09* buffer copy and inference.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Indicates that the material and its instances can be used with neural network engine.\nThis will result in the shaders required to support neural network engine being compiled which will increase shader compile time and memory usage.\nIn addition, an additional pass will run before the postprocess pass for neural network engine, which will increase the rendering cost due to\nbuffer copy and inference." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStencilTest_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/** \n\x09 * Selectively execute post process material only for pixels that pass the stencil test against the Custom Depth/Stencil buffer. \n\x09 * Pixels that fail the stencil test are filled with the previous post process material output or scene color.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Selectively execute post process material only for pixels that pass the stencil test against the Custom Depth/Stencil buffer.\nPixels that fail the stencil test are filled with the previous post process material output or scene color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilCompare_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "EditCondition", "bEnableStencilTest" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StencilRefValue_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "EditCondition", "bEnableStencilTest" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NeuralProfileId_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/**\n\x09* Set by reference object cannot be modified.\n\x09*/" },
		{ "EditCondition", "false" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Set by reference object cannot be modified." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionMethod_MetaData[] = {
		{ "Category", "Refraction" },
		{ "Comment", "/** Controls how the Refraction input is interpreted and how the refraction offset into scene color is computed for this material. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls how the Refraction input is interpreted and how the refraction offset into scene color is computed for this material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionCoverageMode_MetaData[] = {
		{ "Category", "Refraction" },
		{ "Comment", "/** Controls whether refraction takes into account the material surface coverage, or not. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Controls whether refraction takes into account the material surface coverage, or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendablePriority_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/** If multiple nodes with the same  type are inserted at the same point, this defined order and if they get combined, only used if domain is PostProcess */" },
		{ "DisplayName", "Blendable Priority" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If multiple nodes with the same  type are inserted at the same point, this defined order and if they get combined, only used if domain is PostProcess" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsBlendable_MetaData[] = {
		{ "Category", "PostProcessMaterial" },
		{ "Comment", "/** Allows blendability to be turned off, only used if domain is PostProcess */" },
		{ "DisplayName", "Is Blendable" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Allows blendability to be turned off, only used if domain is PostProcess" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreshaderGap_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** If non-zero, overrides r.Material.PreshaderGapInterval for this material.  Workaround for a platform specific register overflow bug. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "If non-zero, overrides r.Material.PreshaderGapInterval for this material.  Workaround for a platform specific register overflow bug." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UsageFlagWarnings_MetaData[] = {
		{ "Comment", "/** true if we have printed a warning about material usage for a given usage flag. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "true if we have printed a warning about material usage for a given usage flag." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RefractionDepthBias_MetaData[] = {
		{ "Category", "Refraction" },
		{ "Comment", "/** This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts. */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "This is the refraction depth bias, larger values offset distortion to prevent closer objects from rendering into the distorted surface at acute viewing angles but increases the disconnect between surface and where the refraction starts." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWorldPositionOffsetDisplacement_MetaData[] = {
		{ "Category", "WorldPositionOffset" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** \n\x09 * Specifies the max world position offset of the material. Use this value to resolve issues with culling and self-occlusion caused by\n\x09 * World Position Offset, and/or to restrict how much offset is permitted (i.e. values are clamped on each axis).\n\x09 * NOTE: A value of 0.0 effectively means \"no maximum\", and will not clamp the offsets, however it will also not extend culling bounds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Specifies the max world position offset of the material. Use this value to resolve issues with culling and self-occlusion caused by\nWorld Position Offset, and/or to restrict how much offset is permitted (i.e. values are clamped on each axis).\nNOTE: A value of 0.0 effectively means \"no maximum\", and will not clamp the offsets, however it will also not extend culling bounds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "WorldPositionOffset" },
		{ "Comment", "/**\n\x09 * Forces World Position Offset to always be evaluated for this material, even if the primitive it's applied to has disabled it\n\x09 * via \"Evaluate World Position Offset\" or \"World Position Offset Disable Distance\".\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Forces World Position Offset to always be evaluated for this material, even if the primitive it's applied to has disabled it\nvia \"Evaluate World Position Offset\" or \"World Position Offset Disable Distance\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[] = {
		{ "Comment", "/** \n\x09 * Guid that uniquely identifies this material. \n\x09 * Any changes to the state of the material that do not appear separately in the shadermap DDC keys must cause this guid to be regenerated!\n\x09 * For example, a modification to the Expressions array.\n\x09 * Code changes that cause the guid to be regenerated on load should be avoided, as that requires a resave of the content to stop recompiling every load.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
		{ "ToolTip", "Guid that uniquely identifies this material.\nAny changes to the state of the material that do not appear separately in the shadermap DDC keys must cause this guid to be regenerated!\nFor example, a modification to the Expressions array.\nCode changes that cause the guid to be regenerated on load should be avoided, as that requires a resave of the content to stop recompiling every load." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavedCachedExpressionData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditorComments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecBegin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionExecEnd_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Expressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterGroupData_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "GetEditorOnlyData().ParameterGroupData" },
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DiffuseColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metallic_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Specular_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Roughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anisotropy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tangent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EmissiveColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Opacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OpacityMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubsurfaceColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearCoatRoughness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AmbientOcclusion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Refraction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomizedUVs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialAttributes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDepthOffset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadingModelFromMaterialExpression_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/Material.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterialMask;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTracePhysicalMaterialOutputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderTracePhysicalMaterialOutputs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialDomain;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DecalBlendMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialDecalResponse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteOverrideMaterial;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DisplacementScaling;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
	static void NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadowAsMasked;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadingModels;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_UsedShadingModels;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OpacityMaskClipValue;
	static void NewProp_bEnableSeparateTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSeparateTranslucency;
	static void NewProp_bEnableResponsiveAA_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableResponsiveAA;
	static void NewProp_bScreenSpaceReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceReflections;
	static void NewProp_bContactShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bContactShadows;
	static void NewProp_TwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TwoSided;
	static void NewProp_bIsThinSurface_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsThinSurface;
	static void NewProp_DitheredLODTransition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DitheredLODTransition;
	static void NewProp_DitherOpacityMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_DitherOpacityMask;
	static void NewProp_bAllowNegativeEmissiveColor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNegativeEmissiveColor;
	static void NewProp_bHasPixelAnimation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPixelAnimation;
	static void NewProp_bEnableTessellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTessellation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslucencyPass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TranslucencyLightingMode;
	static void NewProp_bEnableMobileSeparateTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMobileSeparateTranslucency;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumCustomizedUVs;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucencyDirectionalLightingIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucentShadowDensityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowDensityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowSecondDensityScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucentSelfShadowSecondOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucentBackscatteringExponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TranslucentMultipleScatteringExtinction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TranslucentShadowStartOffset;
	static void NewProp_bDisableDepthTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDepthTest;
	static void NewProp_bWriteOnlyAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWriteOnlyAlpha;
	static void NewProp_bGenerateSphericalParticleNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateSphericalParticleNormals;
	static void NewProp_bTangentSpaceNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTangentSpaceNormal;
	static void NewProp_bUseEmissiveForDynamicAreaLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseEmissiveForDynamicAreaLighting;
	static void NewProp_bUsedAsSpecialEngineMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedAsSpecialEngineMaterial;
	static void NewProp_bUsedWithSkeletalMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithSkeletalMesh;
	static void NewProp_bUsedWithEditorCompositing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithEditorCompositing;
	static void NewProp_bUsedWithParticleSprites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithParticleSprites;
	static void NewProp_bUsedWithBeamTrails_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithBeamTrails;
	static void NewProp_bUsedWithMeshParticles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithMeshParticles;
	static void NewProp_bUsedWithNiagaraSprites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraSprites;
	static void NewProp_bUsedWithNiagaraRibbons_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraRibbons;
	static void NewProp_bUsedWithNiagaraMeshParticles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNiagaraMeshParticles;
	static void NewProp_bUsedWithGeometryCache_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithGeometryCache;
	static void NewProp_bUsedWithStaticLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithStaticLighting;
	static void NewProp_bUsedWithMorphTargets_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithMorphTargets;
	static void NewProp_bUsedWithSplineMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithSplineMeshes;
	static void NewProp_bUsedWithInstancedStaticMeshes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithInstancedStaticMeshes;
	static void NewProp_bUsedWithGeometryCollections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithGeometryCollections;
	static void NewProp_bUsesDistortion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesDistortion;
	static void NewProp_bRootNodeOverridesDefaultDistortion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRootNodeOverridesDefaultDistortion;
	static void NewProp_bUsedWithClothing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithClothing;
	static void NewProp_bUsedWithWater_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithWater;
	static void NewProp_bUsedWithHairStrands_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithHairStrands;
	static void NewProp_bUsedWithLidarPointCloud_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithLidarPointCloud;
	static void NewProp_bUsedWithVirtualHeightfieldMesh_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithVirtualHeightfieldMesh;
	static void NewProp_bUsedWithNanite_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNanite;
	static void NewProp_bUsedWithVolumetricCloud_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithVolumetricCloud;
	static void NewProp_bUsedWithHeterogeneousVolumes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithHeterogeneousVolumes;
	static void NewProp_bUsedWithUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithUI;
	static void NewProp_bAutomaticallySetUsageInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallySetUsageInEditor;
	static void NewProp_bFullyRough_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFullyRough;
	static void NewProp_bUseFullPrecision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFullPrecision;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FloatPrecisionMode;
	static void NewProp_bUseLightmapDirectionality_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLightmapDirectionality;
	static void NewProp_bMobileEnableHighQualityBRDF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileEnableHighQualityBRDF;
	static void NewProp_bUseAlphaToCoverage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlphaToCoverage;
	static void NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL;
	static void NewProp_bUseHQForwardReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseHQForwardReflections;
	static void NewProp_bForwardBlendsSkyLightCubemaps_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForwardBlendsSkyLightCubemaps;
	static void NewProp_bUsePlanarForwardReflections_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePlanarForwardReflections;
	static void NewProp_bNormalCurvatureToRoughness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalCurvatureToRoughness;
	static void NewProp_AllowTranslucentCustomDepthWrites_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AllowTranslucentCustomDepthWrites;
	static void NewProp_bAllowFrontLayerTranslucency_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowFrontLayerTranslucency;
	static void NewProp_Wireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Wireframe;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingRate;
	static void NewProp_bAllowVariableRateShading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowVariableRateShading;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorY;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorPitch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EditorYaw;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bCanMaskedBeAssumedOpaque_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanMaskedBeAssumedOpaque;
	static void NewProp_bIsMasked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMasked;
	static void NewProp_bIsPreviewMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPreviewMaterial;
	static void NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFunctionPreviewMaterial;
	static void NewProp_bUseMaterialAttributes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialAttributes;
	static void NewProp_bEnableExecWire_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableExecWire;
	static void NewProp_bEnableNewHLSLGenerator_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableNewHLSLGenerator;
	static void NewProp_bCastRayTracedShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastRayTracedShadows;
	static void NewProp_bUseTranslucencyVertexFog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTranslucencyVertexFog;
	static void NewProp_bApplyCloudFogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyCloudFogging;
	static void NewProp_bIsSky_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSky;
	static void NewProp_bComputeFogPerPixel_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bComputeFogPerPixel;
	static void NewProp_bOutputTranslucentVelocity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOutputTranslucentVelocity;
	static void NewProp_bAllowDevelopmentShaderCompile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDevelopmentShaderCompile;
	static void NewProp_bIsMaterialEditorStatsMaterial_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMaterialEditorStatsMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendableLocation;
	static void NewProp_BlendableOutputAlpha_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BlendableOutputAlpha;
	static void NewProp_bUsedWithNeuralNetworks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedWithNeuralNetworks;
	static void NewProp_bEnableStencilTest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStencilTest;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StencilCompare;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StencilRefValue;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_NeuralProfileId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefractionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefractionMethod;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RefractionCoverageMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BlendablePriority;
	static void NewProp_bIsBlendable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsBlendable;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_PreshaderGap;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_UsageFlagWarnings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RefractionDepthBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWorldPositionOffsetDisplacement;
	static void NewProp_bAlwaysEvaluateWorldPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysEvaluateWorldPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
#if WITH_EDITORONLY_DATA
	static void NewProp_bSavedCachedExpressionData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedCachedExpressionData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditorComments_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EditorComments;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpressionExecBegin;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ExpressionExecEnd;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Expressions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Expressions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterGroupData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterGroupData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DiffuseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpecularColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BaseColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Metallic;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Specular;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Roughness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anisotropy;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tangent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EmissiveColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Opacity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OpacityMask;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPositionOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubsurfaceColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoat;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearCoatRoughness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AmbientOcclusion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Refraction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomizedUVs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialAttributes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelDepthOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadingModelFromMaterialExpression;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrontMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterial>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterialMask = { "PhysMaterialMask", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, PhysMaterialMask), Z_Construct_UClass_UPhysicalMaterialMask_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterialMask_MetaData), NewProp_PhysMaterialMask_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PhysicalMaterialMap = { "PhysicalMaterialMap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(PhysicalMaterialMap, UMaterial), STRUCT_OFFSET(UMaterial, PhysicalMaterialMap), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialMap_MetaData), NewProp_PhysicalMaterialMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RenderTracePhysicalMaterialOutputs_Inner = { "RenderTracePhysicalMaterialOutputs", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RenderTracePhysicalMaterialOutputs = { "RenderTracePhysicalMaterialOutputs", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, RenderTracePhysicalMaterialOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTracePhysicalMaterialOutputs_MetaData), NewProp_RenderTracePhysicalMaterialOutputs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain = { "MaterialDomain", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, MaterialDomain), Z_Construct_UEnum_Engine_EMaterialDomain, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDomain_MetaData), NewProp_MaterialDomain_MetaData) }; // 1070349904
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 1831819339
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode = { "DecalBlendMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, DecalBlendMode), Z_Construct_UEnum_Engine_EDecalBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalBlendMode_MetaData), NewProp_DecalBlendMode_MetaData) }; // 3177837232
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse = { "MaterialDecalResponse", nullptr, (EPropertyFlags)0x0010050000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, MaterialDecalResponse), Z_Construct_UEnum_Engine_EMaterialDecalResponse, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDecalResponse_MetaData), NewProp_MaterialDecalResponse_MetaData) }; // 4201141152
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_NaniteOverrideMaterial = { "NaniteOverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, NaniteOverrideMaterial), Z_Construct_UScriptStruct_FMaterialOverrideNanite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteOverrideMaterial_MetaData), NewProp_NaniteOverrideMaterial_MetaData) }; // 3962272721
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DisplacementScaling = { "DisplacementScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, DisplacementScaling), Z_Construct_UScriptStruct_FDisplacementScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementScaling_MetaData), NewProp_DisplacementScaling_MetaData) }; // 147785571
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0040010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModel_MetaData), NewProp_ShadingModel_MetaData) }; // 1797132865
void Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bCastDynamicShadowAsMasked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked = { "bCastDynamicShadowAsMasked", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadowAsMasked_MetaData), NewProp_bCastDynamicShadowAsMasked_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModels = { "ShadingModels", nullptr, (EPropertyFlags)0x0040010000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ShadingModels), Z_Construct_UScriptStruct_FMaterialShadingModelField, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModels_MetaData), NewProp_ShadingModels_MetaData) }; // 2493560205
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_UsedShadingModels = { "UsedShadingModels", nullptr, (EPropertyFlags)0x0040000800022001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, UsedShadingModels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsedShadingModels_MetaData), NewProp_UsedShadingModels_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue = { "OpacityMaskClipValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, OpacityMaskClipValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMaskClipValue_MetaData), NewProp_OpacityMaskClipValue_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableSeparateTranslucency_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency = { "bEnableSeparateTranslucency", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSeparateTranslucency_MetaData), NewProp_bEnableSeparateTranslucency_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableResponsiveAA = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA = { "bEnableResponsiveAA", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableResponsiveAA_MetaData), NewProp_bEnableResponsiveAA_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bScreenSpaceReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections = { "bScreenSpaceReflections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScreenSpaceReflections_MetaData), NewProp_bScreenSpaceReflections_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bContactShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows = { "bContactShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bContactShadows_MetaData), NewProp_bContactShadows_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_SetBit(void* Obj)
{
	((UMaterial*)Obj)->TwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided = { "TwoSided", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TwoSided_MetaData), NewProp_TwoSided_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsThinSurface_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsThinSurface = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsThinSurface = { "bIsThinSurface", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsThinSurface_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsThinSurface_MetaData), NewProp_bIsThinSurface_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_SetBit(void* Obj)
{
	((UMaterial*)Obj)->DitheredLODTransition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition = { "DitheredLODTransition", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitheredLODTransition_MetaData), NewProp_DitheredLODTransition_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_SetBit(void* Obj)
{
	((UMaterial*)Obj)->DitherOpacityMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask = { "DitherOpacityMask", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DitherOpacityMask_MetaData), NewProp_DitherOpacityMask_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bAllowNegativeEmissiveColor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor = { "bAllowNegativeEmissiveColor", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNegativeEmissiveColor_MetaData), NewProp_bAllowNegativeEmissiveColor_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bHasPixelAnimation_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bHasPixelAnimation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bHasPixelAnimation = { "bHasPixelAnimation", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bHasPixelAnimation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasPixelAnimation_MetaData), NewProp_bHasPixelAnimation_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableTessellation_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableTessellation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableTessellation = { "bEnableTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableTessellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTessellation_MetaData), NewProp_bEnableTessellation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyPass = { "TranslucencyPass", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucencyPass), Z_Construct_UEnum_Engine_EMaterialTranslucencyPass, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencyPass_MetaData), NewProp_TranslucencyPass_MetaData) }; // 1751005538
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode = { "TranslucencyLightingMode", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucencyLightingMode), Z_Construct_UEnum_Engine_ETranslucencyLightingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencyLightingMode_MetaData), NewProp_TranslucencyLightingMode_MetaData) }; // 317201720
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableMobileSeparateTranslucency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency = { "bEnableMobileSeparateTranslucency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMobileSeparateTranslucency_MetaData), NewProp_bEnableMobileSeparateTranslucency_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs = { "NumCustomizedUVs", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, NumCustomizedUVs), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumCustomizedUVs_MetaData), NewProp_NumCustomizedUVs_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity = { "TranslucencyDirectionalLightingIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucencyDirectionalLightingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencyDirectionalLightingIntensity_MetaData), NewProp_TranslucencyDirectionalLightingIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale = { "TranslucentShadowDensityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentShadowDensityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentShadowDensityScale_MetaData), NewProp_TranslucentShadowDensityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale = { "TranslucentSelfShadowDensityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowDensityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentSelfShadowDensityScale_MetaData), NewProp_TranslucentSelfShadowDensityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale = { "TranslucentSelfShadowSecondDensityScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowSecondDensityScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentSelfShadowSecondDensityScale_MetaData), NewProp_TranslucentSelfShadowSecondDensityScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity = { "TranslucentSelfShadowSecondOpacity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentSelfShadowSecondOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentSelfShadowSecondOpacity_MetaData), NewProp_TranslucentSelfShadowSecondOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent = { "TranslucentBackscatteringExponent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentBackscatteringExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentBackscatteringExponent_MetaData), NewProp_TranslucentBackscatteringExponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction = { "TranslucentMultipleScatteringExtinction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentMultipleScatteringExtinction), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentMultipleScatteringExtinction_MetaData), NewProp_TranslucentMultipleScatteringExtinction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset = { "TranslucentShadowStartOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, TranslucentShadowStartOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucentShadowStartOffset_MetaData), NewProp_TranslucentShadowStartOffset_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bDisableDepthTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest = { "bDisableDepthTest", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableDepthTest_MetaData), NewProp_bDisableDepthTest_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bWriteOnlyAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha = { "bWriteOnlyAlpha", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWriteOnlyAlpha_MetaData), NewProp_bWriteOnlyAlpha_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bGenerateSphericalParticleNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals = { "bGenerateSphericalParticleNormals", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGenerateSphericalParticleNormals_MetaData), NewProp_bGenerateSphericalParticleNormals_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bTangentSpaceNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal = { "bTangentSpaceNormal", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTangentSpaceNormal_MetaData), NewProp_bTangentSpaceNormal_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseEmissiveForDynamicAreaLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting = { "bUseEmissiveForDynamicAreaLighting", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseEmissiveForDynamicAreaLighting_MetaData), NewProp_bUseEmissiveForDynamicAreaLighting_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedAsSpecialEngineMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial = { "bUsedAsSpecialEngineMaterial", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedAsSpecialEngineMaterial_MetaData), NewProp_bUsedAsSpecialEngineMaterial_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithSkeletalMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh = { "bUsedWithSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithSkeletalMesh_MetaData), NewProp_bUsedWithSkeletalMesh_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithEditorCompositing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing = { "bUsedWithEditorCompositing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithEditorCompositing_MetaData), NewProp_bUsedWithEditorCompositing_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithParticleSprites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites = { "bUsedWithParticleSprites", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithParticleSprites_MetaData), NewProp_bUsedWithParticleSprites_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithBeamTrails = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails = { "bUsedWithBeamTrails", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithBeamTrails_MetaData), NewProp_bUsedWithBeamTrails_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithMeshParticles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles = { "bUsedWithMeshParticles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithMeshParticles_MetaData), NewProp_bUsedWithMeshParticles_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithNiagaraSprites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites = { "bUsedWithNiagaraSprites", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithNiagaraSprites_MetaData), NewProp_bUsedWithNiagaraSprites_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithNiagaraRibbons = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons = { "bUsedWithNiagaraRibbons", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithNiagaraRibbons_MetaData), NewProp_bUsedWithNiagaraRibbons_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithNiagaraMeshParticles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles = { "bUsedWithNiagaraMeshParticles", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithNiagaraMeshParticles_MetaData), NewProp_bUsedWithNiagaraMeshParticles_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithGeometryCache = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache = { "bUsedWithGeometryCache", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithGeometryCache_MetaData), NewProp_bUsedWithGeometryCache_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithStaticLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting = { "bUsedWithStaticLighting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithStaticLighting_MetaData), NewProp_bUsedWithStaticLighting_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithMorphTargets = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets = { "bUsedWithMorphTargets", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithMorphTargets_MetaData), NewProp_bUsedWithMorphTargets_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithSplineMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes = { "bUsedWithSplineMeshes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithSplineMeshes_MetaData), NewProp_bUsedWithSplineMeshes_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithInstancedStaticMeshes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes = { "bUsedWithInstancedStaticMeshes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithInstancedStaticMeshes_MetaData), NewProp_bUsedWithInstancedStaticMeshes_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCollections_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithGeometryCollections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCollections = { "bUsedWithGeometryCollections", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCollections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithGeometryCollections_MetaData), NewProp_bUsedWithGeometryCollections_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsesDistortion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion = { "bUsesDistortion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsesDistortion_MetaData), NewProp_bUsesDistortion_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bRootNodeOverridesDefaultDistortion_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bRootNodeOverridesDefaultDistortion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bRootNodeOverridesDefaultDistortion = { "bRootNodeOverridesDefaultDistortion", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bRootNodeOverridesDefaultDistortion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRootNodeOverridesDefaultDistortion_MetaData), NewProp_bRootNodeOverridesDefaultDistortion_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithClothing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing = { "bUsedWithClothing", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithClothing_MetaData), NewProp_bUsedWithClothing_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithWater_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithWater = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithWater = { "bUsedWithWater", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithWater_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithWater_MetaData), NewProp_bUsedWithWater_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHairStrands_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithHairStrands = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHairStrands = { "bUsedWithHairStrands", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHairStrands_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithHairStrands_MetaData), NewProp_bUsedWithHairStrands_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithLidarPointCloud_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithLidarPointCloud = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithLidarPointCloud = { "bUsedWithLidarPointCloud", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithLidarPointCloud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithLidarPointCloud_MetaData), NewProp_bUsedWithLidarPointCloud_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVirtualHeightfieldMesh_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithVirtualHeightfieldMesh = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVirtualHeightfieldMesh = { "bUsedWithVirtualHeightfieldMesh", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVirtualHeightfieldMesh_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithVirtualHeightfieldMesh_MetaData), NewProp_bUsedWithVirtualHeightfieldMesh_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNanite_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithNanite = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNanite = { "bUsedWithNanite", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNanite_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithNanite_MetaData), NewProp_bUsedWithNanite_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVolumetricCloud_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithVolumetricCloud = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVolumetricCloud = { "bUsedWithVolumetricCloud", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVolumetricCloud_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithVolumetricCloud_MetaData), NewProp_bUsedWithVolumetricCloud_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHeterogeneousVolumes_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithHeterogeneousVolumes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHeterogeneousVolumes = { "bUsedWithHeterogeneousVolumes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHeterogeneousVolumes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithHeterogeneousVolumes_MetaData), NewProp_bUsedWithHeterogeneousVolumes_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithUI_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI = { "bUsedWithUI", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithUI_MetaData), NewProp_bUsedWithUI_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bAutomaticallySetUsageInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor = { "bAutomaticallySetUsageInEditor", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutomaticallySetUsageInEditor_MetaData), NewProp_bAutomaticallySetUsageInEditor_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bFullyRough = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough = { "bFullyRough", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFullyRough_MetaData), NewProp_bFullyRough_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseFullPrecision_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision = { "bUseFullPrecision", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFullPrecision_MetaData), NewProp_bUseFullPrecision_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_FloatPrecisionMode = { "FloatPrecisionMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, FloatPrecisionMode), Z_Construct_UEnum_Engine_EMaterialFloatPrecisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatPrecisionMode_MetaData), NewProp_FloatPrecisionMode_MetaData) }; // 2947245781
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseLightmapDirectionality = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality = { "bUseLightmapDirectionality", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseLightmapDirectionality_MetaData), NewProp_bUseLightmapDirectionality_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bMobileEnableHighQualityBRDF_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bMobileEnableHighQualityBRDF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bMobileEnableHighQualityBRDF = { "bMobileEnableHighQualityBRDF", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bMobileEnableHighQualityBRDF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMobileEnableHighQualityBRDF_MetaData), NewProp_bMobileEnableHighQualityBRDF_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseAlphaToCoverage_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseAlphaToCoverage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseAlphaToCoverage = { "bUseAlphaToCoverage", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseAlphaToCoverage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAlphaToCoverage_MetaData), NewProp_bUseAlphaToCoverage_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bForwardRenderUsePreintegratedGFForSimpleIBL = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL = { "bForwardRenderUsePreintegratedGFForSimpleIBL", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_MetaData), NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseHQForwardReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections = { "bUseHQForwardReflections", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseHQForwardReflections_MetaData), NewProp_bUseHQForwardReflections_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardBlendsSkyLightCubemaps_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bForwardBlendsSkyLightCubemaps = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardBlendsSkyLightCubemaps = { "bForwardBlendsSkyLightCubemaps", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardBlendsSkyLightCubemaps_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForwardBlendsSkyLightCubemaps_MetaData), NewProp_bForwardBlendsSkyLightCubemaps_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsePlanarForwardReflections = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections = { "bUsePlanarForwardReflections", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePlanarForwardReflections_MetaData), NewProp_bUsePlanarForwardReflections_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bNormalCurvatureToRoughness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness = { "bNormalCurvatureToRoughness", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalCurvatureToRoughness_MetaData), NewProp_bNormalCurvatureToRoughness_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_SetBit(void* Obj)
{
	((UMaterial*)Obj)->AllowTranslucentCustomDepthWrites = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites = { "AllowTranslucentCustomDepthWrites", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowTranslucentCustomDepthWrites_MetaData), NewProp_AllowTranslucentCustomDepthWrites_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowFrontLayerTranslucency_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bAllowFrontLayerTranslucency = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowFrontLayerTranslucency = { "bAllowFrontLayerTranslucency", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowFrontLayerTranslucency_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowFrontLayerTranslucency_MetaData), NewProp_bAllowFrontLayerTranslucency_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_SetBit(void* Obj)
{
	((UMaterial*)Obj)->Wireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe = { "Wireframe", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Wireframe_MetaData), NewProp_Wireframe_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingRate = { "ShadingRate", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ShadingRate), Z_Construct_UEnum_Engine_EMaterialShadingRate, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingRate_MetaData), NewProp_ShadingRate_MetaData) }; // 263185341
void Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowVariableRateShading_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bAllowVariableRateShading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowVariableRateShading = { "bAllowVariableRateShading", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowVariableRateShading_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowVariableRateShading_MetaData), NewProp_bAllowVariableRateShading_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX = { "EditorX", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, EditorX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorX_MetaData), NewProp_EditorX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY = { "EditorY", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, EditorY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorY_MetaData), NewProp_EditorY_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch = { "EditorPitch", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, EditorPitch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorPitch_MetaData), NewProp_EditorPitch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw = { "EditorYaw", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, EditorYaw), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorYaw_MetaData), NewProp_EditorYaw_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bCanMaskedBeAssumedOpaque = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque = { "bCanMaskedBeAssumedOpaque", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanMaskedBeAssumedOpaque_MetaData), NewProp_bCanMaskedBeAssumedOpaque_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsMasked_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked = { "bIsMasked", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMasked_MetaData), NewProp_bIsMasked_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsPreviewMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial = { "bIsPreviewMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsPreviewMaterial_MetaData), NewProp_bIsPreviewMaterial_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsFunctionPreviewMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial = { "bIsFunctionPreviewMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFunctionPreviewMaterial_MetaData), NewProp_bIsFunctionPreviewMaterial_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseMaterialAttributes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes = { "bUseMaterialAttributes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaterialAttributes_MetaData), NewProp_bUseMaterialAttributes_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableExecWire_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableExecWire = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableExecWire = { "bEnableExecWire", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableExecWire_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableExecWire_MetaData), NewProp_bEnableExecWire_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableNewHLSLGenerator_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableNewHLSLGenerator = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableNewHLSLGenerator = { "bEnableNewHLSLGenerator", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableNewHLSLGenerator_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableNewHLSLGenerator_MetaData), NewProp_bEnableNewHLSLGenerator_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bCastRayTracedShadows_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bCastRayTracedShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bCastRayTracedShadows = { "bCastRayTracedShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bCastRayTracedShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastRayTracedShadows_MetaData), NewProp_bCastRayTracedShadows_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUseTranslucencyVertexFog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog = { "bUseTranslucencyVertexFog", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTranslucencyVertexFog_MetaData), NewProp_bUseTranslucencyVertexFog_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bApplyCloudFogging_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bApplyCloudFogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bApplyCloudFogging = { "bApplyCloudFogging", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bApplyCloudFogging_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyCloudFogging_MetaData), NewProp_bApplyCloudFogging_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsSky_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsSky = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsSky = { "bIsSky", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsSky_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSky_MetaData), NewProp_bIsSky_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bComputeFogPerPixel = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel = { "bComputeFogPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bComputeFogPerPixel_MetaData), NewProp_bComputeFogPerPixel_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputTranslucentVelocity_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bOutputTranslucentVelocity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputTranslucentVelocity = { "bOutputTranslucentVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputTranslucentVelocity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOutputTranslucentVelocity_MetaData), NewProp_bOutputTranslucentVelocity_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bAllowDevelopmentShaderCompile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile = { "bAllowDevelopmentShaderCompile", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDevelopmentShaderCompile_MetaData), NewProp_bAllowDevelopmentShaderCompile_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsMaterialEditorStatsMaterial = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial = { "bIsMaterialEditorStatsMaterial", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMaterialEditorStatsMaterial_MetaData), NewProp_bIsMaterialEditorStatsMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation = { "BlendableLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, BlendableLocation), Z_Construct_UEnum_Engine_EBlendableLocation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendableLocation_MetaData), NewProp_BlendableLocation_MetaData) }; // 2991443878
void Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_SetBit(void* Obj)
{
	((UMaterial*)Obj)->BlendableOutputAlpha = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha = { "BlendableOutputAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendableOutputAlpha_MetaData), NewProp_BlendableOutputAlpha_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNeuralNetworks_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bUsedWithNeuralNetworks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNeuralNetworks = { "bUsedWithNeuralNetworks", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNeuralNetworks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedWithNeuralNetworks_MetaData), NewProp_bUsedWithNeuralNetworks_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableStencilTest_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bEnableStencilTest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableStencilTest = { "bEnableStencilTest", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableStencilTest_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStencilTest_MetaData), NewProp_bEnableStencilTest_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_StencilCompare = { "StencilCompare", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, StencilCompare), Z_Construct_UEnum_Engine_EMaterialStencilCompare, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilCompare_MetaData), NewProp_StencilCompare_MetaData) }; // 1400580241
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_StencilRefValue = { "StencilRefValue", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, StencilRefValue), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StencilRefValue_MetaData), NewProp_StencilRefValue_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_NeuralProfileId = { "NeuralProfileId", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, NeuralProfileId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NeuralProfileId_MetaData), NewProp_NeuralProfileId_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode = { "RefractionMode", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, RefractionMode_DEPRECATED), Z_Construct_UEnum_Engine_ERefractionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionMode_MetaData), NewProp_RefractionMode_MetaData) }; // 2908799328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMethod = { "RefractionMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, RefractionMethod), Z_Construct_UEnum_Engine_ERefractionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionMethod_MetaData), NewProp_RefractionMethod_MetaData) }; // 2908799328
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionCoverageMode = { "RefractionCoverageMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, RefractionCoverageMode), Z_Construct_UEnum_Engine_ERefractionCoverageMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionCoverageMode_MetaData), NewProp_RefractionCoverageMode_MetaData) }; // 466786426
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority = { "BlendablePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, BlendablePriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendablePriority_MetaData), NewProp_BlendablePriority_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bIsBlendable_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bIsBlendable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bIsBlendable = { "bIsBlendable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bIsBlendable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsBlendable_MetaData), NewProp_bIsBlendable_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PreshaderGap = { "PreshaderGap", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, PreshaderGap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreshaderGap_MetaData), NewProp_PreshaderGap_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings = { "UsageFlagWarnings", nullptr, (EPropertyFlags)0x0010000000202000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, UsageFlagWarnings), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UsageFlagWarnings_MetaData), NewProp_UsageFlagWarnings_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias = { "RefractionDepthBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, RefractionDepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RefractionDepthBias_MetaData), NewProp_RefractionDepthBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaxWorldPositionOffsetDisplacement = { "MaxWorldPositionOffsetDisplacement", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, MaxWorldPositionOffsetDisplacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWorldPositionOffsetDisplacement_MetaData), NewProp_MaxWorldPositionOffsetDisplacement_MetaData) };
void Z_Construct_UClass_UMaterial_Statics::NewProp_bAlwaysEvaluateWorldPositionOffset_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bAlwaysEvaluateWorldPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bAlwaysEvaluateWorldPositionOffset = { "bAlwaysEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bAlwaysEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysEvaluateWorldPositionOffset_MetaData), NewProp_bAlwaysEvaluateWorldPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StateId_MetaData), NewProp_StateId_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMaterial_Statics::NewProp_bSavedCachedExpressionData_SetBit(void* Obj)
{
	((UMaterial*)Obj)->bSavedCachedExpressionData_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_bSavedCachedExpressionData = { "bSavedCachedExpressionData", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterial), &Z_Construct_UClass_UMaterial_Statics::NewProp_bSavedCachedExpressionData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavedCachedExpressionData_MetaData), NewProp_bSavedCachedExpressionData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_Inner = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ReferencedTextureGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedTextureGuids_MetaData), NewProp_ReferencedTextureGuids_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_Inner = { "EditorComments", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpressionComment_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments = { "EditorComments", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, EditorComments_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditorComments_MetaData), NewProp_EditorComments_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionExecBegin = { "ExpressionExecBegin", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ExpressionExecBegin_DEPRECATED), Z_Construct_UClass_UMaterialExpressionExecBegin_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionExecBegin_MetaData), NewProp_ExpressionExecBegin_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionExecEnd = { "ExpressionExecEnd", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ExpressionExecEnd_DEPRECATED), Z_Construct_UClass_UMaterialExpressionExecEnd_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionExecEnd_MetaData), NewProp_ExpressionExecEnd_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_Inner = { "Expressions", nullptr, (EPropertyFlags)0x0104000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialExpression_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions = { "Expressions", nullptr, (EPropertyFlags)0x0144000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Expressions_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Expressions_MetaData), NewProp_Expressions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_Inner = { "ParameterGroupData", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FParameterGroupData, METADATA_PARAMS(0, nullptr) }; // 1351999071
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData = { "ParameterGroupData", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ParameterGroupData_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterGroupData_MetaData), NewProp_ParameterGroupData_MetaData) }; // 1351999071
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor = { "DiffuseColor", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, DiffuseColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DiffuseColor_MetaData), NewProp_DiffuseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor = { "SpecularColor", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, SpecularColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularColor_MetaData), NewProp_SpecularColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor = { "BaseColor", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, BaseColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseColor_MetaData), NewProp_BaseColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic = { "Metallic", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Metallic_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metallic_MetaData), NewProp_Metallic_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Specular = { "Specular", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Specular_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Specular_MetaData), NewProp_Specular_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness = { "Roughness", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Roughness_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Roughness_MetaData), NewProp_Roughness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Anisotropy = { "Anisotropy", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Anisotropy_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anisotropy_MetaData), NewProp_Anisotropy_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Normal_DEPRECATED), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Tangent = { "Tangent", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Tangent_DEPRECATED), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tangent_MetaData), NewProp_Tangent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor = { "EmissiveColor", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, EmissiveColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EmissiveColor_MetaData), NewProp_EmissiveColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity = { "Opacity", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Opacity_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Opacity_MetaData), NewProp_Opacity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask = { "OpacityMask", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, OpacityMask_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OpacityMask_MetaData), NewProp_OpacityMask_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset = { "WorldPositionOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, WorldPositionOffset_DEPRECATED), Z_Construct_UScriptStruct_FVectorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffset_MetaData), NewProp_WorldPositionOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor = { "SubsurfaceColor", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, SubsurfaceColor_DEPRECATED), Z_Construct_UScriptStruct_FColorMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubsurfaceColor_MetaData), NewProp_SubsurfaceColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat = { "ClearCoat", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ClearCoat_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearCoat_MetaData), NewProp_ClearCoat_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness = { "ClearCoatRoughness", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ClearCoatRoughness_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearCoatRoughness_MetaData), NewProp_ClearCoatRoughness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion = { "AmbientOcclusion", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, AmbientOcclusion_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AmbientOcclusion_MetaData), NewProp_AmbientOcclusion_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction = { "Refraction", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, Refraction_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Refraction_MetaData), NewProp_Refraction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs = { "CustomizedUVs", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(CustomizedUVs_DEPRECATED, UMaterial), STRUCT_OFFSET(UMaterial, CustomizedUVs_DEPRECATED), Z_Construct_UScriptStruct_FVector2MaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomizedUVs_MetaData), NewProp_CustomizedUVs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes = { "MaterialAttributes", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, MaterialAttributes_DEPRECATED), Z_Construct_UScriptStruct_FMaterialAttributesInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialAttributes_MetaData), NewProp_MaterialAttributes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset = { "PixelDepthOffset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, PixelDepthOffset_DEPRECATED), Z_Construct_UScriptStruct_FScalarMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDepthOffset_MetaData), NewProp_PixelDepthOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModelFromMaterialExpression = { "ShadingModelFromMaterialExpression", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, ShadingModelFromMaterialExpression_DEPRECATED), Z_Construct_UScriptStruct_FShadingModelMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadingModelFromMaterialExpression_MetaData), NewProp_ShadingModelFromMaterialExpression_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterial_Statics::NewProp_FrontMaterial = { "FrontMaterial", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterial, FrontMaterial_DEPRECATED), Z_Construct_UScriptStruct_FSubstrateMaterialInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontMaterial_MetaData), NewProp_FrontMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PhysMaterialMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PhysicalMaterialMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RenderTracePhysicalMaterialOutputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RenderTracePhysicalMaterialOutputs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDomain,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DecalBlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialDecalResponse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_NaniteOverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DisplacementScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bCastDynamicShadowAsMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModels,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_UsedShadingModels,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMaskClipValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableSeparateTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableResponsiveAA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bScreenSpaceReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bContactShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsThinSurface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DitheredLODTransition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DitherOpacityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowNegativeEmissiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bHasPixelAnimation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableTessellation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyPass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyLightingMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableMobileSeparateTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_NumCustomizedUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucencyDirectionalLightingIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowDensityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowDensityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondDensityScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentSelfShadowSecondOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentBackscatteringExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentMultipleScatteringExtinction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_TranslucentShadowStartOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bDisableDepthTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bWriteOnlyAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bGenerateSphericalParticleNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bTangentSpaceNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseEmissiveForDynamicAreaLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedAsSpecialEngineMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithEditorCompositing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithParticleSprites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithBeamTrails,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMeshParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraSprites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraRibbons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNiagaraMeshParticles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithMorphTargets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithSplineMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithInstancedStaticMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithGeometryCollections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsesDistortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bRootNodeOverridesDefaultDistortion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithClothing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithWater,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHairStrands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithLidarPointCloud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVirtualHeightfieldMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNanite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithVolumetricCloud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithHeterogeneousVolumes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithUI,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAutomaticallySetUsageInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bFullyRough,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseFullPrecision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_FloatPrecisionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseLightmapDirectionality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bMobileEnableHighQualityBRDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseAlphaToCoverage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardRenderUsePreintegratedGFForSimpleIBL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseHQForwardReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bForwardBlendsSkyLightCubemaps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsePlanarForwardReflections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bNormalCurvatureToRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_AllowTranslucentCustomDepthWrites,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowFrontLayerTranslucency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Wireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowVariableRateShading,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorYaw,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bCanMaskedBeAssumedOpaque,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMasked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsPreviewMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsFunctionPreviewMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseMaterialAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableExecWire,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableNewHLSLGenerator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bCastRayTracedShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUseTranslucencyVertexFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bApplyCloudFogging,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsSky,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bComputeFogPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bOutputTranslucentVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAllowDevelopmentShaderCompile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsMaterialEditorStatsMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendableOutputAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bUsedWithNeuralNetworks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bEnableStencilTest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_StencilCompare,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_StencilRefValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_NeuralProfileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionMethod,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionCoverageMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BlendablePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bIsBlendable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PreshaderGap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_UsageFlagWarnings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_RefractionDepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaxWorldPositionOffsetDisplacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bAlwaysEvaluateWorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_StateId,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_bSavedCachedExpressionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ReferencedTextureGuids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EditorComments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionExecBegin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ExpressionExecEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Expressions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ParameterGroupData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_DiffuseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_SpecularColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_BaseColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Metallic,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Specular,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Roughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Anisotropy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Tangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_EmissiveColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Opacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_OpacityMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_WorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_SubsurfaceColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ClearCoatRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_AmbientOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_Refraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_CustomizedUVs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_MaterialAttributes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_PixelDepthOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_ShadingModelFromMaterialExpression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterial_Statics::NewProp_FrontMaterial,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterial_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterial_Statics::ClassParams = {
	&UMaterial::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterial_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterial_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterial_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterial()
{
	if (!Z_Registration_Info_UClass_UMaterial.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterial.OuterSingleton, Z_Construct_UClass_UMaterial_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterial.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterial>()
{
	return UMaterial::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterial);
UMaterial::~UMaterial() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterial)
// End Class UMaterial

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDecalBlendMode_StaticEnum, TEXT("EDecalBlendMode"), &Z_Registration_Info_UEnum_EDecalBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3177837232U) },
		{ EMaterialDecalResponse_StaticEnum, TEXT("EMaterialDecalResponse"), &Z_Registration_Info_UEnum_EMaterialDecalResponse, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4201141152U) },
		{ EMaterialTranslucencyPass_StaticEnum, TEXT("EMaterialTranslucencyPass"), &Z_Registration_Info_UEnum_EMaterialTranslucencyPass, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1751005538U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FParameterGroupData::StaticStruct, Z_Construct_UScriptStruct_FParameterGroupData_Statics::NewStructOps, TEXT("ParameterGroupData"), &Z_Registration_Info_UScriptStruct_ParameterGroupData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FParameterGroupData), 1351999071U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialEditorOnlyData, UMaterialEditorOnlyData::StaticClass, TEXT("UMaterialEditorOnlyData"), &Z_Registration_Info_UClass_UMaterialEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialEditorOnlyData), 866015366U) },
		{ Z_Construct_UClass_UMaterial, UMaterial::StaticClass, TEXT("UMaterial"), &Z_Registration_Info_UClass_UMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterial), 695391472U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_3045096545(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_Material_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
