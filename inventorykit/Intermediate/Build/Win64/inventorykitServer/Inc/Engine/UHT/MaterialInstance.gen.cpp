// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Materials/MaterialOverrideNanite.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstance() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4d();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceEditorOnlyData();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceEditorOnlyData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterfaceEditorOnlyData();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDoubleVectorParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceCachedData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialOverrideNanite();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSet();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSetEditorOnlyData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStaticParameterSetRuntimeData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue();
PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FScalarParameterAtlasInstanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData;
class UScriptStruct* FScalarParameterAtlasInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterAtlasInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScalarParameterAtlasInstanceData>()
{
	return FScalarParameterAtlasInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Editable scalar parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable scalar parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsAtlasPosition_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Atlas_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsAtlasPosition;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Curve;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Atlas;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterAtlasInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit(void* Obj)
{
	((FScalarParameterAtlasInstanceData*)Obj)->bIsUsedAsAtlasPosition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition = { "bIsUsedAsAtlasPosition", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FScalarParameterAtlasInstanceData), &Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsUsedAsAtlasPosition_MetaData), NewProp_bIsUsedAsAtlasPosition_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterAtlasInstanceData, Curve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Curve_MetaData), NewProp_Curve_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas = { "Atlas", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterAtlasInstanceData, Atlas), Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Atlas_MetaData), NewProp_Atlas_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_bIsUsedAsAtlasPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Curve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewProp_Atlas,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ScalarParameterAtlasInstanceData",
	Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::PropPointers),
	sizeof(FScalarParameterAtlasInstanceData),
	alignof(FScalarParameterAtlasInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData.InnerSingleton;
}
// End ScriptStruct FScalarParameterAtlasInstanceData

