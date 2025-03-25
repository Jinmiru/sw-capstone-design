// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Niagara/Public/NiagaraRibbonRendererProperties.h"
#include "Niagara/Public/NiagaraCommon.h"
#include "Niagara/Public/NiagaraRendererProperties.h"
#include "Serialization/StructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraRibbonRendererProperties() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties();
NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode();
NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References

// Begin Enum ENiagaraRibbonFacingMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode;
static UEnum* ENiagaraRibbonFacingMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonFacingMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonFacingMode>()
{
	return ENiagaraRibbonFacingMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.Comment", "/** Use Particles.RibbonFacing as the facing vector. */" },
		{ "Custom.Name", "ENiagaraRibbonFacingMode::Custom" },
		{ "Custom.ToolTip", "Use Particles.RibbonFacing as the facing vector." },
		{ "CustomSideVector.Comment", "/** Use Particles.RibbonFacing as the side vector, and calculate the facing vector from that.\n\x09 *  Using ribbon twist with this mode is NOT supported.\n\x09 */" },
		{ "CustomSideVector.Name", "ENiagaraRibbonFacingMode::CustomSideVector" },
		{ "CustomSideVector.ToolTip", "Use Particles.RibbonFacing as the side vector, and calculate the facing vector from that.\nUsing ribbon twist with this mode is NOT supported." },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "Screen.Comment", "/** Have the ribbon face the screen. */" },
		{ "Screen.Name", "ENiagaraRibbonFacingMode::Screen" },
		{ "Screen.ToolTip", "Have the ribbon face the screen." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonFacingMode::Screen", (int64)ENiagaraRibbonFacingMode::Screen },
		{ "ENiagaraRibbonFacingMode::Custom", (int64)ENiagaraRibbonFacingMode::Custom },
		{ "ENiagaraRibbonFacingMode::CustomSideVector", (int64)ENiagaraRibbonFacingMode::CustomSideVector },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonFacingMode",
	"ENiagaraRibbonFacingMode",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode.InnerSingleton;
}
// End Enum ENiagaraRibbonFacingMode

