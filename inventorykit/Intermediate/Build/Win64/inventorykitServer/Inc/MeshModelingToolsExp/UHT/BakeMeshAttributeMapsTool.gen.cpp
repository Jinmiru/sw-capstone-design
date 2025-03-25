// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/BakeMeshAttributeMapsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMeshAttributeMapsTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeInputMeshProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_NoRegister();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBakeMeshAttributeMapsToolBuilder
void UBakeMeshAttributeMapsToolBuilder::StaticRegisterNativesUBakeMeshAttributeMapsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsToolBuilder);
UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_NoRegister()
{
	return UBakeMeshAttributeMapsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "BakeMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::ClassParams = {
	&UBakeMeshAttributeMapsToolBuilder::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsToolBuilder>()
{
	return UBakeMeshAttributeMapsToolBuilder::StaticClass();
}
UBakeMeshAttributeMapsToolBuilder::UBakeMeshAttributeMapsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsToolBuilder);
UBakeMeshAttributeMapsToolBuilder::~UBakeMeshAttributeMapsToolBuilder() {}
// End Class UBakeMeshAttributeMapsToolBuilder

// Begin Class UBakeMeshAttributeMapsToolProperties Function GetMapPreviewNamesFunc
struct Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics
{
	struct BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties, nullptr, "GetMapPreviewNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::BakeMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBakeMeshAttributeMapsToolProperties::execGetMapPreviewNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetMapPreviewNamesFunc();
	P_NATIVE_END;
}
// End Class UBakeMeshAttributeMapsToolProperties Function GetMapPreviewNamesFunc

// Begin Class UBakeMeshAttributeMapsToolProperties
void UBakeMeshAttributeMapsToolProperties::StaticRegisterNativesUBakeMeshAttributeMapsToolProperties()
{
	UClass* Class = UBakeMeshAttributeMapsToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMapPreviewNamesFunc", &UBakeMeshAttributeMapsToolProperties::execGetMapPreviewNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsToolProperties);
UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_NoRegister()
{
	return UBakeMeshAttributeMapsToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The bake output types to generate */" },
		{ "DisplayName", "Output Types" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The bake output types to generate" },
		{ "ValidEnumValues", "TangentSpaceNormal, AmbientOcclusion, BentNormal, Curvature, Texture, ObjectSpaceNormal, FaceNormal, Position, MaterialID, PolyGroupID, MultiTexture, VertexColor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPreview_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The baked output type used for preview in the viewport */" },
		{ "DisplayName", "Preview Output Type" },
		{ "EditCondition", "MapTypes != 0" },
		{ "GetOptions", "GetMapPreviewNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The baked output type used for preview in the viewport" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The pixel resolution of the generated textures */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The pixel resolution of the generated textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The bit depth for each channel of the generated textures */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "The bit depth for each channel of the generated textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Number of samples per pixel */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Number of samples per pixel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleFilterMask_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Mask texture for filtering out samples/pixels from the output texture */" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Mask texture for filtering out samples/pixels from the output texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPreviewNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MapTypes;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapPreview;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Resolution_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Resolution;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BitDepth_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BitDepth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SamplesPerPixel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SampleFilterMask;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MapPreviewNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MapPreviewNamesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc, "GetMapPreviewNamesFunc" }, // 1262838572
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes = { "MapTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, MapTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTypes_MetaData), NewProp_MapTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview = { "MapPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, MapPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPreview_MetaData), NewProp_MapPreview_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, Resolution), Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) }; // 1963257244
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, BitDepth), Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitDepth_MetaData), NewProp_BitDepth_MetaData) }; // 3648221912
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, SamplesPerPixel), Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerPixel_MetaData), NewProp_SamplesPerPixel_MetaData) }; // 3572389592
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask = { "SampleFilterMask", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, SampleFilterMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleFilterMask_MetaData), NewProp_SampleFilterMask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_Inner = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsToolProperties, MapPreviewNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPreviewNamesList_MetaData), NewProp_MapPreviewNamesList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::ClassParams = {
	&UBakeMeshAttributeMapsToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsToolProperties>()
{
	return UBakeMeshAttributeMapsToolProperties::StaticClass();
}
UBakeMeshAttributeMapsToolProperties::UBakeMeshAttributeMapsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsToolProperties);
UBakeMeshAttributeMapsToolProperties::~UBakeMeshAttributeMapsToolProperties() {}
// End Class UBakeMeshAttributeMapsToolProperties

// Begin Class UBakeMeshAttributeMapsTool
void UBakeMeshAttributeMapsTool::StaticRegisterNativesUBakeMeshAttributeMapsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMeshAttributeMapsTool);
UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool_NoRegister()
{
	return UBakeMeshAttributeMapsTool::StaticClass();
}
struct Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Detail Map Baking Tool\n */" },
		{ "IncludePath", "BakeMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "Detail Map Baking Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMeshSettings_MetaData[] = {
		{ "Comment", "// need to update bResultValid if these are modified, so we don't publicly expose them. \n// @todo setters/getters for these\n" },
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
		{ "ToolTip", "need to update bResultValid if these are modified, so we don't publicly expose them.\n@todo setters/getters for these" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMeshAttributeMapsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMeshSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMeshAttributeMapsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings = { "InputMeshSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsTool, InputMeshSettings), Z_Construct_UClass_UBakeInputMeshProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMeshSettings_MetaData), NewProp_InputMeshSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsTool, Settings), Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings = { "ResultSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMeshAttributeMapsTool, ResultSettings), Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultSettings_MetaData), NewProp_ResultSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::NewProp_ResultSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBakeMeshAttributeMapsToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::ClassParams = {
	&UBakeMeshAttributeMapsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMeshAttributeMapsTool()
{
	if (!Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool.OuterSingleton, Z_Construct_UClass_UBakeMeshAttributeMapsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMeshAttributeMapsTool>()
{
	return UBakeMeshAttributeMapsTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMeshAttributeMapsTool);
UBakeMeshAttributeMapsTool::~UBakeMeshAttributeMapsTool() {}
// End Class UBakeMeshAttributeMapsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBakeMeshAttributeMapsToolBuilder, UBakeMeshAttributeMapsToolBuilder::StaticClass, TEXT("UBakeMeshAttributeMapsToolBuilder"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsToolBuilder), 2968818956U) },
		{ Z_Construct_UClass_UBakeMeshAttributeMapsToolProperties, UBakeMeshAttributeMapsToolProperties::StaticClass, TEXT("UBakeMeshAttributeMapsToolProperties"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsToolProperties), 2257840352U) },
		{ Z_Construct_UClass_UBakeMeshAttributeMapsTool, UBakeMeshAttributeMapsTool::StaticClass, TEXT("UBakeMeshAttributeMapsTool"), &Z_Registration_Info_UClass_UBakeMeshAttributeMapsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMeshAttributeMapsTool), 1102844576U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_1524058566(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMeshAttributeMapsTool_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
