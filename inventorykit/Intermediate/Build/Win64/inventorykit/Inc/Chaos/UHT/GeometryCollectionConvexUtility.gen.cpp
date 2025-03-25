// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/GeometryCollectionConvexUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionConvexUtility() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EConvexOverlapRemoval();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EGenerateConvexMethod();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin Enum EConvexOverlapRemoval
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConvexOverlapRemoval;
static UEnum* EConvexOverlapRemoval_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConvexOverlapRemoval.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConvexOverlapRemoval.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EConvexOverlapRemoval"));
	}
	return Z_Registration_Info_UEnum_EConvexOverlapRemoval.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EConvexOverlapRemoval>()
{
	return EConvexOverlapRemoval_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Comment", "// Remove all overlaps between neighboring convex hulls\n" },
		{ "All.Name", "EConvexOverlapRemoval::All" },
		{ "All.ToolTip", "Remove all overlaps between neighboring convex hulls" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionConvexUtility.h" },
		{ "None.Comment", "// Do not remove overlaps between convex hulls\n" },
		{ "None.Name", "EConvexOverlapRemoval::None" },
		{ "None.ToolTip", "Do not remove overlaps between convex hulls" },
		{ "OnlyClusters.Comment", "// Only remove overlaps on convex hulls of clusters, ignoring leaf-leaf overlaps\n" },
		{ "OnlyClusters.Name", "EConvexOverlapRemoval::OnlyClusters" },
		{ "OnlyClusters.ToolTip", "Only remove overlaps on convex hulls of clusters, ignoring leaf-leaf overlaps" },
		{ "OnlyClustersVsClusters.Comment", "// Only remove overlaps between overlapping clusters, ignoring leaf-leaf and cluster-leaf overlaps\n" },
		{ "OnlyClustersVsClusters.Name", "EConvexOverlapRemoval::OnlyClustersVsClusters" },
		{ "OnlyClustersVsClusters.ToolTip", "Only remove overlaps between overlapping clusters, ignoring leaf-leaf and cluster-leaf overlaps" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConvexOverlapRemoval::None", (int64)EConvexOverlapRemoval::None },
		{ "EConvexOverlapRemoval::All", (int64)EConvexOverlapRemoval::All },
		{ "EConvexOverlapRemoval::OnlyClusters", (int64)EConvexOverlapRemoval::OnlyClusters },
		{ "EConvexOverlapRemoval::OnlyClustersVsClusters", (int64)EConvexOverlapRemoval::OnlyClustersVsClusters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EConvexOverlapRemoval",
	"EConvexOverlapRemoval",
	Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EConvexOverlapRemoval()
{
	if (!Z_Registration_Info_UEnum_EConvexOverlapRemoval.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConvexOverlapRemoval.InnerSingleton, Z_Construct_UEnum_Chaos_EConvexOverlapRemoval_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConvexOverlapRemoval.InnerSingleton;
}
// End Enum EConvexOverlapRemoval

// Begin Enum EGenerateConvexMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGenerateConvexMethod;
static UEnum* EGenerateConvexMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGenerateConvexMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGenerateConvexMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EGenerateConvexMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EGenerateConvexMethod"));
	}
	return Z_Registration_Info_UEnum_EGenerateConvexMethod.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EGenerateConvexMethod>()
{
	return EGenerateConvexMethod_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ComputedFromGeometry.Comment", "// Compute all convex hulls from geometry\n" },
		{ "ComputedFromGeometry.Name", "EGenerateConvexMethod::ComputedFromGeometry" },
		{ "ComputedFromGeometry.ToolTip", "Compute all convex hulls from geometry" },
		{ "ExternalCollision.Comment", "// Convert from external collision shapes (if available)\n" },
		{ "ExternalCollision.Name", "EGenerateConvexMethod::ExternalCollision" },
		{ "ExternalCollision.ToolTip", "Convert from external collision shapes (if available)" },
		{ "IntersectExternalWithComputed.Comment", "// Intersect external collision shapes with computed convex hulls\n" },
		{ "IntersectExternalWithComputed.Name", "EGenerateConvexMethod::IntersectExternalWithComputed" },
		{ "IntersectExternalWithComputed.ToolTip", "Intersect external collision shapes with computed convex hulls" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionConvexUtility.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGenerateConvexMethod::ExternalCollision", (int64)EGenerateConvexMethod::ExternalCollision },
		{ "EGenerateConvexMethod::ComputedFromGeometry", (int64)EGenerateConvexMethod::ComputedFromGeometry },
		{ "EGenerateConvexMethod::IntersectExternalWithComputed", (int64)EGenerateConvexMethod::IntersectExternalWithComputed },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EGenerateConvexMethod",
	"EGenerateConvexMethod",
	Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EGenerateConvexMethod()
{
	if (!Z_Registration_Info_UEnum_EGenerateConvexMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGenerateConvexMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EGenerateConvexMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGenerateConvexMethod.InnerSingleton;
}
// End Enum EGenerateConvexMethod

// Begin Enum EAllowConvexMergeMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAllowConvexMergeMethod;
static UEnum* EAllowConvexMergeMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAllowConvexMergeMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAllowConvexMergeMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EAllowConvexMergeMethod"));
	}
	return Z_Registration_Info_UEnum_EAllowConvexMergeMethod.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EAllowConvexMergeMethod>()
{
	return EAllowConvexMergeMethod_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.Comment", "// Allow any pair of convex hulls to merge\n" },
		{ "Any.Name", "EAllowConvexMergeMethod::Any" },
		{ "Any.ToolTip", "Allow any pair of convex hulls to merge" },
		{ "ByProximity.Comment", "// Only allow merging convex hulls that are in proximity\n" },
		{ "ByProximity.Name", "EAllowConvexMergeMethod::ByProximity" },
		{ "ByProximity.ToolTip", "Only allow merging convex hulls that are in proximity" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionConvexUtility.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAllowConvexMergeMethod::ByProximity", (int64)EAllowConvexMergeMethod::ByProximity },
		{ "EAllowConvexMergeMethod::Any", (int64)EAllowConvexMergeMethod::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EAllowConvexMergeMethod",
	"EAllowConvexMergeMethod",
	Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod()
{
	if (!Z_Registration_Info_UEnum_EAllowConvexMergeMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAllowConvexMergeMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EAllowConvexMergeMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAllowConvexMergeMethod.InnerSingleton;
}
// End Enum EAllowConvexMergeMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EConvexOverlapRemoval_StaticEnum, TEXT("EConvexOverlapRemoval"), &Z_Registration_Info_UEnum_EConvexOverlapRemoval, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4043983615U) },
		{ EGenerateConvexMethod_StaticEnum, TEXT("EGenerateConvexMethod"), &Z_Registration_Info_UEnum_EGenerateConvexMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 256410834U) },
		{ EAllowConvexMergeMethod_StaticEnum, TEXT("EAllowConvexMergeMethod"), &Z_Registration_Info_UEnum_EAllowConvexMergeMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1133575748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_708812380(TEXT("/Script/Chaos"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionConvexUtility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
