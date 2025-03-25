// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/FoliageType_InstancedStaticMesh.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType_InstancedStaticMesh() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Class UFoliageType_InstancedStaticMesh
void UFoliageType_InstancedStaticMesh::StaticRegisterNativesUFoliageType_InstancedStaticMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType_InstancedStaticMesh);
UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister()
{
	return UFoliageType_InstancedStaticMesh::StaticClass();
}
struct Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "FoliageType_InstancedStaticMesh.h" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "Material overrides for foliage instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteOverrideMaterials_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "Nanite material overrides for foliage instances." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComponentClass_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The component class to use for foliage instances. \n\x09  * You can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here. */" },
		{ "ModuleRelativePath", "Public/FoliageType_InstancedStaticMesh.h" },
		{ "ToolTip", "The component class to use for foliage instances.\nYou can make a Blueprint subclass of FoliageInstancedStaticMeshComponent to implement custom behavior and assign that class here." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NaniteOverrideMaterials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NaniteOverrideMaterials;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType_InstancedStaticMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideMaterials_MetaData), NewProp_OverrideMaterials_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_Inner = { "NaniteOverrideMaterials", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials = { "NaniteOverrideMaterials", nullptr, (EPropertyFlags)0x0114040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, NaniteOverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteOverrideMaterials_MetaData), NewProp_NaniteOverrideMaterials_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass = { "ComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType_InstancedStaticMesh, ComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UFoliageInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComponentClass_MetaData), NewProp_ComponentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_OverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_NaniteOverrideMaterials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::NewProp_ComponentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFoliageType,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams = {
	&UFoliageType_InstancedStaticMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoliageType_InstancedStaticMesh()
{
	if (!Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton, Z_Construct_UClass_UFoliageType_InstancedStaticMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UFoliageType_InstancedStaticMesh>()
{
	return UFoliageType_InstancedStaticMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType_InstancedStaticMesh);
UFoliageType_InstancedStaticMesh::~UFoliageType_InstancedStaticMesh() {}
// End Class UFoliageType_InstancedStaticMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType_InstancedStaticMesh, UFoliageType_InstancedStaticMesh::StaticClass, TEXT("UFoliageType_InstancedStaticMesh"), &Z_Registration_Info_UClass_UFoliageType_InstancedStaticMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType_InstancedStaticMesh), 128597829U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_2848081059(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_InstancedStaticMesh_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
