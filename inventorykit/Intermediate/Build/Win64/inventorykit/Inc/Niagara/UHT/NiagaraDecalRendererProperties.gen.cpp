// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraDecalRendererProperties.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraParameterBinding.h"
#include "Niagara/Public/NiagaraRendererProperties.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDecalRendererProperties() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Class UNiagaraDecalRendererProperties
void UNiagaraDecalRendererProperties::StaticRegisterNativesUNiagaraDecalRendererProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDecalRendererProperties);
UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties_NoRegister()
{
	return UNiagaraDecalRendererProperties::StaticClass();
}
struct Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Decal Renderer" },
		{ "IncludePath", "NiagaraDecalRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** What material to use for the decal. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "What material to use for the decal." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MICMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBinding_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** Binding to material. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Binding to material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** Whether or not to draw a single element for the Emitter or to draw the particles.*/" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Whether or not to draw a single element for the Emitter or to draw the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalScreenSizeFade_MetaData[] = {
		{ "Category", "Decal Rendering" },
		{ "Comment", "/** When the decal is smaller than this screen size fade out the decal, can be used to reduce the amount of small decals drawn. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "When the decal is smaller than this screen size fade out the decal, can be used to reduce the amount of small decals drawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Position binding for the decals, should be center of the decal */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Position binding for the decals, should be center of the decal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalOrientationBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Orientation binding for the decal. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Orientation binding for the decal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSizeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Size binding for the decal. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Size binding for the decal." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalFadeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Fade binding for the decal, value can be queried using the Decal Lifetime Opacity material node. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Fade binding for the decal, value can be queried using the Decal Lifetime Opacity material node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalSortOrderBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Sort Order binding for the decal, used to ensure decals to not flicker when overlapping. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Sort Order binding for the decal, used to ensure decals to not flicker when overlapping." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Color binding for the decal, value can be queried using the Decal Color material node. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Color binding for the decal, value can be queried using the Decal Color material node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecalVisibleBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Should the decal be visibile or not, works in conjunction with RendererVisibilityTagBinding to determine visibility. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Should the decal be visibile or not, works in conjunction with RendererVisibilityTagBinding to determine visibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Visibility tag binding, when valid the returned values is compated with RendererVisibility. */" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "Visibility tag binding, when valid the returned values is compated with RendererVisibility." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraDecalRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MICMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBinding;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DecalScreenSizeFade;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalOrientationBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSizeBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalFadeBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalSortOrderBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalColorBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DecalVisibleBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDecalRendererProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial = { "MICMaterial", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, MICMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MICMaterial_MetaData), NewProp_MICMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding = { "MaterialParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, MaterialParameterBinding), Z_Construct_UScriptStruct_FNiagaraParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameterBinding_MetaData), NewProp_MaterialParameterBinding_MetaData) }; // 2482818186
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, SourceMode), Z_Construct_UEnum_Niagara_ENiagaraRendererSourceDataMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMode_MetaData), NewProp_SourceMode_MetaData) }; // 2982988763
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, RendererVisibility), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibility_MetaData), NewProp_RendererVisibility_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade = { "DecalScreenSizeFade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalScreenSizeFade), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalScreenSizeFade_MetaData), NewProp_DecalScreenSizeFade_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBinding_MetaData), NewProp_PositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding = { "DecalOrientationBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalOrientationBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalOrientationBinding_MetaData), NewProp_DecalOrientationBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding = { "DecalSizeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalSizeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSizeBinding_MetaData), NewProp_DecalSizeBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding = { "DecalFadeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalFadeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalFadeBinding_MetaData), NewProp_DecalFadeBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding = { "DecalSortOrderBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalSortOrderBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalSortOrderBinding_MetaData), NewProp_DecalSortOrderBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding = { "DecalColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalColorBinding_MetaData), NewProp_DecalColorBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding = { "DecalVisibleBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, DecalVisibleBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecalVisibleBinding_MetaData), NewProp_DecalVisibleBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RendererVisibilityTagBinding_MetaData), NewProp_RendererVisibilityTagBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraDecalRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameters_MetaData), NewProp_MaterialParameters_MetaData) }; // 2755820487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MICMaterial,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameterBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_SourceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalScreenSizeFade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_PositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalOrientationBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSizeBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalFadeBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalSortOrderBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalColorBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_DecalVisibleBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::NewProp_MaterialParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::ClassParams = {
	&UNiagaraDecalRendererProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraDecalRendererProperties()
{
	if (!Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraDecalRendererProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraDecalRendererProperties>()
{
	return UNiagaraDecalRendererProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDecalRendererProperties);
UNiagaraDecalRendererProperties::~UNiagaraDecalRendererProperties() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraDecalRendererProperties)
// End Class UNiagaraDecalRendererProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDecalRendererProperties, UNiagaraDecalRendererProperties::StaticClass, TEXT("UNiagaraDecalRendererProperties"), &Z_Registration_Info_UClass_UNiagaraDecalRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDecalRendererProperties), 2860407118U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_114815795(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraDecalRendererProperties_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