// Begin Enum ENiagaraRibbonAgeOffsetMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode;
static UEnum* ENiagaraRibbonAgeOffsetMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonAgeOffsetMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonAgeOffsetMode>()
{
	return ENiagaraRibbonAgeOffsetMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Clip.Comment", "/** Offset the UVs by age for smooth texture movement, but use the normalized age range directly as the UV range which will clip the texture for normalized age ranges that don't go from 0-1. */" },
		{ "Clip.Name", "ENiagaraRibbonAgeOffsetMode::Clip" },
		{ "Clip.ToolTip", "Offset the UVs by age for smooth texture movement, but use the normalized age range directly as the UV range which will clip the texture for normalized age ranges that don't go from 0-1." },
		{ "Comment", "/** Defines different modes for offsetting UVs by age when ordering ribbon particles using normalized age. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "Scale.Comment", "/** Offset the UVs by age for smooth texture movement, but scale the 0-1 UV range to the current normalized age range of the particles. */" },
		{ "Scale.Name", "ENiagaraRibbonAgeOffsetMode::Scale" },
		{ "Scale.ToolTip", "Offset the UVs by age for smooth texture movement, but scale the 0-1 UV range to the current normalized age range of the particles." },
		{ "ToolTip", "Defines different modes for offsetting UVs by age when ordering ribbon particles using normalized age." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonAgeOffsetMode::Scale", (int64)ENiagaraRibbonAgeOffsetMode::Scale },
		{ "ENiagaraRibbonAgeOffsetMode::Clip", (int64)ENiagaraRibbonAgeOffsetMode::Clip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonAgeOffsetMode",
	"ENiagaraRibbonAgeOffsetMode",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode.InnerSingleton;
}
// End Enum ENiagaraRibbonAgeOffsetMode

// Begin Enum ENiagaraRibbonDrawDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection;
static UEnum* ENiagaraRibbonDrawDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonDrawDirection"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonDrawDirection>()
{
	return ENiagaraRibbonDrawDirection_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BackToFront.Name", "ENiagaraRibbonDrawDirection::BackToFront" },
		{ "Comment", "/** This enum decides in which order the ribbon segments will be rendered */" },
		{ "FrontToBack.Name", "ENiagaraRibbonDrawDirection::FrontToBack" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "This enum decides in which order the ribbon segments will be rendered" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonDrawDirection::FrontToBack", (int64)ENiagaraRibbonDrawDirection::FrontToBack },
		{ "ENiagaraRibbonDrawDirection::BackToFront", (int64)ENiagaraRibbonDrawDirection::BackToFront },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonDrawDirection",
	"ENiagaraRibbonDrawDirection",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection.InnerSingleton;
}
// End Enum ENiagaraRibbonDrawDirection

// Begin Enum ENiagaraRibbonShapeMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode;
static UEnum* ENiagaraRibbonShapeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonShapeMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonShapeMode>()
{
	return ENiagaraRibbonShapeMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Custom.Comment", "/** Custom shape, defined by cross section. */" },
		{ "Custom.Name", "ENiagaraRibbonShapeMode::Custom" },
		{ "Custom.ToolTip", "Custom shape, defined by cross section." },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "MultiPlane.Comment", "/** Multiple Planes evenly rotated around the axis to 180 degrees. */" },
		{ "MultiPlane.Name", "ENiagaraRibbonShapeMode::MultiPlane" },
		{ "MultiPlane.ToolTip", "Multiple Planes evenly rotated around the axis to 180 degrees." },
		{ "Plane.Comment", "/** Default shape, flat plane facing the camera. */" },
		{ "Plane.Name", "ENiagaraRibbonShapeMode::Plane" },
		{ "Plane.ToolTip", "Default shape, flat plane facing the camera." },
		{ "Tube.Comment", "/** 3D Tube shape, from triangular to cylindrical depending on vertex count. */" },
		{ "Tube.Name", "ENiagaraRibbonShapeMode::Tube" },
		{ "Tube.ToolTip", "3D Tube shape, from triangular to cylindrical depending on vertex count." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonShapeMode::Plane", (int64)ENiagaraRibbonShapeMode::Plane },
		{ "ENiagaraRibbonShapeMode::MultiPlane", (int64)ENiagaraRibbonShapeMode::MultiPlane },
		{ "ENiagaraRibbonShapeMode::Tube", (int64)ENiagaraRibbonShapeMode::Tube },
		{ "ENiagaraRibbonShapeMode::Custom", (int64)ENiagaraRibbonShapeMode::Custom },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonShapeMode",
	"ENiagaraRibbonShapeMode",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode.InnerSingleton;
}
// End Enum ENiagaraRibbonShapeMode

// Begin ScriptStruct FNiagaraRibbonShapeCustomVertex
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex;
class UScriptStruct* FNiagaraRibbonShapeCustomVertex::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRibbonShapeCustomVertex"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRibbonShapeCustomVertex>()
{
	return FNiagaraRibbonShapeCustomVertex::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Normal_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureV_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Normal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextureV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRibbonShapeCustomVertex>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonShapeCustomVertex, Position), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewProp_Normal = { "Normal", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonShapeCustomVertex, Normal), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Normal_MetaData), NewProp_Normal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewProp_TextureV = { "TextureV", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonShapeCustomVertex, TextureV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureV_MetaData), NewProp_TextureV_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewProp_Normal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewProp_TextureV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraRibbonShapeCustomVertex",
	Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::PropPointers),
	sizeof(FNiagaraRibbonShapeCustomVertex),
	alignof(FNiagaraRibbonShapeCustomVertex),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex.InnerSingleton;
}
// End ScriptStruct FNiagaraRibbonShapeCustomVertex

// Begin Enum ENiagaraRibbonTessellationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode;
static UEnum* ENiagaraRibbonTessellationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonTessellationMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonTessellationMode>()
{
	return ENiagaraRibbonTessellationMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Automatic.Comment", "/** Default tessellation parameters. */" },
		{ "Automatic.Name", "ENiagaraRibbonTessellationMode::Automatic" },
		{ "Automatic.ToolTip", "Default tessellation parameters." },
		{ "Custom.Comment", "/** Custom tessellation parameters. */" },
		{ "Custom.Name", "ENiagaraRibbonTessellationMode::Custom" },
		{ "Custom.ToolTip", "Custom tessellation parameters." },
		{ "Disabled.Comment", "/** Disable tessellation entirely. */" },
		{ "Disabled.Name", "ENiagaraRibbonTessellationMode::Disabled" },
		{ "Disabled.ToolTip", "Disable tessellation entirely." },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonTessellationMode::Automatic", (int64)ENiagaraRibbonTessellationMode::Automatic },
		{ "ENiagaraRibbonTessellationMode::Custom", (int64)ENiagaraRibbonTessellationMode::Custom },
		{ "ENiagaraRibbonTessellationMode::Disabled", (int64)ENiagaraRibbonTessellationMode::Disabled },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonTessellationMode",
	"ENiagaraRibbonTessellationMode",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode.InnerSingleton;
}
// End Enum ENiagaraRibbonTessellationMode

// Begin Enum ENiagaraRibbonUVEdgeMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode;
static UEnum* ENiagaraRibbonUVEdgeMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonUVEdgeMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonUVEdgeMode>()
{
	return ENiagaraRibbonUVEdgeMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies options for handling UVs at the leading and trailing edges of ribbons. */" },
		{ "Locked.Comment", "/** The UV value at the edge will be locked to 0 at the leading edge, or locked to 1 at the\n\x09Trailing edge. */" },
		{ "Locked.Name", "ENiagaraRibbonUVEdgeMode::Locked" },
		{ "Locked.ToolTip", "The UV value at the edge will be locked to 0 at the leading edge, or locked to 1 at the\n      Trailing edge." },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "SmoothTransition.Comment", "/** The UV value at the edge will smoothly transition across the segment using normalized age.\n\x09This will result in\x09UV values which are outside of the standard 0-1 range and works best with\n\x09""clamped textures. */" },
		{ "SmoothTransition.Name", "ENiagaraRibbonUVEdgeMode::SmoothTransition" },
		{ "SmoothTransition.ToolTip", "The UV value at the edge will smoothly transition across the segment using normalized age.\n      This will result in     UV values which are outside of the standard 0-1 range and works best with\n      clamped textures." },
		{ "ToolTip", "Specifies options for handling UVs at the leading and trailing edges of ribbons." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonUVEdgeMode::SmoothTransition", (int64)ENiagaraRibbonUVEdgeMode::SmoothTransition },
		{ "ENiagaraRibbonUVEdgeMode::Locked", (int64)ENiagaraRibbonUVEdgeMode::Locked },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonUVEdgeMode",
	"ENiagaraRibbonUVEdgeMode",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode.InnerSingleton;
}
// End Enum ENiagaraRibbonUVEdgeMode

// Begin Enum ENiagaraRibbonUVDistributionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode;
static UEnum* ENiagaraRibbonUVDistributionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraRibbonUVDistributionMode"));
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.OuterSingleton;
}
template<> NIAGARA_API UEnum* StaticEnum<ENiagaraRibbonUVDistributionMode>()
{
	return ENiagaraRibbonUVDistributionMode_StaticEnum();
}
struct Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Specifies options for distributing UV values across ribbon segments. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ScaledUniformly.Comment", "/** Ribbon UVs will stretch the length of the ribbon, without repeating, but distributed by segment, so can be uneven with unequal length segments. */" },
		{ "ScaledUniformly.DisplayName", "Uniform Scale (By Segment)" },
		{ "ScaledUniformly.Name", "ENiagaraRibbonUVDistributionMode::ScaledUniformly" },
		{ "ScaledUniformly.ToolTip", "Ribbon UVs will stretch the length of the ribbon, without repeating, but distributed by segment, so can be uneven with unequal length segments." },
		{ "ScaledUsingRibbonSegmentLength.Comment", "/** Ribbon UVs will stretch the length of the ribbon, without repeating, but account for segment length to make an even distribution the entire length of the ribbon. */" },
		{ "ScaledUsingRibbonSegmentLength.DisplayName", "Non-Uniform Scale (By Total Length)" },
		{ "ScaledUsingRibbonSegmentLength.Name", "ENiagaraRibbonUVDistributionMode::ScaledUsingRibbonSegmentLength" },
		{ "ScaledUsingRibbonSegmentLength.ToolTip", "Ribbon UVs will stretch the length of the ribbon, without repeating, but account for segment length to make an even distribution the entire length of the ribbon." },
		{ "TiledFromStartOverRibbonLength.Comment", "/** Ribbon UVs will be tiled along the length of the ribbon evenly, based on RibbonUVDistance parameter and the TilingLength scale value, to create 'traintrack' style UVs. NOTE: Dependent on Particle Attribute RibbonUVDistance */" },
		{ "TiledFromStartOverRibbonLength.DisplayName", "Tiled By Distance (By Particles.RibbonUVDistance)" },
		{ "TiledFromStartOverRibbonLength.Name", "ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength" },
		{ "TiledFromStartOverRibbonLength.ToolTip", "Ribbon UVs will be tiled along the length of the ribbon evenly, based on RibbonUVDistance parameter and the TilingLength scale value, to create 'traintrack' style UVs. NOTE: Dependent on Particle Attribute RibbonUVDistance" },
		{ "TiledOverRibbonLength.Comment", "/** Ribbon UVs will be tiled along the length of the ribbon evenly, based on TilingLength setting. */" },
		{ "TiledOverRibbonLength.DisplayName", "Tiled (By Segment Length)" },
		{ "TiledOverRibbonLength.Name", "ENiagaraRibbonUVDistributionMode::TiledOverRibbonLength" },
		{ "TiledOverRibbonLength.ToolTip", "Ribbon UVs will be tiled along the length of the ribbon evenly, based on TilingLength setting." },
		{ "ToolTip", "Specifies options for distributing UV values across ribbon segments." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENiagaraRibbonUVDistributionMode::ScaledUniformly", (int64)ENiagaraRibbonUVDistributionMode::ScaledUniformly },
		{ "ENiagaraRibbonUVDistributionMode::ScaledUsingRibbonSegmentLength", (int64)ENiagaraRibbonUVDistributionMode::ScaledUsingRibbonSegmentLength },
		{ "ENiagaraRibbonUVDistributionMode::TiledOverRibbonLength", (int64)ENiagaraRibbonUVDistributionMode::TiledOverRibbonLength },
		{ "ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength", (int64)ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	"ENiagaraRibbonUVDistributionMode",
	"ENiagaraRibbonUVDistributionMode",
	Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode()
{
	if (!Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode.InnerSingleton;
}
// End Enum ENiagaraRibbonUVDistributionMode

// Begin ScriptStruct FNiagaraRibbonUVSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings;
class UScriptStruct* FNiagaraRibbonUVSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraRibbonUVSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraRibbonUVSettings>()
{
	return FNiagaraRibbonUVSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Defines settings for UV behavior for a UV channel on ribbons. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines settings for UV behavior for a UV channel on ribbons." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionMode_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Specifies how ribbon UVs are distributed along the length of a ribbon. */" },
		{ "DisplayName", "UV Mode" },
		{ "EditCondition", "!bEnablePerParticleUOverride" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Specifies how ribbon UVs are distributed along the length of a ribbon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeadingEdgeMode_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Specifies how UVs transition into life at the leading edge of the ribbon. */" },
		{ "DisplayName", "Leading Edge Transition" },
		{ "EditCondition", "!bEnablePerParticleUOverride && DistributionMode != ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Specifies how UVs transition into life at the leading edge of the ribbon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrailingEdgeMode_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Specifies how UVs transition out of life at the trailing edge of the ribbon. */" },
		{ "DisplayName", "Trailing Edge Transition" },
		{ "EditCondition", "!bEnablePerParticleUOverride && DistributionMode != ENiagaraRibbonUVDistributionMode::TiledOverRibbonLength && DistributionMode != ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Specifies how UVs transition out of life at the trailing edge of the ribbon." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerParticleUOverride_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Enables overriding the U component with values read from the particles. When enabled, edge behavior and distribution are ignored. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Enables overriding the U component with values read from the particles. When enabled, edge behavior and distribution are ignored." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnablePerParticleVRangeOverride_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Enables overriding the range of the V component with values read from the particles. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Enables overriding the range of the V component with values read from the particles." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TilingLength_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Specifies the length in world units to use when tiling UVs across the ribbon when using one of the tiled distribution modes. */" },
		{ "EditCondition", "!bEnablePerParticleUOverride && DistributionMode == ENiagaraRibbonUVDistributionMode::TiledOverRibbonLength || DistributionMode == ENiagaraRibbonUVDistributionMode::TiledFromStartOverRibbonLength" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Specifies the length in world units to use when tiling UVs across the ribbon when using one of the tiled distribution modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Specifies an additional offset which is applied to the UV range */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Specifies an additional offset which is applied to the UV range" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[] = {
		{ "Category", "UVs" },
		{ "Comment", "/** Specifies an additional scaler which is applied to the UV range. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Specifies an additional scaler which is applied to the UV range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistributionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistributionMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeadingEdgeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LeadingEdgeMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrailingEdgeMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrailingEdgeMode;
	static void NewProp_bEnablePerParticleUOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerParticleUOverride;
	static void NewProp_bEnablePerParticleVRangeOverride_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnablePerParticleVRangeOverride;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TilingLength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraRibbonUVSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_DistributionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_DistributionMode = { "DistributionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonUVSettings, DistributionMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonUVDistributionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionMode_MetaData), NewProp_DistributionMode_MetaData) }; // 4131701719
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_LeadingEdgeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_LeadingEdgeMode = { "LeadingEdgeMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonUVSettings, LeadingEdgeMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeadingEdgeMode_MetaData), NewProp_LeadingEdgeMode_MetaData) }; // 98070427
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_TrailingEdgeMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_TrailingEdgeMode = { "TrailingEdgeMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonUVSettings, TrailingEdgeMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonUVEdgeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrailingEdgeMode_MetaData), NewProp_TrailingEdgeMode_MetaData) }; // 98070427
void Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleUOverride_SetBit(void* Obj)
{
	((FNiagaraRibbonUVSettings*)Obj)->bEnablePerParticleUOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleUOverride = { "bEnablePerParticleUOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraRibbonUVSettings), &Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleUOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePerParticleUOverride_MetaData), NewProp_bEnablePerParticleUOverride_MetaData) };
void Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleVRangeOverride_SetBit(void* Obj)
{
	((FNiagaraRibbonUVSettings*)Obj)->bEnablePerParticleVRangeOverride = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleVRangeOverride = { "bEnablePerParticleVRangeOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FNiagaraRibbonUVSettings), &Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleVRangeOverride_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnablePerParticleVRangeOverride_MetaData), NewProp_bEnablePerParticleVRangeOverride_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_TilingLength = { "TilingLength", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonUVSettings, TilingLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TilingLength_MetaData), NewProp_TilingLength_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonUVSettings, Offset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FNiagaraRibbonUVSettings, Scale), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scale_MetaData), NewProp_Scale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_DistributionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_DistributionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_LeadingEdgeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_LeadingEdgeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_TrailingEdgeMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_TrailingEdgeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleUOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_bEnablePerParticleVRangeOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_TilingLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewProp_Scale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	nullptr,
	&NewStructOps,
	"NiagaraRibbonUVSettings",
	Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::PropPointers),
	sizeof(FNiagaraRibbonUVSettings),
	alignof(FNiagaraRibbonUVSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings.InnerSingleton;
}
// End ScriptStruct FNiagaraRibbonUVSettings

// Begin Class UNiagaraRibbonRendererProperties
void UNiagaraRibbonRendererProperties::StaticRegisterNativesUNiagaraRibbonRendererProperties()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraRibbonRendererProperties);
UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties_NoRegister()
{
	return UNiagaraRibbonRendererProperties::StaticClass();
}
struct Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Ribbon Renderer" },
		{ "IncludePath", "NiagaraRibbonRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "//UNiagaraRendererProperties Interface END\n" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "UNiagaraRendererProperties Interface END" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MICMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialUserParamBinding_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/** Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins.*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Use the UMaterialInterface bound to this user variable if it is set to a valid value. If this is bound to a valid value and Material is also set, UserParamBinding wins." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0Settings_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "DisplayName", "UV0 Settings" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1Settings_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "DisplayName", "UV1 Settings" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FacingMode_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "DisplayAfter", "MaterialUserParamBinding" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0TilingDistance_MetaData[] = {
		{ "Comment", "/** Tiles UV0 based on the distance traversed by the ribbon. Disables offsetting UVs by age. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Tiles UV0 based on the distance traversed by the ribbon. Disables offsetting UVs by age." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV0AgeOffsetMode_MetaData[] = {
		{ "Comment", "/** Defines the mode to use when offsetting UV channel 0 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the mode to use when offsetting UV channel 0 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1TilingDistance_MetaData[] = {
		{ "Comment", "/** Tiles UV1 based on the distance traversed by the ribbon. Disables offsetting UVs by age. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Tiles UV1 based on the distance traversed by the ribbon. Disables offsetting UVs by age." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1Scale_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1Offset_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UV1AgeOffsetMode_MetaData[] = {
		{ "Comment", "/** Defines the mode to use when offsetting UV channel 1 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the mode to use when offsetting UV channel 1 by age which enables smooth texture movement when particles are added and removed at the end of the ribbon.  Not used when the RibbonLinkOrder binding is in use or when tiling distance is in use." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxNumRibbons_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDirection_MetaData[] = {
		{ "Category", "Sorting" },
		{ "Comment", "/** Controls the order the ribbon segments will be rendered. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Controls the order the ribbon segments will be rendered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Shape_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "Comment", "/** Shape of the ribbon, from flat plane, multiplane, 3d tube, and custom shapes. */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Shape of the ribbon, from flat plane, multiplane, 3d tube, and custom shapes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAccurateGeometry_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "Comment", "/** Disables two-sided forced rendering (Will still respect material settings)\n\x09  * MultiPlane will double geometry count to have triangles facing both sides. With this off MultiPlane will switch normal direction to face view.\n\x09  * 3D Ribbons will render like normal meshes with backface culling enabled.\n\x09  */" },
		{ "EditCondition", "Shape != ENiagaraRibbonShapeMode::Plane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Disables two-sided forced rendering (Will still respect material settings)\nMultiPlane will double geometry count to have triangles facing both sides. With this off MultiPlane will switch normal direction to face view.\n3D Ribbons will render like normal meshes with backface culling enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseMaterialBackfaceCulling_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "Comment", "/** When enabled the ribbons renderer will not override how backface culling works depending on shape type, but instad use the material culling mode */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "When enabled the ribbons renderer will not override how backface culling works depending on shape type, but instad use the material culling mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGeometryNormals_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "Comment", "/** When enabled the ribbons normals will follow the shape of the geometry rather than being aligned to screen / custom facing. */" },
		{ "EditCondition", "Shape == ENiagaraRibbonShapeMode::Plane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "When enabled the ribbons normals will follow the shape of the geometry rather than being aligned to screen / custom facing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGPUInit_MetaData[] = {
		{ "Category", "Ribbon Rendering" },
		{ "Comment", "/**\n\x09*\x09Whether we use the CPU or GPU to generate ribbon geometry for CPU systems.\n\x09*\x09GPU systems will always use a fully GPU initialization pipeline,\n\x09*\x09Will fall back to CPU init when GPU init isn't available.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Whether we use the CPU or GPU to generate ribbon geometry for CPU systems.\nGPU systems will always use a fully GPU initialization pipeline,\nWill fall back to CPU init when GPU init isn't available." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseConstantFactor_MetaData[] = {
		{ "Category", "Ribbon Tessellation" },
		{ "Comment", "/** If checked, use the above constant factor. Otherwise, adaptively select the tessellation factor based on the below parameters. */" },
		{ "DisplayAfter", "TessellationFactor" },
		{ "EditCondition", "TessellationMode == ENiagaraRibbonTessellationMode::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "If checked, use the above constant factor. Otherwise, adaptively select the tessellation factor based on the below parameters." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScreenSpaceTessellation_MetaData[] = {
		{ "Category", "Ribbon Tessellation" },
		{ "Comment", "/** If checked, use the ribbon's screen space percentage to adaptively adjust the tessellation factor. */" },
		{ "DisplayAfter", "TessellationAngle" },
		{ "DisplayName", "Screen Space" },
		{ "EditCondition", "TessellationMode == ENiagaraRibbonTessellationMode::Custom && !bUseConstantFactor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "If checked, use the ribbon's screen space percentage to adaptively adjust the tessellation factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLinkOrderUseUniqueID_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09When disabled the renderer will not cast shadows.\n\x09The component controls if shadows are enabled, this flag allows you to disable the renderer casting shadows.\n\x09*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "When disabled the renderer will not cast shadows.\nThe component controls if shadows are enabled, this flag allows you to disable the renderer casting shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidthSegmentationCount_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Tessellation factor to apply to the width of the ribbon.\n\x09* Ranges from 1 to 16. Greater values increase amount of tessellation.\n\x09*/" },
		{ "EditCondition", "Shape == ENiagaraRibbonShapeMode::Plane || Shape == ENiagaraRibbonShapeMode::MultiPlane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Tessellation factor to apply to the width of the ribbon.\nRanges from 1 to 16. Greater values increase amount of tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MultiPlaneCount_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "ClampMax", "8" },
		{ "ClampMin", "2" },
		{ "Comment", "/** Number of planes in multiplane shape. Evenly distributed from 0-90 or 0-180 degrees off camera facing depending on setting */" },
		{ "EditCondition", "Shape == ENiagaraRibbonShapeMode::MultiPlane" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Number of planes in multiplane shape. Evenly distributed from 0-90 or 0-180 degrees off camera facing depending on setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TubeSubdivisions_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "ClampMax", "16" },
		{ "ClampMin", "3" },
		{ "Comment", "/** Number of vertices/faces in a tube.  */" },
		{ "EditCondition", "Shape == ENiagaraRibbonShapeMode::Tube" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Number of vertices/faces in a tube." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomVertices_MetaData[] = {
		{ "Category", "Ribbon Shape" },
		{ "Comment", "/** Vertices for a cross section of the ribbon in custom shape mode. */" },
		{ "EditCondition", "Shape == ENiagaraRibbonShapeMode::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Vertices for a cross section of the ribbon in custom shape mode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TessellationMode_MetaData[] = {
		{ "Category", "Ribbon Tessellation" },
		{ "Comment", "/** Defines the tessellation mode allowing custom tessellation parameters or disabling tessellation entirely. */" },
		{ "DisplayName", "Mode" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the tessellation mode allowing custom tessellation parameters or disabling tessellation entirely." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveTension_MetaData[] = {
		{ "Category", "Ribbon Tessellation" },
		{ "ClampMax", "0.99" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Defines the curve tension, or how long the curve's tangents are.\n\x09  * Ranges from 0 to 1. The higher the value, the sharper the curve becomes.\n\x09  */" },
		{ "EditCondition", "TessellationMode != ENiagaraRibbonTessellationMode::Disabled" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the curve tension, or how long the curve's tangents are.\nRanges from 0 to 1. The higher the value, the sharper the curve becomes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TessellationFactor_MetaData[] = {
		{ "Category", "Ribbon Tessellation" },
		{ "ClampMax", "16" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Custom tessellation factor.\n\x09  * Ranges from 1 to 16. Greater values increase amount of tessellation.\n\x09  */" },
		{ "DisplayName", "Max Tessellation Factor" },
		{ "EditCondition", "TessellationMode == ENiagaraRibbonTessellationMode::Custom" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Custom tessellation factor.\nRanges from 1 to 16. Greater values increase amount of tessellation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TessellationAngle_MetaData[] = {
		{ "Category", "Ribbon Tessellation" },
		{ "ClampMax", "180" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Defines the angle in degrees at which tessellation occurs.\n\x09  * Ranges from 1 to 180. Smaller values increase amount of tessellation.\n\x09  * If set to 0, use the maximum tessellation set above.\n\x09  */" },
		{ "EditCondition", "TessellationMode == ENiagaraRibbonTessellationMode::Custom && !bUseConstantFactor" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Defines the angle in degrees at which tessellation occurs.\nRanges from 1 to 180. Smaller values increase amount of tessellation.\nIf set to 0, use the maximum tessellation set above." },
		{ "UIMax", "180" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for position when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for position when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ColorBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for color when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for color when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VelocityBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for velocity when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for velocity when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedAgeBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for normalized age when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for normalized age when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonTwistBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon twist when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon twist when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonWidthBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon width when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon width when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonFacingBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon facing when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon facing when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonIdBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon id when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon id when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonLinkOrderBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for RibbonLinkOrder when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for RibbonLinkOrder when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialRandomBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for MaterialRandom when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for MaterialRandom when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterialBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial1Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial2Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicMaterial3Binding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for dynamic material parameters when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for dynamic material parameters when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RibbonUVDistance_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for ribbon distance traveled for use in UV operations when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for ribbon distance traveled for use in UV operations when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U0OverrideBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for UV0 U when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for UV0 U when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V0RangeOverrideBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for UV0 V when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for UV0 V when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_U1OverrideBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for UV1 U when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for UV1 U when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_V1RangeOverrideBinding_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** Which attribute should we use for UV1 V when generating ribbons?*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use for UV1 V when generating ribbons?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameters_MetaData[] = {
		{ "Category", "Bindings" },
		{ "Comment", "/** If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed.*/" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "If this array has entries, we will create a MaterialInstanceDynamic per Emitter instance from Material and set the Material parameters using the Niagara simulation variables listed." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParameterBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevPositionBinding_MetaData[] = {
		{ "Comment", "/** Implicit binding for previous position */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Implicit binding for previous position" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevRibbonWidthBinding_MetaData[] = {
		{ "Comment", "/** Implicit binding for previous ribbon width */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Implicit binding for previous ribbon width" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevRibbonFacingBinding_MetaData[] = {
		{ "Comment", "/** Implicit binding for previous ribbon facing */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Implicit binding for previous ribbon facing" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PrevRibbonTwistBinding_MetaData[] = {
		{ "Comment", "/** Implicit binding for previous ribbon twist */" },
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
		{ "ToolTip", "Implicit binding for previous ribbon twist" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaterialParamValidMask_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraRibbonRendererProperties.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MICMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialUserParamBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0Settings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1Settings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FacingMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_FacingMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UV0TilingDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV0Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UV0AgeOffsetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UV0AgeOffsetMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UV1TilingDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1Scale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UV1Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_UV1AgeOffsetMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_UV1AgeOffsetMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxNumRibbons;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DrawDirection_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DrawDirection;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Shape_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Shape;
	static void NewProp_bEnableAccurateGeometry_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAccurateGeometry;
	static void NewProp_bUseMaterialBackfaceCulling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseMaterialBackfaceCulling;
	static void NewProp_bUseGeometryNormals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGeometryNormals;
	static void NewProp_bUseGPUInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGPUInit;
	static void NewProp_bUseConstantFactor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseConstantFactor;
	static void NewProp_bScreenSpaceTessellation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScreenSpaceTessellation;
	static void NewProp_bLinkOrderUseUniqueID_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLinkOrderUseUniqueID;
	static void NewProp_bCastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WidthSegmentationCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MultiPlaneCount;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TubeSubdivisions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomVertices_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomVertices;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TessellationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TessellationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveTension;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TessellationFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TessellationAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ColorBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalizedAgeBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonTwistBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonWidthBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonFacingBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonIdBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonLinkOrderBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialRandomBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterialBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial1Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial2Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DynamicMaterial3Binding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RibbonUVDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_U0OverrideBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_V0RangeOverrideBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_U1OverrideBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_V1RangeOverrideBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameters;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialParameterBindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialParameterBindings;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevPositionBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevRibbonWidthBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevRibbonFacingBinding;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PrevRibbonTwistBinding;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_MaterialParamValidMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraRibbonRendererProperties>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MICMaterial = { "MICMaterial", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MICMaterial), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MICMaterial_MetaData), NewProp_MICMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding = { "MaterialUserParamBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialUserParamBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialUserParamBinding_MetaData), NewProp_MaterialUserParamBinding_MetaData) }; // 174428838
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Settings = { "UV0Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0Settings), Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0Settings_MetaData), NewProp_UV0Settings_MetaData) }; // 1722611999
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Settings = { "UV1Settings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1Settings), Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1Settings_MetaData), NewProp_UV1Settings_MetaData) }; // 1722611999
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode = { "FacingMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, FacingMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonFacingMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FacingMode_MetaData), NewProp_FacingMode_MetaData) }; // 503195605
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance = { "UV0TilingDistance", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0TilingDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0TilingDistance_MetaData), NewProp_UV0TilingDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale = { "UV0Scale", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0Scale_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0Scale_MetaData), NewProp_UV0Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset = { "UV0Offset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0Offset_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0Offset_MetaData), NewProp_UV0Offset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode = { "UV0AgeOffsetMode", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV0AgeOffsetMode_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV0AgeOffsetMode_MetaData), NewProp_UV0AgeOffsetMode_MetaData) }; // 3678961892
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance = { "UV1TilingDistance", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1TilingDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1TilingDistance_MetaData), NewProp_UV1TilingDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale = { "UV1Scale", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1Scale_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1Scale_MetaData), NewProp_UV1Scale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset = { "UV1Offset", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1Offset_DEPRECATED), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1Offset_MetaData), NewProp_UV1Offset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode = { "UV1AgeOffsetMode", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, UV1AgeOffsetMode_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraRibbonAgeOffsetMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UV1AgeOffsetMode_MetaData), NewProp_UV1AgeOffsetMode_MetaData) }; // 3678961892
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaxNumRibbons = { "MaxNumRibbons", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaxNumRibbons), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxNumRibbons_MetaData), NewProp_MaxNumRibbons_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection = { "DrawDirection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DrawDirection), Z_Construct_UEnum_Niagara_ENiagaraRibbonDrawDirection, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDirection_MetaData), NewProp_DrawDirection_MetaData) }; // 390447630
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Shape = { "Shape", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, Shape), Z_Construct_UEnum_Niagara_ENiagaraRibbonShapeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Shape_MetaData), NewProp_Shape_MetaData) }; // 3537399722
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bEnableAccurateGeometry_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bEnableAccurateGeometry = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bEnableAccurateGeometry = { "bEnableAccurateGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bEnableAccurateGeometry_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAccurateGeometry_MetaData), NewProp_bEnableAccurateGeometry_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseMaterialBackfaceCulling_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bUseMaterialBackfaceCulling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseMaterialBackfaceCulling = { "bUseMaterialBackfaceCulling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseMaterialBackfaceCulling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseMaterialBackfaceCulling_MetaData), NewProp_bUseMaterialBackfaceCulling_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGeometryNormals_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bUseGeometryNormals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGeometryNormals = { "bUseGeometryNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGeometryNormals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGeometryNormals_MetaData), NewProp_bUseGeometryNormals_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGPUInit_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bUseGPUInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGPUInit = { "bUseGPUInit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGPUInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGPUInit_MetaData), NewProp_bUseGPUInit_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bUseConstantFactor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor = { "bUseConstantFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseConstantFactor_MetaData), NewProp_bUseConstantFactor_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bScreenSpaceTessellation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation = { "bScreenSpaceTessellation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScreenSpaceTessellation_MetaData), NewProp_bScreenSpaceTessellation_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bLinkOrderUseUniqueID_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bLinkOrderUseUniqueID = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bLinkOrderUseUniqueID = { "bLinkOrderUseUniqueID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bLinkOrderUseUniqueID_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLinkOrderUseUniqueID_MetaData), NewProp_bLinkOrderUseUniqueID_MetaData) };
void Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bCastShadows_SetBit(void* Obj)
{
	((UNiagaraRibbonRendererProperties*)Obj)->bCastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UNiagaraRibbonRendererProperties), &Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadows_MetaData), NewProp_bCastShadows_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_WidthSegmentationCount = { "WidthSegmentationCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, WidthSegmentationCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidthSegmentationCount_MetaData), NewProp_WidthSegmentationCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MultiPlaneCount = { "MultiPlaneCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MultiPlaneCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MultiPlaneCount_MetaData), NewProp_MultiPlaneCount_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TubeSubdivisions = { "TubeSubdivisions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TubeSubdivisions), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TubeSubdivisions_MetaData), NewProp_TubeSubdivisions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CustomVertices_Inner = { "CustomVertices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex, METADATA_PARAMS(0, nullptr) }; // 3595915836
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CustomVertices = { "CustomVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, CustomVertices), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomVertices_MetaData), NewProp_CustomVertices_MetaData) }; // 3595915836
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode = { "TessellationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TessellationMode), Z_Construct_UEnum_Niagara_ENiagaraRibbonTessellationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TessellationMode_MetaData), NewProp_TessellationMode_MetaData) }; // 275744883
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension = { "CurveTension", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, CurveTension), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveTension_MetaData), NewProp_CurveTension_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor = { "TessellationFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TessellationFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TessellationFactor_MetaData), NewProp_TessellationFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle = { "TessellationAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, TessellationAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TessellationAngle_MetaData), NewProp_TessellationAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding = { "PositionBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, PositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionBinding_MetaData), NewProp_PositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding = { "ColorBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, ColorBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ColorBinding_MetaData), NewProp_ColorBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding = { "VelocityBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, VelocityBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VelocityBinding_MetaData), NewProp_VelocityBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding = { "NormalizedAgeBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, NormalizedAgeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedAgeBinding_MetaData), NewProp_NormalizedAgeBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding = { "RibbonTwistBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonTwistBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonTwistBinding_MetaData), NewProp_RibbonTwistBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding = { "RibbonWidthBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonWidthBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonWidthBinding_MetaData), NewProp_RibbonWidthBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding = { "RibbonFacingBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonFacingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonFacingBinding_MetaData), NewProp_RibbonFacingBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding = { "RibbonIdBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonIdBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonIdBinding_MetaData), NewProp_RibbonIdBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding = { "RibbonLinkOrderBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonLinkOrderBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonLinkOrderBinding_MetaData), NewProp_RibbonLinkOrderBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding = { "MaterialRandomBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialRandomBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialRandomBinding_MetaData), NewProp_MaterialRandomBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding = { "DynamicMaterialBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterialBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterialBinding_MetaData), NewProp_DynamicMaterialBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding = { "DynamicMaterial1Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterial1Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial1Binding_MetaData), NewProp_DynamicMaterial1Binding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding = { "DynamicMaterial2Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterial2Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial2Binding_MetaData), NewProp_DynamicMaterial2Binding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding = { "DynamicMaterial3Binding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, DynamicMaterial3Binding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicMaterial3Binding_MetaData), NewProp_DynamicMaterial3Binding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonUVDistance = { "RibbonUVDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, RibbonUVDistance), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RibbonUVDistance_MetaData), NewProp_RibbonUVDistance_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_U0OverrideBinding = { "U0OverrideBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, U0OverrideBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U0OverrideBinding_MetaData), NewProp_U0OverrideBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_V0RangeOverrideBinding = { "V0RangeOverrideBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, V0RangeOverrideBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V0RangeOverrideBinding_MetaData), NewProp_V0RangeOverrideBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_U1OverrideBinding = { "U1OverrideBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, U1OverrideBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_U1OverrideBinding_MetaData), NewProp_U1OverrideBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_V1RangeOverrideBinding = { "V1RangeOverrideBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, V1RangeOverrideBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_V1RangeOverrideBinding_MetaData), NewProp_V1RangeOverrideBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParameters = { "MaterialParameters", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialParameters), Z_Construct_UScriptStruct_FNiagaraRendererMaterialParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameters_MetaData), NewProp_MaterialParameters_MetaData) }; // 2755820487
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNiagaraMaterialAttributeBinding, METADATA_PARAMS(0, nullptr) }; // 495246681
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParameterBindings = { "MaterialParameterBindings", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialParameterBindings_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParameterBindings_MetaData), NewProp_MaterialParameterBindings_MetaData) }; // 495246681
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevPositionBinding = { "PrevPositionBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, PrevPositionBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevPositionBinding_MetaData), NewProp_PrevPositionBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevRibbonWidthBinding = { "PrevRibbonWidthBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, PrevRibbonWidthBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevRibbonWidthBinding_MetaData), NewProp_PrevRibbonWidthBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevRibbonFacingBinding = { "PrevRibbonFacingBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, PrevRibbonFacingBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevRibbonFacingBinding_MetaData), NewProp_PrevRibbonFacingBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevRibbonTwistBinding = { "PrevRibbonTwistBinding", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, PrevRibbonTwistBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PrevRibbonTwistBinding_MetaData), NewProp_PrevRibbonTwistBinding_MetaData) }; // 1753925894
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParamValidMask = { "MaterialParamValidMask", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNiagaraRibbonRendererProperties, MaterialParamValidMask), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaterialParamValidMask_MetaData), NewProp_MaterialParamValidMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Material,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MICMaterial,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialUserParamBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Settings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_FacingMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0TilingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV0AgeOffsetMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1TilingDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_UV1AgeOffsetMode,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaxNumRibbons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DrawDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Shape_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_Shape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bEnableAccurateGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseMaterialBackfaceCulling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGeometryNormals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseGPUInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bUseConstantFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bScreenSpaceTessellation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bLinkOrderUseUniqueID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_bCastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_WidthSegmentationCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MultiPlaneCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TubeSubdivisions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CustomVertices_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CustomVertices,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_CurveTension,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_TessellationAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_ColorBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_VelocityBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_NormalizedAgeBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonTwistBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonWidthBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonFacingBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonIdBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonLinkOrderBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialRandomBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterialBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial1Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial2Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_DynamicMaterial3Binding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_RibbonUVDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_U0OverrideBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_V0RangeOverrideBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_U1OverrideBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_V1RangeOverrideBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParameters,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParameterBindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParameterBindings,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevPositionBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevRibbonWidthBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevRibbonFacingBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_PrevRibbonTwistBinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::NewProp_MaterialParamValidMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
	(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::ClassParams = {
	&UNiagaraRibbonRendererProperties::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::PropPointers),
	0,
	0x000810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::Class_MetaDataParams), Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNiagaraRibbonRendererProperties()
{
	if (!Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraRibbonRendererProperties_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.OuterSingleton;
}
template<> NIAGARA_API UClass* StaticClass<UNiagaraRibbonRendererProperties>()
{
	return UNiagaraRibbonRendererProperties::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraRibbonRendererProperties);
UNiagaraRibbonRendererProperties::~UNiagaraRibbonRendererProperties() {}
IMPLEMENT_FARCHIVE_SERIALIZER(UNiagaraRibbonRendererProperties)
// End Class UNiagaraRibbonRendererProperties

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ENiagaraRibbonFacingMode_StaticEnum, TEXT("ENiagaraRibbonFacingMode"), &Z_Registration_Info_UEnum_ENiagaraRibbonFacingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 503195605U) },
		{ ENiagaraRibbonAgeOffsetMode_StaticEnum, TEXT("ENiagaraRibbonAgeOffsetMode"), &Z_Registration_Info_UEnum_ENiagaraRibbonAgeOffsetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3678961892U) },
		{ ENiagaraRibbonDrawDirection_StaticEnum, TEXT("ENiagaraRibbonDrawDirection"), &Z_Registration_Info_UEnum_ENiagaraRibbonDrawDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 390447630U) },
		{ ENiagaraRibbonShapeMode_StaticEnum, TEXT("ENiagaraRibbonShapeMode"), &Z_Registration_Info_UEnum_ENiagaraRibbonShapeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3537399722U) },
		{ ENiagaraRibbonTessellationMode_StaticEnum, TEXT("ENiagaraRibbonTessellationMode"), &Z_Registration_Info_UEnum_ENiagaraRibbonTessellationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 275744883U) },
		{ ENiagaraRibbonUVEdgeMode_StaticEnum, TEXT("ENiagaraRibbonUVEdgeMode"), &Z_Registration_Info_UEnum_ENiagaraRibbonUVEdgeMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 98070427U) },
		{ ENiagaraRibbonUVDistributionMode_StaticEnum, TEXT("ENiagaraRibbonUVDistributionMode"), &Z_Registration_Info_UEnum_ENiagaraRibbonUVDistributionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4131701719U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNiagaraRibbonShapeCustomVertex::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRibbonShapeCustomVertex_Statics::NewStructOps, TEXT("NiagaraRibbonShapeCustomVertex"), &Z_Registration_Info_UScriptStruct_NiagaraRibbonShapeCustomVertex, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRibbonShapeCustomVertex), 3595915836U) },
		{ FNiagaraRibbonUVSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraRibbonUVSettings_Statics::NewStructOps, TEXT("NiagaraRibbonUVSettings"), &Z_Registration_Info_UScriptStruct_NiagaraRibbonUVSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraRibbonUVSettings), 1722611999U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraRibbonRendererProperties, UNiagaraRibbonRendererProperties::StaticClass, TEXT("UNiagaraRibbonRendererProperties"), &Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraRibbonRendererProperties), 2644337729U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_2254714675(TEXT("/Script/Niagara"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraRibbonRendererProperties_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
