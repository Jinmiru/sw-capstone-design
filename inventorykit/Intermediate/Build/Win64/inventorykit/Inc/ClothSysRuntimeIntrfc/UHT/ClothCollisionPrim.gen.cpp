// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothCollisionPrim.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothCollisionPrim() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlane();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin ScriptStruct FClothCollisionPrim_Sphere
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere;
class UScriptStruct* FClothCollisionPrim_Sphere::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Sphere"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_Sphere>()
{
	return FClothCollisionPrim_Sphere::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single sphere primitive in the clothing simulation. This can either be a \n *  sphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule\n */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single sphere primitive in the clothing simulation. This can either be a\nsphere on its own, or part of a capsule referenced by the indices in FClothCollisionPrim_Capsule" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Sphere>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Sphere, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndex_MetaData), NewProp_BoneIndex_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Sphere, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Sphere, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_BoneIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewProp_LocalPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothCollisionPrim_Sphere",
	Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::PropPointers),
	sizeof(FClothCollisionPrim_Sphere),
	alignof(FClothCollisionPrim_Sphere),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere.InnerSingleton;
}
// End ScriptStruct FClothCollisionPrim_Sphere

// Begin ScriptStruct FClothCollisionPrim_SphereConnection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection;
class UScriptStruct* FClothCollisionPrim_SphereConnection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_SphereConnection"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_SphereConnection>()
{
	return FClothCollisionPrim_SphereConnection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single connected sphere primitive. This should be configured after all spheres have\n *  been processed as they are really just indexing the existing spheres\n */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single connected sphere primitive. This should be configured after all spheres have\nbeen processed as they are really just indexing the existing spheres" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereIndices_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SphereIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_SphereConnection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices = { "SphereIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(SphereIndices, FClothCollisionPrim_SphereConnection), STRUCT_OFFSET(FClothCollisionPrim_SphereConnection, SphereIndices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereIndices_MetaData), NewProp_SphereIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewProp_SphereIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothCollisionPrim_SphereConnection",
	Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::PropPointers),
	sizeof(FClothCollisionPrim_SphereConnection),
	alignof(FClothCollisionPrim_SphereConnection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection.InnerSingleton;
}
// End ScriptStruct FClothCollisionPrim_SphereConnection

// Begin ScriptStruct FClothCollisionPrim_ConvexFace
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace;
class UScriptStruct* FClothCollisionPrim_ConvexFace::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_ConvexFace"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_ConvexFace>()
{
	return FClothCollisionPrim_ConvexFace::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a convex face. */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a convex face." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Plane_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Plane;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_ConvexFace>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewProp_Plane = { "Plane", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_ConvexFace, Plane), Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Plane_MetaData), NewProp_Plane_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_ConvexFace, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewProp_Plane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewProp_Indices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothCollisionPrim_ConvexFace",
	Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::PropPointers),
	sizeof(FClothCollisionPrim_ConvexFace),
	alignof(FClothCollisionPrim_ConvexFace),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace.InnerSingleton;
}
// End ScriptStruct FClothCollisionPrim_ConvexFace

// Begin ScriptStruct FClothCollisionPrim_Convex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex;
class UScriptStruct* FClothCollisionPrim_Convex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Convex"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_Convex>()
{
	return FClothCollisionPrim_Convex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09""Data for a single convex element\n *\x09""A convex is a collection of planes, in which the clothing will attempt to stay outside of the\n *\x09shape created by the planes combined.\n */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single convex element\nA convex is a collection of planes, in which the clothing will attempt to stay outside of the\nshape created by the planes combined." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Planes_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Faces_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfacePoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
		{ "Comment", "// Surface points, used by Chaos and also for visualization\n" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Surface points, used by Chaos and also for visualization" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Planes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Planes;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Faces_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Faces;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfacePoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SurfacePoints;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Convex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_Inner = { "Planes", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlane, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes = { "Planes", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, Planes_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Planes_MetaData), NewProp_Planes_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Faces_Inner = { "Faces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace, METADATA_PARAMS(0, nullptr) }; // 1880287244
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Faces = { "Faces", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, Faces), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Faces_MetaData), NewProp_Faces_MetaData) }; // 1880287244
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_Inner = { "SurfacePoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints = { "SurfacePoints", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, SurfacePoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfacePoints_MetaData), NewProp_SurfacePoints_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Convex, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndex_MetaData), NewProp_BoneIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Planes,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Faces_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_Faces,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_SurfacePoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewProp_BoneIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothCollisionPrim_Convex",
	Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::PropPointers),
	sizeof(FClothCollisionPrim_Convex),
	alignof(FClothCollisionPrim_Convex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Convex()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex.InnerSingleton;
}
// End ScriptStruct FClothCollisionPrim_Convex

// Begin ScriptStruct FClothCollisionPrim_Box
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box;
class UScriptStruct* FClothCollisionPrim_Box::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClothCollisionPrim_Box, (UObject*)Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface(), TEXT("ClothCollisionPrim_Box"));
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* StaticStruct<FClothCollisionPrim_Box>()
{
	return FClothCollisionPrim_Box::StaticStruct();
}
struct Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Data for a single box primitive. */" },
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
		{ "ToolTip", "Data for a single box primitive." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HalfExtents_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClothCollisionPrim.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HalfExtents;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BoneIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClothCollisionPrim_Box>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition = { "LocalPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, LocalPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPosition_MetaData), NewProp_LocalPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation = { "LocalRotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, LocalRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalRotation_MetaData), NewProp_LocalRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents = { "HalfExtents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, HalfExtents), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HalfExtents_MetaData), NewProp_HalfExtents_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex = { "BoneIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FClothCollisionPrim_Box, BoneIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneIndex_MetaData), NewProp_BoneIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_LocalRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_HalfExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewProp_BoneIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
	nullptr,
	&NewStructOps,
	"ClothCollisionPrim_Box",
	Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::PropPointers),
	sizeof(FClothCollisionPrim_Box),
	alignof(FClothCollisionPrim_Box),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FClothCollisionPrim_Box()
{
	if (!Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box.InnerSingleton, Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box.InnerSingleton;
}
// End ScriptStruct FClothCollisionPrim_Box

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FClothCollisionPrim_Sphere::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Sphere_Statics::NewStructOps, TEXT("ClothCollisionPrim_Sphere"), &Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Sphere, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionPrim_Sphere), 1627706880U) },
		{ FClothCollisionPrim_SphereConnection::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_SphereConnection_Statics::NewStructOps, TEXT("ClothCollisionPrim_SphereConnection"), &Z_Registration_Info_UScriptStruct_ClothCollisionPrim_SphereConnection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionPrim_SphereConnection), 2605240944U) },
		{ FClothCollisionPrim_ConvexFace::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_ConvexFace_Statics::NewStructOps, TEXT("ClothCollisionPrim_ConvexFace"), &Z_Registration_Info_UScriptStruct_ClothCollisionPrim_ConvexFace, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionPrim_ConvexFace), 1880287244U) },
		{ FClothCollisionPrim_Convex::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Convex_Statics::NewStructOps, TEXT("ClothCollisionPrim_Convex"), &Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Convex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionPrim_Convex), 3636493926U) },
		{ FClothCollisionPrim_Box::StaticStruct, Z_Construct_UScriptStruct_FClothCollisionPrim_Box_Statics::NewStructOps, TEXT("ClothCollisionPrim_Box"), &Z_Registration_Info_UScriptStruct_ClothCollisionPrim_Box, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClothCollisionPrim_Box), 620335548U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h_1319018230(TEXT("/Script/ClothingSystemRuntimeInterface"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothCollisionPrim_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
