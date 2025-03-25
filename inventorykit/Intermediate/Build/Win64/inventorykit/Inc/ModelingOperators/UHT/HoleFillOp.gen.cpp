// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/CleaningOps/HoleFillOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHoleFillOp() {}

// Begin Cross Module References
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum EHoleFillOpFillType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHoleFillOpFillType;
static UEnum* EHoleFillOpFillType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHoleFillOpFillType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHoleFillOpFillType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EHoleFillOpFillType"));
	}
	return Z_Registration_Info_UEnum_EHoleFillOpFillType.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EHoleFillOpFillType>()
{
	return EHoleFillOpFillType_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Minimal.Comment", "/** Fill with a triangulation which attempts to minimize Gaussian curvature and not introduce new interior vertices. */" },
		{ "Minimal.DisplayName", "Minimal" },
		{ "Minimal.Name", "EHoleFillOpFillType::Minimal" },
		{ "Minimal.ToolTip", "Fill with a triangulation which attempts to minimize Gaussian curvature and not introduce new interior vertices." },
		{ "ModuleRelativePath", "Public/CleaningOps/HoleFillOp.h" },
		{ "Planar.Comment", "/** Choose a best-fit plane, project the boundary vertices to the plane, and use 2D Delaunay triangulation. */" },
		{ "Planar.DisplayName", "Planar" },
		{ "Planar.Name", "EHoleFillOpFillType::Planar" },
		{ "Planar.ToolTip", "Choose a best-fit plane, project the boundary vertices to the plane, and use 2D Delaunay triangulation." },
		{ "PolygonEarClipping.Comment", "/** Incrementally triangulate the hole boundary without introducing new interior vertices. */" },
		{ "PolygonEarClipping.DisplayName", "PolygonEarClipping" },
		{ "PolygonEarClipping.Name", "EHoleFillOpFillType::PolygonEarClipping" },
		{ "PolygonEarClipping.ToolTip", "Incrementally triangulate the hole boundary without introducing new interior vertices." },
		{ "Smooth.Comment", "/** Fill hole with a simple triangulation, then alternate between smoothing and remeshing. Optionally include the\n\x09    triangles around the hole in the smoothing/remeshing. */" },
		{ "Smooth.DisplayName", "Smooth" },
		{ "Smooth.Name", "EHoleFillOpFillType::Smooth" },
		{ "Smooth.ToolTip", "Fill hole with a simple triangulation, then alternate between smoothing and remeshing. Optionally include the\n          triangles around the hole in the smoothing/remeshing." },
		{ "TriangleFan.Comment", "/** Fill with a fan of triangles connected to a new central vertex. */" },
		{ "TriangleFan.DisplayName", "TriangleFan" },
		{ "TriangleFan.Name", "EHoleFillOpFillType::TriangleFan" },
		{ "TriangleFan.ToolTip", "Fill with a fan of triangles connected to a new central vertex." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHoleFillOpFillType::TriangleFan", (int64)EHoleFillOpFillType::TriangleFan },
		{ "EHoleFillOpFillType::PolygonEarClipping", (int64)EHoleFillOpFillType::PolygonEarClipping },
		{ "EHoleFillOpFillType::Planar", (int64)EHoleFillOpFillType::Planar },
		{ "EHoleFillOpFillType::Minimal", (int64)EHoleFillOpFillType::Minimal },
		{ "EHoleFillOpFillType::Smooth", (int64)EHoleFillOpFillType::Smooth },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EHoleFillOpFillType",
	"EHoleFillOpFillType",
	Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType()
{
	if (!Z_Registration_Info_UEnum_EHoleFillOpFillType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHoleFillOpFillType.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EHoleFillOpFillType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHoleFillOpFillType.InnerSingleton;
}
// End Enum EHoleFillOpFillType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_HoleFillOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHoleFillOpFillType_StaticEnum, TEXT("EHoleFillOpFillType"), &Z_Registration_Info_UEnum_EHoleFillOpFillType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2524292496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_HoleFillOp_h_2021560748(TEXT("/Script/ModelingOperators"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_HoleFillOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CleaningOps_HoleFillOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
