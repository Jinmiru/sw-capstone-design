// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Experimental/ChaosVisualDebugger/Public/DataWrappers/ChaosVDCollisionDataWrappers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosVDCollisionDataWrappers() {}

// Begin Cross Module References
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags();
CHAOSVDRUNTIME_API UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionFilterData();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionMaterial();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDConstraint();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDContactPoint();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDManifoldPoint();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase();
CHAOSVDRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FChaosVDShapeCollisionData();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ChaosVDRuntime();
// End Cross Module References

// Begin Enum EChaosVDContactShapesType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDContactShapesType;
static UEnum* EChaosVDContactShapesType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDContactShapesType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDContactShapesType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDContactShapesType>()
{
	return EChaosVDContactShapesType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BoxBox.Name", "EChaosVDContactShapesType::BoxBox" },
		{ "BoxConvex.Name", "EChaosVDContactShapesType::BoxConvex" },
		{ "BoxHeightField.Name", "EChaosVDContactShapesType::BoxHeightField" },
		{ "BoxPlane.Name", "EChaosVDContactShapesType::BoxPlane" },
		{ "BoxTriMesh.Name", "EChaosVDContactShapesType::BoxTriMesh" },
		{ "CapsuleBox.Name", "EChaosVDContactShapesType::CapsuleBox" },
		{ "CapsuleCapsule.Name", "EChaosVDContactShapesType::CapsuleCapsule" },
		{ "CapsuleConvex.Name", "EChaosVDContactShapesType::CapsuleConvex" },
		{ "CapsuleHeightField.Name", "EChaosVDContactShapesType::CapsuleHeightField" },
		{ "CapsuleTriMesh.Name", "EChaosVDContactShapesType::CapsuleTriMesh" },
		{ "ConvexConvex.Name", "EChaosVDContactShapesType::ConvexConvex" },
		{ "ConvexHeightField.Name", "EChaosVDContactShapesType::ConvexHeightField" },
		{ "ConvexTriMesh.Name", "EChaosVDContactShapesType::ConvexTriMesh" },
		{ "GenericConvexConvex.Name", "EChaosVDContactShapesType::GenericConvexConvex" },
		{ "LevelSetLevelSet.Name", "EChaosVDContactShapesType::LevelSetLevelSet" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "NumShapesTypes.Name", "EChaosVDContactShapesType::NumShapesTypes" },
		{ "SphereBox.Name", "EChaosVDContactShapesType::SphereBox" },
		{ "SphereCapsule.Name", "EChaosVDContactShapesType::SphereCapsule" },
		{ "SphereConvex.Name", "EChaosVDContactShapesType::SphereConvex" },
		{ "SphereHeightField.Name", "EChaosVDContactShapesType::SphereHeightField" },
		{ "SpherePlane.Name", "EChaosVDContactShapesType::SpherePlane" },
		{ "SphereSphere.Name", "EChaosVDContactShapesType::SphereSphere" },
		{ "SphereTriMesh.Name", "EChaosVDContactShapesType::SphereTriMesh" },
		{ "Unknown.Name", "EChaosVDContactShapesType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDContactShapesType::Unknown", (int64)EChaosVDContactShapesType::Unknown },
		{ "EChaosVDContactShapesType::SphereSphere", (int64)EChaosVDContactShapesType::SphereSphere },
		{ "EChaosVDContactShapesType::SphereCapsule", (int64)EChaosVDContactShapesType::SphereCapsule },
		{ "EChaosVDContactShapesType::SphereBox", (int64)EChaosVDContactShapesType::SphereBox },
		{ "EChaosVDContactShapesType::SphereConvex", (int64)EChaosVDContactShapesType::SphereConvex },
		{ "EChaosVDContactShapesType::SphereTriMesh", (int64)EChaosVDContactShapesType::SphereTriMesh },
		{ "EChaosVDContactShapesType::SphereHeightField", (int64)EChaosVDContactShapesType::SphereHeightField },
		{ "EChaosVDContactShapesType::SpherePlane", (int64)EChaosVDContactShapesType::SpherePlane },
		{ "EChaosVDContactShapesType::CapsuleCapsule", (int64)EChaosVDContactShapesType::CapsuleCapsule },
		{ "EChaosVDContactShapesType::CapsuleBox", (int64)EChaosVDContactShapesType::CapsuleBox },
		{ "EChaosVDContactShapesType::CapsuleConvex", (int64)EChaosVDContactShapesType::CapsuleConvex },
		{ "EChaosVDContactShapesType::CapsuleTriMesh", (int64)EChaosVDContactShapesType::CapsuleTriMesh },
		{ "EChaosVDContactShapesType::CapsuleHeightField", (int64)EChaosVDContactShapesType::CapsuleHeightField },
		{ "EChaosVDContactShapesType::BoxBox", (int64)EChaosVDContactShapesType::BoxBox },
		{ "EChaosVDContactShapesType::BoxConvex", (int64)EChaosVDContactShapesType::BoxConvex },
		{ "EChaosVDContactShapesType::BoxTriMesh", (int64)EChaosVDContactShapesType::BoxTriMesh },
		{ "EChaosVDContactShapesType::BoxHeightField", (int64)EChaosVDContactShapesType::BoxHeightField },
		{ "EChaosVDContactShapesType::BoxPlane", (int64)EChaosVDContactShapesType::BoxPlane },
		{ "EChaosVDContactShapesType::ConvexConvex", (int64)EChaosVDContactShapesType::ConvexConvex },
		{ "EChaosVDContactShapesType::ConvexTriMesh", (int64)EChaosVDContactShapesType::ConvexTriMesh },
		{ "EChaosVDContactShapesType::ConvexHeightField", (int64)EChaosVDContactShapesType::ConvexHeightField },
		{ "EChaosVDContactShapesType::GenericConvexConvex", (int64)EChaosVDContactShapesType::GenericConvexConvex },
		{ "EChaosVDContactShapesType::LevelSetLevelSet", (int64)EChaosVDContactShapesType::LevelSetLevelSet },
		{ "EChaosVDContactShapesType::NumShapesTypes", (int64)EChaosVDContactShapesType::NumShapesTypes },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDContactShapesType",
	"EChaosVDContactShapesType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDContactShapesType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDContactShapesType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDContactShapesType.InnerSingleton;
}
// End Enum EChaosVDContactShapesType

