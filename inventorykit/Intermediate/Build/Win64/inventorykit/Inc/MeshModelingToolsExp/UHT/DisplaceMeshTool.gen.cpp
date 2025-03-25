// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/DisplaceMeshTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisplaceMeshTool() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UDynamicMeshComponent_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UMeshStatisticsProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelectiveTessellationProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USelectiveTessellationProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType();
MESHMODELINGTOOLSEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FPerlinLayerProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingTool();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Enum EDisplaceMeshToolDisplaceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType;
static UEnum* EDisplaceMeshToolDisplaceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolDisplaceType"));
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolDisplaceType>()
{
	return EDisplaceMeshToolDisplaceType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Constant.Comment", "/** Offset a set distance in the normal direction. */" },
		{ "Constant.DisplayName", "Constant" },
		{ "Constant.Name", "EDisplaceMeshToolDisplaceType::Constant" },
		{ "Constant.ToolTip", "Offset a set distance in the normal direction." },
		{ "DisplacementMap.Comment", "/** Offset in the normal direction using the first channel of a 2D texture. */" },
		{ "DisplacementMap.DisplayName", "Texture2D Map" },
		{ "DisplacementMap.Name", "EDisplaceMeshToolDisplaceType::DisplacementMap" },
		{ "DisplacementMap.ToolTip", "Offset in the normal direction using the first channel of a 2D texture." },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "PerlinNoise.Comment", "/** Offset in the normal direction weighted by Perlin noise. \n\x09    We use the following formula to compute the weighting for each vertex:\n\x09\x09\x09w = PerlinNoise3D(f * (X + r))\n\x09\x09Where f is a frequency parameter, X is the vertex position, and r is a randomly-generated offset (using the Seed property).\n\x09\x09Note the range of 3D Perlin noise is [-sqrt(3/4), sqrt(3/4)].\n\x09*/" },
		{ "PerlinNoise.DisplayName", "Perlin Noise" },
		{ "PerlinNoise.Name", "EDisplaceMeshToolDisplaceType::PerlinNoise" },
		{ "PerlinNoise.ToolTip", "Offset in the normal direction weighted by Perlin noise.\n          We use the following formula to compute the weighting for each vertex:\n                      w = PerlinNoise3D(f * (X + r))\n              Where f is a frequency parameter, X is the vertex position, and r is a randomly-generated offset (using the Seed property).\n              Note the range of 3D Perlin noise is [-sqrt(3/4), sqrt(3/4)]." },
		{ "RandomNoise.Comment", "/** Offset vertices randomly. */" },
		{ "RandomNoise.DisplayName", "Random Noise" },
		{ "RandomNoise.Name", "EDisplaceMeshToolDisplaceType::RandomNoise" },
		{ "RandomNoise.ToolTip", "Offset vertices randomly." },
		{ "SineWave.Comment", "/** Move vertices in spatial sine wave pattern */" },
		{ "SineWave.DisplayName", "Sine Wave" },
		{ "SineWave.Name", "EDisplaceMeshToolDisplaceType::SineWave" },
		{ "SineWave.ToolTip", "Move vertices in spatial sine wave pattern" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDisplaceMeshToolDisplaceType::Constant", (int64)EDisplaceMeshToolDisplaceType::Constant },
		{ "EDisplaceMeshToolDisplaceType::DisplacementMap", (int64)EDisplaceMeshToolDisplaceType::DisplacementMap },
		{ "EDisplaceMeshToolDisplaceType::RandomNoise", (int64)EDisplaceMeshToolDisplaceType::RandomNoise },
		{ "EDisplaceMeshToolDisplaceType::PerlinNoise", (int64)EDisplaceMeshToolDisplaceType::PerlinNoise },
		{ "EDisplaceMeshToolDisplaceType::SineWave", (int64)EDisplaceMeshToolDisplaceType::SineWave },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EDisplaceMeshToolDisplaceType",
	"EDisplaceMeshToolDisplaceType",
	Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType.InnerSingleton;
}
// End Enum EDisplaceMeshToolDisplaceType

