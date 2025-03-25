// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/SceneTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneTypes() {}

// Begin Cross Module References
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialProperty();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCustomPrimitiveData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomPrimitiveData;
class UScriptStruct* FCustomPrimitiveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomPrimitiveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomPrimitiveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomPrimitiveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CustomPrimitiveData"));
	}
	return Z_Registration_Info_UScriptStruct_CustomPrimitiveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCustomPrimitiveData>()
{
	return FCustomPrimitiveData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Custom primitive data payload. */" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
		{ "ToolTip", "Custom primitive data payload." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomPrimitiveData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCustomPrimitiveData, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CustomPrimitiveData",
	Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::PropPointers),
	sizeof(FCustomPrimitiveData),
	alignof(FCustomPrimitiveData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCustomPrimitiveData()
{
	if (!Z_Registration_Info_UScriptStruct_CustomPrimitiveData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomPrimitiveData.InnerSingleton, Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CustomPrimitiveData.InnerSingleton;
}
// End ScriptStruct FCustomPrimitiveData

// Begin Enum EMaterialProperty
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialProperty;
static UEnum* EMaterialProperty_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMaterialProperty.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMaterialProperty.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialProperty"));
	}
	return Z_Registration_Info_UEnum_EMaterialProperty.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EMaterialProperty>()
{
	return EMaterialProperty_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EMaterialProperty_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "//\n//\x09""EMaterialProperty\n//\n" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
		{ "MP_AmbientOcclusion.DisplayName", "Ambient Occlusion" },
		{ "MP_AmbientOcclusion.Name", "MP_AmbientOcclusion" },
		{ "MP_Anisotropy.DisplayName", "Anisotropy" },
		{ "MP_Anisotropy.Name", "MP_Anisotropy" },
		{ "MP_BaseColor.Comment", "// used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular\x09""Also used in Substrate which uses Albedo/F0 parameterization\n" },
		{ "MP_BaseColor.DisplayName", "Diffuse" },
		{ "MP_BaseColor.Name", "MP_BaseColor" },
		{ "MP_BaseColor.ToolTip", "used in Lightmass, not exposed to user, derived from: SpecularColor, Metallic, Specular        Also used in Substrate which uses Albedo/F0 parameterization" },
		{ "MP_CustomData0.Hidden", "" },
		{ "MP_CustomData0.Name", "MP_CustomData0" },
		{ "MP_CustomData1.Hidden", "" },
		{ "MP_CustomData1.Name", "MP_CustomData1" },
		{ "MP_CustomizedUVs0.Hidden", "" },
		{ "MP_CustomizedUVs0.Name", "MP_CustomizedUVs0" },
		{ "MP_CustomizedUVs1.Hidden", "" },
		{ "MP_CustomizedUVs1.Name", "MP_CustomizedUVs1" },
		{ "MP_CustomizedUVs2.Hidden", "" },
		{ "MP_CustomizedUVs2.Name", "MP_CustomizedUVs2" },
		{ "MP_CustomizedUVs3.Hidden", "" },
		{ "MP_CustomizedUVs3.Name", "MP_CustomizedUVs3" },
		{ "MP_CustomizedUVs4.Hidden", "" },
		{ "MP_CustomizedUVs4.Name", "MP_CustomizedUVs4" },
		{ "MP_CustomizedUVs5.Hidden", "" },
		{ "MP_CustomizedUVs5.Name", "MP_CustomizedUVs5" },
		{ "MP_CustomizedUVs6.Hidden", "" },
		{ "MP_CustomizedUVs6.Name", "MP_CustomizedUVs6" },
		{ "MP_CustomizedUVs7.Hidden", "" },
		{ "MP_CustomizedUVs7.Name", "MP_CustomizedUVs7" },
		{ "MP_CustomOutput.Hidden", "" },
		{ "MP_CustomOutput.Name", "MP_CustomOutput" },
		{ "MP_DiffuseColor.Hidden", "" },
		{ "MP_DiffuseColor.Name", "MP_DiffuseColor" },
		{ "MP_Displacement.Hidden", "" },
		{ "MP_Displacement.Name", "MP_Displacement" },
		{ "MP_EmissiveColor.DisplayName", "Emissive" },
		{ "MP_EmissiveColor.Name", "MP_EmissiveColor" },
		{ "MP_FrontMaterial.DisplayName", "Front Material" },
		{ "MP_FrontMaterial.Name", "MP_FrontMaterial" },
		{ "MP_MaterialAttributes.Comment", "//^^^ New material properties go above here ^^^^\n" },
		{ "MP_MaterialAttributes.Hidden", "" },
		{ "MP_MaterialAttributes.Name", "MP_MaterialAttributes" },
		{ "MP_MaterialAttributes.ToolTip", "^^^ New material properties go above here ^^^^" },
		{ "MP_MAX.DisplayName", "None" },
		{ "MP_MAX.Name", "MP_MAX" },
		{ "MP_Metallic.DisplayName", "Metallic" },
		{ "MP_Metallic.Name", "MP_Metallic" },
		{ "MP_Normal.DisplayName", "Normal" },
		{ "MP_Normal.Name", "MP_Normal" },
		{ "MP_Opacity.DisplayName", "Opacity" },
		{ "MP_Opacity.Name", "MP_Opacity" },
		{ "MP_OpacityMask.DisplayName", "Opacity Mask" },
		{ "MP_OpacityMask.Name", "MP_OpacityMask" },
		{ "MP_PixelDepthOffset.Hidden", "" },
		{ "MP_PixelDepthOffset.Name", "MP_PixelDepthOffset" },
		{ "MP_Refraction.DisplayName", "Refraction" },
		{ "MP_Refraction.Name", "MP_Refraction" },
		{ "MP_Roughness.DisplayName", "Roughness " },
		{ "MP_Roughness.Name", "MP_Roughness" },
		{ "MP_ShadingModel.Hidden", "" },
		{ "MP_ShadingModel.Name", "MP_ShadingModel" },
		{ "MP_Specular.DisplayName", "Specular" },
		{ "MP_Specular.Name", "MP_Specular" },
		{ "MP_SpecularColor.Comment", "// used in Lightmass, not exposed to user, computed from: BaseColor, Metallic\x09\x09\x09\x09""Also used in Substrate which uses Albedo/F0 parameterization\n" },
		{ "MP_SpecularColor.Hidden", "" },
		{ "MP_SpecularColor.Name", "MP_SpecularColor" },
		{ "MP_SpecularColor.ToolTip", "used in Lightmass, not exposed to user, computed from: BaseColor, Metallic                             Also used in Substrate which uses Albedo/F0 parameterization" },
		{ "MP_SubsurfaceColor.DisplayName", "Subsurface" },
		{ "MP_SubsurfaceColor.Name", "MP_SubsurfaceColor" },
		{ "MP_SurfaceThickness.Hidden", "" },
		{ "MP_SurfaceThickness.Name", "MP_SurfaceThickness" },
		{ "MP_Tangent.DisplayName", "Tangent" },
		{ "MP_Tangent.Name", "MP_Tangent" },
		{ "MP_TessellationMultiplier_DEPRECATED.Hidden", "" },
		{ "MP_TessellationMultiplier_DEPRECATED.Name", "MP_TessellationMultiplier_DEPRECATED" },
		{ "MP_WorldDisplacement_DEPRECATED.Hidden", "" },
		{ "MP_WorldDisplacement_DEPRECATED.Name", "MP_WorldDisplacement_DEPRECATED" },
		{ "MP_WorldPositionOffset.Hidden", "" },
		{ "MP_WorldPositionOffset.Name", "MP_WorldPositionOffset" },
		{ "ToolTip", "EMaterialProperty" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "MP_EmissiveColor", (int64)MP_EmissiveColor },
		{ "MP_Opacity", (int64)MP_Opacity },
		{ "MP_OpacityMask", (int64)MP_OpacityMask },
		{ "MP_DiffuseColor", (int64)MP_DiffuseColor },
		{ "MP_SpecularColor", (int64)MP_SpecularColor },
		{ "MP_BaseColor", (int64)MP_BaseColor },
		{ "MP_Metallic", (int64)MP_Metallic },
		{ "MP_Specular", (int64)MP_Specular },
		{ "MP_Roughness", (int64)MP_Roughness },
		{ "MP_Anisotropy", (int64)MP_Anisotropy },
		{ "MP_Normal", (int64)MP_Normal },
		{ "MP_Tangent", (int64)MP_Tangent },
		{ "MP_WorldPositionOffset", (int64)MP_WorldPositionOffset },
		{ "MP_WorldDisplacement_DEPRECATED", (int64)MP_WorldDisplacement_DEPRECATED },
		{ "MP_TessellationMultiplier_DEPRECATED", (int64)MP_TessellationMultiplier_DEPRECATED },
		{ "MP_SubsurfaceColor", (int64)MP_SubsurfaceColor },
		{ "MP_CustomData0", (int64)MP_CustomData0 },
		{ "MP_CustomData1", (int64)MP_CustomData1 },
		{ "MP_AmbientOcclusion", (int64)MP_AmbientOcclusion },
		{ "MP_Refraction", (int64)MP_Refraction },
		{ "MP_CustomizedUVs0", (int64)MP_CustomizedUVs0 },
		{ "MP_CustomizedUVs1", (int64)MP_CustomizedUVs1 },
		{ "MP_CustomizedUVs2", (int64)MP_CustomizedUVs2 },
		{ "MP_CustomizedUVs3", (int64)MP_CustomizedUVs3 },
		{ "MP_CustomizedUVs4", (int64)MP_CustomizedUVs4 },
		{ "MP_CustomizedUVs5", (int64)MP_CustomizedUVs5 },
		{ "MP_CustomizedUVs6", (int64)MP_CustomizedUVs6 },
		{ "MP_CustomizedUVs7", (int64)MP_CustomizedUVs7 },
		{ "MP_PixelDepthOffset", (int64)MP_PixelDepthOffset },
		{ "MP_ShadingModel", (int64)MP_ShadingModel },
		{ "MP_FrontMaterial", (int64)MP_FrontMaterial },
		{ "MP_SurfaceThickness", (int64)MP_SurfaceThickness },
		{ "MP_Displacement", (int64)MP_Displacement },
		{ "MP_MaterialAttributes", (int64)MP_MaterialAttributes },
		{ "MP_CustomOutput", (int64)MP_CustomOutput },
		{ "MP_MAX", (int64)MP_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialProperty_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EMaterialProperty",
	"EMaterialProperty",
	Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EMaterialProperty_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EMaterialProperty()
{
	if (!Z_Registration_Info_UEnum_EMaterialProperty.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialProperty.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialProperty_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMaterialProperty.InnerSingleton;
}
// End Enum EMaterialProperty

// Begin Enum EShadowCacheInvalidationBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior;
static UEnum* EShadowCacheInvalidationBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EShadowCacheInvalidationBehavior"));
	}
	return Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EShadowCacheInvalidationBehavior>()
{
	return EShadowCacheInvalidationBehavior_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Always.Comment", "/** Always invalidate shadows, can be used to flag a primitive that is using some method of animating that is not known to the system. */" },
		{ "Always.Name", "EShadowCacheInvalidationBehavior::Always" },
		{ "Always.ToolTip", "Always invalidate shadows, can be used to flag a primitive that is using some method of animating that is not known to the system." },
		{ "Auto.Comment", "/** Default. Invalidates based on World Position Offset material, and transform changes, attempting to do the right thing given the information available to the renderer. */" },
		{ "Auto.Name", "EShadowCacheInvalidationBehavior::Auto" },
		{ "Auto.ToolTip", "Default. Invalidates based on World Position Offset material, and transform changes, attempting to do the right thing given the information available to the renderer." },
		{ "Comment", "/** Setting to control shadow invalidation behavior (in particular with respect to Virtual Shadow Maps and future methods). */" },
		{ "ModuleRelativePath", "Public/SceneTypes.h" },
		{ "Rigid.Comment", "/** Suppresses invalidations that would otherwise be generated by e.g., World Position Offset (WPO). Can be used for example when they use WPO statically used, or the artifacts are subtle enough to not warrant the performace overhead (use with care). */" },
		{ "Rigid.Name", "EShadowCacheInvalidationBehavior::Rigid" },
		{ "Rigid.ToolTip", "Suppresses invalidations that would otherwise be generated by e.g., World Position Offset (WPO). Can be used for example when they use WPO statically used, or the artifacts are subtle enough to not warrant the performace overhead (use with care)." },
		{ "Static.Comment", "/** \n\x09 * In addition to \"Rigid\" behavior, also suppress invalidations due to transform changes. Add/Remove will still trigger invalidations. \n\x09 * If the primitive is actually moved or animated somehow the visual result is undefined.\n\x09 */" },
		{ "Static.Name", "EShadowCacheInvalidationBehavior::Static" },
		{ "Static.ToolTip", "In addition to \"Rigid\" behavior, also suppress invalidations due to transform changes. Add/Remove will still trigger invalidations.\nIf the primitive is actually moved or animated somehow the visual result is undefined." },
		{ "ToolTip", "Setting to control shadow invalidation behavior (in particular with respect to Virtual Shadow Maps and future methods)." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EShadowCacheInvalidationBehavior::Auto", (int64)EShadowCacheInvalidationBehavior::Auto },
		{ "EShadowCacheInvalidationBehavior::Always", (int64)EShadowCacheInvalidationBehavior::Always },
		{ "EShadowCacheInvalidationBehavior::Rigid", (int64)EShadowCacheInvalidationBehavior::Rigid },
		{ "EShadowCacheInvalidationBehavior::Static", (int64)EShadowCacheInvalidationBehavior::Static },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EShadowCacheInvalidationBehavior",
	"EShadowCacheInvalidationBehavior",
	Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior()
{
	if (!Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior.InnerSingleton, Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior.InnerSingleton;
}
// End Enum EShadowCacheInvalidationBehavior

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMaterialProperty_StaticEnum, TEXT("EMaterialProperty"), &Z_Registration_Info_UEnum_EMaterialProperty, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2009882583U) },
		{ EShadowCacheInvalidationBehavior_StaticEnum, TEXT("EShadowCacheInvalidationBehavior"), &Z_Registration_Info_UEnum_EShadowCacheInvalidationBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2141891292U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCustomPrimitiveData::StaticStruct, Z_Construct_UScriptStruct_FCustomPrimitiveData_Statics::NewStructOps, TEXT("CustomPrimitiveData"), &Z_Registration_Info_UScriptStruct_CustomPrimitiveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomPrimitiveData), 2103843031U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_727486749(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_SceneTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
