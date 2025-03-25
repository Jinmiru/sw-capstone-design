// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MeshModelingToolsExp/Public/BakeMultiMeshAttributeMapsTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBakeMultiMeshAttributeMapsTool() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMeshAttributeMapsToolBase();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshInputToolProperties();
MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UBakeMultiMeshInputToolProperties_NoRegister();
MESHMODELINGTOOLSEXP_API UScriptStruct* Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties();
MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution();
MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel();
UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References

// Begin Class UBakeMultiMeshAttributeMapsToolBuilder
void UBakeMultiMeshAttributeMapsToolBuilder::StaticRegisterNativesUBakeMultiMeshAttributeMapsToolBuilder()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMultiMeshAttributeMapsToolBuilder);
UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_NoRegister()
{
	return UBakeMultiMeshAttributeMapsToolBuilder::StaticClass();
}
struct Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Tool Builder\n */" },
		{ "IncludePath", "BakeMultiMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Tool Builder" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMultiMeshAttributeMapsToolBuilder>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics::ClassParams = {
	&UBakeMultiMeshAttributeMapsToolBuilder::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder()
{
	if (!Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolBuilder.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolBuilder.OuterSingleton, Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolBuilder.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMultiMeshAttributeMapsToolBuilder>()
{
	return UBakeMultiMeshAttributeMapsToolBuilder::StaticClass();
}
UBakeMultiMeshAttributeMapsToolBuilder::UBakeMultiMeshAttributeMapsToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMultiMeshAttributeMapsToolBuilder);
UBakeMultiMeshAttributeMapsToolBuilder::~UBakeMultiMeshAttributeMapsToolBuilder() {}
// End Class UBakeMultiMeshAttributeMapsToolBuilder

// Begin Class UBakeMultiMeshAttributeMapsToolProperties Function GetMapPreviewNamesFunc
struct Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics
{
	struct BakeMultiMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BakeMultiMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties, nullptr, "GetMapPreviewNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::BakeMultiMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::BakeMultiMeshAttributeMapsToolProperties_eventGetMapPreviewNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBakeMultiMeshAttributeMapsToolProperties::execGetMapPreviewNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetMapPreviewNamesFunc();
	P_NATIVE_END;
}
// End Class UBakeMultiMeshAttributeMapsToolProperties Function GetMapPreviewNamesFunc

// Begin Class UBakeMultiMeshAttributeMapsToolProperties
void UBakeMultiMeshAttributeMapsToolProperties::StaticRegisterNativesUBakeMultiMeshAttributeMapsToolProperties()
{
	UClass* Class = UBakeMultiMeshAttributeMapsToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetMapPreviewNamesFunc", &UBakeMultiMeshAttributeMapsToolProperties::execGetMapPreviewNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMultiMeshAttributeMapsToolProperties);
UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_NoRegister()
{
	return UBakeMultiMeshAttributeMapsToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMultiMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapTypes_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MeshModelingToolsExp.EBakeMapType" },
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The map types to generate */" },
		{ "DisplayName", "Output Types" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "The map types to generate" },
		{ "ValidEnumValues", "TangentSpaceNormal, ObjectSpaceNormal, Position, Texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPreview_MetaData[] = {
		{ "Category", "BakeOutput" },
		{ "Comment", "/** The map type index to preview */" },
		{ "DisplayName", "Preview Output Type" },
		{ "EditCondition", "MapTypes != 0" },
		{ "GetOptions", "GetMapPreviewNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The map type index to preview" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Resolution_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The pixel resolution of the generated map */" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "The pixel resolution of the generated map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitDepth_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** The channel bit depth of the source data for the generated textures */" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "The channel bit depth of the source data for the generated textures" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Number of samples per pixel */" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Number of samples per pixel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleFilterMask_MetaData[] = {
		{ "Category", "Textures" },
		{ "Comment", "/** Mask texture for filtering out samples/pixels from the output texture */" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Mask texture for filtering out samples/pixels from the output texture" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MapPreviewNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
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
		{ &Z_Construct_UFunction_UBakeMultiMeshAttributeMapsToolProperties_GetMapPreviewNamesFunc, "GetMapPreviewNamesFunc" }, // 960229185
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMultiMeshAttributeMapsToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes = { "MapTypes", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, MapTypes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapTypes_MetaData), NewProp_MapTypes_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview = { "MapPreview", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, MapPreview), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPreview_MetaData), NewProp_MapPreview_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_Resolution = { "Resolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, Resolution), Z_Construct_UEnum_ModelingComponents_EBakeTextureResolution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Resolution_MetaData), NewProp_Resolution_MetaData) }; // 1963257244
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth = { "BitDepth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, BitDepth), Z_Construct_UEnum_ModelingComponents_EBakeTextureBitDepth, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitDepth_MetaData), NewProp_BitDepth_MetaData) }; // 3648221912
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, SamplesPerPixel), Z_Construct_UEnum_ModelingComponents_EBakeTextureSamplesPerPixel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerPixel_MetaData), NewProp_SamplesPerPixel_MetaData) }; // 3572389592
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask = { "SampleFilterMask", nullptr, (EPropertyFlags)0x0114040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, SampleFilterMask), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleFilterMask_MetaData), NewProp_SampleFilterMask_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_Inner = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList = { "MapPreviewNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsToolProperties, MapPreviewNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MapPreviewNamesList_MetaData), NewProp_MapPreviewNamesList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapPreview,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_Resolution_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_Resolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_BitDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_SamplesPerPixel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_SampleFilterMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::NewProp_MapPreviewNamesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::ClassParams = {
	&UBakeMultiMeshAttributeMapsToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties()
{
	if (!Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolProperties.OuterSingleton, Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMultiMeshAttributeMapsToolProperties>()
{
	return UBakeMultiMeshAttributeMapsToolProperties::StaticClass();
}
UBakeMultiMeshAttributeMapsToolProperties::UBakeMultiMeshAttributeMapsToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMultiMeshAttributeMapsToolProperties);
UBakeMultiMeshAttributeMapsToolProperties::~UBakeMultiMeshAttributeMapsToolProperties() {}
// End Class UBakeMultiMeshAttributeMapsToolProperties

// Begin ScriptStruct FBakeMultiMeshDetailProperties
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties;
class UScriptStruct* FBakeMultiMeshDetailProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsExp(), TEXT("BakeMultiMeshDetailProperties"));
	}
	return Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UScriptStruct* StaticStruct<FBakeMultiMeshDetailProperties>()
{
	return FBakeMultiMeshDetailProperties::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[] = {
		{ "Category", "BakeSources" },
		{ "Comment", "/** Source mesh to sample from */" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Source mesh to sample from" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTexture_MetaData[] = {
		{ "Category", "BakeSources" },
		{ "Comment", "/** Source mesh color texture that is to be resampled into a new texture */" },
		{ "EditCondition", "SourceMesh != nullptr" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Source mesh color texture that is to be resampled into a new texture" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceTextureUVLayer_MetaData[] = {
		{ "Category", "BakeSources" },
		{ "ClampMax", "7" },
		{ "ClampMin", "0" },
		{ "Comment", "/** UV channel to use for the source mesh color texture */" },
		{ "DisplayName", "Source Texture UV Channel" },
		{ "EditCondition", "SourceTexture != nullptr" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "UV channel to use for the source mesh color texture" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceTexture;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SourceTextureUVLayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBakeMultiMeshDetailProperties>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBakeMultiMeshDetailProperties, SourceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMesh_MetaData), NewProp_SourceMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewProp_SourceTexture = { "SourceTexture", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBakeMultiMeshDetailProperties, SourceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTexture_MetaData), NewProp_SourceTexture_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewProp_SourceTextureUVLayer = { "SourceTextureUVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FBakeMultiMeshDetailProperties, SourceTextureUVLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceTextureUVLayer_MetaData), NewProp_SourceTextureUVLayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewProp_SourceMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewProp_SourceTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewProp_SourceTextureUVLayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	nullptr,
	&NewStructOps,
	"BakeMultiMeshDetailProperties",
	Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::PropPointers),
	sizeof(FBakeMultiMeshDetailProperties),
	alignof(FBakeMultiMeshDetailProperties),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties()
{
	if (!Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties.InnerSingleton, Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties.InnerSingleton;
}
// End ScriptStruct FBakeMultiMeshDetailProperties

// Begin Class UBakeMultiMeshInputToolProperties Function GetTargetUVLayerNamesFunc
struct Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics
{
	struct BakeMultiMeshInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
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
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BakeMultiMeshInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBakeMultiMeshInputToolProperties, nullptr, "GetTargetUVLayerNamesFunc", nullptr, nullptr, Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::BakeMultiMeshInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::BakeMultiMeshInputToolProperties_eventGetTargetUVLayerNamesFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBakeMultiMeshInputToolProperties::execGetTargetUVLayerNamesFunc)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetTargetUVLayerNamesFunc();
	P_NATIVE_END;
}
// End Class UBakeMultiMeshInputToolProperties Function GetTargetUVLayerNamesFunc

// Begin Class UBakeMultiMeshInputToolProperties
void UBakeMultiMeshInputToolProperties::StaticRegisterNativesUBakeMultiMeshInputToolProperties()
{
	UClass* Class = UBakeMultiMeshInputToolProperties::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetTargetUVLayerNamesFunc", &UBakeMultiMeshInputToolProperties::execGetTargetUVLayerNamesFunc },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMultiMeshInputToolProperties);
UClass* Z_Construct_UClass_UBakeMultiMeshInputToolProperties_NoRegister()
{
	return UBakeMultiMeshInputToolProperties::StaticClass();
}
struct Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BakeMultiMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetStaticMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "EditCondition", "TargetStaticMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeletalMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "EditCondition", "TargetSkeletalMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetDynamicMesh_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Target mesh to sample to */" },
		{ "DisplayName", "Target Mesh" },
		{ "EditCondition", "TargetDynamicMesh != nullptr" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Target mesh to sample to" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayer_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** UV channel to use for the target mesh */" },
		{ "DisplayName", "Target Mesh UV Channel" },
		{ "GetOptions", "GetTargetUVLayerNamesFunc" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "UV channel to use for the target mesh" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceMeshes_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "Comment", "/** Source meshes and textures to sample from */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Source meshes and textures to sample from" },
		{ "TransientToolProperty", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionDistance_MetaData[] = {
		{ "Category", "BakeInput" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\n\x09 * This is only relevant if a separate source mesh is provided. */" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "Maximum allowed distance for the projection from target mesh to source mesh for the sample to be considered valid.\nThis is only relevant if a separate source mesh is provided." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetUVLayerNamesList_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetStaticMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetSkeletalMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetDynamicMesh;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUVLayer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceMeshes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceMeshes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionDistance;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TargetUVLayerNamesList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TargetUVLayerNamesList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBakeMultiMeshInputToolProperties_GetTargetUVLayerNamesFunc, "GetTargetUVLayerNamesFunc" }, // 4131816519
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMultiMeshInputToolProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetStaticMesh = { "TargetStaticMesh", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, TargetStaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetStaticMesh_MetaData), NewProp_TargetStaticMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetSkeletalMesh = { "TargetSkeletalMesh", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, TargetSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetSkeletalMesh_MetaData), NewProp_TargetSkeletalMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetDynamicMesh = { "TargetDynamicMesh", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, TargetDynamicMesh), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetDynamicMesh_MetaData), NewProp_TargetDynamicMesh_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetUVLayer = { "TargetUVLayer", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, TargetUVLayer), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUVLayer_MetaData), NewProp_TargetUVLayer_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_SourceMeshes_Inner = { "SourceMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties, METADATA_PARAMS(0, nullptr) }; // 2935667138
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_SourceMeshes = { "SourceMeshes", nullptr, (EPropertyFlags)0x0010000000000041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, SourceMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceMeshes_MetaData), NewProp_SourceMeshes_MetaData) }; // 2935667138
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_ProjectionDistance = { "ProjectionDistance", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, ProjectionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionDistance_MetaData), NewProp_ProjectionDistance_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_Inner = { "TargetUVLayerNamesList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetUVLayerNamesList = { "TargetUVLayerNamesList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshInputToolProperties, TargetUVLayerNamesList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetUVLayerNamesList_MetaData), NewProp_TargetUVLayerNamesList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetStaticMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetSkeletalMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetDynamicMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetUVLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_SourceMeshes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_SourceMeshes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_ProjectionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetUVLayerNamesList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::NewProp_TargetUVLayerNamesList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::ClassParams = {
	&UBakeMultiMeshInputToolProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMultiMeshInputToolProperties()
{
	if (!Z_Registration_Info_UClass_UBakeMultiMeshInputToolProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMultiMeshInputToolProperties.OuterSingleton, Z_Construct_UClass_UBakeMultiMeshInputToolProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMultiMeshInputToolProperties.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMultiMeshInputToolProperties>()
{
	return UBakeMultiMeshInputToolProperties::StaticClass();
}
UBakeMultiMeshInputToolProperties::UBakeMultiMeshInputToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMultiMeshInputToolProperties);
UBakeMultiMeshInputToolProperties::~UBakeMultiMeshInputToolProperties() {}
// End Class UBakeMultiMeshInputToolProperties

// Begin Class UBakeMultiMeshAttributeMapsTool
void UBakeMultiMeshAttributeMapsTool::StaticRegisterNativesUBakeMultiMeshAttributeMapsTool()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBakeMultiMeshAttributeMapsTool);
UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_NoRegister()
{
	return UBakeMultiMeshAttributeMapsTool::StaticClass();
}
struct Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * N-to-1 Detail Map Baking Tool\n */" },
		{ "IncludePath", "BakeMultiMeshAttributeMapsTool.h" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "N-to-1 Detail Map Baking Tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[] = {
		{ "Comment", "// need to update bResultValid if these are modified, so we don't publicly expose them. \n// @todo setters/getters for these\n" },
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
		{ "ToolTip", "need to update bResultValid if these are modified, so we don't publicly expose them.\n@todo setters/getters for these" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMeshSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BakeMultiMeshAttributeMapsTool.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Settings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMeshSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBakeMultiMeshAttributeMapsTool>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsTool, Settings), Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Settings_MetaData), NewProp_Settings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings = { "InputMeshSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsTool, InputMeshSettings), Z_Construct_UClass_UBakeMultiMeshInputToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMeshSettings_MetaData), NewProp_InputMeshSettings_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::NewProp_ResultSettings = { "ResultSettings", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBakeMultiMeshAttributeMapsTool, ResultSettings), Z_Construct_UClass_UBakeMeshAttributeMapsResultToolProperties_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultSettings_MetaData), NewProp_ResultSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::NewProp_Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::NewProp_InputMeshSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::NewProp_ResultSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBakeMeshAttributeMapsToolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::ClassParams = {
	&UBakeMultiMeshAttributeMapsTool::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::PropPointers),
	0,
	0x001000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::Class_MetaDataParams), Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool()
{
	if (!Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsTool.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsTool.OuterSingleton, Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsTool.OuterSingleton;
}
template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UBakeMultiMeshAttributeMapsTool>()
{
	return UBakeMultiMeshAttributeMapsTool::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBakeMultiMeshAttributeMapsTool);
UBakeMultiMeshAttributeMapsTool::~UBakeMultiMeshAttributeMapsTool() {}
// End Class UBakeMultiMeshAttributeMapsTool

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBakeMultiMeshDetailProperties::StaticStruct, Z_Construct_UScriptStruct_FBakeMultiMeshDetailProperties_Statics::NewStructOps, TEXT("BakeMultiMeshDetailProperties"), &Z_Registration_Info_UScriptStruct_BakeMultiMeshDetailProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBakeMultiMeshDetailProperties), 2935667138U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolBuilder, UBakeMultiMeshAttributeMapsToolBuilder::StaticClass, TEXT("UBakeMultiMeshAttributeMapsToolBuilder"), &Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMultiMeshAttributeMapsToolBuilder), 634730581U) },
		{ Z_Construct_UClass_UBakeMultiMeshAttributeMapsToolProperties, UBakeMultiMeshAttributeMapsToolProperties::StaticClass, TEXT("UBakeMultiMeshAttributeMapsToolProperties"), &Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMultiMeshAttributeMapsToolProperties), 4128291507U) },
		{ Z_Construct_UClass_UBakeMultiMeshInputToolProperties, UBakeMultiMeshInputToolProperties::StaticClass, TEXT("UBakeMultiMeshInputToolProperties"), &Z_Registration_Info_UClass_UBakeMultiMeshInputToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMultiMeshInputToolProperties), 462468523U) },
		{ Z_Construct_UClass_UBakeMultiMeshAttributeMapsTool, UBakeMultiMeshAttributeMapsTool::StaticClass, TEXT("UBakeMultiMeshAttributeMapsTool"), &Z_Registration_Info_UClass_UBakeMultiMeshAttributeMapsTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBakeMultiMeshAttributeMapsTool), 3555993991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_4155376919(TEXT("/Script/MeshModelingToolsExp"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_BakeMultiMeshAttributeMapsTool_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
