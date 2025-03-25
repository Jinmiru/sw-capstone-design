// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/ParameterizationOps/UVProjectionOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVProjectionOp() {}

// Begin Cross Module References
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum EUVProjectionMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVProjectionMethod;
static UEnum* EUVProjectionMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EUVProjectionMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EUVProjectionMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EUVProjectionMethod"));
	}
	return Z_Registration_Info_UEnum_EUVProjectionMethod.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EUVProjectionMethod>()
{
	return EUVProjectionMethod_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Box.Comment", "/** Calculate UVs by assigning triangles to faces of a box, and then apply per-box-face planar projection */" },
		{ "Box.Name", "EUVProjectionMethod::Box" },
		{ "Box.ToolTip", "Calculate UVs by assigning triangles to faces of a box, and then apply per-box-face planar projection" },
		{ "Cylinder.Comment", "/** Calculate UVs by assigning triangles to a cylinder using radial projection or cylinder end caps using planar projection */" },
		{ "Cylinder.Name", "EUVProjectionMethod::Cylinder" },
		{ "Cylinder.ToolTip", "Calculate UVs by assigning triangles to a cylinder using radial projection or cylinder end caps using planar projection" },
		{ "ExpMap.Comment", "/** Calculate UVs by Exponential Map projection centered at the surface point nearest to the center of the input plane */" },
		{ "ExpMap.DisplayName", "ExpMap" },
		{ "ExpMap.Name", "EUVProjectionMethod::ExpMap" },
		{ "ExpMap.ToolTip", "Calculate UVs by Exponential Map projection centered at the surface point nearest to the center of the input plane" },
		{ "ModuleRelativePath", "Public/ParameterizationOps/UVProjectionOp.h" },
		{ "Plane.Comment", "/** Calculate UVs by projecting to a plane */" },
		{ "Plane.Name", "EUVProjectionMethod::Plane" },
		{ "Plane.ToolTip", "Calculate UVs by projecting to a plane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EUVProjectionMethod::Box", (int64)EUVProjectionMethod::Box },
		{ "EUVProjectionMethod::Cylinder", (int64)EUVProjectionMethod::Cylinder },
		{ "EUVProjectionMethod::Plane", (int64)EUVProjectionMethod::Plane },
		{ "EUVProjectionMethod::ExpMap", (int64)EUVProjectionMethod::ExpMap },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EUVProjectionMethod",
	"EUVProjectionMethod",
	Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod()
{
	if (!Z_Registration_Info_UEnum_EUVProjectionMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVProjectionMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EUVProjectionMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EUVProjectionMethod.InnerSingleton;
}
// End Enum EUVProjectionMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVProjectionOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EUVProjectionMethod_StaticEnum, TEXT("EUVProjectionMethod"), &Z_Registration_Info_UEnum_EUVProjectionMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2266334027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVProjectionOp_h_1978231376(TEXT("/Script/ModelingOperators"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVProjectionOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_ParameterizationOps_UVProjectionOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
