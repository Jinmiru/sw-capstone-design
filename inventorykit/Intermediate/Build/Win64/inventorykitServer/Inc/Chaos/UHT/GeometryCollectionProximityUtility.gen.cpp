// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/Chaos/Public/GeometryCollection/GeometryCollectionProximityUtility.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionProximityUtility() {}

// Begin Cross Module References
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EConnectionContactMethod();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityContactMethod();
CHAOS_API UEnum* Z_Construct_UEnum_Chaos_EProximityMethod();
UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References

// Begin Enum EProximityMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProximityMethod;
static UEnum* EProximityMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProximityMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProximityMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EProximityMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EProximityMethod"));
	}
	return Z_Registration_Info_UEnum_EProximityMethod.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EProximityMethod>()
{
	return EProximityMethod_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EProximityMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConvexHull.Comment", "// Convex Hull proximity mode looks for geometry with overlapping convex hulls (with an optional offset)\n" },
		{ "ConvexHull.Name", "EProximityMethod::ConvexHull" },
		{ "ConvexHull.ToolTip", "Convex Hull proximity mode looks for geometry with overlapping convex hulls (with an optional offset)" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionProximityUtility.h" },
		{ "Precise.Comment", "// Precise proximity mode looks for geometry with touching vertices or touching, coplanar, opposite-facing triangles. This works well with geometry fractured using our fracture tools.\n" },
		{ "Precise.Name", "EProximityMethod::Precise" },
		{ "Precise.ToolTip", "Precise proximity mode looks for geometry with touching vertices or touching, coplanar, opposite-facing triangles. This works well with geometry fractured using our fracture tools." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProximityMethod::Precise", (int64)EProximityMethod::Precise },
		{ "EProximityMethod::ConvexHull", (int64)EProximityMethod::ConvexHull },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EProximityMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EProximityMethod",
	"EProximityMethod",
	Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EProximityMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EProximityMethod()
{
	if (!Z_Registration_Info_UEnum_EProximityMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProximityMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EProximityMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProximityMethod.InnerSingleton;
}
// End Enum EProximityMethod

// Begin Enum EProximityContactMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EProximityContactMethod;
static UEnum* EProximityContactMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EProximityContactMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EProximityContactMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EProximityContactMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EProximityContactMethod"));
	}
	return Z_Registration_Info_UEnum_EProximityContactMethod.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EProximityContactMethod>()
{
	return EProximityContactMethod_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ConvexHullAreaContact.Comment", "// Rejects proximity if the surface area of the intersection of convex hulls (allowing for optional offset) is smaller than Contact Threshold squared (or at least half the max possible).\n" },
		{ "ConvexHullAreaContact.Name", "EProximityContactMethod::ConvexHullAreaContact" },
		{ "ConvexHullAreaContact.ToolTip", "Rejects proximity if the surface area of the intersection of convex hulls (allowing for optional offset) is smaller than Contact Threshold squared (or at least half the max possible)." },
		{ "ConvexHullSharpContact.Comment", "// Rejects proximity if the intersection of convex hulls (allowing for optional offset) follows a sharp, thin region which is not wider than Contact Threshold centimeters (or at least half the max possible).\n" },
		{ "ConvexHullSharpContact.Name", "EProximityContactMethod::ConvexHullSharpContact" },
		{ "ConvexHullSharpContact.ToolTip", "Rejects proximity if the intersection of convex hulls (allowing for optional offset) follows a sharp, thin region which is not wider than Contact Threshold centimeters (or at least half the max possible)." },
		{ "MinOverlapInProjectionToMajorAxes.Comment", "// Rejects proximity if the bounding boxes do not overlap by more than Contact Threshold centimeters in any major axis direction (or at least half the max possible). This can filter out corner connections of box-like shapes.\n" },
		{ "MinOverlapInProjectionToMajorAxes.Name", "EProximityContactMethod::MinOverlapInProjectionToMajorAxes" },
		{ "MinOverlapInProjectionToMajorAxes.ToolTip", "Rejects proximity if the bounding boxes do not overlap by more than Contact Threshold centimeters in any major axis direction (or at least half the max possible). This can filter out corner connections of box-like shapes." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionProximityUtility.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EProximityContactMethod::MinOverlapInProjectionToMajorAxes", (int64)EProximityContactMethod::MinOverlapInProjectionToMajorAxes },
		{ "EProximityContactMethod::ConvexHullSharpContact", (int64)EProximityContactMethod::ConvexHullSharpContact },
		{ "EProximityContactMethod::ConvexHullAreaContact", (int64)EProximityContactMethod::ConvexHullAreaContact },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EProximityContactMethod",
	"EProximityContactMethod",
	Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EProximityContactMethod()
{
	if (!Z_Registration_Info_UEnum_EProximityContactMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EProximityContactMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EProximityContactMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EProximityContactMethod.InnerSingleton;
}
// End Enum EProximityContactMethod

// Begin Enum EConnectionContactMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConnectionContactMethod;
static UEnum* EConnectionContactMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EConnectionContactMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EConnectionContactMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Chaos_EConnectionContactMethod, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("EConnectionContactMethod"));
	}
	return Z_Registration_Info_UEnum_EConnectionContactMethod.OuterSingleton;
}
template<> CHAOS_API UEnum* StaticEnum<EConnectionContactMethod>()
{
	return EConnectionContactMethod_StaticEnum();
}
struct Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "// How contact is computed on the connection graph\n" },
		{ "ConvexHullContactArea.Comment", "// Define contact based on the surface area of the intersection of the convex hulls, allowing for optional offset\n" },
		{ "ConvexHullContactArea.Name", "EConnectionContactMethod::ConvexHullContactArea" },
		{ "ConvexHullContactArea.ToolTip", "Define contact based on the surface area of the intersection of the convex hulls, allowing for optional offset" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionProximityUtility.h" },
		{ "None.Comment", "// Do not compute contact areas\n" },
		{ "None.Name", "EConnectionContactMethod::None" },
		{ "None.ToolTip", "Do not compute contact areas" },
		{ "ToolTip", "How contact is computed on the connection graph" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EConnectionContactMethod::None", (int64)EConnectionContactMethod::None },
		{ "EConnectionContactMethod::ConvexHullContactArea", (int64)EConnectionContactMethod::ConvexHullContactArea },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Chaos,
	nullptr,
	"EConnectionContactMethod",
	"EConnectionContactMethod",
	Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Chaos_EConnectionContactMethod()
{
	if (!Z_Registration_Info_UEnum_EConnectionContactMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConnectionContactMethod.InnerSingleton, Z_Construct_UEnum_Chaos_EConnectionContactMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EConnectionContactMethod.InnerSingleton;
}
// End Enum EConnectionContactMethod

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EProximityMethod_StaticEnum, TEXT("EProximityMethod"), &Z_Registration_Info_UEnum_EProximityMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4085830718U) },
		{ EProximityContactMethod_StaticEnum, TEXT("EProximityContactMethod"), &Z_Registration_Info_UEnum_EProximityContactMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 875182987U) },
		{ EConnectionContactMethod_StaticEnum, TEXT("EConnectionContactMethod"), &Z_Registration_Info_UEnum_EConnectionContactMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1278823307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_3666464606(TEXT("/Script/Chaos"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_GeometryCollectionProximityUtility_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