// Begin Enum EDisplaceMeshToolSubdivisionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType;
static UEnum* EDisplaceMeshToolSubdivisionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolSubdivisionType"));
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolSubdivisionType>()
{
	return EDisplaceMeshToolSubdivisionType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Flat.Comment", "/** Subdivide the mesh using loop-style subdivision. */" },
		{ "Flat.DisplayName", "Flat" },
		{ "Flat.Name", "EDisplaceMeshToolSubdivisionType::Flat" },
		{ "Flat.ToolTip", "Subdivide the mesh using loop-style subdivision." },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "PNTriangles.Comment", "/** Subdivide the mesh using PN triangles which replace each original flat triangle by a curved shape that is \n\x09\x09retriangulated into a number of small subtriangles. The geometry of a PN triangle is defined as one cubic Bezier \n\x09\x09patch using control points. The patch matches the point and normal information at the vertices of the original \n\x09\x09""flat triangle.*/" },
		{ "PNTriangles.DisplayName", "PN Triangles" },
		{ "PNTriangles.Name", "EDisplaceMeshToolSubdivisionType::PNTriangles" },
		{ "PNTriangles.ToolTip", "Subdivide the mesh using PN triangles which replace each original flat triangle by a curved shape that is\n              retriangulated into a number of small subtriangles. The geometry of a PN triangle is defined as one cubic Bezier\n              patch using control points. The patch matches the point and normal information at the vertices of the original\n              flat triangle." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDisplaceMeshToolSubdivisionType::Flat", (int64)EDisplaceMeshToolSubdivisionType::Flat },
		{ "EDisplaceMeshToolSubdivisionType::PNTriangles", (int64)EDisplaceMeshToolSubdivisionType::PNTriangles },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EDisplaceMeshToolSubdivisionType",
	"EDisplaceMeshToolSubdivisionType",
	Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType.InnerSingleton;
}
// End Enum EDisplaceMeshToolSubdivisionType

