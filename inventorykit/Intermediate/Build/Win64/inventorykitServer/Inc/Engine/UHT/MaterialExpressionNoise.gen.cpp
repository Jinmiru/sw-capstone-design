// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionNoise.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionNoise() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENoiseFunction();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ENoiseFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENoiseFunction;
static UEnum* ENoiseFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ENoiseFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ENoiseFunction"));
	}
	return Z_Registration_Info_UEnum_ENoiseFunction.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ENoiseFunction>()
{
	return ENoiseFunction_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ENoiseFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "NOISEFUNCTION_GradientALU.Comment", "/** High quality for direct use and bumps\n\x09 * Non-tiled: ~80 instructions per level, no textures\n\x09 * Tiling: ~143 instructions per level, no textures\n\x09 */" },
		{ "NOISEFUNCTION_GradientALU.DisplayName", "Gradient - Computational" },
		{ "NOISEFUNCTION_GradientALU.Name", "NOISEFUNCTION_GradientALU" },
		{ "NOISEFUNCTION_GradientALU.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~80 instructions per level, no textures\nTiling: ~143 instructions per level, no textures" },
		{ "NOISEFUNCTION_GradientTex.Comment", "/** High quality for direct use and bumps\n\x09 * Non-tiled: ~61 instructions per level, 8 texture lookups\n\x09 * Tiling: ~74 instructions per level, 8 texture lookups\n\x09 * Even \"non-tiled\" mode has a repeat of 128. Useful Repeat Size range <= 128\n\x09 * Formerly labeled as Perlin noise\n\x09 */" },
		{ "NOISEFUNCTION_GradientTex.DisplayName", "Gradient - Texture Based" },
		{ "NOISEFUNCTION_GradientTex.Name", "NOISEFUNCTION_GradientTex" },
		{ "NOISEFUNCTION_GradientTex.ToolTip", "High quality for direct use and bumps\nNon-tiled: ~61 instructions per level, 8 texture lookups\nTiling: ~74 instructions per level, 8 texture lookups\nEven \"non-tiled\" mode has a repeat of 128. Useful Repeat Size range <= 128\nFormerly labeled as Perlin noise" },
		{ "NOISEFUNCTION_GradientTex3D.Comment", "/** High quality for direct use, BAD for bumps; doesn't work on Mobile\n\x09 * ~16 instructions per level, 1 texture lookup\n\x09 * Always tiles with a repeat of 16, \"Tiling\" mode is not an option for Fast Gradient noise\n\x09 */" },
		{ "NOISEFUNCTION_GradientTex3D.DisplayName", "Fast Gradient - 3D Texture" },
		{ "NOISEFUNCTION_GradientTex3D.Name", "NOISEFUNCTION_GradientTex3D" },
		{ "NOISEFUNCTION_GradientTex3D.ToolTip", "High quality for direct use, BAD for bumps; doesn't work on Mobile\n~16 instructions per level, 1 texture lookup\nAlways tiles with a repeat of 16, \"Tiling\" mode is not an option for Fast Gradient noise" },
		{ "NOISEFUNCTION_MAX.Name", "NOISEFUNCTION_MAX" },
		{ "NOISEFUNCTION_SimplexTex.Comment", "/** High quality for direct use and bumps \n\x09 * ~77 instructions per level, 4 texture lookups\n\x09 * Cannot tile\n\x09 */" },
		{ "NOISEFUNCTION_SimplexTex.DisplayName", "Simplex - Texture Based" },
		{ "NOISEFUNCTION_SimplexTex.Name", "NOISEFUNCTION_SimplexTex" },
		{ "NOISEFUNCTION_SimplexTex.ToolTip", "High quality for direct use and bumps\n~77 instructions per level, 4 texture lookups\nCannot tile" },
		{ "NOISEFUNCTION_ValueALU.Comment", "/** Low quality, but pure computation\n\x09 * Non-tiled: ~53 instructions per level, no textures\n\x09 * Tiling: ~118 instructions per level, no textures\n\x09 * Formerly mis-labeled as Gradient noise\n\x09 */" },
		{ "NOISEFUNCTION_ValueALU.DisplayName", "Value - Computational" },
		{ "NOISEFUNCTION_ValueALU.Name", "NOISEFUNCTION_ValueALU" },
		{ "NOISEFUNCTION_ValueALU.ToolTip", "Low quality, but pure computation\nNon-tiled: ~53 instructions per level, no textures\nTiling: ~118 instructions per level, no textures\nFormerly mis-labeled as Gradient noise" },
		{ "NOISEFUNCTION_VoronoiALU.Comment", "/** Also known as Worley or Cellular noise\n\x09  * Quality=1 searches 8 cells, Quality=2 searches 16 cells\n\x09  * Quality=3 searches 27 cells, Quality=4 searches 32 cells\n\x09  * All are about 20 instructions per cell searched\n\x09  */" },
		{ "NOISEFUNCTION_VoronoiALU.DisplayName", "Voronoi" },
		{ "NOISEFUNCTION_VoronoiALU.Name", "NOISEFUNCTION_VoronoiALU" },
		{ "NOISEFUNCTION_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise\nQuality=1 searches 8 cells, Quality=2 searches 16 cells\nQuality=3 searches 27 cells, Quality=4 searches 32 cells\nAll are about 20 instructions per cell searched" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "NOISEFUNCTION_SimplexTex", (int64)NOISEFUNCTION_SimplexTex },
		{ "NOISEFUNCTION_GradientTex", (int64)NOISEFUNCTION_GradientTex },
		{ "NOISEFUNCTION_GradientTex3D", (int64)NOISEFUNCTION_GradientTex3D },
		{ "NOISEFUNCTION_GradientALU", (int64)NOISEFUNCTION_GradientALU },
		{ "NOISEFUNCTION_ValueALU", (int64)NOISEFUNCTION_ValueALU },
		{ "NOISEFUNCTION_VoronoiALU", (int64)NOISEFUNCTION_VoronoiALU },
		{ "NOISEFUNCTION_MAX", (int64)NOISEFUNCTION_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ENoiseFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ENoiseFunction",
	"ENoiseFunction",
	Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ENoiseFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ENoiseFunction()
{
	if (!Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton, Z_Construct_UEnum_Engine_ENoiseFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENoiseFunction.InnerSingleton;
}
// End Enum ENoiseFunction

// Begin Class UMaterialExpressionNoise
void UMaterialExpressionNoise::StaticRegisterNativesUMaterialExpressionNoise()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionNoise);
UClass* Z_Construct_UClass_UMaterialExpressionNoise_NoRegister()
{
	return UMaterialExpressionNoise::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionNoise.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "/** 2 to 3 dimensional vector */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "2 to 3 dimensional vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Defines the reference space for the Position input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Defines the reference space for the Position input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[] = {
		{ "Comment", "/** scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position)) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "scalar, to clamp the Levels at pixel level, can be computed like this: max(length(ddx(Position)), length(ddy(Position))" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** can also be done with a multiply on the Position */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "can also be done with a multiply on the Position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Lower numbers are faster and lower quality, higher numbers are slower and higher quality */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Noise function, affects performance and look */" },
		{ "DisplayName", "Function" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Noise function, affects performance and look" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTurbulence_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** How multiple frequencies are getting combined */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "How multiple frequencies are getting combined" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Levels_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** 1 = fast but little detail, .. larger numbers cost more performance */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "1 = fast but little detail, .. larger numbers cost more performance" },
		{ "UIMax", "10" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMin_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputMax_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelScale_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** usually 2 but higher values allow efficient use of few levels */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "usually 2 but higher values allow efficient use of few levels" },
		{ "UIMax", "8" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** Whether to use tiling noise pattern, useful for baking to seam-free repeating textures */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "Whether to use tiling noise pattern, useful for baking to seam-free repeating textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RepeatSize_MetaData[] = {
		{ "Category", "MaterialExpressionNoise" },
		{ "Comment", "/** How many units in each tile (if Tiling is on) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionNoise.h" },
		{ "ToolTip", "How many units in each tile (if Tiling is on)" },
		{ "UIMin", "4" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseFunction;
	static void NewProp_bTurbulence_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTurbulence;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Levels;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LevelScale;
	static void NewProp_bTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTiling;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_RepeatSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth = { "FilterWidth", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, FilterWidth), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterWidth_MetaData), NewProp_FilterWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Scale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Quality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction = { "NoiseFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, NoiseFunction), Z_Construct_UEnum_Engine_ENoiseFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFunction_MetaData), NewProp_NoiseFunction_MetaData) }; // 3020125016
void Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit(void* Obj)
{
	((UMaterialExpressionNoise*)Obj)->bTurbulence = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence = { "bTurbulence", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionNoise), &Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTurbulence_MetaData), NewProp_bTurbulence_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels = { "Levels", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, Levels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Levels_MetaData), NewProp_Levels_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin = { "OutputMin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMin_MetaData), NewProp_OutputMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax = { "OutputMax", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, OutputMax), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputMax_MetaData), NewProp_OutputMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale = { "LevelScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, LevelScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelScale_MetaData), NewProp_LevelScale_MetaData) };
void Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit(void* Obj)
{
	((UMaterialExpressionNoise*)Obj)->bTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling = { "bTiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionNoise), &Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTiling_MetaData), NewProp_bTiling_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize = { "RepeatSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionNoise, RepeatSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RepeatSize_MetaData), NewProp_RepeatSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_FilterWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_NoiseFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTurbulence,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_Levels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_OutputMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_LevelScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_bTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionNoise_Statics::NewProp_RepeatSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams = {
	&UMaterialExpressionNoise::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionNoise()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton, Z_Construct_UClass_UMaterialExpressionNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionNoise.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionNoise>()
{
	return UMaterialExpressionNoise::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionNoise);
UMaterialExpressionNoise::~UMaterialExpressionNoise() {}
// End Class UMaterialExpressionNoise

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENoiseFunction_StaticEnum, TEXT("ENoiseFunction"), &Z_Registration_Info_UEnum_ENoiseFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3020125016U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionNoise, UMaterialExpressionNoise::StaticClass, TEXT("UMaterialExpressionNoise"), &Z_Registration_Info_UClass_UMaterialExpressionNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionNoise), 793507122U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_2641404846(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionNoise_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
