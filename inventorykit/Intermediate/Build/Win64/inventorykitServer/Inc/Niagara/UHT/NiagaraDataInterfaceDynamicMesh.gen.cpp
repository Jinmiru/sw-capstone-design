// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h"
#include "Niagara/Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceDynamicMesh() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin ScriptStruct FNiagaraDynamicMeshSection
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection;
class UScriptStruct* FNiagaraDynamicMeshSection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDynamicMeshSection"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDynamicMeshSection>()
{
	return FNiagaraDynamicMeshSection::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTriangles_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Number of triangles in this section. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Number of triangles in this section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "Section" },
		{ "Comment", "/** Index of the material to use. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Index of the material to use." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTriangles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDynamicMeshSection>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles = { "NumTriangles", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDynamicMeshSection, NumTriangles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTriangles_MetaData), NewProp_NumTriangles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDynamicMeshSection, MaterialIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialIndex_MetaData), NewProp_MaterialIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_NumTriangles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewProp_MaterialIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDynamicMeshSection",
	Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::PropPointers),
	sizeof(FNiagaraDynamicMeshSection),
	alignof(FNiagaraDynamicMeshSection),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection.InnerSingleton;
}
// End ScriptStruct FNiagaraDynamicMeshSection

// Begin ScriptStruct FNiagaraDynamicMeshMaterial
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial;
class UScriptStruct* FNiagaraDynamicMeshMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraDynamicMeshMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraDynamicMeshMaterial>()
{
	return FNiagaraDynamicMeshMaterial::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Optional material to use for this section. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Optional material to use for this section." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialUserParamBinding_MetaData[] = {
		{ "Category", "Material" },
		{ "Comment", "/** Optional binding to a user parameter */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Optional binding to a user parameter" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialUserParamBinding;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraDynamicMeshMaterial>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDynamicMeshMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding = { "MaterialUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraDynamicMeshMaterial, MaterialUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialUserParamBinding_MetaData), NewProp_MaterialUserParamBinding_MetaData) }; // 174428838
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewProp_MaterialUserParamBinding,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraDynamicMeshMaterial",
	Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::PropPointers),
	sizeof(FNiagaraDynamicMeshMaterial),
	alignof(FNiagaraDynamicMeshMaterial),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial.InnerSingleton;
}
// End ScriptStruct FNiagaraDynamicMeshMaterial

// Begin Class UNiagaraDataInterfaceDynamicMesh
void UNiagaraDataInterfaceDynamicMesh::StaticRegisterNativesUNiagaraDataInterfaceDynamicMesh()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceDynamicMesh);
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_NoRegister()
{
	return UNiagaraDataInterfaceDynamicMesh::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Data Interface that can create mesh geometry at runtime from triangle data (e.g. to render a custom generated mesh per particle) */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "DisplayName", "Dynamic Mesh" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Data Interface that can create mesh geometry at runtime from triangle data (e.g. to render a custom generated mesh per particle)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sections_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/**\n\x09Sections to render, each section will generally result in a draw call.\n\x09Triangles are contiguous between sections, i.e. Section[1] triangles will begin after Section[0].NumTriangles\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Sections to render, each section will generally result in a draw call.\nTriangles are contiguous between sections, i.e. Section[1] triangles will begin after Section[0].NumTriangles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** List of materials to use */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "List of materials to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumVertices_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for the number of vertices we will use, leave as zero if you intend to allocate dynamically via VM calls. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for the number of vertices we will use, leave as zero if you intend to allocate dynamically via VM calls." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumTexCoords_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for the number of texture coordinates requested. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for the number of texture coordinates requested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasColors_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for vertex colors when enabled. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for vertex colors when enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasTangentBasis_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Allocates space for tangent basis when enabled. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Allocates space for tangent basis when enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bClearTrianglesPerFrame_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Should we auto clear section triangle allocations per frame or not. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Should we auto clear section triangle allocations per frame or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBounds_MetaData[] = {
		{ "Category", "Dynamic Mesh" },
		{ "Comment", "/** Should we auto clear section triangle allocations per frame or not. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceDynamicMesh.h" },
		{ "ToolTip", "Should we auto clear section triangle allocations per frame or not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Sections_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Sections;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Materials_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumVertices;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumTexCoords;
	static void NewProp_bHasColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasColors;
	static void NewProp_bHasTangentBasis_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasTangentBasis;
	static void NewProp_bClearTrianglesPerFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClearTrianglesPerFrame;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBounds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceDynamicMesh>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_Inner = { "Sections", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection, METADATA_PARAMS(0, nullptr) }; // 812777867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections = { "Sections", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, Sections), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sections_MetaData), NewProp_Sections_MetaData) }; // 812777867
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial, METADATA_PARAMS(0, nullptr) }; // 428024713
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Materials_MetaData), NewProp_Materials_MetaData) }; // 428024713
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices = { "NumVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, NumVertices), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumVertices_MetaData), NewProp_NumVertices_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords = { "NumTexCoords", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, NumTexCoords), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumTexCoords_MetaData), NewProp_NumTexCoords_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDynamicMesh*)Obj)->bHasColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors = { "bHasColors", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDynamicMesh), &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasColors_MetaData), NewProp_bHasColors_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDynamicMesh*)Obj)->bHasTangentBasis = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis = { "bHasTangentBasis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDynamicMesh), &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasTangentBasis_MetaData), NewProp_bHasTangentBasis_MetaData) };
void Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_SetBit(void* Obj)
{
	((UNiagaraDataInterfaceDynamicMesh*)Obj)->bClearTrianglesPerFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame = { "bClearTrianglesPerFrame", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UNiagaraDataInterfaceDynamicMesh), &Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bClearTrianglesPerFrame_MetaData), NewProp_bClearTrianglesPerFrame_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds = { "DefaultBounds", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDataInterfaceDynamicMesh, DefaultBounds), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBounds_MetaData), NewProp_DefaultBounds_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Sections,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_Materials,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_NumTexCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bHasTangentBasis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_bClearTrianglesPerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::NewProp_DefaultBounds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UNiagaraRenderableMeshInterface_NoRegister, (int32)VTABLE_OFFSET(UNiagaraDataInterfaceDynamicMesh, INiagaraRenderableMeshInterface), false },  // 2046717313
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::ClassParams = {
	&UNiagaraDataInterfaceDynamicMesh::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x000830A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh()
{
	if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceDynamicMesh>()
{
	return UNiagaraDataInterfaceDynamicMesh::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceDynamicMesh);
UNiagaraDataInterfaceDynamicMesh::~UNiagaraDataInterfaceDynamicMesh() {}
// End Class UNiagaraDataInterfaceDynamicMesh

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraDynamicMeshSection::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDynamicMeshSection_Statics::NewStructOps, TEXT("NiagaraDynamicMeshSection"), &Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshSection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDynamicMeshSection), 812777867U) },
		{ FNiagaraDynamicMeshMaterial::StaticStruct, Z_Construct_UScriptStruct_FNiagaraDynamicMeshMaterial_Statics::NewStructOps, TEXT("NiagaraDynamicMeshMaterial"), &Z_Registration_Info_UScriptStruct_NiagaraDynamicMeshMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraDynamicMeshMaterial), 428024713U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceDynamicMesh, UNiagaraDataInterfaceDynamicMesh::StaticClass, TEXT("UNiagaraDataInterfaceDynamicMesh"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceDynamicMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceDynamicMesh), 3165185062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_597671433(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceDynamicMesh_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
