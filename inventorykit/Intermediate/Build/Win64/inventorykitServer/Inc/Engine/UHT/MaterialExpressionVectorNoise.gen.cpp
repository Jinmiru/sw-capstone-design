// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionVectorNoise.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionVectorNoise() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPositionOrigin();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EVectorNoiseFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EVectorNoiseFunction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVectorNoiseFunction;
static UEnum* EVectorNoiseFunction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVectorNoiseFunction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVectorNoiseFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EVectorNoiseFunction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EVectorNoiseFunction"));
	}
	return Z_Registration_Info_UEnum_EVectorNoiseFunction.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EVectorNoiseFunction>()
{
	return EVectorNoiseFunction_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "VNF_CellnoiseALU.Comment", "/** Random color for each unit cell in 3D space.\n\x09  * RGB output range 0 to 1\n\x09  * R only = 9 instructions, RGB = 11 instructions\n\x09  */" },
		{ "VNF_CellnoiseALU.DisplayName", "Cellnoise" },
		{ "VNF_CellnoiseALU.Name", "VNF_CellnoiseALU" },
		{ "VNF_CellnoiseALU.ToolTip", "Random color for each unit cell in 3D space.\nRGB output range 0 to 1\nR only = 9 instructions, RGB = 11 instructions" },
		{ "VNF_CurlALU.Comment", "/** Curl of Perlin noise, useful for 3D flow directions.\n\x09  * RGB = signed curl vector\n\x09  * ~162 instructions\n\x09  */" },
		{ "VNF_CurlALU.DisplayName", "Perlin Curl" },
		{ "VNF_CurlALU.Name", "VNF_CurlALU" },
		{ "VNF_CurlALU.ToolTip", "Curl of Perlin noise, useful for 3D flow directions.\nRGB = signed curl vector\n~162 instructions" },
		{ "VNF_GradientALU.Comment", "/** Gradient of Perlin noise, useful for bumps.\n\x09  * RGB = Gradient of scalar noise (signed 3D vector)\n\x09  * A = Base scalar noise with range -1 to 1\n\x09  * A only = ~83 instructions, RGBA = ~106 instructions\n\x09  */" },
		{ "VNF_GradientALU.DisplayName", "Perlin Gradient" },
		{ "VNF_GradientALU.Name", "VNF_GradientALU" },
		{ "VNF_GradientALU.ToolTip", "Gradient of Perlin noise, useful for bumps.\nRGB = Gradient of scalar noise (signed 3D vector)\nA = Base scalar noise with range -1 to 1\nA only = ~83 instructions, RGBA = ~106 instructions" },
		{ "VNF_MAX.Name", "VNF_MAX" },
		{ "VNF_VectorALU.Comment", "/** Perlin-style noise with 3D vector/color output.\n\x09  * RGB output range -1 to 1\n\x09  * R only = ~83 instructions, RGB = ~125 instructions\n\x09  */" },
		{ "VNF_VectorALU.DisplayName", "Perlin 3D Noise" },
		{ "VNF_VectorALU.Name", "VNF_VectorALU" },
		{ "VNF_VectorALU.ToolTip", "Perlin-style noise with 3D vector/color output.\nRGB output range -1 to 1\nR only = ~83 instructions, RGB = ~125 instructions" },
		{ "VNF_VoronoiALU.Comment", "/** Also known as Worley or Cellular noise.\n\x09  * RGB = *position* of closest point at center of Voronoi cell\n\x09  * A = distance to closest point with range 0 to about 4\n\x09  * Quality levels 1-4 search 8, 16, 27 & 32 cells\n\x09  * All ~20 instructions per cell searched\n\x09  */" },
		{ "VNF_VoronoiALU.DisplayName", "Voronoi" },
		{ "VNF_VoronoiALU.Name", "VNF_VoronoiALU" },
		{ "VNF_VoronoiALU.ToolTip", "Also known as Worley or Cellular noise.\nRGB = *position* of closest point at center of Voronoi cell\nA = distance to closest point with range 0 to about 4\nQuality levels 1-4 search 8, 16, 27 & 32 cells\nAll ~20 instructions per cell searched" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "VNF_CellnoiseALU", (int64)VNF_CellnoiseALU },
		{ "VNF_VectorALU", (int64)VNF_VectorALU },
		{ "VNF_GradientALU", (int64)VNF_GradientALU },
		{ "VNF_CurlALU", (int64)VNF_CurlALU },
		{ "VNF_VoronoiALU", (int64)VNF_VoronoiALU },
		{ "VNF_MAX", (int64)VNF_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EVectorNoiseFunction",
	"EVectorNoiseFunction",
	Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EVectorNoiseFunction()
{
	if (!Z_Registration_Info_UEnum_EVectorNoiseFunction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVectorNoiseFunction.InnerSingleton, Z_Construct_UEnum_Engine_EVectorNoiseFunction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVectorNoiseFunction.InnerSingleton;
}
// End Enum EVectorNoiseFunction

// Begin Class UMaterialExpressionVectorNoise
void UMaterialExpressionVectorNoise::StaticRegisterNativesUMaterialExpressionVectorNoise()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionVectorNoise);
UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise_NoRegister()
{
	return UMaterialExpressionVectorNoise::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Materials/MaterialExpressionVectorNoise.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "/** 2 to 3 dimensional vector */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "2 to 3 dimensional vector" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOriginType_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** Defines the reference space for the Position input. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ToolTip", "Defines the reference space for the Position input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseFunction_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** Noise function, affects performance and look */" },
		{ "DisplayName", "Function" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Noise function, affects performance and look" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Quality_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** For noise functions where applicable, lower numbers are faster and lower quality, higher numbers are slower and higher quality */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "For noise functions where applicable, lower numbers are faster and lower quality, higher numbers are slower and higher quality" },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTiling_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** Whether tile the noise pattern, useful for baking to seam-free repeating textures */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "Whether tile the noise pattern, useful for baking to seam-free repeating textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TileSize_MetaData[] = {
		{ "Category", "MaterialExpressionVectorNoise" },
		{ "Comment", "/** How many units in each tile (if Tiling is on) \n\x09  * For Perlin noise functions, Tile Size must be a multiple of three\n\x09  */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionVectorNoise.h" },
		{ "ShowAsInputPin", "Advanced" },
		{ "ToolTip", "How many units in each tile (if Tiling is on)\nFor Perlin noise functions, Tile Size must be a multiple of three" },
		{ "UIMin", "4" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FBytePropertyParams NewProp_WorldPositionOriginType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_WorldPositionOriginType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NoiseFunction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Quality;
	static void NewProp_bTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTiling;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TileSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionVectorNoise>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorNoise, Position), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_WorldPositionOriginType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_WorldPositionOriginType = { "WorldPositionOriginType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorNoise, WorldPositionOriginType), Z_Construct_UEnum_Engine_EPositionOrigin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOriginType_MetaData), NewProp_WorldPositionOriginType_MetaData) }; // 1574008864
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction = { "NoiseFunction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorNoise, NoiseFunction), Z_Construct_UEnum_Engine_EVectorNoiseFunction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseFunction_MetaData), NewProp_NoiseFunction_MetaData) }; // 1280125851
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality = { "Quality", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorNoise, Quality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Quality_MetaData), NewProp_Quality_MetaData) };
void Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_SetBit(void* Obj)
{
	((UMaterialExpressionVectorNoise*)Obj)->bTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling = { "bTiling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialExpressionVectorNoise), &Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTiling_MetaData), NewProp_bTiling_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize = { "TileSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionVectorNoise, TileSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TileSize_MetaData), NewProp_TileSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_WorldPositionOriginType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_WorldPositionOriginType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_NoiseFunction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_Quality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_bTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::NewProp_TileSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::ClassParams = {
	&UMaterialExpressionVectorNoise::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionVectorNoise()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.OuterSingleton, Z_Construct_UClass_UMaterialExpressionVectorNoise_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionVectorNoise.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialExpressionVectorNoise>()
{
	return UMaterialExpressionVectorNoise::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionVectorNoise);
UMaterialExpressionVectorNoise::~UMaterialExpressionVectorNoise() {}
// End Class UMaterialExpressionVectorNoise

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EVectorNoiseFunction_StaticEnum, TEXT("EVectorNoiseFunction"), &Z_Registration_Info_UEnum_EVectorNoiseFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1280125851U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionVectorNoise, UMaterialExpressionVectorNoise::StaticClass, TEXT("UMaterialExpressionVectorNoise"), &Z_Registration_Info_UClass_UMaterialExpressionVectorNoise, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionVectorNoise), 3943460577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_877532059(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialExpressionVectorNoise_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
