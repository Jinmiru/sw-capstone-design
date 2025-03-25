// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/CompositionOps/BooleanMeshesOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBooleanMeshesOp() {}

// Begin Cross Module References
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ECSGOperation();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ETrimOperation();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ETrimSide();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum ECSGOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECSGOperation;
static UEnum* ECSGOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECSGOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECSGOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ECSGOperation, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ECSGOperation"));
	}
	return Z_Registration_Info_UEnum_ECSGOperation.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ECSGOperation>()
{
	return ECSGOperation_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** CSG operation types */" },
		{ "DifferenceAB.Comment", "/** Subtract the second object from the first object */" },
		{ "DifferenceAB.DisplayName", "Difference A - B" },
		{ "DifferenceAB.Name", "ECSGOperation::DifferenceAB" },
		{ "DifferenceAB.ToolTip", "Subtract the second object from the first object" },
		{ "DifferenceBA.Comment", "/** Subtract the first object from the second object */" },
		{ "DifferenceBA.DisplayName", "Difference B - A" },
		{ "DifferenceBA.Name", "ECSGOperation::DifferenceBA" },
		{ "DifferenceBA.ToolTip", "Subtract the first object from the second object" },
		{ "Intersect.Comment", "/** Intersection of the two objects, i.e. where both objects overlap */" },
		{ "Intersect.DisplayName", "Intersection" },
		{ "Intersect.Name", "ECSGOperation::Intersect" },
		{ "Intersect.ToolTip", "Intersection of the two objects, i.e. where both objects overlap" },
		{ "ModuleRelativePath", "Public/CompositionOps/BooleanMeshesOp.h" },
		{ "ToolTip", "CSG operation types" },
		{ "Union.Comment", "/** Union of the two objects, i.e. merger of both objects  */" },
		{ "Union.DisplayName", "Union" },
		{ "Union.Name", "ECSGOperation::Union" },
		{ "Union.ToolTip", "Union of the two objects, i.e. merger of both objects" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECSGOperation::DifferenceAB", (int64)ECSGOperation::DifferenceAB },
		{ "ECSGOperation::DifferenceBA", (int64)ECSGOperation::DifferenceBA },
		{ "ECSGOperation::Intersect", (int64)ECSGOperation::Intersect },
		{ "ECSGOperation::Union", (int64)ECSGOperation::Union },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ECSGOperation",
	"ECSGOperation",
	Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ECSGOperation()
{
	if (!Z_Registration_Info_UEnum_ECSGOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECSGOperation.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ECSGOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECSGOperation.InnerSingleton;
}
// End Enum ECSGOperation

// Begin Enum ETrimOperation
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrimOperation;
static UEnum* ETrimOperation_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrimOperation.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrimOperation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ETrimOperation, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ETrimOperation"));
	}
	return Z_Registration_Info_UEnum_ETrimOperation.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ETrimOperation>()
{
	return ETrimOperation_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompositionOps/BooleanMeshesOp.h" },
		{ "TrimA.Comment", "/** Remove geometry from the first object using the second object */" },
		{ "TrimA.DisplayName", "Trim A" },
		{ "TrimA.Name", "ETrimOperation::TrimA" },
		{ "TrimA.ToolTip", "Remove geometry from the first object using the second object" },
		{ "TrimB.Comment", "/** Remove geometry from the second object using the first object */" },
		{ "TrimB.DisplayName", "Trim B" },
		{ "TrimB.Name", "ETrimOperation::TrimB" },
		{ "TrimB.ToolTip", "Remove geometry from the second object using the first object" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrimOperation::TrimA", (int64)ETrimOperation::TrimA },
		{ "ETrimOperation::TrimB", (int64)ETrimOperation::TrimB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ETrimOperation",
	"ETrimOperation",
	Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ETrimOperation()
{
	if (!Z_Registration_Info_UEnum_ETrimOperation.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrimOperation.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ETrimOperation_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrimOperation.InnerSingleton;
}
// End Enum ETrimOperation

// Begin Enum ETrimSide
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrimSide;
static UEnum* ETrimSide_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrimSide.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrimSide.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ETrimSide, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ETrimSide"));
	}
	return Z_Registration_Info_UEnum_ETrimSide.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ETrimSide>()
{
	return ETrimSide_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CompositionOps/BooleanMeshesOp.h" },
		{ "RemoveInside.Name", "ETrimSide::RemoveInside" },
		{ "RemoveOutside.Name", "ETrimSide::RemoveOutside" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrimSide::RemoveInside", (int64)ETrimSide::RemoveInside },
		{ "ETrimSide::RemoveOutside", (int64)ETrimSide::RemoveOutside },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ETrimSide",
	"ETrimSide",
	Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ETrimSide()
{
	if (!Z_Registration_Info_UEnum_ETrimSide.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrimSide.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ETrimSide_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrimSide.InnerSingleton;
}
// End Enum ETrimSide

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_BooleanMeshesOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECSGOperation_StaticEnum, TEXT("ECSGOperation"), &Z_Registration_Info_UEnum_ECSGOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 802610680U) },
		{ ETrimOperation_StaticEnum, TEXT("ETrimOperation"), &Z_Registration_Info_UEnum_ETrimOperation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 317185715U) },
		{ ETrimSide_StaticEnum, TEXT("ETrimSide"), &Z_Registration_Info_UEnum_ETrimSide, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1531160435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_BooleanMeshesOp_h_631361925(TEXT("/Script/ModelingOperators"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_BooleanMeshesOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CompositionOps_BooleanMeshesOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
