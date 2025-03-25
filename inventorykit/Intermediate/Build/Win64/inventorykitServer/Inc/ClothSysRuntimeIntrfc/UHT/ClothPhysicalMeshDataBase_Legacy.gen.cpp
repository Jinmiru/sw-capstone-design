// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothPhysicalMeshDataBase_Legacy.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothVertBoneData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClothPhysicalMeshDataBase_Legacy() {}

// Begin Cross Module References
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister();
CLOTHINGSYSTEMRUNTIMEINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FClothVertBoneData();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector3f();
UPackage* Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface();
// End Cross Module References

// Begin Class UClothPhysicalMeshDataBase_Legacy
void UClothPhysicalMeshDataBase_Legacy::StaticRegisterNativesUClothPhysicalMeshDataBase_Legacy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UClothPhysicalMeshDataBase_Legacy);
UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_NoRegister()
{
	return UClothPhysicalMeshDataBase_Legacy::StaticClass();
}
struct Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Deprecated, use FClothPhysicalMeshData instead.\n * Simulation mesh points, topology, and spatial parameters defined on that \n * topology.\n *\n * Created curing asset import or created from a skeletal mesh.\n */" },
		{ "IncludePath", "ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Deprecated, use FClothPhysicalMeshData instead.\nSimulation mesh points, topology, and spatial parameters defined on that\ntopology.\n\nCreated curing asset import or created from a skeletal mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[] = {
		{ "Comment", "// Positions of each simulation vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Positions of each simulation vertex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normals_MetaData[] = {
		{ "Comment", "// Normal at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Normal at each vertex" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColors_MetaData[] = {
		{ "Comment", "// Color at each vertex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Color at each vertex" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[] = {
		{ "Comment", "// Indices of the simulation mesh triangles\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Indices of the simulation mesh triangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseMasses_MetaData[] = {
		{ "Comment", "// Inverse mass for each vertex in the physical mesh\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Inverse mass for each vertex in the physical mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneData_MetaData[] = {
		{ "Comment", "// Indices and weights for each vertex, used to skin the mesh to create the reference pose\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Indices and weights for each vertex, used to skin the mesh to create the reference pose" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumFixedVerts_MetaData[] = {
		{ "Comment", "// Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Number of fixed verts in the simulation mesh (fixed verts are just skinned and do not simulate)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxBoneWeights_MetaData[] = {
		{ "Comment", "// Maximum number of bone weights of any vetex\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Maximum number of bone weights of any vetex" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelfCollisionIndices_MetaData[] = {
		{ "Comment", "// Valid indices to use for self collisions (reduced set of Indices)\n" },
		{ "ModuleRelativePath", "Public/ClothPhysicalMeshDataBase_Legacy.h" },
		{ "ToolTip", "Valid indices to use for self collisions (reduced set of Indices)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Vertices;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normals_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Normals;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexColors;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_Indices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InverseMasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InverseMasses;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoneData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumFixedVerts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxBoneWeights;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_SelfCollisionIndices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SelfCollisionIndices;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UClothPhysicalMeshDataBase_Legacy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, Vertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vertices_MetaData), NewProp_Vertices_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_Inner = { "Normals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector3f, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals = { "Normals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, Normals), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normals_MetaData), NewProp_Normals_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_Inner = { "VertexColors", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors = { "VertexColors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, VertexColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColors_MetaData), NewProp_VertexColors_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Indices_MetaData), NewProp_Indices_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_Inner = { "InverseMasses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses = { "InverseMasses", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, InverseMasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseMasses_MetaData), NewProp_InverseMasses_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_Inner = { "BoneData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FClothVertBoneData, METADATA_PARAMS(0, nullptr) }; // 3731446729
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData = { "BoneData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, BoneData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneData_MetaData), NewProp_BoneData_MetaData) }; // 3731446729
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts = { "NumFixedVerts", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, NumFixedVerts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumFixedVerts_MetaData), NewProp_NumFixedVerts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights = { "MaxBoneWeights", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, MaxBoneWeights), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxBoneWeights_MetaData), NewProp_MaxBoneWeights_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_Inner = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices = { "SelfCollisionIndices", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UClothPhysicalMeshDataBase_Legacy, SelfCollisionIndices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelfCollisionIndices_MetaData), NewProp_SelfCollisionIndices_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Vertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Normals,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_VertexColors,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_Indices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_InverseMasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_BoneData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_NumFixedVerts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_MaxBoneWeights,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::NewProp_SelfCollisionIndices,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ClothingSystemRuntimeInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::ClassParams = {
	&UClothPhysicalMeshDataBase_Legacy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::Class_MetaDataParams), Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy()
{
	if (!Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.OuterSingleton, Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy.OuterSingleton;
}
template<> CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClass* StaticClass<UClothPhysicalMeshDataBase_Legacy>()
{
	return UClothPhysicalMeshDataBase_Legacy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UClothPhysicalMeshDataBase_Legacy);
// End Class UClothPhysicalMeshDataBase_Legacy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UClothPhysicalMeshDataBase_Legacy, UClothPhysicalMeshDataBase_Legacy::StaticClass, TEXT("UClothPhysicalMeshDataBase_Legacy"), &Z_Registration_Info_UClass_UClothPhysicalMeshDataBase_Legacy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UClothPhysicalMeshDataBase_Legacy), 2234115155U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h_3798244609(TEXT("/Script/ClothingSystemRuntimeInterface"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_ClothingSystemRuntimeInterface_Public_ClothPhysicalMeshDataBase_Legacy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
