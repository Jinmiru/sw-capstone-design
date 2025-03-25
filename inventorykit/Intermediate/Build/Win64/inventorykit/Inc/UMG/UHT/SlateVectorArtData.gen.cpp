// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Slate/SlateVectorArtData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateVectorArtData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlateVectorArtData();
UMG_API UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin ScriptStruct FSlateMeshVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SlateMeshVertex;
class UScriptStruct* FSlateMeshVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SlateMeshVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SlateMeshVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlateMeshVertex, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("SlateMeshVertex"));
	}
	return Z_Registration_Info_UScriptStruct_SlateMeshVertex.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FSlateMeshVertex>()
{
	return FSlateMeshVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSlateMeshVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV2_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV3_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV4_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV5_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV3;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV4;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV5;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlateMeshVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, Position), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Color_MetaData), NewProp_Color_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0 = { "UV0", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, UV0), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0_MetaData), NewProp_UV0_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1 = { "UV1", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, UV1), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1_MetaData), NewProp_UV1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2 = { "UV2", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, UV2), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV2_MetaData), NewProp_UV2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3 = { "UV3", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, UV3), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV3_MetaData), NewProp_UV3_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4 = { "UV4", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, UV4), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV4_MetaData), NewProp_UV4_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5 = { "UV5", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSlateMeshVertex, UV5), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV5_MetaData), NewProp_UV5_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV3,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV4,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewProp_UV5,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	nullptr,
	&NewStructOps,
	"SlateMeshVertex",
	Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::PropPointers),
	sizeof(FSlateMeshVertex),
	alignof(FSlateMeshVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSlateMeshVertex()
{
	if (!Z_Registration_Info_UScriptStruct_SlateMeshVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SlateMeshVertex.InnerSingleton, Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SlateMeshVertex.InnerSingleton;
}
// End ScriptStruct FSlateMeshVertex

// Begin Class USlateVectorArtData
void USlateVectorArtData::StaticRegisterNativesUSlateVectorArtData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USlateVectorArtData);
UClass* Z_Construct_UClass_USlateVectorArtData_NoRegister()
{
	return USlateVectorArtData::StaticClass();
}
struct Z_Construct_UClass_USlateVectorArtData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Turn static mesh data into Slate's simple vector art format.\n */" },
		{ "IncludePath", "Slate/SlateVectorArtData.h" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "Turn static mesh data into Slate's simple vector art format." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshAsset_MetaData[] = {
		{ "Category", "Vector Art" },
		{ "Comment", "/** The mesh data asset from which the vector art is sourced */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "The mesh data asset from which the vector art is sourced" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMaterial_MetaData[] = {
		{ "Comment", "/** The material which we are using, or the material from with the MIC was constructed. */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "The material which we are using, or the material from with the MIC was constructed." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexData_MetaData[] = {
		{ "Comment", "/** @see GetVertexData() */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetVertexData()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndexData_MetaData[] = {
		{ "Comment", "/** @see GetIndexData() */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetIndexData()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "/** @see GetMaterial() */" },
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
		{ "ToolTip", "@see GetMaterial()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtentMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/Slate/SlateVectorArtData.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VertexData;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_IndexData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_IndexData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentMin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtentMax;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USlateVectorArtData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset = { "MeshAsset", nullptr, (EPropertyFlags)0x0144000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, MeshAsset), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshAsset_MetaData), NewProp_MeshAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial = { "SourceMaterial", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, SourceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMaterial_MetaData), NewProp_SourceMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_Inner = { "VertexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSlateMeshVertex, METADATA_PARAMS(0, nullptr) }; // 1283096391
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData = { "VertexData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, VertexData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexData_MetaData), NewProp_VertexData_MetaData) }; // 1283096391
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_Inner = { "IndexData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData = { "IndexData", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, IndexData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndexData_MetaData), NewProp_IndexData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin = { "ExtentMin", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, ExtentMin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentMin_MetaData), NewProp_ExtentMin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax = { "ExtentMax", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USlateVectorArtData, ExtentMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtentMax_MetaData), NewProp_ExtentMax_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_MeshAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_SourceMaterial,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_VertexData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_IndexData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USlateVectorArtData_Statics::NewProp_ExtentMax,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USlateVectorArtData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams = {
	&USlateVectorArtData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams), Z_Construct_UClass_USlateVectorArtData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USlateVectorArtData()
{
	if (!Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton, Z_Construct_UClass_USlateVectorArtData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USlateVectorArtData.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<USlateVectorArtData>()
{
	return USlateVectorArtData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USlateVectorArtData);
USlateVectorArtData::~USlateVectorArtData() {}
// End Class USlateVectorArtData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSlateMeshVertex::StaticStruct, Z_Construct_UScriptStruct_FSlateMeshVertex_Statics::NewStructOps, TEXT("SlateMeshVertex"), &Z_Registration_Info_UScriptStruct_SlateMeshVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSlateMeshVertex), 1283096391U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USlateVectorArtData, USlateVectorArtData::StaticClass, TEXT("USlateVectorArtData"), &Z_Registration_Info_UClass_USlateVectorArtData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USlateVectorArtData), 1656283285U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_2642099039(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Slate_SlateVectorArtData_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
