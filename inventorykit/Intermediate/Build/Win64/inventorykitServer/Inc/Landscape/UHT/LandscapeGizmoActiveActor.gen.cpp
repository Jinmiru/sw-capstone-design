// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/LandscapeGizmoActiveActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeGizmoActiveActor() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeGizmoActor();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ELandscapeGizmoType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeGizmoType;
static UEnum* ELandscapeGizmoType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeGizmoType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeGizmoType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeGizmoType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeGizmoType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeGizmoType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeGizmoType>()
{
	return ELandscapeGizmoType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LGT_Height.Name", "LGT_Height" },
		{ "LGT_MAX.Name", "LGT_MAX" },
		{ "LGT_None.Name", "LGT_None" },
		{ "LGT_Weight.Name", "LGT_Weight" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LGT_None", (int64)LGT_None },
		{ "LGT_Height", (int64)LGT_Height },
		{ "LGT_Weight", (int64)LGT_Weight },
		{ "LGT_MAX", (int64)LGT_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeGizmoType",
	"ELandscapeGizmoType",
	Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeGizmoType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeGizmoType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeGizmoType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeGizmoType.InnerSingleton;
}
// End Enum ELandscapeGizmoType

// Begin Enum ELandscapeGizmoSnapType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeGizmoSnapType;
static UEnum* ELandscapeGizmoSnapType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeGizmoSnapType"));
	}
	return Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeGizmoSnapType>()
{
	return ELandscapeGizmoSnapType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Component.Name", "ELandscapeGizmoSnapType::Component" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
		{ "None.Name", "ELandscapeGizmoSnapType::None" },
		{ "Texel.Name", "ELandscapeGizmoSnapType::Texel" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ELandscapeGizmoSnapType::None", (int64)ELandscapeGizmoSnapType::None },
		{ "ELandscapeGizmoSnapType::Component", (int64)ELandscapeGizmoSnapType::Component },
		{ "ELandscapeGizmoSnapType::Texel", (int64)ELandscapeGizmoSnapType::Texel },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeGizmoSnapType",
	"ELandscapeGizmoSnapType",
	Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType()
{
	if (!Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeGizmoSnapType.InnerSingleton;
}
// End Enum ELandscapeGizmoSnapType

// Begin ScriptStruct FGizmoSelectData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GizmoSelectData;
class UScriptStruct* FGizmoSelectData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoSelectData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GizmoSelectData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGizmoSelectData, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("GizmoSelectData"));
	}
	return Z_Registration_Info_UScriptStruct_GizmoSelectData.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FGizmoSelectData>()
{
	return FGizmoSelectData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FGizmoSelectData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ratio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Ratio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGizmoSelectData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio = { "Ratio", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoSelectData, Ratio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ratio_MetaData), NewProp_Ratio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData = { "HeightData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FGizmoSelectData, HeightData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightData_MetaData), NewProp_HeightData_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_Ratio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewProp_HeightData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGizmoSelectData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"GizmoSelectData",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::PropPointers), 0),
	sizeof(FGizmoSelectData),
	alignof(FGizmoSelectData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FGizmoSelectData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FGizmoSelectData()
{
	if (!Z_Registration_Info_UScriptStruct_GizmoSelectData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GizmoSelectData.InnerSingleton, Z_Construct_UScriptStruct_FGizmoSelectData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_GizmoSelectData.InnerSingleton;
}
// End ScriptStruct FGizmoSelectData

// Begin Class ALandscapeGizmoActiveActor
void ALandscapeGizmoActiveActor::StaticRegisterNativesALandscapeGizmoActiveActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeGizmoActiveActor);
UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor_NoRegister()
{
	return ALandscapeGizmoActiveActor::StaticClass();
}
struct Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeGizmoActiveActor.h" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureScale_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampledHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampledNormal_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleSizeX_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SampleSizeY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedWidth_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedScaleXY_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrustumVerts_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoDataMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GizmoMeshMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerInfos_MetaData[] = {
		{ "Category", "LandscapeGizmoActiveActor" },
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFollowTerrainHeight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnsnappedRotation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/LandscapeGizmoActiveActor.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DataType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TextureScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampledHeight_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampledHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SampledNormal_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SampledNormal;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleSizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SampleSizeY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CachedScaleXY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrustumVerts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoDataMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GizmoMeshMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LayerInfos_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LayerInfos;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SnapType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SnapType;
	static void NewProp_bFollowTerrainHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFollowTerrainHeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UnsnappedRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeGizmoActiveActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, DataType), Z_Construct_UEnum_Landscape_ELandscapeGizmoType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataType_MetaData), NewProp_DataType_MetaData) }; // 2198725929
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture = { "GizmoTexture", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoTexture_MetaData), NewProp_GizmoTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale = { "TextureScale", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, TextureScale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureScale_MetaData), NewProp_TextureScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_Inner = { "SampledHeight", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight = { "SampledHeight", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledHeight), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampledHeight_MetaData), NewProp_SampledHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_Inner = { "SampledNormal", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal = { "SampledNormal", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampledNormal), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampledNormal_MetaData), NewProp_SampledNormal_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX = { "SampleSizeX", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeX), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleSizeX_MetaData), NewProp_SampleSizeX_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY = { "SampleSizeY", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SampleSizeY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SampleSizeY_MetaData), NewProp_SampleSizeY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth = { "CachedWidth", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedWidth_MetaData), NewProp_CachedWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight = { "CachedHeight", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedHeight_MetaData), NewProp_CachedHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY = { "CachedScaleXY", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, CachedScaleXY), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedScaleXY_MetaData), NewProp_CachedScaleXY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts = { "FrustumVerts", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(FrustumVerts, ALandscapeGizmoActiveActor), STRUCT_OFFSET(ALandscapeGizmoActiveActor, FrustumVerts), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrustumVerts_MetaData), NewProp_FrustumVerts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial = { "GizmoMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoMaterial_MetaData), NewProp_GizmoMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial = { "GizmoDataMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoDataMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoDataMaterial_MetaData), NewProp_GizmoDataMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial = { "GizmoMeshMaterial", nullptr, (EPropertyFlags)0x0114000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, GizmoMeshMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GizmoMeshMaterial_MetaData), NewProp_GizmoMeshMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_Inner = { "LayerInfos", nullptr, (EPropertyFlags)0x0104000800020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos = { "LayerInfos", nullptr, (EPropertyFlags)0x0114000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, LayerInfos), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerInfos_MetaData), NewProp_LayerInfos_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType = { "SnapType", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, SnapType), Z_Construct_UEnum_Landscape_ELandscapeGizmoSnapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapType_MetaData), NewProp_SnapType_MetaData) }; // 1980477895
void Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_SetBit(void* Obj)
{
	((ALandscapeGizmoActiveActor*)Obj)->bFollowTerrainHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight = { "bFollowTerrainHeight", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeGizmoActiveActor), &Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFollowTerrainHeight_MetaData), NewProp_bFollowTerrainHeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation = { "UnsnappedRotation", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeGizmoActiveActor, UnsnappedRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnsnappedRotation_MetaData), NewProp_UnsnappedRotation_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_DataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_TextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampledNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SampleSizeY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_CachedScaleXY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_FrustumVerts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoDataMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_GizmoMeshMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_LayerInfos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_SnapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_bFollowTerrainHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::NewProp_UnsnappedRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeGizmoActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::ClassParams = {
	&ALandscapeGizmoActiveActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::PropPointers), 0),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeGizmoActiveActor()
{
	if (!Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.OuterSingleton, Z_Construct_UClass_ALandscapeGizmoActiveActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeGizmoActiveActor.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscapeGizmoActiveActor>()
{
	return ALandscapeGizmoActiveActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeGizmoActiveActor);
ALandscapeGizmoActiveActor::~ALandscapeGizmoActiveActor() {}
// End Class ALandscapeGizmoActiveActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeGizmoType_StaticEnum, TEXT("ELandscapeGizmoType"), &Z_Registration_Info_UEnum_ELandscapeGizmoType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2198725929U) },
		{ ELandscapeGizmoSnapType_StaticEnum, TEXT("ELandscapeGizmoSnapType"), &Z_Registration_Info_UEnum_ELandscapeGizmoSnapType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1980477895U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FGizmoSelectData::StaticStruct, Z_Construct_UScriptStruct_FGizmoSelectData_Statics::NewStructOps, TEXT("GizmoSelectData"), &Z_Registration_Info_UScriptStruct_GizmoSelectData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGizmoSelectData), 674385443U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeGizmoActiveActor, ALandscapeGizmoActiveActor::StaticClass, TEXT("ALandscapeGizmoActiveActor"), &Z_Registration_Info_UClass_ALandscapeGizmoActiveActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeGizmoActiveActor), 963535732U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_1687703878(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_LandscapeGizmoActiveActor_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