// Begin ScriptStruct FScalarParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScalarParameterValue;
class UScriptStruct* FScalarParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScalarParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScalarParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ScalarParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FScalarParameterValue>()
{
	return FScalarParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FScalarParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtlasData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "ScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "ScalarParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtlasData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScalarParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData = { "AtlasData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterValue, AtlasData), Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtlasData_MetaData), NewProp_AtlasData_MetaData) }; // 3087281330
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterValue, ParameterValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FScalarParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_AtlasData,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScalarParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ScalarParameterValue",
	Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::PropPointers),
	sizeof(FScalarParameterValue),
	alignof(FScalarParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FScalarParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FScalarParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_ScalarParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScalarParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FScalarParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ScalarParameterValue.InnerSingleton;
}
// End ScriptStruct FScalarParameterValue

// Begin ScriptStruct FVectorParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VectorParameterValue;
class UScriptStruct* FVectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVectorParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("VectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_VectorParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FVectorParameterValue>()
{
	return FVectorParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FVectorParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable vector parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable vector parameter." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVectorParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FVectorParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVectorParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"VectorParameterValue",
	Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::PropPointers),
	sizeof(FVectorParameterValue),
	alignof(FVectorParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FVectorParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FVectorParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_VectorParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FVectorParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_VectorParameterValue.InnerSingleton;
}
// End ScriptStruct FVectorParameterValue

// Begin ScriptStruct FDoubleVectorParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue;
class UScriptStruct* FDoubleVectorParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDoubleVectorParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DoubleVectorParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDoubleVectorParameterValue>()
{
	return FDoubleVectorParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable vector parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable vector parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "VectorParameterValue" },
		{ "Comment", "// LWC_TODO: Blueprint?\n" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "LWC_TODO: Blueprint?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDoubleVectorParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleVectorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FVector4d, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDoubleVectorParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"DoubleVectorParameterValue",
	Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::PropPointers),
	sizeof(FDoubleVectorParameterValue),
	alignof(FDoubleVectorParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDoubleVectorParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue.InnerSingleton;
}
// End ScriptStruct FDoubleVectorParameterValue

// Begin ScriptStruct FTextureParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TextureParameterValue;
class UScriptStruct* FTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTextureParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_TextureParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTextureParameterValue>()
{
	return FTextureParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTextureParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable texture parameter." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "TextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "TextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTextureParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTextureParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TextureParameterValue",
	Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::PropPointers),
	sizeof(FTextureParameterValue),
	alignof(FTextureParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTextureParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTextureParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_TextureParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FTextureParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TextureParameterValue.InnerSingleton;
}
// End ScriptStruct FTextureParameterValue

// Begin ScriptStruct FRuntimeVirtualTextureParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue;
class UScriptStruct* FRuntimeVirtualTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeVirtualTextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeVirtualTextureParameterValue>()
{
	return FRuntimeVirtualTextureParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable runtime virtual texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable runtime virtual texture parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeVirtualTextureParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ParameterValue), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRuntimeVirtualTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"RuntimeVirtualTextureParameterValue",
	Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::PropPointers),
	sizeof(FRuntimeVirtualTextureParameterValue),
	alignof(FRuntimeVirtualTextureParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue.InnerSingleton;
}
// End ScriptStruct FRuntimeVirtualTextureParameterValue

// Begin ScriptStruct FSparseVolumeTextureParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue;
class UScriptStruct* FSparseVolumeTextureParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("SparseVolumeTextureParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FSparseVolumeTextureParameterValue>()
{
	return FSparseVolumeTextureParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable sparse volume texture parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable sparse volume texture parameter." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[] = {
		{ "Category", "RuntimeVirtualTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParameterValue;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSparseVolumeTextureParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSparseVolumeTextureParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSparseVolumeTextureParameterValue, ParameterValue), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterValue_MetaData), NewProp_ParameterValue_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSparseVolumeTextureParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewProp_ParameterValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"SparseVolumeTextureParameterValue",
	Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::PropPointers),
	sizeof(FSparseVolumeTextureParameterValue),
	alignof(FSparseVolumeTextureParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue.InnerSingleton;
}
// End ScriptStruct FSparseVolumeTextureParameterValue

// Begin ScriptStruct FFontParameterValue
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FontParameterValue;
class UScriptStruct* FFontParameterValue::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FontParameterValue.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FontParameterValue.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFontParameterValue, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("FontParameterValue"));
	}
	return Z_Registration_Info_UScriptStruct_FontParameterValue.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FFontParameterValue>()
{
	return FFontParameterValue::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFontParameterValue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Editable font parameter. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Editable font parameter." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontValue_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontPage_MetaData[] = {
		{ "Category", "FontParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionGUID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FontValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FontPage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFontParameterValue>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontParameterValue, ParameterName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue = { "FontValue", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontParameterValue, FontValue), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontValue_MetaData), NewProp_FontValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage = { "FontPage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontParameterValue, FontPage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontPage_MetaData), NewProp_FontPage_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID = { "ExpressionGUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFontParameterValue, ExpressionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExpressionGUID_MetaData), NewProp_ExpressionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterName,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_FontPage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewProp_ExpressionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFontParameterValue_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"FontParameterValue",
	Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::PropPointers),
	sizeof(FFontParameterValue),
	alignof(FFontParameterValue),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFontParameterValue_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFontParameterValue()
{
	if (!Z_Registration_Info_UScriptStruct_FontParameterValue.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FontParameterValue.InnerSingleton, Z_Construct_UScriptStruct_FFontParameterValue_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FontParameterValue.InnerSingleton;
}
// End ScriptStruct FFontParameterValue

// Begin ScriptStruct FMaterialInstanceCachedData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData;
class UScriptStruct* FMaterialInstanceCachedData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialInstanceCachedData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialInstanceCachedData"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialInstanceCachedData>()
{
	return FMaterialInstanceCachedData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentLayerIndexRemap_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParentLayerIndexRemap_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentLayerIndexRemap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialInstanceCachedData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_Inner = { "ParentLayerIndexRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap = { "ParentLayerIndexRemap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMaterialInstanceCachedData, ParentLayerIndexRemap), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentLayerIndexRemap_MetaData), NewProp_ParentLayerIndexRemap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewProp_ParentLayerIndexRemap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MaterialInstanceCachedData",
	Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::PropPointers),
	sizeof(FMaterialInstanceCachedData),
	alignof(FMaterialInstanceCachedData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMaterialInstanceCachedData()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.InnerSingleton, Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData.InnerSingleton;
}
// End ScriptStruct FMaterialInstanceCachedData

// Begin Class UMaterialInstanceEditorOnlyData
void UMaterialInstanceEditorOnlyData::StaticRegisterNativesUMaterialInstanceEditorOnlyData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstanceEditorOnlyData);
UClass* Z_Construct_UClass_UMaterialInstanceEditorOnlyData_NoRegister()
{
	return UMaterialInstanceEditorOnlyData::StaticClass();
}
struct Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/MaterialInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticParameters;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceEditorOnlyData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::NewProp_StaticParameters = { "StaticParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstanceEditorOnlyData, StaticParameters), Z_Construct_UScriptStruct_FStaticParameterSetEditorOnlyData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticParameters_MetaData), NewProp_StaticParameters_MetaData) }; // 3799668306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::NewProp_StaticParameters,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialInterfaceEditorOnlyData,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::ClassParams = {
	&UMaterialInstanceEditorOnlyData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::PropPointers),
	0,
	0x000800B0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialInstanceEditorOnlyData()
{
	if (!Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.OuterSingleton, Z_Construct_UClass_UMaterialInstanceEditorOnlyData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialInstanceEditorOnlyData>()
{
	return UMaterialInstanceEditorOnlyData::StaticClass();
}
UMaterialInstanceEditorOnlyData::UMaterialInstanceEditorOnlyData() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceEditorOnlyData);
UMaterialInstanceEditorOnlyData::~UMaterialInstanceEditorOnlyData() {}
// End Class UMaterialInstanceEditorOnlyData

// Begin Class UMaterialInstance
void UMaterialInstance::StaticRegisterNativesUMaterialInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstance);
UClass* Z_Construct_UClass_UMaterialInstance_NoRegister()
{
	return UMaterialInstance::StaticClass();
}
struct Z_Construct_UClass_UMaterialInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstance.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysMaterial_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Physical material to use for this graphics material. Used for sounds, effects etc.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Physical material to use for this graphics material. Used for sounds, effects etc." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterialMap_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Engine.EPhysicalMaterialMaskColor" },
		{ "Category", "PhysicalMaterialMask" },
		{ "Comment", "/** Physical material map used with physical material mask, when it exists.*/" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Physical material map used with physical material mask, when it exists." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Parent material. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Parent material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NaniteOverrideMaterial_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** An override material which will be used instead of this one when rendering with Nanite. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "An override material which will be used instead of this one when rendering with Nanite." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasStaticPermutationResource_MetaData[] = {
		{ "Comment", "/**\n\x09 * Indicates whether the instance has static permutation resources (which are required when static parameters are present) \n\x09 * Read directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\n\x09 * When true, StaticPermutationMaterialResources will always be valid and non-null.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Indicates whether the instance has static permutation resources (which are required when static parameters are present)\nRead directly from the rendering thread, can only be modified with the use of a FMaterialUpdateContext.\nWhen true, StaticPermutationMaterialResources will always be valid and non-null." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideSubsurfaceProfile_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Defines if SubsurfaceProfile from this instance is used or it uses the parent one. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Defines if SubsurfaceProfile from this instance is used or it uses the parent one." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Scalar parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Scalar parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Vector parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Vector parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DoubleVectorParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** DoubleVector parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "DoubleVector parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Texture parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Texture parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** RuntimeVirtualTexture parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "RuntimeVirtualTexture parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SparseVolumeTextureParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Sparse Volume Texture parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Sparse Volume Texture parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontParameterValues_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "Comment", "/** Font parameters. */" },
		{ "EditFixedOrder", "" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Font parameters." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideBaseProperties_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BasePropertyOverrides_MetaData[] = {
		{ "Category", "MaterialInstance" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticParametersRuntime_MetaData[] = {
		{ "Comment", "/** Static parameter values that are overridden in this instance. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
		{ "ToolTip", "Static parameter values that are overridden in this instance." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedTextureGuids_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSavedCachedData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstance.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PhysicalMaterialMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NaniteOverrideMaterial;
	static void NewProp_bHasStaticPermutationResource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasStaticPermutationResource;
	static void NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideSubsurfaceProfile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DoubleVectorParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DoubleVectorParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RuntimeVirtualTextureParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextureParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SparseVolumeTextureParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SparseVolumeTextureParameterValues;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FontParameterValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FontParameterValues;
#if WITH_EDITORONLY_DATA
	static void NewProp_bOverrideBaseProperties_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideBaseProperties;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BasePropertyOverrides;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticParametersRuntime;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedTextureGuids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedTextureGuids;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StaticParameters;
	static void NewProp_bSavedCachedData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSavedCachedData;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial = { "PhysMaterial", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, PhysMaterial), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysMaterial_MetaData), NewProp_PhysMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap = { "PhysicalMaterialMap", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(PhysicalMaterialMap, UMaterialInstance), STRUCT_OFFSET(UMaterialInstance, PhysicalMaterialMap), Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalMaterialMap_MetaData), NewProp_PhysicalMaterialMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0114010000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, Parent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_NaniteOverrideMaterial = { "NaniteOverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, NaniteOverrideMaterial), Z_Construct_UScriptStruct_FMaterialOverrideNanite, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NaniteOverrideMaterial_MetaData), NewProp_NaniteOverrideMaterial_MetaData) }; // 3962272721
void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_SetBit(void* Obj)
{
	((UMaterialInstance*)Obj)->bHasStaticPermutationResource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource = { "bHasStaticPermutationResource", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasStaticPermutationResource_MetaData), NewProp_bHasStaticPermutationResource_MetaData) };
void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit(void* Obj)
{
	((UMaterialInstance*)Obj)->bOverrideSubsurfaceProfile = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile = { "bOverrideSubsurfaceProfile", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideSubsurfaceProfile_MetaData), NewProp_bOverrideSubsurfaceProfile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_Inner = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FScalarParameterValue, METADATA_PARAMS(0, nullptr) }; // 1409281175
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues = { "ScalarParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, ScalarParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalarParameterValues_MetaData), NewProp_ScalarParameterValues_MetaData) }; // 1409281175
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_Inner = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVectorParameterValue, METADATA_PARAMS(0, nullptr) }; // 653360891
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues = { "VectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, VectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorParameterValues_MetaData), NewProp_VectorParameterValues_MetaData) }; // 653360891
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_Inner = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDoubleVectorParameterValue, METADATA_PARAMS(0, nullptr) }; // 2706120552
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues = { "DoubleVectorParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, DoubleVectorParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DoubleVectorParameterValues_MetaData), NewProp_DoubleVectorParameterValues_MetaData) }; // 2706120552
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_Inner = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 766717169
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues = { "TextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, TextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureParameterValues_MetaData), NewProp_TextureParameterValues_MetaData) }; // 766717169
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 1775652358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues = { "RuntimeVirtualTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, RuntimeVirtualTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextureParameterValues_MetaData), NewProp_RuntimeVirtualTextureParameterValues_MetaData) }; // 1775652358
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_SparseVolumeTextureParameterValues_Inner = { "SparseVolumeTextureParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue, METADATA_PARAMS(0, nullptr) }; // 269446537
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_SparseVolumeTextureParameterValues = { "SparseVolumeTextureParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, SparseVolumeTextureParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SparseVolumeTextureParameterValues_MetaData), NewProp_SparseVolumeTextureParameterValues_MetaData) }; // 269446537
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_Inner = { "FontParameterValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFontParameterValue, METADATA_PARAMS(0, nullptr) }; // 4046525624
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues = { "FontParameterValues", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, FontParameterValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontParameterValues_MetaData), NewProp_FontParameterValues_MetaData) }; // 4046525624
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_SetBit(void* Obj)
{
	((UMaterialInstance*)Obj)->bOverrideBaseProperties_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties = { "bOverrideBaseProperties", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideBaseProperties_MetaData), NewProp_bOverrideBaseProperties_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides = { "BasePropertyOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, BasePropertyOverrides), Z_Construct_UScriptStruct_FMaterialInstanceBasePropertyOverrides, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BasePropertyOverrides_MetaData), NewProp_BasePropertyOverrides_MetaData) }; // 367364877
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParametersRuntime = { "StaticParametersRuntime", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, StaticParametersRuntime), Z_Construct_UScriptStruct_FStaticParameterSetRuntimeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticParametersRuntime_MetaData), NewProp_StaticParametersRuntime_MetaData) }; // 3414948277
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_Inner = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids = { "ReferencedTextureGuids", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, ReferencedTextureGuids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedTextureGuids_MetaData), NewProp_ReferencedTextureGuids_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters = { "StaticParameters", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMaterialInstance, StaticParameters_DEPRECATED), Z_Construct_UScriptStruct_FStaticParameterSet, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticParameters_MetaData), NewProp_StaticParameters_MetaData) }; // 3793926449
void Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_SetBit(void* Obj)
{
	((UMaterialInstance*)Obj)->bSavedCachedData_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData = { "bSavedCachedData", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMaterialInstance), &Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSavedCachedData_MetaData), NewProp_bSavedCachedData_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_PhysicalMaterialMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_NaniteOverrideMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bHasStaticPermutationResource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideSubsurfaceProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ScalarParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_VectorParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_DoubleVectorParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_TextureParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_RuntimeVirtualTextureParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_SparseVolumeTextureParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_SparseVolumeTextureParameterValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_FontParameterValues,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bOverrideBaseProperties,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_BasePropertyOverrides,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParametersRuntime,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_ReferencedTextureGuids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_StaticParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialInstance_Statics::NewProp_bSavedCachedData,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMaterialInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstance_Statics::ClassParams = {
	&UMaterialInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMaterialInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::PropPointers),
	0,
	0x008800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialInstance()
{
	if (!Z_Registration_Info_UClass_UMaterialInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstance.OuterSingleton, Z_Construct_UClass_UMaterialInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialInstance>()
{
	return UMaterialInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstance);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialInstance)
// End Class UMaterialInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FScalarParameterAtlasInstanceData::StaticStruct, Z_Construct_UScriptStruct_FScalarParameterAtlasInstanceData_Statics::NewStructOps, TEXT("ScalarParameterAtlasInstanceData"), &Z_Registration_Info_UScriptStruct_ScalarParameterAtlasInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarParameterAtlasInstanceData), 3087281330U) },
		{ FScalarParameterValue::StaticStruct, Z_Construct_UScriptStruct_FScalarParameterValue_Statics::NewStructOps, TEXT("ScalarParameterValue"), &Z_Registration_Info_UScriptStruct_ScalarParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScalarParameterValue), 1409281175U) },
		{ FVectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FVectorParameterValue_Statics::NewStructOps, TEXT("VectorParameterValue"), &Z_Registration_Info_UScriptStruct_VectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVectorParameterValue), 653360891U) },
		{ FDoubleVectorParameterValue::StaticStruct, Z_Construct_UScriptStruct_FDoubleVectorParameterValue_Statics::NewStructOps, TEXT("DoubleVectorParameterValue"), &Z_Registration_Info_UScriptStruct_DoubleVectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDoubleVectorParameterValue), 2706120552U) },
		{ FTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FTextureParameterValue_Statics::NewStructOps, TEXT("TextureParameterValue"), &Z_Registration_Info_UScriptStruct_TextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTextureParameterValue), 766717169U) },
		{ FRuntimeVirtualTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FRuntimeVirtualTextureParameterValue_Statics::NewStructOps, TEXT("RuntimeVirtualTextureParameterValue"), &Z_Registration_Info_UScriptStruct_RuntimeVirtualTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeVirtualTextureParameterValue), 1775652358U) },
		{ FSparseVolumeTextureParameterValue::StaticStruct, Z_Construct_UScriptStruct_FSparseVolumeTextureParameterValue_Statics::NewStructOps, TEXT("SparseVolumeTextureParameterValue"), &Z_Registration_Info_UScriptStruct_SparseVolumeTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSparseVolumeTextureParameterValue), 269446537U) },
		{ FFontParameterValue::StaticStruct, Z_Construct_UScriptStruct_FFontParameterValue_Statics::NewStructOps, TEXT("FontParameterValue"), &Z_Registration_Info_UScriptStruct_FontParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFontParameterValue), 4046525624U) },
		{ FMaterialInstanceCachedData::StaticStruct, Z_Construct_UScriptStruct_FMaterialInstanceCachedData_Statics::NewStructOps, TEXT("MaterialInstanceCachedData"), &Z_Registration_Info_UScriptStruct_MaterialInstanceCachedData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialInstanceCachedData), 3478692505U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstanceEditorOnlyData, UMaterialInstanceEditorOnlyData::StaticClass, TEXT("UMaterialInstanceEditorOnlyData"), &Z_Registration_Info_UClass_UMaterialInstanceEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstanceEditorOnlyData), 2071911122U) },
		{ Z_Construct_UClass_UMaterialInstance, UMaterialInstance::StaticClass, TEXT("UMaterialInstance"), &Z_Registration_Info_UClass_UMaterialInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstance), 3542412143U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_3470472124(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstance_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