// Begin Enum EDisplaceMeshToolTriangleSelectionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType;
static UEnum* EDisplaceMeshToolTriangleSelectionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolTriangleSelectionType"));
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolTriangleSelectionType>()
{
	return EDisplaceMeshToolTriangleSelectionType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Material.Comment", "/** Tessellate only triangles assigned to the chosen material */" },
		{ "Material.DisplayName", "Material" },
		{ "Material.Name", "EDisplaceMeshToolTriangleSelectionType::Material" },
		{ "Material.ToolTip", "Tessellate only triangles assigned to the chosen material" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "None.Comment", "/** Tessellate the whole mesh */" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "EDisplaceMeshToolTriangleSelectionType::None" },
		{ "None.ToolTip", "Tessellate the whole mesh" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDisplaceMeshToolTriangleSelectionType::None", (int64)EDisplaceMeshToolTriangleSelectionType::None },
		{ "EDisplaceMeshToolTriangleSelectionType::Material", (int64)EDisplaceMeshToolTriangleSelectionType::Material },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EDisplaceMeshToolTriangleSelectionType",
	"EDisplaceMeshToolTriangleSelectionType",
	Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType.InnerSingleton;
}
// End Enum EDisplaceMeshToolTriangleSelectionType

// Begin Enum EDisplaceMeshToolChannelType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType;
static UEnum* EDisplaceMeshToolChannelType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("EDisplaceMeshToolChannelType"));
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UEnum* StaticEnum<EDisplaceMeshToolChannelType>()
{
	return EDisplaceMeshToolChannelType_StaticEnum();
}
struct Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EDisplaceMeshToolChannelType::Alpha" },
		{ "Blue.Name", "EDisplaceMeshToolChannelType::Blue" },
		{ "Green.Name", "EDisplaceMeshToolChannelType::Green" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "Red.Name", "EDisplaceMeshToolChannelType::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDisplaceMeshToolChannelType::Red", (int64)EDisplaceMeshToolChannelType::Red },
		{ "EDisplaceMeshToolChannelType::Green", (int64)EDisplaceMeshToolChannelType::Green },
		{ "EDisplaceMeshToolChannelType::Blue", (int64)EDisplaceMeshToolChannelType::Blue },
		{ "EDisplaceMeshToolChannelType::Alpha", (int64)EDisplaceMeshToolChannelType::Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	"EDisplaceMeshToolChannelType",
	"EDisplaceMeshToolChannelType",
	Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType()
{
	if (!Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType.InnerSingleton;
}
// End Enum EDisplaceMeshToolChannelType

// Begin Class UDisplaceMeshCommonProperties Function GetWeightMapsFunc
struct Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics
{
	struct DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDisplaceMeshCommonProperties, nullptr, "GetWeightMapsFunc", nullptr, nullptr, Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::DisplaceMeshCommonProperties_eventGetWeightMapsFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDisplaceMeshCommonProperties::execGetWeightMapsFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetWeightMapsFunc();
	P_NATIVE_END;
}
// End Class UDisplaceMeshCommonProperties Function GetWeightMapsFunc

// Begin Class UDisplaceMeshCommonProperties
void UDisplaceMeshCommonProperties::StaticRegisterNativesUDisplaceMeshCommonProperties()
{
	UClass* Class = UDisplaceMeshCommonProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetWeightMapsFunc", &UDisplaceMeshCommonProperties::execGetWeightMapsFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshCommonProperties);
UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties_NoRegister()
{
	return UDisplaceMeshCommonProperties::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** The basic set of properties shared by (more or less) all DisplacementTypes. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "The basic set of properties shared by (more or less) all DisplacementTypes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Displacement type */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Displacement type" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplaceIntensity_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "100000.0" },
		{ "ClampMin", "-10000.0" },
		{ "Comment", "/** Displacement intensity */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Displacement intensity" },
		{ "UIMax", "100.0" },
		{ "UIMin", "-100.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomSeed_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Seed for randomization */" },
		{ "Delta", "1" },
		{ "EditCondition", "DisplacementType == EDisplaceMeshToolDisplaceType::RandomNoise || DisplacementType == EDisplaceMeshToolDisplaceType::PerlinNoise" },
		{ "LinearDeltaSensitivity", "50" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Seed for randomization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubdivisionType_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Type of the  mesh subdivision. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Type of the  mesh subdivision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Subdivisions_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "100" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Number of times to subdivide the mesh before displacing it. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Number of times to subdivide the mesh before displacing it." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMap_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity. */" },
		{ "GetOptions", "GetWeightMapsFunc" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Select vertex weight map. If configured, the weight map value will be sampled to modulate displacement intensity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightMapsList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertWeightMap_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowWireframe_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableSizeWarning_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DisplacementType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplacementType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplaceIntensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RandomSeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SubdivisionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SubdivisionType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Subdivisions;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightMap;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WeightMapsList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightMapsList;
	static void NewProp_bInvertWeightMap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertWeightMap;
	static void NewProp_bShowWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowWireframe;
	static void NewProp_bDisableSizeWarning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableSizeWarning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDisplaceMeshCommonProperties_GetWeightMapsFunc, "GetWeightMapsFunc" }, // 4076421953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshCommonProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType = { "DisplacementType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, DisplacementType), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolDisplaceType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementType_MetaData), NewProp_DisplacementType_MetaData) }; // 1125834238
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity = { "DisplaceIntensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, DisplaceIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplaceIntensity_MetaData), NewProp_DisplaceIntensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed = { "RandomSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, RandomSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomSeed_MetaData), NewProp_RandomSeed_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType = { "SubdivisionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, SubdivisionType), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolSubdivisionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubdivisionType_MetaData), NewProp_SubdivisionType_MetaData) }; // 4040372181
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions = { "Subdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, Subdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Subdivisions_MetaData), NewProp_Subdivisions_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap = { "WeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, WeightMap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMap_MetaData), NewProp_WeightMap_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_Inner = { "WeightMapsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList = { "WeightMapsList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshCommonProperties, WeightMapsList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightMapsList_MetaData), NewProp_WeightMapsList_MetaData) };
void Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_SetBit(void* Obj)
{
	((UDisplaceMeshCommonProperties*)Obj)->bInvertWeightMap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap = { "bInvertWeightMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDisplaceMeshCommonProperties), &Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertWeightMap_MetaData), NewProp_bInvertWeightMap_MetaData) };
void Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_SetBit(void* Obj)
{
	((UDisplaceMeshCommonProperties*)Obj)->bShowWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe = { "bShowWireframe", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDisplaceMeshCommonProperties), &Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowWireframe_MetaData), NewProp_bShowWireframe_MetaData) };
void Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_SetBit(void* Obj)
{
	((UDisplaceMeshCommonProperties*)Obj)->bDisableSizeWarning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning = { "bDisableSizeWarning", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDisplaceMeshCommonProperties), &Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableSizeWarning_MetaData), NewProp_bDisableSizeWarning_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplacementType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_DisplaceIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_RandomSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_SubdivisionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_Subdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_WeightMapsList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bInvertWeightMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bShowWireframe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::NewProp_bDisableSizeWarning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::ClassParams = {
	&UDisplaceMeshCommonProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshCommonProperties()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshCommonProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshCommonProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshCommonProperties>()
{
	return UDisplaceMeshCommonProperties::StaticClass();
}
UDisplaceMeshCommonProperties::UDisplaceMeshCommonProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshCommonProperties);
UDisplaceMeshCommonProperties::~UDisplaceMeshCommonProperties() {}
// End Class UDisplaceMeshCommonProperties

// Begin Class USelectiveTessellationProperties Function GetMaterialIDsFunc
struct Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics
{
	struct SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USelectiveTessellationProperties, nullptr, "GetMaterialIDsFunc", nullptr, nullptr, Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::SelectiveTessellationProperties_eventGetMaterialIDsFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USelectiveTessellationProperties::execGetMaterialIDsFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetMaterialIDsFunc();
	P_NATIVE_END;
}
// End Class USelectiveTessellationProperties Function GetMaterialIDsFunc

// Begin Class USelectiveTessellationProperties
void USelectiveTessellationProperties::StaticRegisterNativesUSelectiveTessellationProperties()
{
	UClass* Class = USelectiveTessellationProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMaterialIDsFunc", &USelectiveTessellationProperties::execGetMaterialIDsFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USelectiveTessellationProperties);
UClass* Z_Construct_UClass_USelectiveTessellationProperties_NoRegister()
{
	return USelectiveTessellationProperties::StaticClass();
}
struct Z_Construct_UClass_USelectiveTessellationProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the selective tessellation. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the selective tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionType_MetaData[] = {
		{ "Category", "SelectiveTessellationOptions" },
		{ "Comment", "/** Optionally, restrict tessellation to a subset of the triangles. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Optionally, restrict tessellation to a subset of the triangles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveMaterial_MetaData[] = {
		{ "Category", "SelectiveTessellationOptions" },
		{ "Comment", "/** Name of the selected material. */" },
		{ "EditCondition", "SelectionType == EDisplaceMeshToolTriangleSelectionType::Material" },
		{ "EditConditionHides", "" },
		{ "GetOptions", "GetMaterialIDsFunc" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Name of the selected material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIDList_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionType;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ActiveMaterial;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MaterialIDList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialIDList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USelectiveTessellationProperties_GetMaterialIDsFunc, "GetMaterialIDsFunc" }, // 934061653
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USelectiveTessellationProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType = { "SelectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectiveTessellationProperties, SelectionType), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolTriangleSelectionType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionType_MetaData), NewProp_SelectionType_MetaData) }; // 3658992086
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial = { "ActiveMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectiveTessellationProperties, ActiveMaterial), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveMaterial_MetaData), NewProp_ActiveMaterial_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_Inner = { "MaterialIDList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList = { "MaterialIDList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USelectiveTessellationProperties, MaterialIDList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIDList_MetaData), NewProp_MaterialIDList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_SelectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_ActiveMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USelectiveTessellationProperties_Statics::NewProp_MaterialIDList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USelectiveTessellationProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USelectiveTessellationProperties_Statics::ClassParams = {
	&USelectiveTessellationProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USelectiveTessellationProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_USelectiveTessellationProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USelectiveTessellationProperties()
{
	if (!Z_Registration_Info_UClass_USelectiveTessellationProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USelectiveTessellationProperties.OuterSingleton, Z_Construct_UClass_USelectiveTessellationProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USelectiveTessellationProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USelectiveTessellationProperties>()
{
	return USelectiveTessellationProperties::StaticClass();
}
USelectiveTessellationProperties::USelectiveTessellationProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USelectiveTessellationProperties);
USelectiveTessellationProperties::~USelectiveTessellationProperties() {}
// End Class USelectiveTessellationProperties

// Begin Class UDisplaceMeshTextureMapProperties
void UDisplaceMeshTextureMapProperties::StaticRegisterNativesUDisplaceMeshTextureMapProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshTextureMapProperties);
UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties_NoRegister()
{
	return UDisplaceMeshTextureMapProperties::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the Image Map displacement type. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the Image Map displacement type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementMap_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Displacement map. Only the first channel is used. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Displacement map. Only the first channel is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Channel in the displacement map to use. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Channel in the displacement map to use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisplacementMapBaseValue_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The value in the texture map that corresponds to no displacement. For instance, if set to 0, then all\n\x09 displacement will be positive. If set to 0.5, displacement below 0.5 will be negative, and above will be\n\x09 positive. Default is for 128/255 to be no displacement. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "The value in the texture map that corresponds to no displacement. For instance, if set to 0, then all\n       displacement will be positive. If set to 0.5, displacement below 0.5 will be negative, and above will be\n       positive. Default is for 128/255 to be no displacement." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When sampling from the texture map, how to scale the mesh UV's in the x and y directions. For a mesh with\n\x09UV's in the range 0 to 1, setting a scale above 1 will result in tiling the texture map, and scaling below\n\x09""1 will result in using only part of the texture map.*/" },
		{ "Delta", "0.010000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "When sampling from the texture map, how to scale the mesh UV's in the x and y directions. For a mesh with\n      UV's in the range 0 to 1, setting a scale above 1 will result in tiling the texture map, and scaling below\n      1 will result in using only part of the texture map." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVOffset_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When sampling from the texture map, how to offset the mesh UV's. This will result in offsetting the\n\x09tiling of the texture map across the mesh. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "When sampling from the texture map, how to offset the mesh UV's. This will result in offsetting the\n      tiling of the texture map across the mesh." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bApplyAdjustmentCurve_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** When true, applies a function to remap the values in the displacement map, which can be used \n\x09 for contrast adjustment. The texture map values are converted to the range [0,1] before applying\n\x09 the remapping. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "When true, applies a function to remap the values in the displacement map, which can be used\n       for contrast adjustment. The texture map values are converted to the range [0,1] before applying\n       the remapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustmentCurve_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** This curve is queried in the range [0,1] to adjust contrast of the displacement map. */" },
		{ "EditCondition", "bApplyAdjustmentCurve" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "This curve is queried in the range [0,1] to adjust contrast of the displacement map." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRecalcNormals_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Recalculate normals from displaced mesh. Disable this if you are applying Displacements that are paired with an existing Normal Map in your Material. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Recalculate normals from displaced mesh. Disable this if you are applying Displacements that are paired with an existing Normal Map in your Material." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DisplacementMap;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Channel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisplacementMapBaseValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UVOffset;
	static void NewProp_bApplyAdjustmentCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyAdjustmentCurve;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AdjustmentCurve;
	static void NewProp_bRecalcNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecalcNormals;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshTextureMapProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap = { "DisplacementMap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, DisplacementMap), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementMap_MetaData), NewProp_DisplacementMap_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, Channel), Z_Construct_UEnum_MeshModelingToolsExp_EDisplaceMeshToolChannelType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Channel_MetaData), NewProp_Channel_MetaData) }; // 1117324062
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue = { "DisplacementMapBaseValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, DisplacementMapBaseValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisplacementMapBaseValue_MetaData), NewProp_DisplacementMapBaseValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, UVScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVScale_MetaData), NewProp_UVScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset = { "UVOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, UVOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVOffset_MetaData), NewProp_UVOffset_MetaData) };
void Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_SetBit(void* Obj)
{
	((UDisplaceMeshTextureMapProperties*)Obj)->bApplyAdjustmentCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve = { "bApplyAdjustmentCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDisplaceMeshTextureMapProperties), &Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bApplyAdjustmentCurve_MetaData), NewProp_bApplyAdjustmentCurve_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve = { "AdjustmentCurve", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTextureMapProperties, AdjustmentCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustmentCurve_MetaData), NewProp_AdjustmentCurve_MetaData) };
void Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_SetBit(void* Obj)
{
	((UDisplaceMeshTextureMapProperties*)Obj)->bRecalcNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals = { "bRecalcNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDisplaceMeshTextureMapProperties), &Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRecalcNormals_MetaData), NewProp_bRecalcNormals_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_DisplacementMapBaseValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_UVOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bApplyAdjustmentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_AdjustmentCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::NewProp_bRecalcNormals,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::ClassParams = {
	&UDisplaceMeshTextureMapProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshTextureMapProperties()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshTextureMapProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshTextureMapProperties>()
{
	return UDisplaceMeshTextureMapProperties::StaticClass();
}
UDisplaceMeshTextureMapProperties::UDisplaceMeshTextureMapProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshTextureMapProperties);
UDisplaceMeshTextureMapProperties::~UDisplaceMeshTextureMapProperties() {}
// End Class UDisplaceMeshTextureMapProperties

// Begin Class UDisplaceMeshDirectionalFilterProperties
void UDisplaceMeshDirectionalFilterProperties::StaticRegisterNativesUDisplaceMeshDirectionalFilterProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshDirectionalFilterProperties);
UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_NoRegister()
{
	return UDisplaceMeshDirectionalFilterProperties::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** Properties for a directional filter. Allows for displacement to be applied only to vertices whose normals point in a given direction */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Properties for a directional filter. Allows for displacement to be applied only to vertices whose normals point in a given direction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFilter_MetaData[] = {
		{ "Category", "DirectionalFilterOptions" },
		{ "Comment", "/** Whether the directional filter is active. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Whether the directional filter is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterDirection_MetaData[] = {
		{ "Category", "DirectionalFilterOptions" },
		{ "Comment", "/** Unit vector representing the direction to filter along. */" },
		{ "Delta", "0.500000" },
		{ "EditCondition", "bEnableFilter == true" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Unit vector representing the direction to filter along." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilterWidth_MetaData[] = {
		{ "Category", "DirectionalFilterOptions" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Scalar value determining how close to the filter direction the vertex normals must be in order to be displaced.\n\x09\x09""0: Only normals pointing exactly in the filter direction are displaced.\n\x09\x09""0.5: Normals forming angle up to 90 from the filter direction are displaced.\n\x09\x09""1.0: All vertices are displaced.\n\x09*/" },
		{ "EditCondition", "bEnableFilter == true" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Scalar value determining how close to the filter direction the vertex normals must be in order to be displaced.\n              0: Only normals pointing exactly in the filter direction are displaced.\n              0.5: Normals forming angle up to 90 from the filter direction are displaced.\n              1.0: All vertices are displaced." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFilter_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFilter;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilterDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FilterWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshDirectionalFilterProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_SetBit(void* Obj)
{
	((UDisplaceMeshDirectionalFilterProperties*)Obj)->bEnableFilter = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter = { "bEnableFilter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UDisplaceMeshDirectionalFilterProperties), &Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFilter_MetaData), NewProp_bEnableFilter_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection = { "FilterDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshDirectionalFilterProperties, FilterDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterDirection_MetaData), NewProp_FilterDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth = { "FilterWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshDirectionalFilterProperties, FilterWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilterWidth_MetaData), NewProp_FilterWidth_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_bEnableFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::NewProp_FilterWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::ClassParams = {
	&UDisplaceMeshDirectionalFilterProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshDirectionalFilterProperties>()
{
	return UDisplaceMeshDirectionalFilterProperties::StaticClass();
}
UDisplaceMeshDirectionalFilterProperties::UDisplaceMeshDirectionalFilterProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshDirectionalFilterProperties);
UDisplaceMeshDirectionalFilterProperties::~UDisplaceMeshDirectionalFilterProperties() {}
// End Class UDisplaceMeshDirectionalFilterProperties

// Begin ScriptStruct FPerlinLayerProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PerlinLayerProperties;
class UScriptStruct* FPerlinLayerProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinLayerProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PerlinLayerProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerlinLayerProperties, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("PerlinLayerProperties"));
	}
	return Z_Registration_Info_UScriptStruct_PerlinLayerProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FPerlinLayerProperties>()
{
	return FPerlinLayerProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Per-layer properties for Perlin noise. Each layer has independent Frequency and Intensity. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Per-layer properties for Perlin noise. Each layer has independent Frequency and Intensity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "Category", "PerlinNoiseOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Frequency of Perlin noise layer */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Frequency of Perlin noise layer" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "PerlinNoiseOptions" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "-100.0" },
		{ "Comment", "/** Intensity/amplitude of Perlin noise layer */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Intensity/amplitude of Perlin noise layer" },
		{ "UIMax", "10.0" },
		{ "UIMin", "-10.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerlinLayerProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerlinLayerProperties, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPerlinLayerProperties, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewProp_Intensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"PerlinLayerProperties",
	Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::PropPointers),
	sizeof(FPerlinLayerProperties),
	alignof(FPerlinLayerProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPerlinLayerProperties()
{
	if (!Z_Registration_Info_UScriptStruct_PerlinLayerProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PerlinLayerProperties.InnerSingleton, Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PerlinLayerProperties.InnerSingleton;
}
// End ScriptStruct FPerlinLayerProperties

// Begin Class UDisplaceMeshPerlinNoiseProperties
void UDisplaceMeshPerlinNoiseProperties::StaticRegisterNativesUDisplaceMeshPerlinNoiseProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshPerlinNoiseProperties);
UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_NoRegister()
{
	return UDisplaceMeshPerlinNoiseProperties::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for properties affecting the Perlin Noise displacement type. */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for properties affecting the Perlin Noise displacement type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerlinLayerProperties_MetaData[] = {
		{ "Category", "PerlinNoiseOptions" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PerlinLayerProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerlinLayerProperties;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshPerlinNoiseProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_Inner = { "PerlinLayerProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPerlinLayerProperties, METADATA_PARAMS(0, nullptr) }; // 311288246
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties = { "PerlinLayerProperties", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshPerlinNoiseProperties, PerlinLayerProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerlinLayerProperties_MetaData), NewProp_PerlinLayerProperties_MetaData) }; // 311288246
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::NewProp_PerlinLayerProperties,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::ClassParams = {
	&UDisplaceMeshPerlinNoiseProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshPerlinNoiseProperties>()
{
	return UDisplaceMeshPerlinNoiseProperties::StaticClass();
}
UDisplaceMeshPerlinNoiseProperties::UDisplaceMeshPerlinNoiseProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshPerlinNoiseProperties);
UDisplaceMeshPerlinNoiseProperties::~UDisplaceMeshPerlinNoiseProperties() {}
// End Class UDisplaceMeshPerlinNoiseProperties

// Begin Class UDisplaceMeshSineWaveProperties
void UDisplaceMeshSineWaveProperties::StaticRegisterNativesUDisplaceMeshSineWaveProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshSineWaveProperties);
UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties_NoRegister()
{
	return UDisplaceMeshSineWaveProperties::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** PropertySet for Sine wave displacement */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "PropertySet for Sine wave displacement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineWaveFrequency_MetaData[] = {
		{ "Category", "SineWaveOptions" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sine wave displacement frequency */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Sine wave displacement frequency" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineWavePhaseShift_MetaData[] = {
		{ "Category", "SineWaveOptions" },
		{ "ClampMax", "6.28318531" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Sine wave phase shift */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Sine wave phase shift" },
		{ "UIMax", "6.28318531" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineWaveDirection_MetaData[] = {
		{ "Category", "SineWaveOptions" },
		{ "Comment", "/** Unit vector representing the direction of wave displacement. */" },
		{ "Delta", "0.500000" },
		{ "LinearDeltaSensitivity", "1" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Unit vector representing the direction of wave displacement." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SineWaveFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SineWavePhaseShift;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SineWaveDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshSineWaveProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency = { "SineWaveFrequency", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshSineWaveProperties, SineWaveFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineWaveFrequency_MetaData), NewProp_SineWaveFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift = { "SineWavePhaseShift", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshSineWaveProperties, SineWavePhaseShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineWavePhaseShift_MetaData), NewProp_SineWavePhaseShift_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection = { "SineWaveDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshSineWaveProperties, SineWaveDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineWaveDirection_MetaData), NewProp_SineWaveDirection_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWavePhaseShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::NewProp_SineWaveDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::ClassParams = {
	&UDisplaceMeshSineWaveProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshSineWaveProperties()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.OuterSingleton, Z_Construct_UClass_UDisplaceMeshSineWaveProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshSineWaveProperties>()
{
	return UDisplaceMeshSineWaveProperties::StaticClass();
}
UDisplaceMeshSineWaveProperties::UDisplaceMeshSineWaveProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshSineWaveProperties);
UDisplaceMeshSineWaveProperties::~UDisplaceMeshSineWaveProperties() {}
// End Class UDisplaceMeshSineWaveProperties

// Begin Class UDisplaceMeshToolBuilder
void UDisplaceMeshToolBuilder::StaticRegisterNativesUDisplaceMeshToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshToolBuilder);
UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder_NoRegister()
{
	return UDisplaceMeshToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for Simple Mesh Displacement Tool\n */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Builder for Simple Mesh Displacement Tool" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::ClassParams = {
	&UDisplaceMeshToolBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshToolBuilder()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshToolBuilder.OuterSingleton, Z_Construct_UClass_UDisplaceMeshToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshToolBuilder>()
{
	return UDisplaceMeshToolBuilder::StaticClass();
}
UDisplaceMeshToolBuilder::UDisplaceMeshToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshToolBuilder);
UDisplaceMeshToolBuilder::~UDisplaceMeshToolBuilder() {}
// End Class UDisplaceMeshToolBuilder

// Begin Class UDisplaceMeshTool
void UDisplaceMeshTool::StaticRegisterNativesUDisplaceMeshTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisplaceMeshTool);
UClass* Z_Construct_UClass_UDisplaceMeshTool_NoRegister()
{
	return UDisplaceMeshTool::StaticClass();
}
struct Z_Construct_UClass_UDisplaceMeshTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple Mesh Displacement Tool\n */" },
		{ "IncludePath", "DisplaceMeshTool.h" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Simple Mesh Displacement Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CommonProperties_MetaData[] = {
		{ "Comment", "/** Shared properties for all displacement modes. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Shared properties for all displacement modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalFilterProperties_MetaData[] = {
		{ "Comment", "/** Properties defining the directional filter. */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Properties defining the directional filter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureMapProperties_MetaData[] = {
		{ "Comment", "/** Properties defining the texture map */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Properties defining the texture map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseProperties_MetaData[] = {
		{ "Comment", "/** Multi-layer Perlin noise frequencies and intensities */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Multi-layer Perlin noise frequencies and intensities" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SineWaveProperties_MetaData[] = {
		{ "Comment", "/** Sine wave parameters and direction of displacement */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Sine wave parameters and direction of displacement" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectiveTessellationProperties_MetaData[] = {
		{ "Comment", "/** Selective tessellation properties */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Selective tessellation properties" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveContrastCurveTarget_MetaData[] = {
		{ "Comment", "/** Contrast Curve we are actively listening to */" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
		{ "ToolTip", "Contrast Curve we are actively listening to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshStatistics_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMeshActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMeshComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DisplaceMeshTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CommonProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirectionalFilterProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureMapProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NoiseProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SineWaveProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectiveTessellationProperties;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveContrastCurveTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshStatistics;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMeshActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicMeshComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisplaceMeshTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties = { "CommonProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, CommonProperties), Z_Construct_UClass_UDisplaceMeshCommonProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CommonProperties_MetaData), NewProp_CommonProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties = { "DirectionalFilterProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, DirectionalFilterProperties), Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalFilterProperties_MetaData), NewProp_DirectionalFilterProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties = { "TextureMapProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, TextureMapProperties), Z_Construct_UClass_UDisplaceMeshTextureMapProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureMapProperties_MetaData), NewProp_TextureMapProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties = { "NoiseProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, NoiseProperties), Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseProperties_MetaData), NewProp_NoiseProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties = { "SineWaveProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, SineWaveProperties), Z_Construct_UClass_UDisplaceMeshSineWaveProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SineWaveProperties_MetaData), NewProp_SineWaveProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties = { "SelectiveTessellationProperties", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, SelectiveTessellationProperties), Z_Construct_UClass_USelectiveTessellationProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectiveTessellationProperties_MetaData), NewProp_SelectiveTessellationProperties_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget = { "ActiveContrastCurveTarget", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, ActiveContrastCurveTarget), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveContrastCurveTarget_MetaData), NewProp_ActiveContrastCurveTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_MeshStatistics = { "MeshStatistics", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, MeshStatistics), Z_Construct_UClass_UMeshStatisticsProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshStatistics_MetaData), NewProp_MeshStatistics_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor = { "PreviewMeshActor", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, PreviewMeshActor), Z_Construct_UClass_AInternalToolFrameworkActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMeshActor_MetaData), NewProp_PreviewMeshActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent = { "DynamicMeshComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDisplaceMeshTool, DynamicMeshComponent), Z_Construct_UClass_UDynamicMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMeshComponent_MetaData), NewProp_DynamicMeshComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_CommonProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DirectionalFilterProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_TextureMapProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_NoiseProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SineWaveProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_SelectiveTessellationProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_ActiveContrastCurveTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_MeshStatistics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_PreviewMeshActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDisplaceMeshTool_Statics::NewProp_DynamicMeshComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDisplaceMeshTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USingleSelectionMeshEditingTool,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisplaceMeshTool_Statics::ClassParams = {
	&UDisplaceMeshTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDisplaceMeshTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UDisplaceMeshTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDisplaceMeshTool()
{
	if (!Z_Registration_Info_UClass_UDisplaceMeshTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisplaceMeshTool.OuterSingleton, Z_Construct_UClass_UDisplaceMeshTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDisplaceMeshTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UDisplaceMeshTool>()
{
	return UDisplaceMeshTool::StaticClass();
}
UDisplaceMeshTool::UDisplaceMeshTool() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDisplaceMeshTool);
UDisplaceMeshTool::~UDisplaceMeshTool() {}
// End Class UDisplaceMeshTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDisplaceMeshToolDisplaceType_StaticEnum, TEXT("EDisplaceMeshToolDisplaceType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolDisplaceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1125834238U) },
		{ EDisplaceMeshToolSubdivisionType_StaticEnum, TEXT("EDisplaceMeshToolSubdivisionType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolSubdivisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4040372181U) },
		{ EDisplaceMeshToolTriangleSelectionType_StaticEnum, TEXT("EDisplaceMeshToolTriangleSelectionType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolTriangleSelectionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3658992086U) },
		{ EDisplaceMeshToolChannelType_StaticEnum, TEXT("EDisplaceMeshToolChannelType"), &Z_Registration_Info_UEnum_EDisplaceMeshToolChannelType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1117324062U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPerlinLayerProperties::StaticStruct, Z_Construct_UScriptStruct_FPerlinLayerProperties_Statics::NewStructOps, TEXT("PerlinLayerProperties"), &Z_Registration_Info_UScriptStruct_PerlinLayerProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPerlinLayerProperties), 311288246U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDisplaceMeshCommonProperties, UDisplaceMeshCommonProperties::StaticClass, TEXT("UDisplaceMeshCommonProperties"), &Z_Registration_Info_UClass_UDisplaceMeshCommonProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshCommonProperties), 2462904750U) },
		{ Z_Construct_UClass_USelectiveTessellationProperties, USelectiveTessellationProperties::StaticClass, TEXT("USelectiveTessellationProperties"), &Z_Registration_Info_UClass_USelectiveTessellationProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USelectiveTessellationProperties), 3241859298U) },
		{ Z_Construct_UClass_UDisplaceMeshTextureMapProperties, UDisplaceMeshTextureMapProperties::StaticClass, TEXT("UDisplaceMeshTextureMapProperties"), &Z_Registration_Info_UClass_UDisplaceMeshTextureMapProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshTextureMapProperties), 4219063795U) },
		{ Z_Construct_UClass_UDisplaceMeshDirectionalFilterProperties, UDisplaceMeshDirectionalFilterProperties::StaticClass, TEXT("UDisplaceMeshDirectionalFilterProperties"), &Z_Registration_Info_UClass_UDisplaceMeshDirectionalFilterProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshDirectionalFilterProperties), 1367386839U) },
		{ Z_Construct_UClass_UDisplaceMeshPerlinNoiseProperties, UDisplaceMeshPerlinNoiseProperties::StaticClass, TEXT("UDisplaceMeshPerlinNoiseProperties"), &Z_Registration_Info_UClass_UDisplaceMeshPerlinNoiseProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshPerlinNoiseProperties), 1554385619U) },
		{ Z_Construct_UClass_UDisplaceMeshSineWaveProperties, UDisplaceMeshSineWaveProperties::StaticClass, TEXT("UDisplaceMeshSineWaveProperties"), &Z_Registration_Info_UClass_UDisplaceMeshSineWaveProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshSineWaveProperties), 3857230458U) },
		{ Z_Construct_UClass_UDisplaceMeshToolBuilder, UDisplaceMeshToolBuilder::StaticClass, TEXT("UDisplaceMeshToolBuilder"), &Z_Registration_Info_UClass_UDisplaceMeshToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshToolBuilder), 3853560658U) },
		{ Z_Construct_UClass_UDisplaceMeshTool, UDisplaceMeshTool::StaticClass, TEXT("UDisplaceMeshTool"), &Z_Registration_Info_UClass_UDisplaceMeshTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisplaceMeshTool), 3174773428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_3520348531(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_DisplaceMeshTool_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
