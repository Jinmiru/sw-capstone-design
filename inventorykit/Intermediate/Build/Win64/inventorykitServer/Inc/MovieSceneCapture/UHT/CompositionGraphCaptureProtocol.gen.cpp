// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/Protocols/CompositionGraphCaptureProtocol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositionGraphCaptureProtocol() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
MOVIESCENECAPTURE_API UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin Enum EHDRCaptureGamut
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHDRCaptureGamut;
static UEnum* EHDRCaptureGamut_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("EHDRCaptureGamut"));
	}
	return Z_Registration_Info_UEnum_EHDRCaptureGamut.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UEnum* StaticEnum<EHDRCaptureGamut>()
{
	return EHDRCaptureGamut_StaticEnum();
}
struct Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Used by UCompositionGraphCaptureSettings. Matches gamut order in EDisplayColorGamut */" },
		{ "HCGM_ACES.DisplayName", "ACES" },
		{ "HCGM_ACES.Name", "HCGM_ACES" },
		{ "HCGM_ACEScg.DisplayName", "ACEScg" },
		{ "HCGM_ACEScg.Name", "HCGM_ACEScg" },
		{ "HCGM_Linear.DisplayName", "Linear" },
		{ "HCGM_Linear.Name", "HCGM_Linear" },
		{ "HCGM_MAX.Name", "HCGM_MAX" },
		{ "HCGM_P3DCI.DisplayName", "P3 D65" },
		{ "HCGM_P3DCI.Name", "HCGM_P3DCI" },
		{ "HCGM_Rec2020.DisplayName", "Rec.2020" },
		{ "HCGM_Rec2020.Name", "HCGM_Rec2020" },
		{ "HCGM_Rec709.DisplayName", "Rec.709 / sRGB" },
		{ "HCGM_Rec709.Name", "HCGM_Rec709" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Used by UCompositionGraphCaptureSettings. Matches gamut order in EDisplayColorGamut" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "HCGM_Rec709", (int64)HCGM_Rec709 },
		{ "HCGM_P3DCI", (int64)HCGM_P3DCI },
		{ "HCGM_Rec2020", (int64)HCGM_Rec2020 },
		{ "HCGM_ACES", (int64)HCGM_ACES },
		{ "HCGM_ACEScg", (int64)HCGM_ACEScg },
		{ "HCGM_Linear", (int64)HCGM_Linear },
		{ "HCGM_MAX", (int64)HCGM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	"EHDRCaptureGamut",
	"EHDRCaptureGamut",
	Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut()
{
	if (!Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton, Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHDRCaptureGamut.InnerSingleton;
}
// End Enum EHDRCaptureGamut

// Begin ScriptStruct FCompositionGraphCapturePasses
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses;
class UScriptStruct* FCompositionGraphCapturePasses::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CompositionGraphCapturePasses"));
	}
	return Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCompositionGraphCapturePasses>()
{
	return FCompositionGraphCapturePasses::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Composition Graph Settings" },
		{ "Comment", "/** List of passes to record by name. */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "List of passes to record by name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCompositionGraphCapturePasses>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_Inner = { "Value", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCompositionGraphCapturePasses, Value), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	&NewStructOps,
	"CompositionGraphCapturePasses",
	Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::PropPointers),
	sizeof(FCompositionGraphCapturePasses),
	alignof(FCompositionGraphCapturePasses),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCompositionGraphCapturePasses()
{
	if (!Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.InnerSingleton, Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses.InnerSingleton;
}
// End ScriptStruct FCompositionGraphCapturePasses

// Begin Class UCompositionGraphCaptureProtocol
void UCompositionGraphCaptureProtocol::StaticRegisterNativesUCompositionGraphCaptureProtocol()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCompositionGraphCaptureProtocol);
UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol_NoRegister()
{
	return UCompositionGraphCaptureProtocol::StaticClass();
}
struct Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "CommandLineID", "CustomRenderPasses" },
		{ "DisplayName", "Custom Render Passes" },
		{ "IncludePath", "Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncludeRenderPasses_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** A list of render passes to include in the capture. Leave empty to export all available passes. */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "A list of render passes to include in the capture. Leave empty to export all available passes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCaptureFramesInHDR_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** Whether to capture the frames as HDR textures (*.exr format) */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Whether to capture the frames as HDR textures (*.exr format)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HDRCompressionQuality_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow) */" },
		{ "EditCondition", "bCaptureFramesInHDR" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Compression Quality for HDR Frames (0 for no compression, 1 for default compression which can be slow)" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureGamut_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled. */" },
		{ "EditCondition", "bCaptureFramesInHDR" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "The color gamut to use when storing HDR captured data. The gamut depends on whether the bCaptureFramesInHDR option is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterial_MetaData[] = {
		{ "AllowedClasses", "" },
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** Custom post processing material to use for rendering */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Custom post processing material to use for rendering" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableScreenPercentage_MetaData[] = {
		{ "Category", "Composition Graph Options" },
		{ "Comment", "/** Whether to disable screen percentage */" },
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
		{ "ToolTip", "Whether to disable screen percentage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessingMaterialPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/Protocols/CompositionGraphCaptureProtocol.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncludeRenderPasses;
	static void NewProp_bCaptureFramesInHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCaptureFramesInHDR;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HDRCompressionQuality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CaptureGamut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessingMaterial;
	static void NewProp_bDisableScreenPercentage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableScreenPercentage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PostProcessingMaterialPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCompositionGraphCaptureProtocol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses = { "IncludeRenderPasses", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, IncludeRenderPasses), Z_Construct_UScriptStruct_FCompositionGraphCapturePasses, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncludeRenderPasses_MetaData), NewProp_IncludeRenderPasses_MetaData) }; // 2940450189
void Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit(void* Obj)
{
	((UCompositionGraphCaptureProtocol*)Obj)->bCaptureFramesInHDR = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR = { "bCaptureFramesInHDR", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositionGraphCaptureProtocol), &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCaptureFramesInHDR_MetaData), NewProp_bCaptureFramesInHDR_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality = { "HDRCompressionQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, HDRCompressionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HDRCompressionQuality_MetaData), NewProp_HDRCompressionQuality_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut = { "CaptureGamut", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, CaptureGamut), Z_Construct_UEnum_MovieSceneCapture_EHDRCaptureGamut, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureGamut_MetaData), NewProp_CaptureGamut_MetaData) }; // 3830512448
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial = { "PostProcessingMaterial", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterial), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessingMaterial_MetaData), NewProp_PostProcessingMaterial_MetaData) };
void Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit(void* Obj)
{
	((UCompositionGraphCaptureProtocol*)Obj)->bDisableScreenPercentage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage = { "bDisableScreenPercentage", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCompositionGraphCaptureProtocol), &Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableScreenPercentage_MetaData), NewProp_bDisableScreenPercentage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr = { "PostProcessingMaterialPtr", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCompositionGraphCaptureProtocol, PostProcessingMaterialPtr), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessingMaterialPtr_MetaData), NewProp_PostProcessingMaterialPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_IncludeRenderPasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bCaptureFramesInHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_HDRCompressionQuality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_CaptureGamut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_bDisableScreenPercentage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::NewProp_PostProcessingMaterialPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams = {
	&UCompositionGraphCaptureProtocol::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::PropPointers),
	0,
	0x000804A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams), Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCompositionGraphCaptureProtocol()
{
	if (!Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton, Z_Construct_UClass_UCompositionGraphCaptureProtocol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UCompositionGraphCaptureProtocol>()
{
	return UCompositionGraphCaptureProtocol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCompositionGraphCaptureProtocol);
UCompositionGraphCaptureProtocol::~UCompositionGraphCaptureProtocol() {}
// End Class UCompositionGraphCaptureProtocol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHDRCaptureGamut_StaticEnum, TEXT("EHDRCaptureGamut"), &Z_Registration_Info_UEnum_EHDRCaptureGamut, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3830512448U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCompositionGraphCapturePasses::StaticStruct, Z_Construct_UScriptStruct_FCompositionGraphCapturePasses_Statics::NewStructOps, TEXT("CompositionGraphCapturePasses"), &Z_Registration_Info_UScriptStruct_CompositionGraphCapturePasses, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCompositionGraphCapturePasses), 2940450189U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCompositionGraphCaptureProtocol, UCompositionGraphCaptureProtocol::StaticClass, TEXT("UCompositionGraphCaptureProtocol"), &Z_Registration_Info_UClass_UCompositionGraphCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCompositionGraphCaptureProtocol), 2476848183U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_4192671257(TEXT("/Script/MovieSceneCapture"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_CompositionGraphCaptureProtocol_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
