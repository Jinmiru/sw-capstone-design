// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureRenderTarget2D() {}

// Begin Cross Module References
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EPixelFormat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureAddress();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureFilter();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ETextureRenderTargetFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureRenderTargetFormat;
static UEnum* ETextureRenderTargetFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureRenderTargetFormat"));
	}
	return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureRenderTargetFormat>()
{
	return ETextureRenderTargetFormat_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Subset of EPixelFormat exposed to UTextureRenderTarget2D */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "RTF_R16f.Comment", "/** R channel, 16 bit per channel floating point, range [-65504, 65504] */" },
		{ "RTF_R16f.Name", "RTF_R16f" },
		{ "RTF_R16f.ToolTip", "R channel, 16 bit per channel floating point, range [-65504, 65504]" },
		{ "RTF_R32f.Comment", "/** R channel, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "RTF_R32f.Name", "RTF_R32f" },
		{ "RTF_R32f.ToolTip", "R channel, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "RTF_R8.Comment", "/** R channel, 8 bit per channel fixed point, range [0, 1]. */" },
		{ "RTF_R8.Name", "RTF_R8" },
		{ "RTF_R8.ToolTip", "R channel, 8 bit per channel fixed point, range [0, 1]." },
		{ "RTF_RG16f.Comment", "/** RG channels, 16 bit per channel floating point, range [-65504, 65504] */" },
		{ "RTF_RG16f.Name", "RTF_RG16f" },
		{ "RTF_RG16f.ToolTip", "RG channels, 16 bit per channel floating point, range [-65504, 65504]" },
		{ "RTF_RG32f.Comment", "/** RG channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "RTF_RG32f.Name", "RTF_RG32f" },
		{ "RTF_RG32f.ToolTip", "RG channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "RTF_RG8.Comment", "/** RG channels, 8 bit per channel fixed point, range [0, 1]. */" },
		{ "RTF_RG8.Name", "RTF_RG8" },
		{ "RTF_RG8.ToolTip", "RG channels, 8 bit per channel fixed point, range [0, 1]." },
		{ "RTF_RGB10A2.Comment", "/** RGBA channels, 10 bit per channel fixed point and 2 bit of alpha */" },
		{ "RTF_RGB10A2.Name", "RTF_RGB10A2" },
		{ "RTF_RGB10A2.ToolTip", "RGBA channels, 10 bit per channel fixed point and 2 bit of alpha" },
		{ "RTF_RGBA16f.Comment", "/** RGBA channels, 16 bit per channel floating point, range [-65504, 65504] */" },
		{ "RTF_RGBA16f.Name", "RTF_RGBA16f" },
		{ "RTF_RGBA16f.ToolTip", "RGBA channels, 16 bit per channel floating point, range [-65504, 65504]" },
		{ "RTF_RGBA32f.Comment", "/** RGBA channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38] */" },
		{ "RTF_RGBA32f.Name", "RTF_RGBA32f" },
		{ "RTF_RGBA32f.ToolTip", "RGBA channels, 32 bit per channel floating point, range [-3.402823 x 10^38, 3.402823 x 10^38]" },
		{ "RTF_RGBA8.Comment", "/** RGBA channels, 8 bit per channel fixed point, range [0, 1]. */" },
		{ "RTF_RGBA8.Name", "RTF_RGBA8" },
		{ "RTF_RGBA8.ToolTip", "RGBA channels, 8 bit per channel fixed point, range [0, 1]." },
		{ "RTF_RGBA8_SRGB.Comment", "/** RGBA channels, 8 bit per channel fixed point, range [0, 1]. RGB is encoded with sRGB gamma curve. A is always stored as linear. */" },
		{ "RTF_RGBA8_SRGB.Name", "RTF_RGBA8_SRGB" },
		{ "RTF_RGBA8_SRGB.ToolTip", "RGBA channels, 8 bit per channel fixed point, range [0, 1]. RGB is encoded with sRGB gamma curve. A is always stored as linear." },
		{ "ToolTip", "Subset of EPixelFormat exposed to UTextureRenderTarget2D" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "RTF_R8", (int64)RTF_R8 },
		{ "RTF_RG8", (int64)RTF_RG8 },
		{ "RTF_RGBA8", (int64)RTF_RGBA8 },
		{ "RTF_RGBA8_SRGB", (int64)RTF_RGBA8_SRGB },
		{ "RTF_R16f", (int64)RTF_R16f },
		{ "RTF_RG16f", (int64)RTF_RG16f },
		{ "RTF_RGBA16f", (int64)RTF_RGBA16f },
		{ "RTF_R32f", (int64)RTF_R32f },
		{ "RTF_RG32f", (int64)RTF_RG32f },
		{ "RTF_RGBA32f", (int64)RTF_RGBA32f },
		{ "RTF_RGB10A2", (int64)RTF_RGB10A2 },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureRenderTargetFormat",
	"ETextureRenderTargetFormat",
	Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat()
{
	if (!Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton, Z_Construct_UEnum_Engine_ETextureRenderTargetFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureRenderTargetFormat.InnerSingleton;
}
// End Enum ETextureRenderTargetFormat

// Begin Enum ETextureRenderTargetSampleCount
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount;
static UEnum* ETextureRenderTargetSampleCount_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETextureRenderTargetSampleCount"));
	}
	return Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETextureRenderTargetSampleCount>()
{
	return ETextureRenderTargetSampleCount_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "RTSC_1.DisplayName", "MSAAx1" },
		{ "RTSC_1.Name", "ETextureRenderTargetSampleCount::RTSC_1" },
		{ "RTSC_2.DisplayName", "MSAAx2" },
		{ "RTSC_2.Name", "ETextureRenderTargetSampleCount::RTSC_2" },
		{ "RTSC_4.DisplayName", "MSAAx4" },
		{ "RTSC_4.Name", "ETextureRenderTargetSampleCount::RTSC_4" },
		{ "RTSC_8.DisplayName", "MSAAx8" },
		{ "RTSC_8.Name", "ETextureRenderTargetSampleCount::RTSC_8" },
		{ "RTSC_MAX.Name", "ETextureRenderTargetSampleCount::RTSC_MAX" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETextureRenderTargetSampleCount::RTSC_1", (int64)ETextureRenderTargetSampleCount::RTSC_1 },
		{ "ETextureRenderTargetSampleCount::RTSC_2", (int64)ETextureRenderTargetSampleCount::RTSC_2 },
		{ "ETextureRenderTargetSampleCount::RTSC_4", (int64)ETextureRenderTargetSampleCount::RTSC_4 },
		{ "ETextureRenderTargetSampleCount::RTSC_8", (int64)ETextureRenderTargetSampleCount::RTSC_8 },
		{ "ETextureRenderTargetSampleCount::RTSC_MAX", (int64)ETextureRenderTargetSampleCount::RTSC_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETextureRenderTargetSampleCount",
	"ETextureRenderTargetSampleCount",
	Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount()
{
	if (!Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.InnerSingleton, Z_Construct_UEnum_Engine_ETextureRenderTargetSampleCount_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount.InnerSingleton;
}
// End Enum ETextureRenderTargetSampleCount

// Begin Class UTextureRenderTarget2D
void UTextureRenderTarget2D::StaticRegisterNativesUTextureRenderTarget2D()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureRenderTarget2D);
UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister()
{
	return UTextureRenderTarget2D::StaticClass();
}
struct Z_Construct_UClass_UTextureRenderTarget2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * TextureRenderTarget2D\n *\n * 2D render target texture resource. This can be used as a target\n * for rendering as well as rendered as a regular 2D texture resource.\n *\n */" },
		{ "HideCategories", "Object Texture Compression Adjustments Compositing" },
		{ "IncludePath", "Engine/TextureRenderTarget2D.h" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "TextureRenderTarget2D\n\n2D render target texture resource. This can be used as a target\nfor rendering as well as rendered as a regular 2D texture resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The width of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The width of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The height of the texture. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The height of the texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClearColor_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** the color the texture is cleared to */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "the color the texture is cleared to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressX_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The addressing mode to use for the X axis. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The addressing mode to use for the X axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AddressY_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** The addressing mode to use for the Y axis. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "The addressing mode to use for the Y axis." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceLinearGamma_MetaData[] = {
		{ "Comment", "/** True to force linear gamma space for this render target */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "True to force linear gamma space for this render target" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHDR_MetaData[] = {
		{ "Comment", "/** Whether to support storing HDR values, which requires more memory. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support storing HDR values, which requires more memory." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bGPUSharedFlag_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** Whether to support GPU sharing of the underlying native texture resource. */" },
		{ "DisplayName", "Shared" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support GPU sharing of the underlying native texture resource." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetFormat_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** \n\x09 * Format of the texture render target. \n\x09 * Data written to the render target will be quantized to this format, which can limit the range and precision.\n\x09 * The largest format (RTF_RGBA32f) uses 16x more memory and bandwidth than the smallest (RTF_R8) and can greatly affect performance.  \n\x09 * Use the smallest format that has enough precision and range for what you are doing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Format of the texture render target.\nData written to the render target will be quantized to this format, which can limit the range and precision.\nThe largest format (RTF_RGBA32f) uses 16x more memory and bandwidth than the smallest (RTF_R8) and can greatly affect performance.\nUse the smallest format that has enough precision and range for what you are doing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoGenerateMips_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** Whether to support Mip maps for this render target texture */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Whether to support Mip maps for this render target texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipsSamplerFilter_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/** Sampler filter type for AutoGenerateMips. Defaults to match texture filter. */" },
		{ "editcondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Sampler filter type for AutoGenerateMips. Defaults to match texture filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipsAddressU_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/**  AutoGenerateMips sampler address mode for U channel. Defaults to clamp. */" },
		{ "editcondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "AutoGenerateMips sampler address mode for U channel. Defaults to clamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipsAddressV_MetaData[] = {
		{ "Category", "TextureRenderTarget2D" },
		{ "Comment", "/**  AutoGenerateMips sampler address mode for V channel. Defaults to clamp. */" },
		{ "editcondition", "bAutoGenerateMips" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "AutoGenerateMips sampler address mode for V channel. Defaults to clamp." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideFormat_MetaData[] = {
		{ "Comment", "/** Normally the format is derived from RenderTargetFormat, this allows code to set the format explicitly. */" },
		{ "ModuleRelativePath", "Classes/Engine/TextureRenderTarget2D.h" },
		{ "ToolTip", "Normally the format is derived from RenderTargetFormat, this allows code to set the format explicitly." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressX;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AddressY;
	static void NewProp_bForceLinearGamma_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceLinearGamma;
	static void NewProp_bHDR_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHDR;
	static void NewProp_bGPUSharedFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bGPUSharedFlag;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetFormat;
	static void NewProp_bAutoGenerateMips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoGenerateMips;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipsSamplerFilter;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipsAddressU;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MipsAddressV;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OverrideFormat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureRenderTarget2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, SizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeX_MetaData), NewProp_SizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, SizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SizeY_MetaData), NewProp_SizeY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClearColor_MetaData), NewProp_ClearColor_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX = { "AddressX", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, AddressX), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressX_MetaData), NewProp_AddressX_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY = { "AddressY", nullptr, (EPropertyFlags)0x0010010000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, AddressY), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AddressY_MetaData), NewProp_AddressY_MetaData) }; // 2220430387
void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit(void* Obj)
{
	((UTextureRenderTarget2D*)Obj)->bForceLinearGamma = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma = { "bForceLinearGamma", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceLinearGamma_MetaData), NewProp_bForceLinearGamma_MetaData) };
void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit(void* Obj)
{
	((UTextureRenderTarget2D*)Obj)->bHDR_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR = { "bHDR", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHDR_MetaData), NewProp_bHDR_MetaData) };
void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit(void* Obj)
{
	((UTextureRenderTarget2D*)Obj)->bGPUSharedFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag = { "bGPUSharedFlag", nullptr, (EPropertyFlags)0x0010050000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bGPUSharedFlag_MetaData), NewProp_bGPUSharedFlag_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat = { "RenderTargetFormat", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, RenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RenderTargetFormat_MetaData), NewProp_RenderTargetFormat_MetaData) }; // 338846453
void Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit(void* Obj)
{
	((UTextureRenderTarget2D*)Obj)->bAutoGenerateMips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips = { "bAutoGenerateMips", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTextureRenderTarget2D), &Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoGenerateMips_MetaData), NewProp_bAutoGenerateMips_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter = { "MipsSamplerFilter", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, MipsSamplerFilter), Z_Construct_UEnum_Engine_TextureFilter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipsSamplerFilter_MetaData), NewProp_MipsSamplerFilter_MetaData) }; // 525537855
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU = { "MipsAddressU", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, MipsAddressU), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipsAddressU_MetaData), NewProp_MipsAddressU_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV = { "MipsAddressV", nullptr, (EPropertyFlags)0x0010010000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, MipsAddressV), Z_Construct_UEnum_Engine_TextureAddress, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipsAddressV_MetaData), NewProp_MipsAddressV_MetaData) }; // 2220430387
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat = { "OverrideFormat", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTextureRenderTarget2D, OverrideFormat), Z_Construct_UEnum_CoreUObject_EPixelFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideFormat_MetaData), NewProp_OverrideFormat_MetaData) }; // 2609309733
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_SizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_ClearColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_AddressY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bForceLinearGamma,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bHDR,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bGPUSharedFlag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_RenderTargetFormat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_bAutoGenerateMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsSamplerFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressU,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_MipsAddressV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureRenderTarget2D_Statics::NewProp_OverrideFormat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTextureRenderTarget2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureRenderTarget,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams = {
	&UTextureRenderTarget2D::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams), Z_Construct_UClass_UTextureRenderTarget2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTextureRenderTarget2D()
{
	if (!Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton, Z_Construct_UClass_UTextureRenderTarget2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTextureRenderTarget2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTextureRenderTarget2D>()
{
	return UTextureRenderTarget2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureRenderTarget2D);
UTextureRenderTarget2D::~UTextureRenderTarget2D() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTextureRenderTarget2D)
// End Class UTextureRenderTarget2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETextureRenderTargetFormat_StaticEnum, TEXT("ETextureRenderTargetFormat"), &Z_Registration_Info_UEnum_ETextureRenderTargetFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 338846453U) },
		{ ETextureRenderTargetSampleCount_StaticEnum, TEXT("ETextureRenderTargetSampleCount"), &Z_Registration_Info_UEnum_ETextureRenderTargetSampleCount, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4230546061U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTextureRenderTarget2D, UTextureRenderTarget2D::StaticClass, TEXT("UTextureRenderTarget2D"), &Z_Registration_Info_UClass_UTextureRenderTarget2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureRenderTarget2D), 2000403097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_3988435759(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TextureRenderTarget2D_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
