// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModelingOperators/Public/CurveOps/TriangulateCurvesOp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriangulateCurvesOp() {}

// Begin Cross Module References
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod();
MODELINGOPERATORS_API UEnum* Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes();
UPackage* Z_Construct_UPackage__Script_ModelingOperators();
// End Cross Module References

// Begin Enum EFlattenCurveMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlattenCurveMethod;
static UEnum* EFlattenCurveMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlattenCurveMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlattenCurveMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EFlattenCurveMethod"));
	}
	return Z_Registration_Info_UEnum_EFlattenCurveMethod.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EFlattenCurveMethod>()
{
	return EFlattenCurveMethod_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlongX.Comment", "// Flatten by projection along the X axis\n" },
		{ "AlongX.Name", "EFlattenCurveMethod::AlongX" },
		{ "AlongX.ToolTip", "Flatten by projection along the X axis" },
		{ "AlongY.Comment", "// Flatten by projection along the Y axis\n" },
		{ "AlongY.Name", "EFlattenCurveMethod::AlongY" },
		{ "AlongY.ToolTip", "Flatten by projection along the Y axis" },
		{ "AlongZ.Comment", "// Flatten by projection along the Z axis\n" },
		{ "AlongZ.Name", "EFlattenCurveMethod::AlongZ" },
		{ "AlongZ.ToolTip", "Flatten by projection along the Z axis" },
		{ "DoNotFlatten.Comment", "// Do not flatten the curves before triangulations\n" },
		{ "DoNotFlatten.Name", "EFlattenCurveMethod::DoNotFlatten" },
		{ "DoNotFlatten.ToolTip", "Do not flatten the curves before triangulations" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "ToBestFitPlane.Comment", "// Fit planes to the curves, and flatten the curves by projection to their plane\n" },
		{ "ToBestFitPlane.Name", "EFlattenCurveMethod::ToBestFitPlane" },
		{ "ToBestFitPlane.ToolTip", "Fit planes to the curves, and flatten the curves by projection to their plane" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlattenCurveMethod::DoNotFlatten", (int64)EFlattenCurveMethod::DoNotFlatten },
		{ "EFlattenCurveMethod::ToBestFitPlane", (int64)EFlattenCurveMethod::ToBestFitPlane },
		{ "EFlattenCurveMethod::AlongX", (int64)EFlattenCurveMethod::AlongX },
		{ "EFlattenCurveMethod::AlongY", (int64)EFlattenCurveMethod::AlongY },
		{ "EFlattenCurveMethod::AlongZ", (int64)EFlattenCurveMethod::AlongZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EFlattenCurveMethod",
	"EFlattenCurveMethod",
	Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod()
{
	if (!Z_Registration_Info_UEnum_EFlattenCurveMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlattenCurveMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EFlattenCurveMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlattenCurveMethod.InnerSingleton;
}
// End Enum EFlattenCurveMethod

// Begin Enum ECombineCurvesMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECombineCurvesMethod;
static UEnum* ECombineCurvesMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECombineCurvesMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECombineCurvesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("ECombineCurvesMethod"));
	}
	return Z_Registration_Info_UEnum_ECombineCurvesMethod.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<ECombineCurvesMethod>()
{
	return ECombineCurvesMethod_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Difference.Comment", "// Triangulate the difference of the first curve polygon minus the remaining curve polygons\n" },
		{ "Difference.Name", "ECombineCurvesMethod::Difference" },
		{ "Difference.ToolTip", "Triangulate the difference of the first curve polygon minus the remaining curve polygons" },
		{ "ExclusiveOr.Comment", "// Triangulate the exclusive-or of the curve polygons -- the space covered by the first polygon, or the remaining polygons, but not both\n" },
		{ "ExclusiveOr.Name", "ECombineCurvesMethod::ExclusiveOr" },
		{ "ExclusiveOr.ToolTip", "Triangulate the exclusive-or of the curve polygons -- the space covered by the first polygon, or the remaining polygons, but not both" },
		{ "Intersect.Comment", "// Triangulate the intersection of the curve polygons -- the space covered by all of the polygons\n" },
		{ "Intersect.Name", "ECombineCurvesMethod::Intersect" },
		{ "Intersect.ToolTip", "Triangulate the intersection of the curve polygons -- the space covered by all of the polygons" },
		{ "LeaveSeparate.Comment", "// Triangulate each curve separately\n" },
		{ "LeaveSeparate.Name", "ECombineCurvesMethod::LeaveSeparate" },
		{ "LeaveSeparate.ToolTip", "Triangulate each curve separately" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Union.Comment", "// Triangulate the union of the curve polygons -- the space covered by any of the polygons\n" },
		{ "Union.Name", "ECombineCurvesMethod::Union" },
		{ "Union.ToolTip", "Triangulate the union of the curve polygons -- the space covered by any of the polygons" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECombineCurvesMethod::LeaveSeparate", (int64)ECombineCurvesMethod::LeaveSeparate },
		{ "ECombineCurvesMethod::Union", (int64)ECombineCurvesMethod::Union },
		{ "ECombineCurvesMethod::Intersect", (int64)ECombineCurvesMethod::Intersect },
		{ "ECombineCurvesMethod::Difference", (int64)ECombineCurvesMethod::Difference },
		{ "ECombineCurvesMethod::ExclusiveOr", (int64)ECombineCurvesMethod::ExclusiveOr },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"ECombineCurvesMethod",
	"ECombineCurvesMethod",
	Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod()
{
	if (!Z_Registration_Info_UEnum_ECombineCurvesMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECombineCurvesMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_ECombineCurvesMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECombineCurvesMethod.InnerSingleton;
}
// End Enum ECombineCurvesMethod

// Begin Enum EOffsetClosedCurvesMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod;
static UEnum* EOffsetClosedCurvesMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOffsetClosedCurvesMethod"));
	}
	return Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetClosedCurvesMethod>()
{
	return EOffsetClosedCurvesMethod_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DoNotOffset.Comment", "// Do not offset the closed curves\n" },
		{ "DoNotOffset.Name", "EOffsetClosedCurvesMethod::DoNotOffset" },
		{ "DoNotOffset.ToolTip", "Do not offset the closed curves" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "OffsetBothSides.Comment", "// Offset both sides of the closed curves -- creating hollow shapes that follow the curves with Curve Offset width\n" },
		{ "OffsetBothSides.Name", "EOffsetClosedCurvesMethod::OffsetBothSides" },
		{ "OffsetBothSides.ToolTip", "Offset both sides of the closed curves -- creating hollow shapes that follow the curves with Curve Offset width" },
		{ "OffsetOuterSide.Comment", "// Offset the outside of the closed curves -- growing or shrinking the solid shape\n" },
		{ "OffsetOuterSide.Name", "EOffsetClosedCurvesMethod::OffsetOuterSide" },
		{ "OffsetOuterSide.ToolTip", "Offset the outside of the closed curves -- growing or shrinking the solid shape" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetClosedCurvesMethod::DoNotOffset", (int64)EOffsetClosedCurvesMethod::DoNotOffset },
		{ "EOffsetClosedCurvesMethod::OffsetOuterSide", (int64)EOffsetClosedCurvesMethod::OffsetOuterSide },
		{ "EOffsetClosedCurvesMethod::OffsetBothSides", (int64)EOffsetClosedCurvesMethod::OffsetBothSides },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EOffsetClosedCurvesMethod",
	"EOffsetClosedCurvesMethod",
	Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod()
{
	if (!Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOffsetClosedCurvesMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod.InnerSingleton;
}
// End Enum EOffsetClosedCurvesMethod

// Begin Enum EOffsetOpenCurvesMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod;
static UEnum* EOffsetOpenCurvesMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOffsetOpenCurvesMethod"));
	}
	return Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetOpenCurvesMethod>()
{
	return EOffsetOpenCurvesMethod_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Offset.Comment", "// Offset the open curves, creating shapes following the curves with Curve Offset width\n" },
		{ "Offset.Name", "EOffsetOpenCurvesMethod::Offset" },
		{ "Offset.ToolTip", "Offset the open curves, creating shapes following the curves with Curve Offset width" },
		{ "TreatAsClosed.Comment", "// Treat open curves as if they were closed -- connecting the last point back to the first\n" },
		{ "TreatAsClosed.Name", "EOffsetOpenCurvesMethod::TreatAsClosed" },
		{ "TreatAsClosed.ToolTip", "Treat open curves as if they were closed -- connecting the last point back to the first" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetOpenCurvesMethod::TreatAsClosed", (int64)EOffsetOpenCurvesMethod::TreatAsClosed },
		{ "EOffsetOpenCurvesMethod::Offset", (int64)EOffsetOpenCurvesMethod::Offset },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EOffsetOpenCurvesMethod",
	"EOffsetOpenCurvesMethod",
	Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod()
{
	if (!Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOffsetOpenCurvesMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod.InnerSingleton;
}
// End Enum EOffsetOpenCurvesMethod

// Begin Enum EOffsetJoinMethod
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOffsetJoinMethod;
static UEnum* EOffsetJoinMethod_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOffsetJoinMethod.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOffsetJoinMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOffsetJoinMethod"));
	}
	return Z_Registration_Info_UEnum_EOffsetJoinMethod.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOffsetJoinMethod>()
{
	return EOffsetJoinMethod_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Miter.Comment", "// Miter corners between offset edges, extending the neighboring curve edges straight to their intersection point, unless that point is farther than the miter limit distance\n" },
		{ "Miter.Name", "EOffsetJoinMethod::Miter" },
		{ "Miter.ToolTip", "Miter corners between offset edges, extending the neighboring curve edges straight to their intersection point, unless that point is farther than the miter limit distance" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Round.Comment", "// Smoothly join corners between offset edges with circular paths\n" },
		{ "Round.Name", "EOffsetJoinMethod::Round" },
		{ "Round.ToolTip", "Smoothly join corners between offset edges with circular paths" },
		{ "Square.Comment", "// Cut off corners between offset edges with square shapes\n" },
		{ "Square.Name", "EOffsetJoinMethod::Square" },
		{ "Square.ToolTip", "Cut off corners between offset edges with square shapes" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOffsetJoinMethod::Square", (int64)EOffsetJoinMethod::Square },
		{ "EOffsetJoinMethod::Miter", (int64)EOffsetJoinMethod::Miter },
		{ "EOffsetJoinMethod::Round", (int64)EOffsetJoinMethod::Round },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EOffsetJoinMethod",
	"EOffsetJoinMethod",
	Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod()
{
	if (!Z_Registration_Info_UEnum_EOffsetJoinMethod.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOffsetJoinMethod.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOffsetJoinMethod_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOffsetJoinMethod.InnerSingleton;
}
// End Enum EOffsetJoinMethod

// Begin Enum EOpenCurveEndShapes
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOpenCurveEndShapes;
static UEnum* EOpenCurveEndShapes_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOpenCurveEndShapes.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOpenCurveEndShapes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes, (UObject*)Z_Construct_UPackage__Script_ModelingOperators(), TEXT("EOpenCurveEndShapes"));
	}
	return Z_Registration_Info_UEnum_EOpenCurveEndShapes.OuterSingleton;
}
template<> MODELINGOPERATORS_API UEnum* StaticEnum<EOpenCurveEndShapes>()
{
	return EOpenCurveEndShapes_StaticEnum();
}
struct Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Butt.Comment", "// Close the ends of open paths abruptly with no end caps\n" },
		{ "Butt.Name", "EOpenCurveEndShapes::Butt" },
		{ "Butt.ToolTip", "Close the ends of open paths abruptly with no end caps" },
		{ "ModuleRelativePath", "Public/CurveOps/TriangulateCurvesOp.h" },
		{ "Round.Comment", "// Close the ends of open paths with round end caps\n" },
		{ "Round.Name", "EOpenCurveEndShapes::Round" },
		{ "Round.ToolTip", "Close the ends of open paths with round end caps" },
		{ "Square.Comment", "// Close the ends of open paths with square end caps\n" },
		{ "Square.Name", "EOpenCurveEndShapes::Square" },
		{ "Square.ToolTip", "Close the ends of open paths with square end caps" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOpenCurveEndShapes::Square", (int64)EOpenCurveEndShapes::Square },
		{ "EOpenCurveEndShapes::Round", (int64)EOpenCurveEndShapes::Round },
		{ "EOpenCurveEndShapes::Butt", (int64)EOpenCurveEndShapes::Butt },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ModelingOperators,
	nullptr,
	"EOpenCurveEndShapes",
	"EOpenCurveEndShapes",
	Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes()
{
	if (!Z_Registration_Info_UEnum_EOpenCurveEndShapes.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOpenCurveEndShapes.InnerSingleton, Z_Construct_UEnum_ModelingOperators_EOpenCurveEndShapes_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOpenCurveEndShapes.InnerSingleton;
}
// End Enum EOpenCurveEndShapes

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFlattenCurveMethod_StaticEnum, TEXT("EFlattenCurveMethod"), &Z_Registration_Info_UEnum_EFlattenCurveMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4278031770U) },
		{ ECombineCurvesMethod_StaticEnum, TEXT("ECombineCurvesMethod"), &Z_Registration_Info_UEnum_ECombineCurvesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 161132618U) },
		{ EOffsetClosedCurvesMethod_StaticEnum, TEXT("EOffsetClosedCurvesMethod"), &Z_Registration_Info_UEnum_EOffsetClosedCurvesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1769422414U) },
		{ EOffsetOpenCurvesMethod_StaticEnum, TEXT("EOffsetOpenCurvesMethod"), &Z_Registration_Info_UEnum_EOffsetOpenCurvesMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3478252333U) },
		{ EOffsetJoinMethod_StaticEnum, TEXT("EOffsetJoinMethod"), &Z_Registration_Info_UEnum_EOffsetJoinMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3895074759U) },
		{ EOpenCurveEndShapes_StaticEnum, TEXT("EOpenCurveEndShapes"), &Z_Registration_Info_UEnum_EOpenCurveEndShapes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2585430849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_2208282422(TEXT("/Script/ModelingOperators"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingOperators_Public_CurveOps_TriangulateCurvesOp_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
