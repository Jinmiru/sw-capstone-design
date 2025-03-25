// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Materials/MaterialExpressionLandscapeLayerBlend.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeLayerBlend() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UMaterialExpression();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExpressionInput();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend();
LANDSCAPE_API UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLayerBlendInput();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ELandscapeLayerBlendType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeLayerBlendType;
static UEnum* ELandscapeLayerBlendType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeLayerBlendType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeLayerBlendType>()
{
	return ELandscapeLayerBlendType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LB_AlphaBlend.Name", "LB_AlphaBlend" },
		{ "LB_HeightBlend.Name", "LB_HeightBlend" },
		{ "LB_WeightBlend.Name", "LB_WeightBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LB_WeightBlend", (int64)LB_WeightBlend },
		{ "LB_AlphaBlend", (int64)LB_AlphaBlend },
		{ "LB_HeightBlend", (int64)LB_HeightBlend },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeLayerBlendType",
	"ELandscapeLayerBlendType",
	Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeLayerBlendType.InnerSingleton;
}
// End Enum ELandscapeLayerBlendType

// Begin ScriptStruct FLayerBlendInput
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LayerBlendInput;
class UScriptStruct* FLayerBlendInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LayerBlendInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LayerBlendInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLayerBlendInput, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LayerBlendInput"));
	}
	return Z_Registration_Info_UScriptStruct_LayerBlendInput.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLayerBlendInput>()
{
	return FLayerBlendInput::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLayerBlendInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerName_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendType_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstLayerInput' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightInput_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "RequiredInput", "false" },
		{ "ToolTip", "Defaults to 'ConstHeightInput' if not specified" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewWeight_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstLayerInput_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "Comment", "/** only used if LayerInput is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "only used if LayerInput is not hooked up" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConstHeightInput_MetaData[] = {
		{ "Category", "LayerBlendInput" },
		{ "Comment", "/** only used if HeightInput is not hooked up */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ToolTip", "only used if HeightInput is not hooked up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LayerName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HeightInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PreviewWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConstLayerInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ConstHeightInput;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLayerBlendInput>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName = { "LayerName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, LayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerName_MetaData), NewProp_LayerName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType = { "BlendType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, BlendType), Z_Construct_UEnum_Landscape_ELandscapeLayerBlendType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendType_MetaData), NewProp_BlendType_MetaData) }; // 801916068
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput = { "LayerInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, LayerInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInput_MetaData), NewProp_LayerInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput = { "HeightInput", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, HeightInput), Z_Construct_UScriptStruct_FExpressionInput, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightInput_MetaData), NewProp_HeightInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight = { "PreviewWeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, PreviewWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewWeight_MetaData), NewProp_PreviewWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput = { "ConstLayerInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, ConstLayerInput), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstLayerInput_MetaData), NewProp_ConstLayerInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput = { "ConstHeightInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLayerBlendInput, ConstHeightInput), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConstHeightInput_MetaData), NewProp_ConstHeightInput_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_BlendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_LayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_HeightInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_PreviewWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstLayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewProp_ConstHeightInput,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLayerBlendInput_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LayerBlendInput",
	Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::PropPointers),
	sizeof(FLayerBlendInput),
	alignof(FLayerBlendInput),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLayerBlendInput_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLayerBlendInput()
{
	if (!Z_Registration_Info_UScriptStruct_LayerBlendInput.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LayerBlendInput.InnerSingleton, Z_Construct_UScriptStruct_FLayerBlendInput_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LayerBlendInput.InnerSingleton;
}
// End ScriptStruct FLayerBlendInput

// Begin Class UMaterialExpressionLandscapeLayerBlend
void UMaterialExpressionLandscapeLayerBlend::StaticRegisterNativesUMaterialExpressionLandscapeLayerBlend()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialExpressionLandscapeLayerBlend);
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_NoRegister()
{
	return UMaterialExpressionLandscapeLayerBlend::StaticClass();
}
struct Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Materials/MaterialExpressionLandscapeLayerBlend.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Layers_MetaData[] = {
		{ "Category", "MaterialExpressionLandscapeLayerBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialExpressionLandscapeLayerBlend.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Layers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Layers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialExpressionLandscapeLayerBlend>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_Inner = { "Layers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLayerBlendInput, METADATA_PARAMS(0, nullptr) }; // 3079895689
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers = { "Layers", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialExpressionLandscapeLayerBlend, Layers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Layers_MetaData), NewProp_Layers_MetaData) }; // 3079895689
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::NewProp_Layers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialExpression,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams = {
	&UMaterialExpressionLandscapeLayerBlend::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::PropPointers),
	0,
	0x000820B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend()
{
	if (!Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton, Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<UMaterialExpressionLandscapeLayerBlend>()
{
	return UMaterialExpressionLandscapeLayerBlend::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialExpressionLandscapeLayerBlend);
UMaterialExpressionLandscapeLayerBlend::~UMaterialExpressionLandscapeLayerBlend() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UMaterialExpressionLandscapeLayerBlend)
// End Class UMaterialExpressionLandscapeLayerBlend

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeLayerBlendType_StaticEnum, TEXT("ELandscapeLayerBlendType"), &Z_Registration_Info_UEnum_ELandscapeLayerBlendType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 801916068U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLayerBlendInput::StaticStruct, Z_Construct_UScriptStruct_FLayerBlendInput_Statics::NewStructOps, TEXT("LayerBlendInput"), &Z_Registration_Info_UScriptStruct_LayerBlendInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLayerBlendInput), 3079895689U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialExpressionLandscapeLayerBlend, UMaterialExpressionLandscapeLayerBlend::StaticClass, TEXT("UMaterialExpressionLandscapeLayerBlend"), &Z_Registration_Info_UClass_UMaterialExpressionLandscapeLayerBlend, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialExpressionLandscapeLayerBlend), 2524086880U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_2441215499(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeLayerBlend_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
