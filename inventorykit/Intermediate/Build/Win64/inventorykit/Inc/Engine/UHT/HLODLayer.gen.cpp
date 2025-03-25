// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/HLOD/HLODLayer.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHLODLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AWorldPartitionHLOD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilder_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODBuilderSettings_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer();
ENGINE_API UClass* Z_Construct_UClass_UHLODLayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHLODLayerType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshApproximationSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshMergingSettings();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMeshProxySettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EHLODLayerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHLODLayerType;
static UEnum* EHLODLayerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EHLODLayerType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EHLODLayerType"));
	}
	return Z_Registration_Info_UEnum_EHLODLayerType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EHLODLayerType>()
{
	return EHLODLayerType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EHLODLayerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.DisplayName", "Custom" },
		{ "Custom.Name", "EHLODLayerType::Custom" },
		{ "Instancing.DisplayName", "Instancing" },
		{ "Instancing.Name", "EHLODLayerType::Instancing" },
		{ "MeshApproximate.DisplayName", "Approximated Mesh" },
		{ "MeshApproximate.Name", "EHLODLayerType::MeshApproximate" },
		{ "MeshMerge.DisplayName", "Merged Mesh" },
		{ "MeshMerge.Name", "EHLODLayerType::MeshMerge" },
		{ "MeshSimplify.DisplayName", "Simplified Mesh" },
		{ "MeshSimplify.Name", "EHLODLayerType::MeshSimplify" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHLODLayerType::Instancing", (int64)EHLODLayerType::Instancing },
		{ "EHLODLayerType::MeshMerge", (int64)EHLODLayerType::MeshMerge },
		{ "EHLODLayerType::MeshSimplify", (int64)EHLODLayerType::MeshSimplify },
		{ "EHLODLayerType::MeshApproximate", (int64)EHLODLayerType::MeshApproximate },
		{ "EHLODLayerType::Custom", (int64)EHLODLayerType::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EHLODLayerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EHLODLayerType",
	"EHLODLayerType",
	Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EHLODLayerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EHLODLayerType()
{
	if (!Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton, Z_Construct_UEnum_Engine_EHLODLayerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHLODLayerType.InnerSingleton;
}
// End Enum EHLODLayerType

// Begin Class UHLODLayer
void UHLODLayer::StaticRegisterNativesUHLODLayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHLODLayer);
UClass* Z_Construct_UClass_UHLODLayer_NoRegister()
{
	return UHLODLayer::StaticClass();
}
struct Z_Construct_UClass_UHLODLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/HLOD/HLODLayer.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerType_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Type of HLOD generation to use */" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Type of HLOD generation to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBuilderClass_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** HLOD Builder class */" },
		{ "DisplayName", "HLOD Builder Class" },
		{ "EditCondition", "LayerType == EHLODLayerType::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "HLOD Builder class" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODBuilderSettings_MetaData[] = {
		{ "Category", "HLOD" },
		{ "EditInline", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSpatiallyLoaded_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Whether HLOD actors generated for this layer will be spatially loaded */" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Whether HLOD actors generated for this layer will be spatially loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Cell size of the runtime grid created to encompass HLOD actors generated for this HLOD Layer */" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Cell size of the runtime grid created to encompass HLOD actors generated for this HLOD Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadingRange_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Loading range of the runtime grid created to encompass HLOD actors generated for this HLOD Layer */" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Loading range of the runtime grid created to encompass HLOD actors generated for this HLOD Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentLayer_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** HLOD Layer to assign to the generated HLOD actors */" },
		{ "EditCondition", "bIsSpatiallyLoaded" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "HLOD Layer to assign to the generated HLOD actors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODActorClass_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** Specify a custom HLOD Actor class, the default is AWorldPartitionHLOD */" },
		{ "DisplayName", "HLOD Actor Class" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "Specify a custom HLOD Actor class, the default is AWorldPartitionHLOD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODModifierClass_MetaData[] = {
		{ "Category", "HLOD" },
		{ "Comment", "/** HLOD Modifier class, to allow changes to the HLOD at runtime */" },
		{ "DisplayName", "HLOD Modifier Class" },
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
		{ "ToolTip", "HLOD Modifier class, to allow changes to the HLOD at runtime" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshMergeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshSimplifySettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshApproximationSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HLODMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/HLOD/HLODLayer.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayerType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HLODBuilderClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HLODBuilderSettings;
	static void NewProp_bIsSpatiallyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSpatiallyLoaded;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CellSize;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_LoadingRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentLayer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HLODActorClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HLODModifierClass;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshMergeSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshSimplifySettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshApproximationSettings;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HLODMaterial;
	static void NewProp_bAlwaysLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysLoaded;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHLODLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType = { "LayerType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, LayerType), Z_Construct_UEnum_Engine_EHLODLayerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerType_MetaData), NewProp_LayerType_MetaData) }; // 3371515982
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass = { "HLODBuilderClass", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, HLODBuilderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UHLODBuilder_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBuilderClass_MetaData), NewProp_HLODBuilderClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings = { "HLODBuilderSettings", nullptr, (EPropertyFlags)0x0144000002020009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, HLODBuilderSettings), Z_Construct_UClass_UHLODBuilderSettings_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODBuilderSettings_MetaData), NewProp_HLODBuilderSettings_MetaData) };
void Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_SetBit(void* Obj)
{
	((UHLODLayer*)Obj)->bIsSpatiallyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded = { "bIsSpatiallyLoaded", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHLODLayer), &Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSpatiallyLoaded_MetaData), NewProp_bIsSpatiallyLoaded_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CellSize_MetaData), NewProp_CellSize_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange = { "LoadingRange", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, LoadingRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadingRange_MetaData), NewProp_LoadingRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer = { "ParentLayer", nullptr, (EPropertyFlags)0x0144000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, ParentLayer), Z_Construct_UClass_UHLODLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentLayer_MetaData), NewProp_ParentLayer_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODActorClass = { "HLODActorClass", nullptr, (EPropertyFlags)0x0044040000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, HLODActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWorldPartitionHLOD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODActorClass_MetaData), NewProp_HLODActorClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODModifierClass = { "HLODModifierClass", nullptr, (EPropertyFlags)0x0044040000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, HLODModifierClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWorldPartitionHLODModifier_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODModifierClass_MetaData), NewProp_HLODModifierClass_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings = { "MeshMergeSettings", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, MeshMergeSettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshMergingSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshMergeSettings_MetaData), NewProp_MeshMergeSettings_MetaData) }; // 2306358384
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings = { "MeshSimplifySettings", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, MeshSimplifySettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshProxySettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshSimplifySettings_MetaData), NewProp_MeshSimplifySettings_MetaData) }; // 1211341183
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings = { "MeshApproximationSettings", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, MeshApproximationSettings_DEPRECATED), Z_Construct_UScriptStruct_FMeshApproximationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshApproximationSettings_MetaData), NewProp_MeshApproximationSettings_MetaData) }; // 1948427318
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial = { "HLODMaterial", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UHLODLayer, HLODMaterial_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HLODMaterial_MetaData), NewProp_HLODMaterial_MetaData) };
void Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_SetBit(void* Obj)
{
	((UHLODLayer*)Obj)->bAlwaysLoaded_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded = { "bAlwaysLoaded", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UHLODLayer), &Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysLoaded_MetaData), NewProp_bAlwaysLoaded_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHLODLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_LayerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODBuilderSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_bIsSpatiallyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_CellSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_LoadingRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_ParentLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODModifierClass,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshMergeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshSimplifySettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_MeshApproximationSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_HLODMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHLODLayer_Statics::NewProp_bAlwaysLoaded,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UHLODLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHLODLayer_Statics::ClassParams = {
	&UHLODLayer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UHLODLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHLODLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UHLODLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHLODLayer()
{
	if (!Z_Registration_Info_UClass_UHLODLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHLODLayer.OuterSingleton, Z_Construct_UClass_UHLODLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHLODLayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UHLODLayer>()
{
	return UHLODLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHLODLayer);
UHLODLayer::~UHLODLayer() {}
// End Class UHLODLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EHLODLayerType_StaticEnum, TEXT("EHLODLayerType"), &Z_Registration_Info_UEnum_EHLODLayerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3371515982U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHLODLayer, UHLODLayer::StaticClass, TEXT("UHLODLayer"), &Z_Registration_Info_UClass_UHLODLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHLODLayer), 723757112U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_1637305120(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_HLOD_HLODLayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
