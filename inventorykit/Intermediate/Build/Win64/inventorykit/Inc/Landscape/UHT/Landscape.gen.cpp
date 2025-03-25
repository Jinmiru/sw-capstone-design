// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Classes/Landscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscape() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeProxy();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeComponent_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EHeightmapRTType();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeBlendMode();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ERTDrawingType();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_EWeightmapRTType();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayer();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerBrush();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin Enum ELandscapeSetupErrors
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeSetupErrors;
static UEnum* ELandscapeSetupErrors_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeSetupErrors.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeSetupErrors.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeSetupErrors"));
	}
	return Z_Registration_Info_UEnum_ELandscapeSetupErrors.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeSetupErrors>()
{
	return ELandscapeSetupErrors_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LSE_CollsionXY.Comment", "/** There was already component with same X,Y. */" },
		{ "LSE_CollsionXY.Name", "LSE_CollsionXY" },
		{ "LSE_CollsionXY.ToolTip", "There was already component with same X,Y." },
		{ "LSE_MAX.Name", "LSE_MAX" },
		{ "LSE_NoLandscapeInfo.Comment", "/** No Landscape Info available. */" },
		{ "LSE_NoLandscapeInfo.Name", "LSE_NoLandscapeInfo" },
		{ "LSE_NoLandscapeInfo.ToolTip", "No Landscape Info available." },
		{ "LSE_NoLayerInfo.Comment", "/** No Layer Info, need to add proper layers. */" },
		{ "LSE_NoLayerInfo.Name", "LSE_NoLayerInfo" },
		{ "LSE_NoLayerInfo.ToolTip", "No Layer Info, need to add proper layers." },
		{ "LSE_None.Name", "LSE_None" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LSE_None", (int64)LSE_None },
		{ "LSE_NoLandscapeInfo", (int64)LSE_NoLandscapeInfo },
		{ "LSE_CollsionXY", (int64)LSE_CollsionXY },
		{ "LSE_NoLayerInfo", (int64)LSE_NoLayerInfo },
		{ "LSE_MAX", (int64)LSE_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeSetupErrors",
	"ELandscapeSetupErrors",
	Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeSetupErrors()
{
	if (!Z_Registration_Info_UEnum_ELandscapeSetupErrors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeSetupErrors.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeSetupErrors_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeSetupErrors.InnerSingleton;
}
// End Enum ELandscapeSetupErrors

// Begin Enum ERTDrawingType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTDrawingType;
static UEnum* ERTDrawingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTDrawingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTDrawingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ERTDrawingType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ERTDrawingType"));
	}
	return Z_Registration_Info_UEnum_ERTDrawingType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ERTDrawingType>()
{
	return ERTDrawingType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ERTDrawingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "RTAtlas.Name", "ERTDrawingType::RTAtlas" },
		{ "RTAtlasToNonAtlas.Name", "ERTDrawingType::RTAtlasToNonAtlas" },
		{ "RTMips.Name", "ERTDrawingType::RTMips" },
		{ "RTNonAtlas.Name", "ERTDrawingType::RTNonAtlas" },
		{ "RTNonAtlasToAtlas.Name", "ERTDrawingType::RTNonAtlasToAtlas" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTDrawingType::RTAtlas", (int64)ERTDrawingType::RTAtlas },
		{ "ERTDrawingType::RTAtlasToNonAtlas", (int64)ERTDrawingType::RTAtlasToNonAtlas },
		{ "ERTDrawingType::RTNonAtlasToAtlas", (int64)ERTDrawingType::RTNonAtlasToAtlas },
		{ "ERTDrawingType::RTNonAtlas", (int64)ERTDrawingType::RTNonAtlas },
		{ "ERTDrawingType::RTMips", (int64)ERTDrawingType::RTMips },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ERTDrawingType",
	"ERTDrawingType",
	Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ERTDrawingType()
{
	if (!Z_Registration_Info_UEnum_ERTDrawingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTDrawingType.InnerSingleton, Z_Construct_UEnum_Landscape_ERTDrawingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTDrawingType.InnerSingleton;
}
// End Enum ERTDrawingType

// Begin Enum EHeightmapRTType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHeightmapRTType;
static UEnum* EHeightmapRTType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHeightmapRTType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHeightmapRTType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EHeightmapRTType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("EHeightmapRTType"));
	}
	return Z_Registration_Info_UEnum_EHeightmapRTType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<EHeightmapRTType>()
{
	return EHeightmapRTType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "HeightmapRT_BoundaryNormal.Name", "EHeightmapRTType::HeightmapRT_BoundaryNormal" },
		{ "HeightmapRT_CombinedAtlas.Name", "EHeightmapRTType::HeightmapRT_CombinedAtlas" },
		{ "HeightmapRT_CombinedNonAtlas.Name", "EHeightmapRTType::HeightmapRT_CombinedNonAtlas" },
		{ "HeightmapRT_Count.Name", "EHeightmapRTType::HeightmapRT_Count" },
		{ "HeightmapRT_Mip1.Comment", "// HACK [chris.tchou] remove once we have a better boundary normal solution\n// Mips RT\n" },
		{ "HeightmapRT_Mip1.Name", "EHeightmapRTType::HeightmapRT_Mip1" },
		{ "HeightmapRT_Mip1.ToolTip", "HACK [chris.tchou] remove once we have a better boundary normal solution\nMips RT" },
		{ "HeightmapRT_Mip2.Name", "EHeightmapRTType::HeightmapRT_Mip2" },
		{ "HeightmapRT_Mip3.Name", "EHeightmapRTType::HeightmapRT_Mip3" },
		{ "HeightmapRT_Mip4.Name", "EHeightmapRTType::HeightmapRT_Mip4" },
		{ "HeightmapRT_Mip5.Name", "EHeightmapRTType::HeightmapRT_Mip5" },
		{ "HeightmapRT_Mip6.Name", "EHeightmapRTType::HeightmapRT_Mip6" },
		{ "HeightmapRT_Mip7.Name", "EHeightmapRTType::HeightmapRT_Mip7" },
		{ "HeightmapRT_Scratch1.Name", "EHeightmapRTType::HeightmapRT_Scratch1" },
		{ "HeightmapRT_Scratch2.Name", "EHeightmapRTType::HeightmapRT_Scratch2" },
		{ "HeightmapRT_Scratch3.Name", "EHeightmapRTType::HeightmapRT_Scratch3" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHeightmapRTType::HeightmapRT_CombinedAtlas", (int64)EHeightmapRTType::HeightmapRT_CombinedAtlas },
		{ "EHeightmapRTType::HeightmapRT_CombinedNonAtlas", (int64)EHeightmapRTType::HeightmapRT_CombinedNonAtlas },
		{ "EHeightmapRTType::HeightmapRT_Scratch1", (int64)EHeightmapRTType::HeightmapRT_Scratch1 },
		{ "EHeightmapRTType::HeightmapRT_Scratch2", (int64)EHeightmapRTType::HeightmapRT_Scratch2 },
		{ "EHeightmapRTType::HeightmapRT_Scratch3", (int64)EHeightmapRTType::HeightmapRT_Scratch3 },
		{ "EHeightmapRTType::HeightmapRT_BoundaryNormal", (int64)EHeightmapRTType::HeightmapRT_BoundaryNormal },
		{ "EHeightmapRTType::HeightmapRT_Mip1", (int64)EHeightmapRTType::HeightmapRT_Mip1 },
		{ "EHeightmapRTType::HeightmapRT_Mip2", (int64)EHeightmapRTType::HeightmapRT_Mip2 },
		{ "EHeightmapRTType::HeightmapRT_Mip3", (int64)EHeightmapRTType::HeightmapRT_Mip3 },
		{ "EHeightmapRTType::HeightmapRT_Mip4", (int64)EHeightmapRTType::HeightmapRT_Mip4 },
		{ "EHeightmapRTType::HeightmapRT_Mip5", (int64)EHeightmapRTType::HeightmapRT_Mip5 },
		{ "EHeightmapRTType::HeightmapRT_Mip6", (int64)EHeightmapRTType::HeightmapRT_Mip6 },
		{ "EHeightmapRTType::HeightmapRT_Mip7", (int64)EHeightmapRTType::HeightmapRT_Mip7 },
		{ "EHeightmapRTType::HeightmapRT_Count", (int64)EHeightmapRTType::HeightmapRT_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"EHeightmapRTType",
	"EHeightmapRTType",
	Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_EHeightmapRTType()
{
	if (!Z_Registration_Info_UEnum_EHeightmapRTType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHeightmapRTType.InnerSingleton, Z_Construct_UEnum_Landscape_EHeightmapRTType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHeightmapRTType.InnerSingleton;
}
// End Enum EHeightmapRTType

// Begin Enum EWeightmapRTType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWeightmapRTType;
static UEnum* EWeightmapRTType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWeightmapRTType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWeightmapRTType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_EWeightmapRTType, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("EWeightmapRTType"));
	}
	return Z_Registration_Info_UEnum_EWeightmapRTType.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<EWeightmapRTType>()
{
	return EWeightmapRTType_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "WeightmapRT_Count.Name", "EWeightmapRTType::WeightmapRT_Count" },
		{ "WeightmapRT_Mip0.Comment", "// Mips RT\n" },
		{ "WeightmapRT_Mip0.Name", "EWeightmapRTType::WeightmapRT_Mip0" },
		{ "WeightmapRT_Mip0.ToolTip", "Mips RT" },
		{ "WeightmapRT_Mip1.Name", "EWeightmapRTType::WeightmapRT_Mip1" },
		{ "WeightmapRT_Mip2.Name", "EWeightmapRTType::WeightmapRT_Mip2" },
		{ "WeightmapRT_Mip3.Name", "EWeightmapRTType::WeightmapRT_Mip3" },
		{ "WeightmapRT_Mip4.Name", "EWeightmapRTType::WeightmapRT_Mip4" },
		{ "WeightmapRT_Mip5.Name", "EWeightmapRTType::WeightmapRT_Mip5" },
		{ "WeightmapRT_Mip6.Name", "EWeightmapRTType::WeightmapRT_Mip6" },
		{ "WeightmapRT_Mip7.Name", "EWeightmapRTType::WeightmapRT_Mip7" },
		{ "WeightmapRT_Scratch1.Name", "EWeightmapRTType::WeightmapRT_Scratch1" },
		{ "WeightmapRT_Scratch2.Name", "EWeightmapRTType::WeightmapRT_Scratch2" },
		{ "WeightmapRT_Scratch3.Name", "EWeightmapRTType::WeightmapRT_Scratch3" },
		{ "WeightmapRT_Scratch_RGBA.Name", "EWeightmapRTType::WeightmapRT_Scratch_RGBA" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWeightmapRTType::WeightmapRT_Scratch_RGBA", (int64)EWeightmapRTType::WeightmapRT_Scratch_RGBA },
		{ "EWeightmapRTType::WeightmapRT_Scratch1", (int64)EWeightmapRTType::WeightmapRT_Scratch1 },
		{ "EWeightmapRTType::WeightmapRT_Scratch2", (int64)EWeightmapRTType::WeightmapRT_Scratch2 },
		{ "EWeightmapRTType::WeightmapRT_Scratch3", (int64)EWeightmapRTType::WeightmapRT_Scratch3 },
		{ "EWeightmapRTType::WeightmapRT_Mip0", (int64)EWeightmapRTType::WeightmapRT_Mip0 },
		{ "EWeightmapRTType::WeightmapRT_Mip1", (int64)EWeightmapRTType::WeightmapRT_Mip1 },
		{ "EWeightmapRTType::WeightmapRT_Mip2", (int64)EWeightmapRTType::WeightmapRT_Mip2 },
		{ "EWeightmapRTType::WeightmapRT_Mip3", (int64)EWeightmapRTType::WeightmapRT_Mip3 },
		{ "EWeightmapRTType::WeightmapRT_Mip4", (int64)EWeightmapRTType::WeightmapRT_Mip4 },
		{ "EWeightmapRTType::WeightmapRT_Mip5", (int64)EWeightmapRTType::WeightmapRT_Mip5 },
		{ "EWeightmapRTType::WeightmapRT_Mip6", (int64)EWeightmapRTType::WeightmapRT_Mip6 },
		{ "EWeightmapRTType::WeightmapRT_Mip7", (int64)EWeightmapRTType::WeightmapRT_Mip7 },
		{ "EWeightmapRTType::WeightmapRT_Count", (int64)EWeightmapRTType::WeightmapRT_Count },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"EWeightmapRTType",
	"EWeightmapRTType",
	Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_EWeightmapRTType()
{
	if (!Z_Registration_Info_UEnum_EWeightmapRTType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWeightmapRTType.InnerSingleton, Z_Construct_UEnum_Landscape_EWeightmapRTType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWeightmapRTType.InnerSingleton;
}
// End Enum EWeightmapRTType

// Begin ScriptStruct FLandscapeLayerBrush
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeLayerBrush;
class UScriptStruct* FLandscapeLayerBrush::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayerBrush, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayerBrush"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayerBrush>()
{
	return FLandscapeLayerBrush::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintBrush_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlueprintBrush;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayerBrush>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush = { "BlueprintBrush", nullptr, (EPropertyFlags)0x0144000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayerBrush, BlueprintBrush), Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueprintBrush_MetaData), NewProp_BlueprintBrush_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewProp_BlueprintBrush,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeLayerBrush",
	IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers, nullptr),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::PropPointers), 0),
	sizeof(FLandscapeLayerBrush),
	alignof(FLandscapeLayerBrush),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayerBrush()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayerBrush.InnerSingleton;
}
// End ScriptStruct FLandscapeLayerBrush

// Begin Enum ELandscapeBlendMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELandscapeBlendMode;
static UEnum* ELandscapeBlendMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ELandscapeBlendMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ELandscapeBlendMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Landscape_ELandscapeBlendMode, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("ELandscapeBlendMode"));
	}
	return Z_Registration_Info_UEnum_ELandscapeBlendMode.OuterSingleton;
}
template<> LANDSCAPE_API UEnum* StaticEnum<ELandscapeBlendMode>()
{
	return ELandscapeBlendMode_StaticEnum();
}
struct Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "LSBM_AdditiveBlend.Name", "LSBM_AdditiveBlend" },
		{ "LSBM_AlphaBlend.Name", "LSBM_AlphaBlend" },
		{ "LSBM_MAX.Name", "LSBM_MAX" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "LSBM_AdditiveBlend", (int64)LSBM_AdditiveBlend },
		{ "LSBM_AlphaBlend", (int64)LSBM_AlphaBlend },
		{ "LSBM_MAX", (int64)LSBM_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	"ELandscapeBlendMode",
	"ELandscapeBlendMode",
	Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Landscape_ELandscapeBlendMode()
{
	if (!Z_Registration_Info_UEnum_ELandscapeBlendMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELandscapeBlendMode.InnerSingleton, Z_Construct_UEnum_Landscape_ELandscapeBlendMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ELandscapeBlendMode.InnerSingleton;
}
// End Enum ELandscapeBlendMode

// Begin ScriptStruct FLandscapeLayer
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeLayer;
class UScriptStruct* FLandscapeLayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeLayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeLayer, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeLayer"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayer.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeLayer>()
{
	return FLandscapeLayer::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[] = {
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLocked_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlendMode_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brushes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerAllocationBlend_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightmapAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WeightmapAlpha;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Brushes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Brushes;
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WeightmapLayerAllocationBlend_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightmapLayerAllocationBlend_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_WeightmapLayerAllocationBlend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeLayer>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guid_MetaData), NewProp_Guid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((FLandscapeLayer*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeLayer), &Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisible_MetaData), NewProp_bVisible_MetaData) };
void Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((FLandscapeLayer*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FLandscapeLayer), &Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLocked_MetaData), NewProp_bLocked_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha = { "HeightmapAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, HeightmapAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapAlpha_MetaData), NewProp_HeightmapAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha = { "WeightmapAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, WeightmapAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapAlpha_MetaData), NewProp_WeightmapAlpha_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, BlendMode), Z_Construct_UEnum_Landscape_ELandscapeBlendMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlendMode_MetaData), NewProp_BlendMode_MetaData) }; // 3498639380
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_Inner = { "Brushes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeLayerBrush, METADATA_PARAMS(0, nullptr) }; // 2773821604
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes = { "Brushes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, Brushes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brushes_MetaData), NewProp_Brushes_MetaData) }; // 2773821604
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_ValueProp = { "WeightmapLayerAllocationBlend", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_Key_KeyProp = { "WeightmapLayerAllocationBlend_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeLayerInfoObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend = { "WeightmapLayerAllocationBlend", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeLayer, WeightmapLayerAllocationBlend), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapLayerAllocationBlend_MetaData), NewProp_WeightmapLayerAllocationBlend_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Guid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_HeightmapAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_BlendMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_Brushes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewProp_WeightmapLayerAllocationBlend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeLayer_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeLayer",
	Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::PropPointers),
	sizeof(FLandscapeLayer),
	alignof(FLandscapeLayer),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeLayer_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeLayer()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeLayer.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeLayer.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeLayer_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeLayer.InnerSingleton;
}
// End ScriptStruct FLandscapeLayer

// Begin Class ALandscape Function ForceLayersFullUpdate
#if WITH_EDITOR
struct Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscape, nullptr, "ForceLayersFullUpdate", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(ALandscape::execForceLayersFullUpdate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ForceLayersFullUpdate();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class ALandscape Function ForceLayersFullUpdate

// Begin Class ALandscape Function GetTargetLayerNames
struct Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics
{
	struct Landscape_eventGetTargetLayerNames_Parms
	{
		bool bInIncludeVisibilityLayer;
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Editor" },
		{ "Comment", "/** \n\x09* Retrieves the names of valid paint layers on this landscape (editor-only : returns nothing at runtime) \n\x09* @Param bInIncludeVisibilityLayer whether the visibility layer's name should be included in the list or not\n\x09* @return the list of paint layer names\n\x09*/" },
		{ "CPP_Default_bInIncludeVisibilityLayer", "false" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Retrieves the names of valid paint layers on this landscape (editor-only : returns nothing at runtime)\n@Param bInIncludeVisibilityLayer whether the visibility layer's name should be included in the list or not\n@return the list of paint layer names" },
	};
#endif // WITH_METADATA
	static void NewProp_bInIncludeVisibilityLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIncludeVisibilityLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_bInIncludeVisibilityLayer_SetBit(void* Obj)
{
	((Landscape_eventGetTargetLayerNames_Parms*)Obj)->bInIncludeVisibilityLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_bInIncludeVisibilityLayer = { "bInIncludeVisibilityLayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Landscape_eventGetTargetLayerNames_Parms), &Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_bInIncludeVisibilityLayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventGetTargetLayerNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_bInIncludeVisibilityLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscape, nullptr, "GetTargetLayerNames", nullptr, nullptr, Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::Landscape_eventGetTargetLayerNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::Landscape_eventGetTargetLayerNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscape_GetTargetLayerNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscape_GetTargetLayerNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscape::execGetTargetLayerNames)
{
	P_GET_UBOOL(Z_Param_bInIncludeVisibilityLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetTargetLayerNames(Z_Param_bInIncludeVisibilityLayer);
	P_NATIVE_END;
}
// End Class ALandscape Function GetTargetLayerNames

// Begin Class ALandscape Function RenderHeightmap
struct Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics
{
	struct Landscape_eventRenderHeightmap_Parms
	{
		FTransform InWorldTransform;
		FBox2D InExtents;
		UTextureRenderTarget2D* OutRenderTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime" },
		{ "Comment", "/**\n\x09* Render the final heightmap in the requested top-down window as one -atlased- texture in the provided render target 2D\n\x09*  Can be called at runtime.\n\x09* @param InWorldTransform World transform of the area where the texture should be rendered\n\x09* @param InExtents Extents of the area where the texture should be rendered (local to InWorldTransform). If size is zero, then the entire loaded landscape will be exported.\n\x09* @param OutRenderTarget Render target in which the texture will be rendered. The size/format of the render target will be respected.\n\x09* @return false in case of failure (e.g. invalid inputs, incompatible render target format...)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Render the final heightmap in the requested top-down window as one -atlased- texture in the provided render target 2D\n Can be called at runtime.\n@param InWorldTransform World transform of the area where the texture should be rendered\n@param InExtents Extents of the area where the texture should be rendered (local to InWorldTransform). If size is zero, then the entire loaded landscape will be exported.\n@param OutRenderTarget Render target in which the texture will be rendered. The size/format of the render target will be respected.\n@return false in case of failure (e.g. invalid inputs, incompatible render target format...)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InExtents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutRenderTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_InWorldTransform = { "InWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderHeightmap_Parms, InWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderHeightmap_Parms, InExtents), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_OutRenderTarget = { "OutRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderHeightmap_Parms, OutRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Landscape_eventRenderHeightmap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Landscape_eventRenderHeightmap_Parms), &Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_InWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_InExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_OutRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscape, nullptr, "RenderHeightmap", nullptr, nullptr, Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::Landscape_eventRenderHeightmap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::Landscape_eventRenderHeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscape_RenderHeightmap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscape_RenderHeightmap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscape::execRenderHeightmap)
{
	P_GET_STRUCT(FTransform,Z_Param_InWorldTransform);
	P_GET_STRUCT(FBox2D,Z_Param_InExtents);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutRenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RenderHeightmap(Z_Param_InWorldTransform,Z_Param_InExtents,Z_Param_OutRenderTarget);
	P_NATIVE_END;
}
// End Class ALandscape Function RenderHeightmap

// Begin Class ALandscape Function RenderWeightmap
struct Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics
{
	struct Landscape_eventRenderWeightmap_Parms
	{
		FTransform InWorldTransform;
		FBox2D InExtents;
		FName InWeightmapLayerName;
		UTextureRenderTarget2D* OutRenderTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime" },
		{ "Comment", "/**\n\x09* Render the final weightmap for the requested layer, in the requested top-down window, as one -atlased- texture in the provided render target 2D\n\x09*  Can be called at runtime.\n\x09* @param InWorldTransform World transform of the area where the texture should be rendered\n\x09* @param InExtents Extents of the area where the texture should be rendered (local to InWorldTransform). If size is zero, then the entire loaded landscape will be exported.\n\x09* @param InWeightmapLayerName Weightmap layer that is being requested to render\n\x09* @param OutRenderTarget Render target in which the texture will be rendered. The size/format of the render target will be respected.\n\x09* @return false in case of failure (e.g. invalid inputs, incompatible render target format...)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Render the final weightmap for the requested layer, in the requested top-down window, as one -atlased- texture in the provided render target 2D\n Can be called at runtime.\n@param InWorldTransform World transform of the area where the texture should be rendered\n@param InExtents Extents of the area where the texture should be rendered (local to InWorldTransform). If size is zero, then the entire loaded landscape will be exported.\n@param InWeightmapLayerName Weightmap layer that is being requested to render\n@param OutRenderTarget Render target in which the texture will be rendered. The size/format of the render target will be respected.\n@return false in case of failure (e.g. invalid inputs, incompatible render target format...)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InExtents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutRenderTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_InWorldTransform = { "InWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmap_Parms, InWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmap_Parms, InExtents), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmap_Parms, InWeightmapLayerName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_OutRenderTarget = { "OutRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmap_Parms, OutRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Landscape_eventRenderWeightmap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Landscape_eventRenderWeightmap_Parms), &Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_InWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_InExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_InWeightmapLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_OutRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscape, nullptr, "RenderWeightmap", nullptr, nullptr, Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::Landscape_eventRenderWeightmap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::Landscape_eventRenderWeightmap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscape_RenderWeightmap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscape_RenderWeightmap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscape::execRenderWeightmap)
{
	P_GET_STRUCT(FTransform,Z_Param_InWorldTransform);
	P_GET_STRUCT(FBox2D,Z_Param_InExtents);
	P_GET_PROPERTY(FNameProperty,Z_Param_InWeightmapLayerName);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OutRenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RenderWeightmap(Z_Param_InWorldTransform,Z_Param_InExtents,Z_Param_InWeightmapLayerName,Z_Param_OutRenderTarget);
	P_NATIVE_END;
}
// End Class ALandscape Function RenderWeightmap

// Begin Class ALandscape Function RenderWeightmaps
struct Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics
{
	struct Landscape_eventRenderWeightmaps_Parms
	{
		FTransform InWorldTransform;
		FBox2D InExtents;
		TArray<FName> InWeightmapLayerNames;
		UTextureRenderTarget* OutRenderTarget;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape|Runtime" },
		{ "Comment", "/**\n\x09* Render the final weightmaps for the requested layers, in the requested top-down window, as one -atlased- texture in the provided render target (2D or 2DArray) \n\x09*  Can be called at runtime.\n\x09* @param InWorldTransform World transform of the area where the texture should be rendered\n\x09* @param InExtents Extents of the area where the texture should be rendered (local to InWorldTransform). If size is zero, then the entire loaded landscape will be exported.\n\x09* @param InWeightmapLayerNames List of weightmap layers that are being requested to render\n\x09* @param OutRenderTarget Render target in which the texture will be rendered. The size/format of the render target will be respected.\n\x09*  - If a UTextureRenderTarget2D is passed, the requested layers will be packed in the RGBA channels in order (up to the number of channels available with the render target's format).\n\x09*  - If a UTextureRenderTarget2DArray is passed, the requested layers will be packed in the RGBA channels of each slice (up to the number of channels * slices available with the render target's format and number of slices).\n\x09* @return false in case of failure (e.g. invalid inputs, incompatible render target format...)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Render the final weightmaps for the requested layers, in the requested top-down window, as one -atlased- texture in the provided render target (2D or 2DArray)\n Can be called at runtime.\n@param InWorldTransform World transform of the area where the texture should be rendered\n@param InExtents Extents of the area where the texture should be rendered (local to InWorldTransform). If size is zero, then the entire loaded landscape will be exported.\n@param InWeightmapLayerNames List of weightmap layers that are being requested to render\n@param OutRenderTarget Render target in which the texture will be rendered. The size/format of the render target will be respected.\n - If a UTextureRenderTarget2D is passed, the requested layers will be packed in the RGBA channels in order (up to the number of channels available with the render target's format).\n - If a UTextureRenderTarget2DArray is passed, the requested layers will be packed in the RGBA channels of each slice (up to the number of channels * slices available with the render target's format and number of slices).\n@return false in case of failure (e.g. invalid inputs, incompatible render target format...)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InWorldTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InExtents;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InWeightmapLayerNames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutRenderTarget;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InWorldTransform = { "InWorldTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmaps_Parms, InWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InExtents = { "InExtents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmaps_Parms, InExtents), Z_Construct_UScriptStruct_FBox2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InWeightmapLayerNames_Inner = { "InWeightmapLayerNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InWeightmapLayerNames = { "InWeightmapLayerNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmaps_Parms, InWeightmapLayerNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWeightmapLayerNames_MetaData), NewProp_InWeightmapLayerNames_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_OutRenderTarget = { "OutRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Landscape_eventRenderWeightmaps_Parms, OutRenderTarget), Z_Construct_UClass_UTextureRenderTarget_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Landscape_eventRenderWeightmaps_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Landscape_eventRenderWeightmaps_Parms), &Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InWorldTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InExtents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InWeightmapLayerNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_InWeightmapLayerNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_OutRenderTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscape, nullptr, "RenderWeightmaps", nullptr, nullptr, Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::Landscape_eventRenderWeightmaps_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::Landscape_eventRenderWeightmaps_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscape_RenderWeightmaps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscape_RenderWeightmaps_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscape::execRenderWeightmaps)
{
	P_GET_STRUCT(FTransform,Z_Param_InWorldTransform);
	P_GET_STRUCT(FBox2D,Z_Param_InExtents);
	P_GET_TARRAY_REF(FName,Z_Param_Out_InWeightmapLayerNames);
	P_GET_OBJECT(UTextureRenderTarget,Z_Param_OutRenderTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RenderWeightmaps(Z_Param_InWorldTransform,Z_Param_InExtents,Z_Param_Out_InWeightmapLayerNames,Z_Param_OutRenderTarget);
	P_NATIVE_END;
}
// End Class ALandscape Function RenderWeightmaps

// Begin Class ALandscape
void ALandscape::StaticRegisterNativesALandscape()
{
	UClass* Class = ALandscape::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
#if WITH_EDITOR
		{ "ForceLayersFullUpdate", &ALandscape::execForceLayersFullUpdate },
#endif // WITH_EDITOR
		{ "GetTargetLayerNames", &ALandscape::execGetTargetLayerNames },
		{ "RenderHeightmap", &ALandscape::execRenderHeightmap },
		{ "RenderWeightmap", &ALandscape::execRenderWeightmap },
		{ "RenderWeightmaps", &ALandscape::execRenderWeightmaps },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscape);
UClass* Z_Construct_UClass_ALandscape_NoRegister()
{
	return ALandscape::StaticClass();
}
struct Z_Construct_UClass_ALandscape_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Mobility Mobility Attachment Physics Debug" },
		{ "IncludePath", "Landscape.h" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAreNewLandscapeActorsSpatiallyLoaded_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Landscape actor has authority on default streaming behavior for new actors : LandscapeStreamingProxies & LandscapeSplineActors */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Landscape actor has authority on default streaming behavior for new actors : LandscapeStreamingProxies & LandscapeSplineActors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeGridSizeInNameForLandscapeActors_MetaData[] = {
		{ "Comment", "/** If true, LandscapeStreamingProxy actors have the grid size included in their name, for backward compatibility we also check the AWorldSettings::bIncludeGridSizeInNameForPartitionedActors */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "If true, LandscapeStreamingProxy actors have the grid size included in their name, for backward compatibility we also check the AWorldSettings::bIncludeGridSizeInNameForPartitionedActors" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanHaveLayersContent_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeneratedLandscapeSplineMeshesActors_MetaData[] = {
		{ "Comment", "/*\n\x09 * If true, WorldPartitionLandscapeSplineMeshesBuilder is responsible of generating partitioned actors of type ALandscapeSplineMeshesActor that will contain all landscape spline/controlpoints static meshes. \n\x09 * Source components will be editor only and hidden in game for PIE.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "* If true, WorldPartitionLandscapeSplineMeshesBuilder is responsible of generating partitioned actors of type ALandscapeSplineMeshesActor that will contain all landscape spline/controlpoints static meshes.\n* Source components will be editor only and hidden in game for PIE." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesTargetLayerGuid_MetaData[] = {
		{ "Comment", "/** Target Landscape Layer for Landscape Splines */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Target Landscape Layer for Landscape Splines" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableEditorLayersTick_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWarnedGlobalMergeDimensionsExceeded_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapRTList_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedStreamingInTextures_MetaData[] = {
		{ "Comment", "/** List of textures that are not fully streamed in yet (updated every frame to track textures that have finished streaming in) */" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "List of textures that are not fully streamed in yet (updated every frame to track textures that have finished streaming in)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeSplinesAffectedComponents_MetaData[] = {
		{ "Comment", "/** Components affected by landscape splines (used to partially clear Layer Reserved for Splines) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Landscape.h" },
		{ "ToolTip", "Components affected by landscape splines (used to partially clear Layer Reserved for Splines)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeLayersAreInitialized_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeLayersAreInitializedForNormalCapture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WasCompilingShaders_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerContentUpdateModes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSplineLayerUpdateRequested_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Landscape.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bAreNewLandscapeActorsSpatiallyLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreNewLandscapeActorsSpatiallyLoaded;
	static void NewProp_bIncludeGridSizeInNameForLandscapeActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeGridSizeInNameForLandscapeActors;
	static void NewProp_bCanHaveLayersContent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanHaveLayersContent;
	static void NewProp_bUseGeneratedLandscapeSplineMeshesActors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGeneratedLandscapeSplineMeshesActors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeSplinesTargetLayerGuid;
	static void NewProp_bEnableEditorLayersTick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableEditorLayersTick;
	static void NewProp_bWarnedGlobalMergeDimensionsExceeded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWarnedGlobalMergeDimensionsExceeded;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LandscapeLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HeightmapRTList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HeightmapRTList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeightmapRTList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WeightmapRTList;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedStreamingInTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TrackedStreamingInTextures;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LandscapeSplinesAffectedComponents_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LandscapeSplinesAffectedComponents;
	static void NewProp_bLandscapeLayersAreInitialized_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeLayersAreInitialized;
	static void NewProp_bLandscapeLayersAreInitializedForNormalCapture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeLayersAreInitializedForNormalCapture;
	static void NewProp_bLandscapeLayersAreUsingLocalMerge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLandscapeLayersAreUsingLocalMerge;
	static void NewProp_WasCompilingShaders_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_WasCompilingShaders;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_LayerContentUpdateModes;
	static void NewProp_bSplineLayerUpdateRequested_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSplineLayerUpdateRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscape_ForceLayersFullUpdate, "ForceLayersFullUpdate" }, // 1950062314
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_ALandscape_GetTargetLayerNames, "GetTargetLayerNames" }, // 3904213872
		{ &Z_Construct_UFunction_ALandscape_RenderHeightmap, "RenderHeightmap" }, // 3221443014
		{ &Z_Construct_UFunction_ALandscape_RenderWeightmap, "RenderWeightmap" }, // 184441957
		{ &Z_Construct_UFunction_ALandscape_RenderWeightmaps, "RenderWeightmaps" }, // 101062642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscape>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_ALandscape_Statics::NewProp_bAreNewLandscapeActorsSpatiallyLoaded_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bAreNewLandscapeActorsSpatiallyLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bAreNewLandscapeActorsSpatiallyLoaded = { "bAreNewLandscapeActorsSpatiallyLoaded", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bAreNewLandscapeActorsSpatiallyLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAreNewLandscapeActorsSpatiallyLoaded_MetaData), NewProp_bAreNewLandscapeActorsSpatiallyLoaded_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bIncludeGridSizeInNameForLandscapeActors_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bIncludeGridSizeInNameForLandscapeActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bIncludeGridSizeInNameForLandscapeActors = { "bIncludeGridSizeInNameForLandscapeActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bIncludeGridSizeInNameForLandscapeActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeGridSizeInNameForLandscapeActors_MetaData), NewProp_bIncludeGridSizeInNameForLandscapeActors_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bCanHaveLayersContent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent = { "bCanHaveLayersContent", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanHaveLayersContent_MetaData), NewProp_bCanHaveLayersContent_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bUseGeneratedLandscapeSplineMeshesActors_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bUseGeneratedLandscapeSplineMeshesActors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bUseGeneratedLandscapeSplineMeshesActors = { "bUseGeneratedLandscapeSplineMeshesActors", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bUseGeneratedLandscapeSplineMeshesActors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGeneratedLandscapeSplineMeshesActors_MetaData), NewProp_bUseGeneratedLandscapeSplineMeshesActors_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid = { "LandscapeSplinesTargetLayerGuid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, LandscapeSplinesTargetLayerGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplinesTargetLayerGuid_MetaData), NewProp_LandscapeSplinesTargetLayerGuid_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bEnableEditorLayersTick_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bEnableEditorLayersTick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bEnableEditorLayersTick = { "bEnableEditorLayersTick", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bEnableEditorLayersTick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableEditorLayersTick_MetaData), NewProp_bEnableEditorLayersTick_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bWarnedGlobalMergeDimensionsExceeded_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bWarnedGlobalMergeDimensionsExceeded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bWarnedGlobalMergeDimensionsExceeded = { "bWarnedGlobalMergeDimensionsExceeded", nullptr, (EPropertyFlags)0x0010c00800202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bWarnedGlobalMergeDimensionsExceeded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWarnedGlobalMergeDimensionsExceeded_MetaData), NewProp_bWarnedGlobalMergeDimensionsExceeded_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_Inner = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FLandscapeLayer, METADATA_PARAMS(0, nullptr) }; // 2121096604
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, LandscapeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayers_MetaData), NewProp_LandscapeLayers_MetaData) }; // 2121096604
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList = { "HeightmapRTList", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, HeightmapRTList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightmapRTList_MetaData), NewProp_HeightmapRTList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_Inner = { "WeightmapRTList", nullptr, (EPropertyFlags)0x0104000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList = { "WeightmapRTList", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, WeightmapRTList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapRTList_MetaData), NewProp_WeightmapRTList_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_Inner = { "TrackedStreamingInTextures", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures = { "TrackedStreamingInTextures", nullptr, (EPropertyFlags)0x0014400800202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, TrackedStreamingInTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedStreamingInTextures_MetaData), NewProp_TrackedStreamingInTextures_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_ElementProp = { "LandscapeSplinesAffectedComponents", nullptr, (EPropertyFlags)0x0104000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULandscapeComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents = { "LandscapeSplinesAffectedComponents", nullptr, (EPropertyFlags)0x0144008800002008, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, LandscapeSplinesAffectedComponents), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeSplinesAffectedComponents_MetaData), NewProp_LandscapeSplinesAffectedComponents_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bLandscapeLayersAreInitialized = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized = { "bLandscapeLayersAreInitialized", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeLayersAreInitialized_MetaData), NewProp_bLandscapeLayersAreInitialized_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitializedForNormalCapture_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bLandscapeLayersAreInitializedForNormalCapture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitializedForNormalCapture = { "bLandscapeLayersAreInitializedForNormalCapture", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitializedForNormalCapture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeLayersAreInitializedForNormalCapture_MetaData), NewProp_bLandscapeLayersAreInitializedForNormalCapture_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bLandscapeLayersAreUsingLocalMerge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge = { "bLandscapeLayersAreUsingLocalMerge", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData), NewProp_bLandscapeLayersAreUsingLocalMerge_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_SetBit(void* Obj)
{
	((ALandscape*)Obj)->WasCompilingShaders = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders = { "WasCompilingShaders", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WasCompilingShaders_MetaData), NewProp_WasCompilingShaders_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes = { "LayerContentUpdateModes", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscape, LayerContentUpdateModes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerContentUpdateModes_MetaData), NewProp_LayerContentUpdateModes_MetaData) };
void Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_SetBit(void* Obj)
{
	((ALandscape*)Obj)->bSplineLayerUpdateRequested = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested = { "bSplineLayerUpdateRequested", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscape), &Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSplineLayerUpdateRequested_MetaData), NewProp_bSplineLayerUpdateRequested_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscape_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bAreNewLandscapeActorsSpatiallyLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bIncludeGridSizeInNameForLandscapeActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bCanHaveLayersContent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bUseGeneratedLandscapeSplineMeshesActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesTargetLayerGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bEnableEditorLayersTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bWarnedGlobalMergeDimensionsExceeded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_HeightmapRTList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WeightmapRTList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_TrackedStreamingInTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LandscapeSplinesAffectedComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitialized,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreInitializedForNormalCapture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bLandscapeLayersAreUsingLocalMerge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_WasCompilingShaders,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_LayerContentUpdateModes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscape_Statics::NewProp_bSplineLayerUpdateRequested,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ALandscape_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ALandscapeProxy,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscape_Statics::ClassParams = {
	&ALandscape::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscape_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::PropPointers), 0),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscape_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscape()
{
	if (!Z_Registration_Info_UClass_ALandscape.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscape.OuterSingleton, Z_Construct_UClass_ALandscape_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscape.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscape>()
{
	return ALandscape::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscape);
ALandscape::~ALandscape() {}
// End Class ALandscape

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ELandscapeSetupErrors_StaticEnum, TEXT("ELandscapeSetupErrors"), &Z_Registration_Info_UEnum_ELandscapeSetupErrors, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2347833483U) },
		{ ERTDrawingType_StaticEnum, TEXT("ERTDrawingType"), &Z_Registration_Info_UEnum_ERTDrawingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2629277411U) },
		{ EHeightmapRTType_StaticEnum, TEXT("EHeightmapRTType"), &Z_Registration_Info_UEnum_EHeightmapRTType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 33610801U) },
		{ EWeightmapRTType_StaticEnum, TEXT("EWeightmapRTType"), &Z_Registration_Info_UEnum_EWeightmapRTType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 274322346U) },
		{ ELandscapeBlendMode_StaticEnum, TEXT("ELandscapeBlendMode"), &Z_Registration_Info_UEnum_ELandscapeBlendMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3498639380U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeLayerBrush::StaticStruct, Z_Construct_UScriptStruct_FLandscapeLayerBrush_Statics::NewStructOps, TEXT("LandscapeLayerBrush"), &Z_Registration_Info_UScriptStruct_LandscapeLayerBrush, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeLayerBrush), 2773821604U) },
		{ FLandscapeLayer::StaticStruct, Z_Construct_UScriptStruct_FLandscapeLayer_Statics::NewStructOps, TEXT("LandscapeLayer"), &Z_Registration_Info_UScriptStruct_LandscapeLayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeLayer), 2121096604U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscape, ALandscape::StaticClass, TEXT("ALandscape"), &Z_Registration_Info_UClass_ALandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscape), 230460646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_1512916267(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Landscape_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
