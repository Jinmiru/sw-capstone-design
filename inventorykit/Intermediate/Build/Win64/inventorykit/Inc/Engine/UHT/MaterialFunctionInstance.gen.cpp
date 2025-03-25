// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleVectorParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticComponentMaskParameter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticSwitchParameter();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialFunctionInstance
void UMaterialFunctionInstance::StaticRegisterNativesUMaterialFunctionInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInstance);
UClass* Z_Construct_UClass_UMaterialFunctionInstance_NoRegister()
{
	return UMaterialFunctionInstance::StaticClass();
}
struct Z_Construct_UClass_UMaterialFunctionInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A material function instance defines parameter overrides for a parent material function.\n */" },
		{ "HideCategories", "object object" },
		{ "IncludePath", "Materials/MaterialFunctionInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "A material function instance defines parameter overrides for a parent material function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Parent function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Parent function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Base_MetaData[] = {
		{ "Comment", "/** Base function. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Base function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Scalar parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Scalar parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Vector parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Vector parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleVectorParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** DoubleVector parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "DoubleVector parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Texture parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Font parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Font parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticSwitchParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Static switch parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Static switch parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticComponentMaskParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Static component mask parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Static component mask parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Runtime virtual texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Runtime virtual texture parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialFunctionInstance" },
		{ "Comment", "/** Sparse volume texture parameters. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
		{ "ToolTip", "Sparse volume texture parameters." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Base;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleVectorParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleVectorParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticSwitchParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticSwitchParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticComponentMaskParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticComponentMaskParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeVirtualTextureParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SparseVolumeTextureParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SparseVolumeTextureParameterValues;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviewMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0114010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, Parent), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0114010000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, Base), Z_Construct_UClass_UMaterialFunctionInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Base_MetaData), NewProp_Base_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_Inner = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(0, nullptr) }; // 1409281175
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, ScalarParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameterValues_MetaData), NewProp_ScalarParameterValues_MetaData) }; // 1409281175
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_Inner = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(0, nullptr) }; // 653360891
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, VectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParameterValues_MetaData), NewProp_VectorParameterValues_MetaData) }; // 653360891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_Inner = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoubleVectorParameterValue, METADATA_PARAMS(0, nullptr) }; // 2706120552
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, DoubleVectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleVectorParameterValues_MetaData), NewProp_DoubleVectorParameterValues_MetaData) }; // 2706120552
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_Inner = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 766717169
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, TextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureParameterValues_MetaData), NewProp_TextureParameterValues_MetaData) }; // 766717169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_Inner = { "FontParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(0, nullptr) }; // 4046525624
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues = { "FontParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, FontParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontParameterValues_MetaData), NewProp_FontParameterValues_MetaData) }; // 4046525624
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_Inner = { "StaticSwitchParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticSwitchParameter, METADATA_PARAMS(0, nullptr) }; // 1009312972
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues = { "StaticSwitchParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, StaticSwitchParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticSwitchParameterValues_MetaData), NewProp_StaticSwitchParameterValues_MetaData) }; // 1009312972
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_Inner = { "StaticComponentMaskParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStaticComponentMaskParameter, METADATA_PARAMS(0, nullptr) }; // 2643640098
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues = { "StaticComponentMaskParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, StaticComponentMaskParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticComponentMaskParameterValues_MetaData), NewProp_StaticComponentMaskParameterValues_MetaData) }; // 2643640098
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 1775652358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, RuntimeVirtualTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextureParameterValues_MetaData), NewProp_RuntimeVirtualTextureParameterValues_MetaData) }; // 1775652358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_Inner = { "SparseVolumeTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 269446537
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues = { "SparseVolumeTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, SparseVolumeTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTextureParameterValues_MetaData), NewProp_SparseVolumeTextureParameterValues_MetaData) }; // 269446537
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial = { "PreviewMaterial", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialFunctionInstance, PreviewMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewMaterial_MetaData), NewProp_PreviewMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_ScalarParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_VectorParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_DoubleVectorParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_TextureParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_FontParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticSwitchParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_StaticComponentMaskParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_SparseVolumeTextureParameterValues,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInstance_Statics::NewProp_PreviewMaterial,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialFunctionInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialFunctionInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInstance_Statics::ClassParams = {
	&UMaterialFunctionInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialFunctionInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialFunctionInstance()
{
	if (!Z_Registration_Info_UClass_UMaterialFunctionInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInstance.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialFunctionInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInstance>()
{
	return UMaterialFunctionInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInstance);
UMaterialFunctionInstance::~UMaterialFunctionInstance() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInstance)
#endif // WITH_EDITORONLY_DATA
// End Class UMaterialFunctionInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionInstance, UMaterialFunctionInstance::StaticClass, TEXT("UMaterialFunctionInstance"), &Z_Registration_Info_UClass_UMaterialFunctionInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInstance), 340840164U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_1431292795(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