// Begin Enum EChaosVDContactPointType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDContactPointType;
static UEnum* EChaosVDContactPointType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDContactPointType"));
	}
	return Z_Registration_Info_UEnum_EChaosVDContactPointType.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDContactPointType>()
{
	return EChaosVDContactPointType_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EdgeEdge.Name", "EChaosVDContactPointType::EdgeEdge" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "PlaneVertex.Name", "EChaosVDContactPointType::PlaneVertex" },
		{ "Unknown.Name", "EChaosVDContactPointType::Unknown" },
		{ "VertexPlane.Name", "EChaosVDContactPointType::VertexPlane" },
		{ "VertexVertex.Name", "EChaosVDContactPointType::VertexVertex" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDContactPointType::Unknown", (int64)EChaosVDContactPointType::Unknown },
		{ "EChaosVDContactPointType::VertexPlane", (int64)EChaosVDContactPointType::VertexPlane },
		{ "EChaosVDContactPointType::EdgeEdge", (int64)EChaosVDContactPointType::EdgeEdge },
		{ "EChaosVDContactPointType::PlaneVertex", (int64)EChaosVDContactPointType::PlaneVertex },
		{ "EChaosVDContactPointType::VertexVertex", (int64)EChaosVDContactPointType::VertexVertex },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDContactPointType",
	"EChaosVDContactPointType",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType()
{
	if (!Z_Registration_Info_UEnum_EChaosVDContactPointType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDContactPointType.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDContactPointType.InnerSingleton;
}
// End Enum EChaosVDContactPointType

// Begin ScriptStruct FChaosVDContactPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDContactPoint;
class UScriptStruct* FChaosVDContactPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDContactPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDContactPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDContactPoint, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDContactPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDContactPoint.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDContactPoint>()
{
	return FChaosVDContactPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeContactPoints_MetaData[] = {
		{ "Category", "Contact" },
		{ "Comment", "// Shape-space contact points on the two bodies\n" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "ToolTip", "Shape-space contact points on the two bodies" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeContactNormal_MetaData[] = {
		{ "Category", "Contact" },
		{ "Comment", "// Shape-space contact normal on the second shape with direction that points away from shape 1\n" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "ToolTip", "Shape-space contact normal on the second shape with direction that points away from shape 1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Phi_MetaData[] = {
		{ "Category", "Contact" },
		{ "Comment", "// Contact separation (negative for overlap)\n" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "ToolTip", "Contact separation (negative for overlap)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndex_MetaData[] = {
		{ "Category", "Contact" },
		{ "Comment", "// Face index of the shape we hit. Only valid for Heightfield and Trimesh contact points, otherwise INDEX_NONE\n" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "ToolTip", "Face index of the shape we hit. Only valid for Heightfield and Trimesh contact points, otherwise INDEX_NONE" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactType_MetaData[] = {
		{ "Category", "Contact" },
		{ "Comment", "// Whether this is a vertex-plane contact, edge-edge contact etc.\n" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "ToolTip", "Whether this is a vertex-plane contact, edge-edge contact etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeContactPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeContactNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Phi;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_ContactType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ContactType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDContactPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ShapeContactPoints = { "ShapeContactPoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ShapeContactPoints, FChaosVDContactPoint), STRUCT_OFFSET(FChaosVDContactPoint, ShapeContactPoints), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeContactPoints_MetaData), NewProp_ShapeContactPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ShapeContactNormal = { "ShapeContactNormal", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDContactPoint, ShapeContactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeContactNormal_MetaData), NewProp_ShapeContactNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_Phi = { "Phi", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDContactPoint, Phi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Phi_MetaData), NewProp_Phi_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDContactPoint, FaceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceIndex_MetaData), NewProp_FaceIndex_MetaData) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ContactType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ContactType = { "ContactType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDContactPoint, ContactType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactPointType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactType_MetaData), NewProp_ContactType_MetaData) }; // 622961653
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ShapeContactPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ShapeContactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_Phi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_FaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ContactType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewProp_ContactType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDContactPoint",
	Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::PropPointers),
	sizeof(FChaosVDContactPoint),
	alignof(FChaosVDContactPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDContactPoint()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDContactPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDContactPoint.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDContactPoint.InnerSingleton;
}
// End ScriptStruct FChaosVDContactPoint

// Begin Enum EChaosVDManifoldPointFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags;
static UEnum* EChaosVDManifoldPointFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDManifoldPointFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDManifoldPointFlags>()
{
	return EChaosVDManifoldPointFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Disabled.Name", "EChaosVDManifoldPointFlags::Disabled" },
		{ "HasStaticFrictionAnchor.Name", "EChaosVDManifoldPointFlags::HasStaticFrictionAnchor" },
		{ "InsideStaticFrictionCone.Name", "EChaosVDManifoldPointFlags::InsideStaticFrictionCone" },
		{ "IsValid.Name", "EChaosVDManifoldPointFlags::IsValid" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "None.Name", "EChaosVDManifoldPointFlags::None" },
		{ "WasReplaced.Name", "EChaosVDManifoldPointFlags::WasReplaced" },
		{ "WasRestored.Name", "EChaosVDManifoldPointFlags::WasRestored" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDManifoldPointFlags::None", (int64)EChaosVDManifoldPointFlags::None },
		{ "EChaosVDManifoldPointFlags::Disabled", (int64)EChaosVDManifoldPointFlags::Disabled },
		{ "EChaosVDManifoldPointFlags::WasRestored", (int64)EChaosVDManifoldPointFlags::WasRestored },
		{ "EChaosVDManifoldPointFlags::WasReplaced", (int64)EChaosVDManifoldPointFlags::WasReplaced },
		{ "EChaosVDManifoldPointFlags::HasStaticFrictionAnchor", (int64)EChaosVDManifoldPointFlags::HasStaticFrictionAnchor },
		{ "EChaosVDManifoldPointFlags::IsValid", (int64)EChaosVDManifoldPointFlags::IsValid },
		{ "EChaosVDManifoldPointFlags::InsideStaticFrictionCone", (int64)EChaosVDManifoldPointFlags::InsideStaticFrictionCone },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDManifoldPointFlags",
	"EChaosVDManifoldPointFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDManifoldPointFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags.InnerSingleton;
}
// End Enum EChaosVDManifoldPointFlags

// Begin ScriptStruct FChaosVDManifoldPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint;
class UScriptStruct* FChaosVDManifoldPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDManifoldPoint, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDManifoldPoint"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDManifoldPoint>()
{
	return FChaosVDManifoldPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasRestored_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasReplaced_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStaticFrictionAnchor_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInsideStaticFrictionCone_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetPushOut_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetImpulse_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetPhi_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialPhi_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeAnchorPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialShapeContactPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactPoint_MetaData[] = {
		{ "Category", "ContactData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeContactPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static void NewProp_bWasRestored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasRestored;
	static void NewProp_bWasReplaced_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasReplaced;
	static void NewProp_bHasStaticFrictionAnchor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStaticFrictionAnchor;
	static void NewProp_bIsValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
	static void NewProp_bInsideStaticFrictionCone_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInsideStaticFrictionCone;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetPushOut;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NetImpulse;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetPhi;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialPhi;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeAnchorPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialShapeContactPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ContactPoint;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeContactPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDManifoldPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FChaosVDManifoldPoint*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDManifoldPoint), &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasRestored_SetBit(void* Obj)
{
	((FChaosVDManifoldPoint*)Obj)->bWasRestored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasRestored = { "bWasRestored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDManifoldPoint), &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasRestored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasRestored_MetaData), NewProp_bWasRestored_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasReplaced_SetBit(void* Obj)
{
	((FChaosVDManifoldPoint*)Obj)->bWasReplaced = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasReplaced = { "bWasReplaced", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDManifoldPoint), &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasReplaced_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasReplaced_MetaData), NewProp_bWasReplaced_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bHasStaticFrictionAnchor_SetBit(void* Obj)
{
	((FChaosVDManifoldPoint*)Obj)->bHasStaticFrictionAnchor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bHasStaticFrictionAnchor = { "bHasStaticFrictionAnchor", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDManifoldPoint), &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bHasStaticFrictionAnchor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStaticFrictionAnchor_MetaData), NewProp_bHasStaticFrictionAnchor_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bIsValid_SetBit(void* Obj)
{
	((FChaosVDManifoldPoint*)Obj)->bIsValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDManifoldPoint), &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsValid_MetaData), NewProp_bIsValid_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bInsideStaticFrictionCone_SetBit(void* Obj)
{
	((FChaosVDManifoldPoint*)Obj)->bInsideStaticFrictionCone = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bInsideStaticFrictionCone = { "bInsideStaticFrictionCone", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDManifoldPoint), &Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bInsideStaticFrictionCone_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInsideStaticFrictionCone_MetaData), NewProp_bInsideStaticFrictionCone_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_NetPushOut = { "NetPushOut", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDManifoldPoint, NetPushOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetPushOut_MetaData), NewProp_NetPushOut_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_NetImpulse = { "NetImpulse", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDManifoldPoint, NetImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetImpulse_MetaData), NewProp_NetImpulse_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_TargetPhi = { "TargetPhi", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDManifoldPoint, TargetPhi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetPhi_MetaData), NewProp_TargetPhi_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_InitialPhi = { "InitialPhi", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDManifoldPoint, InitialPhi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialPhi_MetaData), NewProp_InitialPhi_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_ShapeAnchorPoints = { "ShapeAnchorPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ShapeAnchorPoints, FChaosVDManifoldPoint), STRUCT_OFFSET(FChaosVDManifoldPoint, ShapeAnchorPoints), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeAnchorPoints_MetaData), NewProp_ShapeAnchorPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_InitialShapeContactPoints = { "InitialShapeContactPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(InitialShapeContactPoints, FChaosVDManifoldPoint), STRUCT_OFFSET(FChaosVDManifoldPoint, InitialShapeContactPoints), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialShapeContactPoints_MetaData), NewProp_InitialShapeContactPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_ContactPoint = { "ContactPoint", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDManifoldPoint, ContactPoint), Z_Construct_UScriptStruct_FChaosVDContactPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactPoint_MetaData), NewProp_ContactPoint_MetaData) }; // 4183867937
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_ShapeContactPoints = { "ShapeContactPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ShapeContactPoints, FChaosVDManifoldPoint), STRUCT_OFFSET(FChaosVDManifoldPoint, ShapeContactPoints), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeContactPoints_MetaData), NewProp_ShapeContactPoints_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasRestored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bWasReplaced,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bHasStaticFrictionAnchor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bIsValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_bInsideStaticFrictionCone,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_NetPushOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_NetImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_TargetPhi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_InitialPhi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_ShapeAnchorPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_InitialShapeContactPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_ContactPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewProp_ShapeContactPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDManifoldPoint",
	Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::PropPointers),
	sizeof(FChaosVDManifoldPoint),
	alignof(FChaosVDManifoldPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDManifoldPoint()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint.InnerSingleton;
}
// End ScriptStruct FChaosVDManifoldPoint

// Begin ScriptStruct FChaosVDCollisionMaterial
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial;
class UScriptStruct* FChaosVDCollisionMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionMaterial, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCollisionMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCollisionMaterial>()
{
	return FChaosVDCollisionMaterial::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndex_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialDynamicFriction_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialStaticFriction_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRestitution_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicFriction_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticFriction_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Restitution_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestitutionThreshold_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvMassScale0_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvMassScale1_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvInertiaScale0_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvInertiaScale1_MetaData[] = {
		{ "Category", "MaterialData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FaceIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialDynamicFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialStaticFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaterialRestitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Restitution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RestitutionThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvMassScale0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvMassScale1;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvInertiaScale0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InvInertiaScale1;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCollisionMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_FaceIndex = { "FaceIndex", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, FaceIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceIndex_MetaData), NewProp_FaceIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_MaterialDynamicFriction = { "MaterialDynamicFriction", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, MaterialDynamicFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialDynamicFriction_MetaData), NewProp_MaterialDynamicFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_MaterialStaticFriction = { "MaterialStaticFriction", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, MaterialStaticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialStaticFriction_MetaData), NewProp_MaterialStaticFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_MaterialRestitution = { "MaterialRestitution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, MaterialRestitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialRestitution_MetaData), NewProp_MaterialRestitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_DynamicFriction = { "DynamicFriction", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, DynamicFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicFriction_MetaData), NewProp_DynamicFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_StaticFriction = { "StaticFriction", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, StaticFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticFriction_MetaData), NewProp_StaticFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, Restitution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Restitution_MetaData), NewProp_Restitution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_RestitutionThreshold = { "RestitutionThreshold", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, RestitutionThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestitutionThreshold_MetaData), NewProp_RestitutionThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvMassScale0 = { "InvMassScale0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, InvMassScale0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvMassScale0_MetaData), NewProp_InvMassScale0_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvMassScale1 = { "InvMassScale1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, InvMassScale1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvMassScale1_MetaData), NewProp_InvMassScale1_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvInertiaScale0 = { "InvInertiaScale0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, InvInertiaScale0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvInertiaScale0_MetaData), NewProp_InvInertiaScale0_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvInertiaScale1 = { "InvInertiaScale1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionMaterial, InvInertiaScale1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvInertiaScale1_MetaData), NewProp_InvInertiaScale1_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_FaceIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_MaterialDynamicFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_MaterialStaticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_MaterialRestitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_DynamicFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_StaticFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_Restitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_RestitutionThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvMassScale0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvMassScale1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvInertiaScale0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewProp_InvInertiaScale1,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDCollisionMaterial",
	Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::PropPointers),
	sizeof(FChaosVDCollisionMaterial),
	alignof(FChaosVDCollisionMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial.InnerSingleton;
}
// End ScriptStruct FChaosVDCollisionMaterial

// Begin Enum EChaosVDConstraintFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDConstraintFlags;
static UEnum* EChaosVDConstraintFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDConstraintFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDConstraintFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDConstraintFlags>()
{
	return EChaosVDConstraintFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CanRestoreManifold.Name", "EChaosVDConstraintFlags::CanRestoreManifold" },
		{ "CCDEnabled.Name", "EChaosVDConstraintFlags::CCDEnabled" },
		{ "CCDSweepEnabled.Name", "EChaosVDConstraintFlags::CCDSweepEnabled" },
		{ "Disabled.Name", "EChaosVDConstraintFlags::Disabled" },
		{ "IsCurrent.Name", "EChaosVDConstraintFlags::IsCurrent" },
		{ "IsProbe.Name", "EChaosVDConstraintFlags::IsProbe" },
		{ "IsQuadratic0.Name", "EChaosVDConstraintFlags::IsQuadratic0" },
		{ "IsQuadratic1.Name", "EChaosVDConstraintFlags::IsQuadratic1" },
		{ "MaterialSet.Name", "EChaosVDConstraintFlags::MaterialSet" },
		{ "ModifierApplied.Name", "EChaosVDConstraintFlags::ModifierApplied" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "None.Name", "EChaosVDConstraintFlags::None" },
		{ "UseIncrementalManifold.Name", "EChaosVDConstraintFlags::UseIncrementalManifold" },
		{ "UseManifold.Name", "EChaosVDConstraintFlags::UseManifold" },
		{ "WasManifoldRestored.Name", "EChaosVDConstraintFlags::WasManifoldRestored" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDConstraintFlags::None", (int64)EChaosVDConstraintFlags::None },
		{ "EChaosVDConstraintFlags::IsCurrent", (int64)EChaosVDConstraintFlags::IsCurrent },
		{ "EChaosVDConstraintFlags::Disabled", (int64)EChaosVDConstraintFlags::Disabled },
		{ "EChaosVDConstraintFlags::UseManifold", (int64)EChaosVDConstraintFlags::UseManifold },
		{ "EChaosVDConstraintFlags::UseIncrementalManifold", (int64)EChaosVDConstraintFlags::UseIncrementalManifold },
		{ "EChaosVDConstraintFlags::CanRestoreManifold", (int64)EChaosVDConstraintFlags::CanRestoreManifold },
		{ "EChaosVDConstraintFlags::WasManifoldRestored", (int64)EChaosVDConstraintFlags::WasManifoldRestored },
		{ "EChaosVDConstraintFlags::IsQuadratic0", (int64)EChaosVDConstraintFlags::IsQuadratic0 },
		{ "EChaosVDConstraintFlags::IsQuadratic1", (int64)EChaosVDConstraintFlags::IsQuadratic1 },
		{ "EChaosVDConstraintFlags::IsProbe", (int64)EChaosVDConstraintFlags::IsProbe },
		{ "EChaosVDConstraintFlags::CCDEnabled", (int64)EChaosVDConstraintFlags::CCDEnabled },
		{ "EChaosVDConstraintFlags::CCDSweepEnabled", (int64)EChaosVDConstraintFlags::CCDSweepEnabled },
		{ "EChaosVDConstraintFlags::ModifierApplied", (int64)EChaosVDConstraintFlags::ModifierApplied },
		{ "EChaosVDConstraintFlags::MaterialSet", (int64)EChaosVDConstraintFlags::MaterialSet },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDConstraintFlags",
	"EChaosVDConstraintFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDConstraintFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDConstraintFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDConstraintFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDConstraintFlags.InnerSingleton;
}
// End Enum EChaosVDConstraintFlags

// Begin ScriptStruct FChaosVDConstraint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDConstraint;
class UScriptStruct* FChaosVDConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDConstraint, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDConstraint.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDConstraint>()
{
	return FChaosVDConstraint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDConstraint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCurrent_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisabled_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseManifold_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIncrementalManifold_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRestoreManifold_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWasManifoldRestored_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuadratic0_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsQuadratic1_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsProbe_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCCDEnabled_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCCDSweepEnabled_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bModifierApplied_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bMaterialSet_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedImpulse_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapesType_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShapeWorldTransforms_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImplicitTransforms_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionMargins_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTolerance_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClosestManifoldPointIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpectedNumManifoldPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastShapeWorldPositionDelta_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastShapeWorldRotationDelta_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Stiffness_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinInitialPhi_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialOverlapDepenetrationVelocity_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CCDTimeOfImpact_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CCDEnablePenetration_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CCDTargetPenetration_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManifoldPoints_MetaData[] = {
		{ "Category", "ConstraintData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle0Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle1Index_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsCurrent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrent;
	static void NewProp_bDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisabled;
	static void NewProp_bUseManifold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseManifold;
	static void NewProp_bUseIncrementalManifold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIncrementalManifold;
	static void NewProp_bCanRestoreManifold_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRestoreManifold;
	static void NewProp_bWasManifoldRestored_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasManifoldRestored;
	static void NewProp_bIsQuadratic0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuadratic0;
	static void NewProp_bIsQuadratic1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsQuadratic1;
	static void NewProp_bIsProbe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProbe;
	static void NewProp_bCCDEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCCDEnabled;
	static void NewProp_bCCDSweepEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCCDSweepEnabled;
	static void NewProp_bModifierApplied_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bModifierApplied;
	static void NewProp_bMaterialSet_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaterialSet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccumulatedImpulse;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShapesType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapesType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeWorldTransforms;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImplicitTransforms;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionMargins_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionMargins;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionTolerance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClosestManifoldPointIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExpectedNumManifoldPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastShapeWorldPositionDelta;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastShapeWorldRotationDelta;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinInitialPhi;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialOverlapDepenetrationVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CCDTimeOfImpact;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CCDEnablePenetration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CCDTargetPenetration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ManifoldPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ManifoldPoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Particle0Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Particle1Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDConstraint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsCurrent_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bIsCurrent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsCurrent = { "bIsCurrent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsCurrent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCurrent_MetaData), NewProp_bIsCurrent_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bDisabled_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bDisabled = { "bDisabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bDisabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisabled_MetaData), NewProp_bDisabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseManifold_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bUseManifold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseManifold = { "bUseManifold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseManifold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseManifold_MetaData), NewProp_bUseManifold_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseIncrementalManifold_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bUseIncrementalManifold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseIncrementalManifold = { "bUseIncrementalManifold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseIncrementalManifold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIncrementalManifold_MetaData), NewProp_bUseIncrementalManifold_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCanRestoreManifold_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bCanRestoreManifold = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCanRestoreManifold = { "bCanRestoreManifold", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCanRestoreManifold_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRestoreManifold_MetaData), NewProp_bCanRestoreManifold_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bWasManifoldRestored_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bWasManifoldRestored = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bWasManifoldRestored = { "bWasManifoldRestored", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bWasManifoldRestored_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWasManifoldRestored_MetaData), NewProp_bWasManifoldRestored_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic0_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bIsQuadratic0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic0 = { "bIsQuadratic0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic0_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsQuadratic0_MetaData), NewProp_bIsQuadratic0_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic1_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bIsQuadratic1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic1 = { "bIsQuadratic1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic1_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsQuadratic1_MetaData), NewProp_bIsQuadratic1_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsProbe_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bIsProbe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsProbe = { "bIsProbe", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsProbe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsProbe_MetaData), NewProp_bIsProbe_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDEnabled_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bCCDEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDEnabled = { "bCCDEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCCDEnabled_MetaData), NewProp_bCCDEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDSweepEnabled_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bCCDSweepEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDSweepEnabled = { "bCCDSweepEnabled", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDSweepEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCCDSweepEnabled_MetaData), NewProp_bCCDSweepEnabled_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bModifierApplied_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bModifierApplied = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bModifierApplied = { "bModifierApplied", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bModifierApplied_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bModifierApplied_MetaData), NewProp_bModifierApplied_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bMaterialSet_SetBit(void* Obj)
{
	((FChaosVDConstraint*)Obj)->bMaterialSet = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bMaterialSet = { "bMaterialSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDConstraint), &Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bMaterialSet_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bMaterialSet_MetaData), NewProp_bMaterialSet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, Material), Z_Construct_UScriptStruct_FChaosVDCollisionMaterial, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) }; // 3242076553
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_AccumulatedImpulse = { "AccumulatedImpulse", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, AccumulatedImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedImpulse_MetaData), NewProp_AccumulatedImpulse_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ShapesType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ShapesType = { "ShapesType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, ShapesType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDContactShapesType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapesType_MetaData), NewProp_ShapesType_MetaData) }; // 1657769227
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ShapeWorldTransforms = { "ShapeWorldTransforms", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ShapeWorldTransforms, FChaosVDConstraint), STRUCT_OFFSET(FChaosVDConstraint, ShapeWorldTransforms), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShapeWorldTransforms_MetaData), NewProp_ShapeWorldTransforms_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ImplicitTransforms = { "ImplicitTransforms", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(ImplicitTransforms, FChaosVDConstraint), STRUCT_OFFSET(FChaosVDConstraint, ImplicitTransforms), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImplicitTransforms_MetaData), NewProp_ImplicitTransforms_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, CullDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistance_MetaData), NewProp_CullDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CollisionMargins_Inner = { "CollisionMargins", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CollisionMargins = { "CollisionMargins", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, CollisionMargins), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionMargins_MetaData), NewProp_CollisionMargins_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CollisionTolerance = { "CollisionTolerance", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, CollisionTolerance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTolerance_MetaData), NewProp_CollisionTolerance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ClosestManifoldPointIndex = { "ClosestManifoldPointIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, ClosestManifoldPointIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClosestManifoldPointIndex_MetaData), NewProp_ClosestManifoldPointIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ExpectedNumManifoldPoints = { "ExpectedNumManifoldPoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, ExpectedNumManifoldPoints), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpectedNumManifoldPoints_MetaData), NewProp_ExpectedNumManifoldPoints_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_LastShapeWorldPositionDelta = { "LastShapeWorldPositionDelta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, LastShapeWorldPositionDelta), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastShapeWorldPositionDelta_MetaData), NewProp_LastShapeWorldPositionDelta_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_LastShapeWorldRotationDelta = { "LastShapeWorldRotationDelta", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, LastShapeWorldRotationDelta), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastShapeWorldRotationDelta_MetaData), NewProp_LastShapeWorldRotationDelta_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, Stiffness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Stiffness_MetaData), NewProp_Stiffness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_MinInitialPhi = { "MinInitialPhi", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, MinInitialPhi), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinInitialPhi_MetaData), NewProp_MinInitialPhi_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_InitialOverlapDepenetrationVelocity = { "InitialOverlapDepenetrationVelocity", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, InitialOverlapDepenetrationVelocity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialOverlapDepenetrationVelocity_MetaData), NewProp_InitialOverlapDepenetrationVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CCDTimeOfImpact = { "CCDTimeOfImpact", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, CCDTimeOfImpact), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CCDTimeOfImpact_MetaData), NewProp_CCDTimeOfImpact_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CCDEnablePenetration = { "CCDEnablePenetration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, CCDEnablePenetration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CCDEnablePenetration_MetaData), NewProp_CCDEnablePenetration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CCDTargetPenetration = { "CCDTargetPenetration", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, CCDTargetPenetration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CCDTargetPenetration_MetaData), NewProp_CCDTargetPenetration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ManifoldPoints_Inner = { "ManifoldPoints", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosVDManifoldPoint, METADATA_PARAMS(0, nullptr) }; // 1393835166
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ManifoldPoints = { "ManifoldPoints", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, ManifoldPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManifoldPoints_MetaData), NewProp_ManifoldPoints_MetaData) }; // 1393835166
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Particle0Index = { "Particle0Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, Particle0Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle0Index_MetaData), NewProp_Particle0Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Particle1Index = { "Particle1Index", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, Particle1Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle1Index_MetaData), NewProp_Particle1Index_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_SolverID = { "SolverID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDConstraint, SolverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverID_MetaData), NewProp_SolverID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsCurrent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bDisabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseManifold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bUseIncrementalManifold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCanRestoreManifold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bWasManifoldRestored,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsQuadratic1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bIsProbe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bCCDSweepEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bModifierApplied,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_bMaterialSet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_AccumulatedImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ShapesType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ShapesType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ShapeWorldTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ImplicitTransforms,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CollisionMargins_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CollisionMargins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CollisionTolerance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ClosestManifoldPointIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ExpectedNumManifoldPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_LastShapeWorldPositionDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_LastShapeWorldRotationDelta,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_MinInitialPhi,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_InitialOverlapDepenetrationVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CCDTimeOfImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CCDEnablePenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_CCDTargetPenetration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ManifoldPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_ManifoldPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Particle0Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_Particle1Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewProp_SolverID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDConstraint",
	Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::PropPointers),
	sizeof(FChaosVDConstraint),
	alignof(FChaosVDConstraint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDConstraint()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDConstraint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDConstraint.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDConstraint.InnerSingleton;
}
// End ScriptStruct FChaosVDConstraint

// Begin Enum EChaosVDMidPhaseFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags;
static UEnum* EChaosVDMidPhaseFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDMidPhaseFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDMidPhaseFlags>()
{
	return EChaosVDMidPhaseFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "IsActive.Name", "EChaosVDMidPhaseFlags::IsActive" },
		{ "IsCCD.Name", "EChaosVDMidPhaseFlags::IsCCD" },
		{ "IsCCDActive.Name", "EChaosVDMidPhaseFlags::IsCCDActive" },
		{ "IsModified.Name", "EChaosVDMidPhaseFlags::IsModified" },
		{ "IsSleeping.Name", "EChaosVDMidPhaseFlags::IsSleeping" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "None.Name", "EChaosVDMidPhaseFlags::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDMidPhaseFlags::None", (int64)EChaosVDMidPhaseFlags::None },
		{ "EChaosVDMidPhaseFlags::IsActive", (int64)EChaosVDMidPhaseFlags::IsActive },
		{ "EChaosVDMidPhaseFlags::IsCCD", (int64)EChaosVDMidPhaseFlags::IsCCD },
		{ "EChaosVDMidPhaseFlags::IsCCDActive", (int64)EChaosVDMidPhaseFlags::IsCCDActive },
		{ "EChaosVDMidPhaseFlags::IsSleeping", (int64)EChaosVDMidPhaseFlags::IsSleeping },
		{ "EChaosVDMidPhaseFlags::IsModified", (int64)EChaosVDMidPhaseFlags::IsModified },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDMidPhaseFlags",
	"EChaosVDMidPhaseFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDMidPhaseFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags.InnerSingleton;
}
// End Enum EChaosVDMidPhaseFlags

// Begin ScriptStruct FChaosVDParticlePairMidPhase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase;
class UScriptStruct* FChaosVDParticlePairMidPhase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDParticlePairMidPhase"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDParticlePairMidPhase>()
{
	return FChaosVDParticlePairMidPhase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SolverID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsActive_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCCD_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsCCDActive_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSleeping_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsModified_MetaData[] = {
		{ "Category", "Flags" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastUsedEpoch_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle0Idx_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Particle1Idx_MetaData[] = {
		{ "Category", "Particle" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Constraints_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SolverID;
	static void NewProp_bIsActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsActive;
	static void NewProp_bIsCCD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCCD;
	static void NewProp_bIsCCDActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCCDActive;
	static void NewProp_bIsSleeping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSleeping;
	static void NewProp_bIsModified_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsModified;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastUsedEpoch;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Particle0Idx;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Particle1Idx;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Constraints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Constraints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDParticlePairMidPhase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_SolverID = { "SolverID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePairMidPhase, SolverID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SolverID_MetaData), NewProp_SolverID_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsActive_SetBit(void* Obj)
{
	((FChaosVDParticlePairMidPhase*)Obj)->bIsActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsActive = { "bIsActive", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDParticlePairMidPhase), &Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsActive_MetaData), NewProp_bIsActive_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCD_SetBit(void* Obj)
{
	((FChaosVDParticlePairMidPhase*)Obj)->bIsCCD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCD = { "bIsCCD", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDParticlePairMidPhase), &Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCCD_MetaData), NewProp_bIsCCD_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCDActive_SetBit(void* Obj)
{
	((FChaosVDParticlePairMidPhase*)Obj)->bIsCCDActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCDActive = { "bIsCCDActive", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDParticlePairMidPhase), &Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCDActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsCCDActive_MetaData), NewProp_bIsCCDActive_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsSleeping_SetBit(void* Obj)
{
	((FChaosVDParticlePairMidPhase*)Obj)->bIsSleeping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsSleeping = { "bIsSleeping", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDParticlePairMidPhase), &Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsSleeping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSleeping_MetaData), NewProp_bIsSleeping_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsModified_SetBit(void* Obj)
{
	((FChaosVDParticlePairMidPhase*)Obj)->bIsModified = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsModified = { "bIsModified", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDParticlePairMidPhase), &Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsModified_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsModified_MetaData), NewProp_bIsModified_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_LastUsedEpoch = { "LastUsedEpoch", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePairMidPhase, LastUsedEpoch), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastUsedEpoch_MetaData), NewProp_LastUsedEpoch_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Particle0Idx = { "Particle0Idx", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePairMidPhase, Particle0Idx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle0Idx_MetaData), NewProp_Particle0Idx_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Particle1Idx = { "Particle1Idx", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePairMidPhase, Particle1Idx), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Particle1Idx_MetaData), NewProp_Particle1Idx_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Constraints_Inner = { "Constraints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FChaosVDConstraint, METADATA_PARAMS(0, nullptr) }; // 1817675052
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Constraints = { "Constraints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDParticlePairMidPhase, Constraints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Constraints_MetaData), NewProp_Constraints_MetaData) }; // 1817675052
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_SolverID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsCCDActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsSleeping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_bIsModified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_LastUsedEpoch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Particle0Idx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Particle1Idx,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Constraints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewProp_Constraints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDParticlePairMidPhase",
	Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::PropPointers),
	sizeof(FChaosVDParticlePairMidPhase),
	alignof(FChaosVDParticlePairMidPhase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase.InnerSingleton;
}
// End ScriptStruct FChaosVDParticlePairMidPhase

// Begin Enum EChaosVDCollisionTraceFlag
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag;
static UEnum* EChaosVDCollisionTraceFlag_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDCollisionTraceFlag"));
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionTraceFlag>()
{
	return EChaosVDCollisionTraceFlag_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "MAX.Comment", "/** */" },
		{ "MAX.Name", "EChaosVDCollisionTraceFlag::MAX" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "UseComplexAsSimple.Comment", "/** Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.) */" },
		{ "UseComplexAsSimple.Name", "EChaosVDCollisionTraceFlag::UseComplexAsSimple" },
		{ "UseComplexAsSimple.ToolTip", "Create only complex shapes (per poly). Use complex shapes for all scene queries and collision tests. Can be used in simulation for static shapes only (i.e can be collided against but not moved through forces or velocity.)" },
		{ "UseDefault.Comment", "/** Use project physics settings (DefaultShapeComplexity) */" },
		{ "UseDefault.Name", "EChaosVDCollisionTraceFlag::UseDefault" },
		{ "UseDefault.ToolTip", "Use project physics settings (DefaultShapeComplexity)" },
		{ "UseSimpleAndComplex.Comment", "/** Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries.*/" },
		{ "UseSimpleAndComplex.Name", "EChaosVDCollisionTraceFlag::UseSimpleAndComplex" },
		{ "UseSimpleAndComplex.ToolTip", "Create both simple and complex shapes. Simple shapes are used for regular scene queries and collision tests. Complex shape (per poly) is used for complex scene queries." },
		{ "UseSimpleAsComplex.Comment", "/** Create only simple shapes. Use simple shapes for all scene queries and collision tests.*/" },
		{ "UseSimpleAsComplex.Name", "EChaosVDCollisionTraceFlag::UseSimpleAsComplex" },
		{ "UseSimpleAsComplex.ToolTip", "Create only simple shapes. Use simple shapes for all scene queries and collision tests." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDCollisionTraceFlag::UseDefault", (int64)EChaosVDCollisionTraceFlag::UseDefault },
		{ "EChaosVDCollisionTraceFlag::UseSimpleAndComplex", (int64)EChaosVDCollisionTraceFlag::UseSimpleAndComplex },
		{ "EChaosVDCollisionTraceFlag::UseSimpleAsComplex", (int64)EChaosVDCollisionTraceFlag::UseSimpleAsComplex },
		{ "EChaosVDCollisionTraceFlag::UseComplexAsSimple", (int64)EChaosVDCollisionTraceFlag::UseComplexAsSimple },
		{ "EChaosVDCollisionTraceFlag::MAX", (int64)EChaosVDCollisionTraceFlag::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDCollisionTraceFlag",
	"EChaosVDCollisionTraceFlag",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag.InnerSingleton;
}
// End Enum EChaosVDCollisionTraceFlag

// Begin ScriptStruct FChaosVDCollisionFilterData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData;
class UScriptStruct* FChaosVDCollisionFilterData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDCollisionFilterData, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDCollisionFilterData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDCollisionFilterData>()
{
	return FChaosVDCollisionFilterData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Word0_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Word1_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Word2_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Word3_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Word0;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Word1;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Word2;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Word3;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDCollisionFilterData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word0 = { "Word0", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionFilterData, Word0), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Word0_MetaData), NewProp_Word0_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word1 = { "Word1", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionFilterData, Word1), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Word1_MetaData), NewProp_Word1_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word2 = { "Word2", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionFilterData, Word2), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Word2_MetaData), NewProp_Word2_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word3 = { "Word3", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDCollisionFilterData, Word3), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Word3_MetaData), NewProp_Word3_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewProp_Word3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDCollisionFilterData",
	Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::PropPointers),
	sizeof(FChaosVDCollisionFilterData),
	alignof(FChaosVDCollisionFilterData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDCollisionFilterData()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData.InnerSingleton;
}
// End ScriptStruct FChaosVDCollisionFilterData

// Begin Enum EChaosVDCollisionShapeDataFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags;
static UEnum* EChaosVDCollisionShapeDataFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("EChaosVDCollisionShapeDataFlags"));
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UEnum* StaticEnum<EChaosVDCollisionShapeDataFlags>()
{
	return EChaosVDCollisionShapeDataFlags_StaticEnum();
}
struct Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "IsProbe.Name", "EChaosVDCollisionShapeDataFlags::IsProbe" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
		{ "None.Name", "EChaosVDCollisionShapeDataFlags::None" },
		{ "QueryCollision.Name", "EChaosVDCollisionShapeDataFlags::QueryCollision" },
		{ "SimCollision.Name", "EChaosVDCollisionShapeDataFlags::SimCollision" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EChaosVDCollisionShapeDataFlags::None", (int64)EChaosVDCollisionShapeDataFlags::None },
		{ "EChaosVDCollisionShapeDataFlags::SimCollision", (int64)EChaosVDCollisionShapeDataFlags::SimCollision },
		{ "EChaosVDCollisionShapeDataFlags::QueryCollision", (int64)EChaosVDCollisionShapeDataFlags::QueryCollision },
		{ "EChaosVDCollisionShapeDataFlags::IsProbe", (int64)EChaosVDCollisionShapeDataFlags::IsProbe },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	"EChaosVDCollisionShapeDataFlags",
	"EChaosVDCollisionShapeDataFlags",
	Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags()
{
	if (!Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.InnerSingleton, Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionShapeDataFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags.InnerSingleton;
}
// End Enum EChaosVDCollisionShapeDataFlags

// Begin ScriptStruct FChaosVDShapeCollisionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData;
class UScriptStruct* FChaosVDShapeCollisionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChaosVDShapeCollisionData, (UObject*)Z_Construct_UPackage__Script_ChaosVDRuntime(), TEXT("ChaosVDShapeCollisionData"));
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData.OuterSingleton;
}
template<> CHAOSVDRUNTIME_API UScriptStruct* StaticStruct<FChaosVDShapeCollisionData>()
{
	return FChaosVDShapeCollisionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionTraceType_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimCollision_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bQueryCollision_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsProbe_MetaData[] = {
		{ "Category", "CollisionData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_QueryData_MetaData[] = {
		{ "Category", "FilterData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimData_MetaData[] = {
		{ "Category", "SimData" },
		{ "ModuleRelativePath", "Public/DataWrappers/ChaosVDCollisionDataWrappers.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CollisionTraceType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CollisionTraceType;
	static void NewProp_bSimCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimCollision;
	static void NewProp_bQueryCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQueryCollision;
	static void NewProp_bIsProbe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsProbe;
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SimData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChaosVDShapeCollisionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_CollisionTraceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_CollisionTraceType = { "CollisionTraceType", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDShapeCollisionData, CollisionTraceType), Z_Construct_UEnum_ChaosVDRuntime_EChaosVDCollisionTraceFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionTraceType_MetaData), NewProp_CollisionTraceType_MetaData) }; // 292324944
void Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bSimCollision_SetBit(void* Obj)
{
	((FChaosVDShapeCollisionData*)Obj)->bSimCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bSimCollision = { "bSimCollision", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDShapeCollisionData), &Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bSimCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimCollision_MetaData), NewProp_bSimCollision_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bQueryCollision_SetBit(void* Obj)
{
	((FChaosVDShapeCollisionData*)Obj)->bQueryCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bQueryCollision = { "bQueryCollision", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDShapeCollisionData), &Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bQueryCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bQueryCollision_MetaData), NewProp_bQueryCollision_MetaData) };
void Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsProbe_SetBit(void* Obj)
{
	((FChaosVDShapeCollisionData*)Obj)->bIsProbe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsProbe = { "bIsProbe", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FChaosVDShapeCollisionData), &Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsProbe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsProbe_MetaData), NewProp_bIsProbe_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_QueryData = { "QueryData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDShapeCollisionData, QueryData), Z_Construct_UScriptStruct_FChaosVDCollisionFilterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_QueryData_MetaData), NewProp_QueryData_MetaData) }; // 2933937792
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_SimData = { "SimData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FChaosVDShapeCollisionData, SimData), Z_Construct_UScriptStruct_FChaosVDCollisionFilterData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimData_MetaData), NewProp_SimData_MetaData) }; // 2933937792
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_CollisionTraceType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_CollisionTraceType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bSimCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bQueryCollision,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_bIsProbe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_QueryData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewProp_SimData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ChaosVDRuntime,
	nullptr,
	&NewStructOps,
	"ChaosVDShapeCollisionData",
	Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::PropPointers),
	sizeof(FChaosVDShapeCollisionData),
	alignof(FChaosVDShapeCollisionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FChaosVDShapeCollisionData()
{
	if (!Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData.InnerSingleton, Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData.InnerSingleton;
}
// End ScriptStruct FChaosVDShapeCollisionData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EChaosVDContactShapesType_StaticEnum, TEXT("EChaosVDContactShapesType"), &Z_Registration_Info_UEnum_EChaosVDContactShapesType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1657769227U) },
		{ EChaosVDContactPointType_StaticEnum, TEXT("EChaosVDContactPointType"), &Z_Registration_Info_UEnum_EChaosVDContactPointType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 622961653U) },
		{ EChaosVDManifoldPointFlags_StaticEnum, TEXT("EChaosVDManifoldPointFlags"), &Z_Registration_Info_UEnum_EChaosVDManifoldPointFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2203343111U) },
		{ EChaosVDConstraintFlags_StaticEnum, TEXT("EChaosVDConstraintFlags"), &Z_Registration_Info_UEnum_EChaosVDConstraintFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1057145873U) },
		{ EChaosVDMidPhaseFlags_StaticEnum, TEXT("EChaosVDMidPhaseFlags"), &Z_Registration_Info_UEnum_EChaosVDMidPhaseFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1464211902U) },
		{ EChaosVDCollisionTraceFlag_StaticEnum, TEXT("EChaosVDCollisionTraceFlag"), &Z_Registration_Info_UEnum_EChaosVDCollisionTraceFlag, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 292324944U) },
		{ EChaosVDCollisionShapeDataFlags_StaticEnum, TEXT("EChaosVDCollisionShapeDataFlags"), &Z_Registration_Info_UEnum_EChaosVDCollisionShapeDataFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3199219549U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FChaosVDContactPoint::StaticStruct, Z_Construct_UScriptStruct_FChaosVDContactPoint_Statics::NewStructOps, TEXT("ChaosVDContactPoint"), &Z_Registration_Info_UScriptStruct_ChaosVDContactPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDContactPoint), 4183867937U) },
		{ FChaosVDManifoldPoint::StaticStruct, Z_Construct_UScriptStruct_FChaosVDManifoldPoint_Statics::NewStructOps, TEXT("ChaosVDManifoldPoint"), &Z_Registration_Info_UScriptStruct_ChaosVDManifoldPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDManifoldPoint), 1393835166U) },
		{ FChaosVDCollisionMaterial::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCollisionMaterial_Statics::NewStructOps, TEXT("ChaosVDCollisionMaterial"), &Z_Registration_Info_UScriptStruct_ChaosVDCollisionMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCollisionMaterial), 3242076553U) },
		{ FChaosVDConstraint::StaticStruct, Z_Construct_UScriptStruct_FChaosVDConstraint_Statics::NewStructOps, TEXT("ChaosVDConstraint"), &Z_Registration_Info_UScriptStruct_ChaosVDConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDConstraint), 1817675052U) },
		{ FChaosVDParticlePairMidPhase::StaticStruct, Z_Construct_UScriptStruct_FChaosVDParticlePairMidPhase_Statics::NewStructOps, TEXT("ChaosVDParticlePairMidPhase"), &Z_Registration_Info_UScriptStruct_ChaosVDParticlePairMidPhase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDParticlePairMidPhase), 2057751477U) },
		{ FChaosVDCollisionFilterData::StaticStruct, Z_Construct_UScriptStruct_FChaosVDCollisionFilterData_Statics::NewStructOps, TEXT("ChaosVDCollisionFilterData"), &Z_Registration_Info_UScriptStruct_ChaosVDCollisionFilterData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDCollisionFilterData), 2933937792U) },
		{ FChaosVDShapeCollisionData::StaticStruct, Z_Construct_UScriptStruct_FChaosVDShapeCollisionData_Statics::NewStructOps, TEXT("ChaosVDShapeCollisionData"), &Z_Registration_Info_UScriptStruct_ChaosVDShapeCollisionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChaosVDShapeCollisionData), 797452027U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_2881267871(TEXT("/Script/ChaosVDRuntime"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_ChaosVisualDebugger_Public_DataWrappers_ChaosVDCollisionDataWrappers_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
