// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Foliage/Public/FoliageType.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFoliageType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBoxSphereBounds();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatInterval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInt32Interval();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ELightmapType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERendererStencilMask();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBodyInstance();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType();
FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_EVertexColorMaskChannel();
FOLIAGE_API UEnum* Z_Construct_UEnum_Foliage_FoliageVertexColorMask();
FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageDensityFalloff();
FOLIAGE_API UScriptStruct* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask();
UPackage* Z_Construct_UPackage__Script_Foliage();
// End Cross Module References

// Begin Enum FoliageVertexColorMask
static FEnumRegistrationInfo Z_Registration_Info_UEnum_FoliageVertexColorMask;
static UEnum* FoliageVertexColorMask_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton)
	{
		Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_FoliageVertexColorMask, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageVertexColorMask"));
	}
	return Z_Registration_Info_UEnum_FoliageVertexColorMask.OuterSingleton;
}
template<> FOLIAGE_API UEnum* StaticEnum<FoliageVertexColorMask>()
{
	return FoliageVertexColorMask_StaticEnum();
}
struct Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "FOLIAGEVERTEXCOLORMASK_Alpha.DisplayName", "Alpha" },
		{ "FOLIAGEVERTEXCOLORMASK_Alpha.Name", "FOLIAGEVERTEXCOLORMASK_Alpha" },
		{ "FOLIAGEVERTEXCOLORMASK_Blue.DisplayName", "Blue" },
		{ "FOLIAGEVERTEXCOLORMASK_Blue.Name", "FOLIAGEVERTEXCOLORMASK_Blue" },
		{ "FOLIAGEVERTEXCOLORMASK_Disabled.DisplayName", "Disabled" },
		{ "FOLIAGEVERTEXCOLORMASK_Disabled.Name", "FOLIAGEVERTEXCOLORMASK_Disabled" },
		{ "FOLIAGEVERTEXCOLORMASK_Green.DisplayName", "Green" },
		{ "FOLIAGEVERTEXCOLORMASK_Green.Name", "FOLIAGEVERTEXCOLORMASK_Green" },
		{ "FOLIAGEVERTEXCOLORMASK_Red.DisplayName", "Red" },
		{ "FOLIAGEVERTEXCOLORMASK_Red.Name", "FOLIAGEVERTEXCOLORMASK_Red" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "FOLIAGEVERTEXCOLORMASK_Disabled", (int64)FOLIAGEVERTEXCOLORMASK_Disabled },
		{ "FOLIAGEVERTEXCOLORMASK_Red", (int64)FOLIAGEVERTEXCOLORMASK_Red },
		{ "FOLIAGEVERTEXCOLORMASK_Green", (int64)FOLIAGEVERTEXCOLORMASK_Green },
		{ "FOLIAGEVERTEXCOLORMASK_Blue", (int64)FOLIAGEVERTEXCOLORMASK_Blue },
		{ "FOLIAGEVERTEXCOLORMASK_Alpha", (int64)FOLIAGEVERTEXCOLORMASK_Alpha },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	"FoliageVertexColorMask",
	"FoliageVertexColorMask",
	Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Foliage_FoliageVertexColorMask()
{
	if (!Z_Registration_Info_UEnum_FoliageVertexColorMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_FoliageVertexColorMask.InnerSingleton, Z_Construct_UEnum_Foliage_FoliageVertexColorMask_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_FoliageVertexColorMask.InnerSingleton;
}
// End Enum FoliageVertexColorMask

// Begin Enum EVertexColorMaskChannel
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVertexColorMaskChannel;
static UEnum* EVertexColorMaskChannel_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("EVertexColorMaskChannel"));
	}
	return Z_Registration_Info_UEnum_EVertexColorMaskChannel.OuterSingleton;
}
template<> FOLIAGE_API UEnum* StaticEnum<EVertexColorMaskChannel>()
{
	return EVertexColorMaskChannel_StaticEnum();
}
struct Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Alpha.Name", "EVertexColorMaskChannel::Alpha" },
		{ "Blue.Name", "EVertexColorMaskChannel::Blue" },
		{ "Green.Name", "EVertexColorMaskChannel::Green" },
		{ "MAX_None.Hidden", "" },
		{ "MAX_None.Name", "EVertexColorMaskChannel::MAX_None" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Red.Name", "EVertexColorMaskChannel::Red" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EVertexColorMaskChannel::Red", (int64)EVertexColorMaskChannel::Red },
		{ "EVertexColorMaskChannel::Green", (int64)EVertexColorMaskChannel::Green },
		{ "EVertexColorMaskChannel::Blue", (int64)EVertexColorMaskChannel::Blue },
		{ "EVertexColorMaskChannel::Alpha", (int64)EVertexColorMaskChannel::Alpha },
		{ "EVertexColorMaskChannel::MAX_None", (int64)EVertexColorMaskChannel::MAX_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	"EVertexColorMaskChannel",
	"EVertexColorMaskChannel",
	Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Foliage_EVertexColorMaskChannel()
{
	if (!Z_Registration_Info_UEnum_EVertexColorMaskChannel.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVertexColorMaskChannel.InnerSingleton, Z_Construct_UEnum_Foliage_EVertexColorMaskChannel_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EVertexColorMaskChannel.InnerSingleton;
}
// End Enum EVertexColorMaskChannel

// Begin ScriptStruct FFoliageVertexColorChannelMask
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask;
class UScriptStruct* FFoliageVertexColorChannelMask::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageVertexColorChannelMask"));
	}
	return Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask.OuterSingleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FFoliageVertexColorChannelMask>()
{
	return FFoliageVertexColorChannelMask::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UseMask_MetaData[] = {
		{ "Category", "VertexColorMask" },
		{ "Comment", "/** \n\x09 *  When checked, foliage will be masked from this mesh using this color channel\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When checked, foliage will be masked from this mesh using this color channel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaskThreshold_MetaData[] = {
		{ "Category", "VertexColorMask" },
		{ "Comment", "/** Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InvertMask_MetaData[] = {
		{ "Category", "VertexColorMask" },
		{ "Comment", "/** \n\x09 *  When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount. \n\x09 *  When checked, the vertex color must be less than the threshold amount \n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount.\nWhen checked, the vertex color must be less than the threshold amount" },
	};
#endif // WITH_METADATA
	static void NewProp_UseMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UseMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaskThreshold;
	static void NewProp_InvertMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InvertMask;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageVertexColorChannelMask>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_SetBit(void* Obj)
{
	((FFoliageVertexColorChannelMask*)Obj)->UseMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask = { "UseMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFoliageVertexColorChannelMask), &Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UseMask_MetaData), NewProp_UseMask_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold = { "MaskThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliageVertexColorChannelMask, MaskThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaskThreshold_MetaData), NewProp_MaskThreshold_MetaData) };
void Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_SetBit(void* Obj)
{
	((FFoliageVertexColorChannelMask*)Obj)->InvertMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask = { "InvertMask", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FFoliageVertexColorChannelMask), &Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InvertMask_MetaData), NewProp_InvertMask_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_UseMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_MaskThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewProp_InvertMask,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	&NewStructOps,
	"FoliageVertexColorChannelMask",
	Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::PropPointers),
	sizeof(FFoliageVertexColorChannelMask),
	alignof(FFoliageVertexColorChannelMask),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask.InnerSingleton, Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask.InnerSingleton;
}
// End ScriptStruct FFoliageVertexColorChannelMask

// Begin Enum EFoliageScaling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFoliageScaling;
static UEnum* EFoliageScaling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Foliage_EFoliageScaling, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("EFoliageScaling"));
	}
	return Z_Registration_Info_UEnum_EFoliageScaling.OuterSingleton;
}
template<> FOLIAGE_API UEnum* StaticEnum<EFoliageScaling>()
{
	return EFoliageScaling_StaticEnum();
}
struct Z_Construct_UEnum_Foliage_EFoliageScaling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Free.Comment", "/** Foliage instances will have random X,Y and Z scales. */" },
		{ "Free.Name", "EFoliageScaling::Free" },
		{ "Free.ToolTip", "Foliage instances will have random X,Y and Z scales." },
		{ "LockXY.Comment", "/** Locks the X and Y axis scale. */" },
		{ "LockXY.Name", "EFoliageScaling::LockXY" },
		{ "LockXY.ToolTip", "Locks the X and Y axis scale." },
		{ "LockXZ.Comment", "/** Locks the X and Z axis scale. */" },
		{ "LockXZ.Name", "EFoliageScaling::LockXZ" },
		{ "LockXZ.ToolTip", "Locks the X and Z axis scale." },
		{ "LockYZ.Comment", "/** Locks the Y and Z axis scale. */" },
		{ "LockYZ.Name", "EFoliageScaling::LockYZ" },
		{ "LockYZ.ToolTip", "Locks the Y and Z axis scale." },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Uniform.Comment", "/** Foliage instances will have uniform X,Y and Z scales. */" },
		{ "Uniform.Name", "EFoliageScaling::Uniform" },
		{ "Uniform.ToolTip", "Foliage instances will have uniform X,Y and Z scales." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFoliageScaling::Uniform", (int64)EFoliageScaling::Uniform },
		{ "EFoliageScaling::Free", (int64)EFoliageScaling::Free },
		{ "EFoliageScaling::LockXY", (int64)EFoliageScaling::LockXY },
		{ "EFoliageScaling::LockXZ", (int64)EFoliageScaling::LockXZ },
		{ "EFoliageScaling::LockYZ", (int64)EFoliageScaling::LockYZ },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	"EFoliageScaling",
	"EFoliageScaling",
	Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Foliage_EFoliageScaling()
{
	if (!Z_Registration_Info_UEnum_EFoliageScaling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFoliageScaling.InnerSingleton, Z_Construct_UEnum_Foliage_EFoliageScaling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFoliageScaling.InnerSingleton;
}
// End Enum EFoliageScaling

// Begin ScriptStruct FFoliageDensityFalloff
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FoliageDensityFalloff;
class UScriptStruct* FFoliageDensityFalloff::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageDensityFalloff.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FoliageDensityFalloff.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFoliageDensityFalloff, (UObject*)Z_Construct_UPackage__Script_Foliage(), TEXT("FoliageDensityFalloff"));
	}
	return Z_Registration_Info_UScriptStruct_FoliageDensityFalloff.OuterSingleton;
}
template<> FOLIAGE_API UScriptStruct* StaticStruct<FFoliageDensityFalloff>()
{
	return FFoliageDensityFalloff::StaticStruct();
}
struct Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFalloffCurve_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Density" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffCurve_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/**\n\x09 * Density as a function of normalized distance (i.e. distance from Procedural Foliage Volume / Max Volume Extent).\n\x09 * X = 0 corresponds to Normalized distance = 0, X = 1 corresponds to Normalized distance = Max distance.\n\x09 * Y = 0 corresponds to 0% probability of keeping instance, Y = 1 corresponds to 100% probability of keeping instance.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Density" },
		{ "ToolTip", "Density as a function of normalized distance (i.e. distance from Procedural Foliage Volume / Max Volume Extent).\nX = 0 corresponds to Normalized distance = 0, X = 1 corresponds to Normalized distance = Max distance.\nY = 0 corresponds to 0% probability of keeping instance, Y = 1 corresponds to 100% probability of keeping instance." },
		{ "XAxisName", "Normalized Distance" },
		{ "YAxisName", "Density Factor" },
	};
#endif // WITH_METADATA
	static void NewProp_bUseFalloffCurve_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFalloffCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FalloffCurve;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFoliageDensityFalloff>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_bUseFalloffCurve_SetBit(void* Obj)
{
	((FFoliageDensityFalloff*)Obj)->bUseFalloffCurve = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_bUseFalloffCurve = { "bUseFalloffCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFoliageDensityFalloff), &Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_bUseFalloffCurve_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFalloffCurve_MetaData), NewProp_bUseFalloffCurve_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_FalloffCurve = { "FalloffCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFoliageDensityFalloff, FalloffCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffCurve_MetaData), NewProp_FalloffCurve_MetaData) }; // 762678829
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_bUseFalloffCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewProp_FalloffCurve,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
	nullptr,
	&NewStructOps,
	"FoliageDensityFalloff",
	Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::PropPointers),
	sizeof(FFoliageDensityFalloff),
	alignof(FFoliageDensityFalloff),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFoliageDensityFalloff()
{
	if (!Z_Registration_Info_UScriptStruct_FoliageDensityFalloff.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FoliageDensityFalloff.InnerSingleton, Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FoliageDensityFalloff.InnerSingleton;
}
// End ScriptStruct FFoliageDensityFalloff

// Begin Class UFoliageType
void UFoliageType::StaticRegisterNativesUFoliageType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFoliageType);
UClass* Z_Construct_UClass_UFoliageType_NoRegister()
{
	return UFoliageType::StaticClass();
}
struct Z_Construct_UClass_UFoliageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "FoliageType.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateGuid_MetaData[] = {
		{ "Comment", "/* A GUID that is updated every time the foliage type is modified, \n\x09   so foliage placed in the level can detect the FoliageType has changed. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "A GUID that is updated every time the foliage type is modified,\n         so foliage placed in the level can detect the FoliageType has changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Density_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "10000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Foliage instances will be placed at this density, specified in instances per 1000x1000 unit area */" },
		{ "DisplayName", "Density / 1Kuu" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Foliage instances will be placed at this density, specified in instances per 1000x1000 unit area" },
		{ "UIMax", "10000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityAdjustmentFactor_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The factor by which to adjust the density of instances. Values >1 will increase density while values <1 will decrease it. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyDensity" },
		{ "ToolTip", "The factor by which to adjust the density of instances. Values >1 will increase density while values <1 will decrease it." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The minimum distance between foliage instances */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyRadius" },
		{ "ToolTip", "The minimum distance between foliage instances" },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSingleInstanceModeOverrideRadius_MetaData[] = {
		{ "Category", "Painting" },
		{ "Comment", "/** Option to override radius used to detect collision with other instances when painting in single instance mode */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Option to override radius used to detect collision with other instances when painting in single instance mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SingleInstanceModeRadius_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMax", "100000" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The radius used in single instance mode to detect collision with other instances */" },
		{ "EditCondition", "bSingleInstanceModeOverrideRadius" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The radius used in single instance mode to detect collision with other instances" },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Scaling_MetaData[] = {
		{ "Category", "Painting" },
		{ "Comment", "/** Specifies foliage instance scaling behavior when painting. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaling" },
		{ "ToolTip", "Specifies foliage instance scaling behavior when painting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleX_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's X Scale property */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaleX" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's X Scale property" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleY_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Y Scale property */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaleY" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Y Scale property" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleZ_MetaData[] = {
		{ "Category", "Painting" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Z Scale property */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyScaleZ" },
		{ "ToolTip", "Specifies the range of scale, from minimum to maximum, to apply to a foliage instance's Z Scale property" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskByChannel_MetaData[] = {
		{ "ArraySizeEnum", "/Script/Foliage.EVertexColorMaskChannel" },
		{ "Category", "Painting" },
		{ "HideBehind", "VertexColorMask" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMask_MetaData[] = {
		{ "Comment", "/** \n\x09 *  When painting on static meshes, foliage instance placement can be limited to areas where the static mesh has values in the selected vertex color channel(s). \n\x09 *  This allows a static mesh to mask out certain areas to prevent foliage from being placed there\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When painting on static meshes, foliage instance placement can be limited to areas where the static mesh has values in the selected vertex color channel(s).\nThis allows a static mesh to mask out certain areas to prevent foliage from being placed there" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskThreshold_MetaData[] = {
		{ "Comment", "/** Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the threshold value above which the static mesh vertex color value must be, in order for foliage instances to be placed in a specific area" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VertexColorMaskInvert_MetaData[] = {
		{ "Comment", "/** \n\x09 *  When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount. \n\x09 *  When checked, the vertex color must be less than the threshold amount \n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "When unchecked, foliage instances will be placed only when the vertex color in the specified channel(s) is above the threshold amount.\nWhen checked, the vertex color must be less than the threshold amount" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffset_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/** Specifies a range from minimum to maximum of the offset to apply to a foliage instance's Z location */" },
		{ "DisplayName", "Z Offset" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyZOffset" },
		{ "ToolTip", "Specifies a range from minimum to maximum of the offset to apply to a foliage instance's Z location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignToNormal_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/** Whether foliage instances should have their angle adjusted away from vertical to match the normal of the surface they're painted on \n\x09 *  If AlignToNormal is enabled and RandomYaw is disabled, the instance will be rotated so that the +X axis points down-slope */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyAlignToNormal" },
		{ "ToolTip", "Whether foliage instances should have their angle adjusted away from vertical to match the normal of the surface they're painted on\nIf AlignToNormal is enabled and RandomYaw is disabled, the instance will be rotated so that the +X axis points down-slope" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageNormal_MetaData[] = {
		{ "Category", "Placement" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Will average normal based on Foliage Type base radius (this as a cost as it will do extra line traces)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageNormalSingleComponent_MetaData[] = {
		{ "Category", "Placement" },
		{ "EditCondition", "AverageNormal" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether to discard normals originating from other hit components or not when averaging normals" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlignMaxAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "359" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The maximum angle in degrees that foliage instances will be adjusted away from the vertical */" },
		{ "HideBehind", "AlignToNormal" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The maximum angle in degrees that foliage instances will be adjusted away from the vertical" },
		{ "UIMax", "359" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomYaw_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/** If selected, foliage instances will have a random yaw rotation around their vertical axis applied */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyRandomYaw" },
		{ "ToolTip", "If selected, foliage instances will have a random yaw rotation around their vertical axis applied" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomPitchAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "359" },
		{ "ClampMin", "0" },
		{ "Comment", "/** A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyRandomPitchAngle" },
		{ "ToolTip", "A random pitch adjustment can be applied to each instance, up to the specified angle in degrees, from the original vertical" },
		{ "UIMax", "359" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSlopeAngle_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "359" },
		{ "ClampMin", "0" },
		{ "Comment", "/* Foliage instances will only be placed on surfaces sloping in the specified angle range from the horizontal */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyGroundSlope" },
		{ "ToolTip", "Foliage instances will only be placed on surfaces sloping in the specified angle range from the horizontal" },
		{ "UIMax", "359" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Height_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/* The valid altitude range where foliage instances will be placed, specified using minimum and maximum world coordinate Z values */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyHeight" },
		{ "ToolTip", "The valid altitude range where foliage instances will be placed, specified using minimum and maximum world coordinate Z values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayers_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/** If layer names are specified, painting on landscape will limit the foliage to areas of landscape with the specified layers painted */" },
		{ "DisplayName", "Inclusion Landscape Layers" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyLandscapeLayers" },
		{ "ToolTip", "If layer names are specified, painting on landscape will limit the foliage to areas of landscape with the specified layers painted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumLayerWeight_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specifies the minimum value above which the landscape layer weight value must be, in order for foliage instances to be placed in a specific area */" },
		{ "DisplayName", "Minimum Inclusion Landscape Weight" },
		{ "HideBehind", "LandscapeLayers" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the minimum value above which the landscape layer weight value must be, in order for foliage instances to be placed in a specific area" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExclusionLandscapeLayers_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/** If layer names are specified, painting on landscape will exclude the foliage to areas of landscape without the specified layers painted */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyLandscapeLayers" },
		{ "ToolTip", "If layer names are specified, painting on landscape will exclude the foliage to areas of landscape without the specified layers painted" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumExclusionLayerWeight_MetaData[] = {
		{ "Category", "Placement" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Specifies the minimum value above which the landscape exclusion layer weight value must be, in order for foliage instances to be excluded in a specific area */" },
		{ "HideBehind", "ExclusionLandscapeLayers" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Specifies the minimum value above which the landscape exclusion layer weight value must be, in order for foliage instances to be excluded in a specific area" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LandscapeLayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionWithWorld_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/* If checked, an overlap test with existing world geometry is performed before each instance is placed */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ReapplyCondition", "ReapplyCollisionWithWorld" },
		{ "ToolTip", "If checked, an overlap test with existing world geometry is performed before each instance is placed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionScale_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/* The foliage instance's collision bounding box will be scaled by the specified amount before performing the overlap check */" },
		{ "HideBehind", "CollisionWithWorld" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The foliage instance's collision bounding box will be scaled by the specified amount before performing the overlap check" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageNormalSampleCount_MetaData[] = {
		{ "Category", "Placement" },
		{ "Comment", "/** Line trace count to use around hit location when averaging normal */" },
		{ "EditCondition", "AverageNormal" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Line trace count to use around hit location when averaging normal" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshBounds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LowBoundOriginRadius_MetaData[] = {
		{ "Comment", "// X, Y is origin position and Z is radius...\n" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "X, Y is origin position and Z is radius..." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mobility_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Mobility property to apply to foliage components */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Mobility property to apply to foliage components" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/**\n\x09 * The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables.\n\x09 * When the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "The distance where instances will begin to fade out if using a PerInstanceFadeAmount material node. 0 disables.\nWhen the entire cluster is beyond this distance, the cluster is completely culled and not rendered at all." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStaticLighting_MetaData[] = {
		{ "Comment", "/** Deprecated. Now use the Mobility setting to control static/dynamic lighting */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Deprecated. Now use the Mobility setting to control static/dynamic lighting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Controls whether the foliage should cast a shadow or not. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the foliage should cast a shadow or not." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDynamicIndirectLighting_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the foliage should inject light into the Light Propagation Volume.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectDistanceFieldLighting_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the primitive should affect dynamic distance field lighting methods.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDynamicShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Controls whether the foliage should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls whether the foliage should cast shadows in the case of non precomputed shadowing.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastStaticShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Whether the foliage should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether the foliage should cast a static shadow from shadow casting lights.  This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastContactShadow_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Whether the object should cast contact shadows. This flag is only used if CastShadow is true. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether the object should cast contact shadows. This flag is only used if CastShadow is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowAsTwoSided_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Whether this foliage should cast dynamic shadows as if it were a two sided material. */" },
		{ "EditCondition", "bCastDynamicShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether this foliage should cast dynamic shadows as if it were a two sided material." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReceivesDecals_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Whether the foliage receives decals. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether the foliage receives decals." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightMapRes_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Whether to override the lightmap resolution defined in the static mesh. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether to override the lightmap resolution defined in the static mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCacheInvalidationBehavior_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset. */" },
		{ "EditCondition", "CastShadow" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Control shadow invalidation behavior, in particular with respect to Virtual Shadow Maps and material effects like World Position Offset." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverriddenLightMapRes_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Overrides the lightmap resolution defined in the static mesh */" },
		{ "DisplayName", "Light Map Resolution" },
		{ "EditCondition", "bOverrideLightMapRes" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Overrides the lightmap resolution defined in the static mesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmapType_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Controls the type of lightmap used for this component. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls the type of lightmap used for this component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsOccluder_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/**\n\x09 * If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows \n\x09 * it to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If enabled, foliage will render a pre-pass which allows it to occlude other primitives, and also allows\nit to correctly receive DBuffer decals. Enabling this setting may have a negative performance impact." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bVisibleInRayTracing_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEvaluateWorldPositionOffset_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPositionOffsetDisableDistance_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BodyInstance_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Custom collision for foliage */" },
		{ "HideObjectType", "TRUE" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Custom collision for foliage" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomNavigableGeometry_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Force navmesh */" },
		{ "HideObjectType", "TRUE" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Force navmesh" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/**\n\x09 * Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Lighting channels that placed foliage will be assigned. Lights with matching channels will affect the foliage.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderCustomDepth_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines) */" },
		{ "DisplayName", "Render CustomDepth Pass" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If true, the foliage will be rendered in the CustomDepth pass (usually used for outlines)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilWriteMask_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Mask used for stencil buffer writes. */" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Mask used for stencil buffer writes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomDepthStencilValue_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/** Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3) */" },
		{ "DisplayName", "CustomDepth Stencil Value" },
		{ "editcondition", "bRenderCustomDepth" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Optionally write this 0-255 value to the stencil buffer in CustomDepth pass (Requires project setting or r.CustomDepth == 3)" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TranslucencySortPriority_MetaData[] = {
		{ "Category", "InstanceSettings" },
		{ "Comment", "/**\n\x09 * Translucent objects with a lower sort priority draw behind objects with a higher priority.\n\x09 * Translucent objects with the same priority are rendered from back-to-front based on their bounds origin.\n\x09 * This setting is also used to sort objects being drawn into a runtime virtual texture.\n\x09 *\n\x09 * Ignored if the object is not translucent.  The default priority is zero.\n\x09 * Warning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly.\n\x09 * It is especially problematic on dynamic gameplay effects.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Translucent objects with a lower sort priority draw behind objects with a higher priority.\nTranslucent objects with the same priority are rendered from back-to-front based on their bounds origin.\nThis setting is also used to sort objects being drawn into a runtime virtual texture.\n\nIgnored if the object is not translucent.  The default priority is zero.\nWarning: This should never be set to a non-default value unless you know what you are doing, as it will prevent the renderer from sorting correctly.\nIt is especially problematic on dynamic gameplay effects." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenEditorViews_MetaData[] = {
		{ "Comment", "/** Bitflag to represent in which editor views this foliage mesh is hidden. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Bitflag to represent in which editor views this foliage mesh is hidden." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionRadius_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The CollisionRadius determines when two instances overlap. When two instances overlap a winner will be picked based on rules and priority. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Collision" },
		{ "ToolTip", "The CollisionRadius determines when two instances overlap. When two instances overlap a winner will be picked based on rules and priority." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadeRadius_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The ShadeRadius determines when two instances overlap. If an instance can grow in the shade this radius is ignored.*/" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Collision" },
		{ "ToolTip", "The ShadeRadius determines when two instances overlap. If an instance can grow in the shade this radius is ignored." },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSteps_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of times we age the species and spread its seeds. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The number of times we age the species and spread its seeds." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialSeedDensity_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the number of seeds to populate along 10 meters. The number is implicitly squared to cover a 10m x 10m area*/" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "Specifies the number of seeds to populate along 10 meters. The number is implicitly squared to cover a 10m x 10m area" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AverageSpreadDistance_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The average distance between the spreading instance and its seeds. For example, a tree with an AverageSpreadDistance 10 will ensure the average distance between the tree and its seeds is 10cm */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The average distance between the spreading instance and its seeds. For example, a tree with an AverageSpreadDistance 10 will ensure the average distance between the tree and its seeds is 10cm" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpreadVariance_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies how much seed distance varies from the average. For example, a tree with an AverageSpreadDistance 10 and a SpreadVariance 1 will produce seeds with an average distance of 10cm plus or minus 1cm */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "Specifies how much seed distance varies from the average. For example, a tree with an AverageSpreadDistance 10 and a SpreadVariance 1 will produce seeds with an average distance of 10cm plus or minus 1cm" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeedsPerStep_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The number of seeds an instance will spread in a single step of the simulation. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The number of seeds an instance will spread in a single step of the simulation." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistributionSeed_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/** The seed that determines placement of initial seeds. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The seed that determines placement of initial seeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInitialSeedOffset_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/** The seed that determines placement of initial seeds. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Clustering" },
		{ "ToolTip", "The seed that determines placement of initial seeds." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanGrowInShade_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/** If true, seeds of this type will ignore shade radius during overlap tests with other types. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "If true, seeds of this type will ignore shade radius during overlap tests with other types." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSpawnsInShade_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/** \n\x09 * Whether new seeds are spawned exclusively in shade. Occurs in a second pass after all types that do not spawn in shade have been simulated. \n\x09 * Only valid when CanGrowInShade is true. \n\x09 */" },
		{ "EditCondition", "bCanGrowInShade" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Whether new seeds are spawned exclusively in shade. Occurs in a second pass after all types that do not spawn in shade have been simulated.\nOnly valid when CanGrowInShade is true." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxInitialAge_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Allows a new seed to be older than 0 when created. New seeds will be randomly assigned an age in the range [0,MaxInitialAge] */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Allows a new seed to be older than 0 when created. New seeds will be randomly assigned an age in the range [0,MaxInitialAge]" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAge_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Specifies the oldest a seed can be. After reaching this age the instance will still spread seeds, but will not get any older*/" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Specifies the oldest a seed can be. After reaching this age the instance will still spread seeds, but will not get any older" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapPriority_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/** \n\x09 * When two instances overlap we must determine which instance to remove. \n\x09 * The instance with a lower OverlapPriority will be removed. \n\x09 * In the case where OverlapPriority is the same regular simulation rules apply.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "When two instances overlap we must determine which instance to remove.\nThe instance with a lower OverlapPriority will be removed.\nIn the case where OverlapPriority is the same regular simulation rules apply." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProceduralScale_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** The scale range of this type when being procedurally generated. Configured with the Scale Curve. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "The scale range of this type when being procedurally generated. Configured with the Scale Curve." },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleCurve_MetaData[] = {
		{ "Category", "Procedural" },
		{ "Comment", "/** \n\x09 * Instance scale factor as a function of normalized age (i.e. Current Age / Max Age).\n\x09 * X = 0 corresponds to Age = 0, X = 1 corresponds to Age = Max Age.\n\x09 * Y = 0 corresponds to Min Scale, Y = 1 corresponds to Max Scale.\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "Subcategory", "Growth" },
		{ "ToolTip", "Instance scale factor as a function of normalized age (i.e. Current Age / Max Age).\nX = 0 corresponds to Age = 0, X = 1 corresponds to Age = Max Age.\nY = 0 corresponds to Min Scale, Y = 1 corresponds to Max Scale." },
		{ "XAxisName", "Normalized Age" },
		{ "YAxisName", "Scale Factor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DensityFalloff_MetaData[] = {
		{ "Category", "Procedural" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChangeCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyDensity_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, the density of foliage instances already placed will be adjusted by the density adjustment factor. */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, the density of foliage instances already placed will be adjusted by the density adjustment factor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyRadius_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances not meeting the new Radius constraint will be removed */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances not meeting the new Radius constraint will be removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyAlignToNormal_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their normal alignment adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their normal alignment adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyRandomYaw_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their yaw adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their yaw adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaling_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their scale adjusted to fit the specified scaling behavior by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their scale adjusted to fit the specified scaling behavior by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleX_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their X scale adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their X scale adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleY_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their Y scale adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their Y scale adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyScaleZ_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their Z scale adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their Z scale adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyRandomPitchAngle_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their pitch adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their pitch adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyGroundSlope_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances not meeting the ground slope condition will be removed by the Reapply too */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances not meeting the ground slope condition will be removed by the Reapply too" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyHeight_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/* If checked, foliage instances not meeting the valid Z height condition will be removed by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances not meeting the valid Z height condition will be removed by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyLandscapeLayers_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/* If checked, foliage instances painted on areas that do not have the appropriate landscape layer painted will be removed by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances painted on areas that do not have the appropriate landscape layer painted will be removed by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyZOffset_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/** If checked, foliage instances will have their Z offset adjusted by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have their Z offset adjusted by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyCollisionWithWorld_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/* If checked, foliage instances will have an overlap test with the world reapplied, and overlapping instances will be removed by the Reapply tool */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances will have an overlap test with the world reapplied, and overlapping instances will be removed by the Reapply tool" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReapplyVertexColorMask_MetaData[] = {
		{ "Category", "Reapply" },
		{ "Comment", "/* If checked, foliage instances no longer matching the vertex color constraint will be removed by the Reapply too */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "If checked, foliage instances no longer matching the vertex color constraint will be removed by the Reapply too" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDensityScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/**\n\x09 * Whether this foliage type should be affected by the Engine Scalability system's Foliage scalability setting.\n\x09 * Enable for detail meshes that don't really affect the game. Disable for anything important.\n\x09 * Typically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)\n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether this foliage type should be affected by the Engine Scalability system's Foliage scalability setting.\nEnable for detail meshes that don't really affect the game. Disable for anything important.\nTypically, this will be enabled for small meshes without collision (e.g. grass) and disabled for large meshes with collision (e.g. trees)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableDiscardOnLoad_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/**\n\x09* Whether this foliage type should be discarded when CVarFoliageDiscardDataOnLoad is enabled.\n\x09*/" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Whether this foliage type should be discarded when CVarFoliageDiscardDataOnLoad is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCullDistanceScaling_MetaData[] = {
		{ "Category", "Scalability" },
		{ "Comment", "/*\n\x09 * Whether this foliage type should be affected by the Engine's \"foliage.CullDistanceScale\" setting \n\x09 */" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "* Whether this foliage type should be affected by the Engine's \"foliage.CullDistanceScale\" setting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RuntimeVirtualTextures_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** \n\x09 * Array of runtime virtual textures into which we draw the instances. \n\x09 * The mesh material also needs to be set up to output to a virtual texture. \n\x09 */" },
		{ "DisplayName", "Draw in Virtual Textures" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Array of runtime virtual textures into which we draw the instances.\nThe mesh material also needs to be set up to output to a virtual texture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureCullMips_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/**\n\x09 * Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\n\x09 * Larger values reduce the effective draw distance in the runtime virtual texture.\n\x09 * This culling method doesn't take into account primitive size or virtual texture size.\n\x09 */" },
		{ "DisplayName", "Virtual Texture Skip Mips" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Number of lower mips in the runtime virtual texture to skip for rendering this primitive.\nLarger values reduce the effective draw distance in the runtime virtual texture.\nThis culling method doesn't take into account primitive size or virtual texture size." },
		{ "UIMax", "7" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VirtualTextureRenderPassType_MetaData[] = {
		{ "Category", "VirtualTexture" },
		{ "Comment", "/** Controls if this component draws in the main pass as well as in the virtual texture. */" },
		{ "DisplayName", "Draw in Main Pass" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Controls if this component draws in the main pass as well as in the virtual texture." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeInHLOD_MetaData[] = {
		{ "Category", "HLOD" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMinX_MetaData[] = {
		{ "Comment", "// Deprecated since FFoliageCustomVersion::FoliageTypeCustomization\n" },
		{ "ModuleRelativePath", "Public/FoliageType.h" },
		{ "ToolTip", "Deprecated since FFoliageCustomVersion::FoliageTypeCustomization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMinY_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMinZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxX_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxY_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMaxZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffsetMin_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOffsetMax_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndCullDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UniformScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockScaleX_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockScaleY_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockScaleZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundSlope_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinGroundSlope_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxScale_MetaData[] = {
		{ "ModuleRelativePath", "Public/FoliageType.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateGuid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Density;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityAdjustmentFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static void NewProp_bSingleInstanceModeOverrideRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleInstanceModeOverrideRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SingleInstanceModeRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Scaling_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Scaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleX;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleZ;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColorMaskByChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VertexColorMask;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VertexColorMaskThreshold;
	static void NewProp_VertexColorMaskInvert_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_VertexColorMaskInvert;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ZOffset;
	static void NewProp_AlignToNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AlignToNormal;
	static void NewProp_AverageNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AverageNormal;
	static void NewProp_AverageNormalSingleComponent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AverageNormalSingleComponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlignMaxAngle;
	static void NewProp_RandomYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RandomYaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandomPitchAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GroundSlopeAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Height;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LandscapeLayers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumLayerWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExclusionLandscapeLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExclusionLandscapeLayers;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinimumExclusionLayerWeight;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LandscapeLayer;
	static void NewProp_CollisionWithWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CollisionWithWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AverageNormalSampleCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshBounds;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LowBoundOriginRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Mobility;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CullDistance;
	static void NewProp_bEnableStaticLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStaticLighting;
	static void NewProp_CastShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadow;
	static void NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDynamicIndirectLighting;
	static void NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectDistanceFieldLighting;
	static void NewProp_bCastDynamicShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDynamicShadow;
	static void NewProp_bCastStaticShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastStaticShadow;
	static void NewProp_bCastContactShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastContactShadow;
	static void NewProp_bCastShadowAsTwoSided_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowAsTwoSided;
	static void NewProp_bReceivesDecals_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReceivesDecals;
	static void NewProp_bOverrideLightMapRes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightMapRes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ShadowCacheInvalidationBehavior_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ShadowCacheInvalidationBehavior;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OverriddenLightMapRes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LightmapType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LightmapType;
	static void NewProp_bUseAsOccluder_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsOccluder;
	static void NewProp_bVisibleInRayTracing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleInRayTracing;
	static void NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvaluateWorldPositionOffset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_WorldPositionOffsetDisableDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BodyInstance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomNavigableGeometry;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static void NewProp_bRenderCustomDepth_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderCustomDepth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CustomDepthStencilWriteMask_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CustomDepthStencilWriteMask;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CustomDepthStencilValue;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TranslucencySortPriority;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt64PropertyParams NewProp_HiddenEditorViews;
	static void NewProp_IsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CollisionRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadeRadius;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSteps;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialSeedDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AverageSpreadDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpreadVariance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SeedsPerStep;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DistributionSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInitialSeedOffset;
	static void NewProp_bCanGrowInShade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanGrowInShade;
	static void NewProp_bSpawnsInShade_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawnsInShade;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxInitialAge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAge;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlapPriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ProceduralScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScaleCurve;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DensityFalloff;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChangeCount;
	static void NewProp_ReapplyDensity_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyDensity;
	static void NewProp_ReapplyRadius_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyRadius;
	static void NewProp_ReapplyAlignToNormal_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyAlignToNormal;
	static void NewProp_ReapplyRandomYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyRandomYaw;
	static void NewProp_ReapplyScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaling;
	static void NewProp_ReapplyScaleX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleX;
	static void NewProp_ReapplyScaleY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleY;
	static void NewProp_ReapplyScaleZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyScaleZ;
	static void NewProp_ReapplyRandomPitchAngle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyRandomPitchAngle;
	static void NewProp_ReapplyGroundSlope_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyGroundSlope;
	static void NewProp_ReapplyHeight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyHeight;
	static void NewProp_ReapplyLandscapeLayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyLandscapeLayers;
	static void NewProp_ReapplyZOffset_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyZOffset;
	static void NewProp_ReapplyCollisionWithWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyCollisionWithWorld;
	static void NewProp_ReapplyVertexColorMask_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReapplyVertexColorMask;
	static void NewProp_bEnableDensityScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDensityScaling;
	static void NewProp_bEnableDiscardOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableDiscardOnLoad;
	static void NewProp_bEnableCullDistanceScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCullDistanceScaling;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RuntimeVirtualTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RuntimeVirtualTextures;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VirtualTextureCullMips;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VirtualTextureRenderPassType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VirtualTextureRenderPassType;
#if WITH_EDITORONLY_DATA
	static void NewProp_bIncludeInHLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeInHLOD;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMinX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMinY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMinZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxY;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScaleMaxZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightMax;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffsetMin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffsetMax;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartCullDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EndCullDistance;
	static void NewProp_UniformScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UniformScale;
	static void NewProp_LockScaleX_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockScaleX;
	static void NewProp_LockScaleY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockScaleY;
	static void NewProp_LockScaleZ_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_LockScaleZ;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinGroundSlope;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFoliageType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid = { "UpdateGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, UpdateGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateGuid_MetaData), NewProp_UpdateGuid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Density = { "Density", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, Density), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Density_MetaData), NewProp_Density_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor = { "DensityAdjustmentFactor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, DensityAdjustmentFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityAdjustmentFactor_MetaData), NewProp_DensityAdjustmentFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bSingleInstanceModeOverrideRadius_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bSingleInstanceModeOverrideRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bSingleInstanceModeOverrideRadius = { "bSingleInstanceModeOverrideRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bSingleInstanceModeOverrideRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSingleInstanceModeOverrideRadius_MetaData), NewProp_bSingleInstanceModeOverrideRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_SingleInstanceModeRadius = { "SingleInstanceModeRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, SingleInstanceModeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SingleInstanceModeRadius_MetaData), NewProp_SingleInstanceModeRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling = { "Scaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, Scaling), Z_Construct_UEnum_Foliage_EFoliageScaling, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Scaling_MetaData), NewProp_Scaling_MetaData) }; // 3283125269
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX = { "ScaleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleX), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleX_MetaData), NewProp_ScaleX_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY = { "ScaleY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleY), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleY_MetaData), NewProp_ScaleY_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ = { "ScaleZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleZ), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleZ_MetaData), NewProp_ScaleZ_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel = { "VertexColorMaskByChannel", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, CPP_ARRAY_DIM(VertexColorMaskByChannel, UFoliageType), STRUCT_OFFSET(UFoliageType, VertexColorMaskByChannel), Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMaskByChannel_MetaData), NewProp_VertexColorMaskByChannel_MetaData) }; // 193545670
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask = { "VertexColorMask", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, VertexColorMask_DEPRECATED), Z_Construct_UEnum_Foliage_FoliageVertexColorMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMask_MetaData), NewProp_VertexColorMask_MetaData) }; // 1281680900
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold = { "VertexColorMaskThreshold", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, VertexColorMaskThreshold_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMaskThreshold_MetaData), NewProp_VertexColorMaskThreshold_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->VertexColorMaskInvert_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert = { "VertexColorMaskInvert", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VertexColorMaskInvert_MetaData), NewProp_VertexColorMaskInvert_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset = { "ZOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ZOffset), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffset_MetaData), NewProp_ZOffset_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->AlignToNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal = { "AlignToNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignToNormal_MetaData), NewProp_AlignToNormal_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormal_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->AverageNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormal = { "AverageNormal", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageNormal_MetaData), NewProp_AverageNormal_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSingleComponent_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->AverageNormalSingleComponent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSingleComponent = { "AverageNormalSingleComponent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSingleComponent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageNormalSingleComponent_MetaData), NewProp_AverageNormalSingleComponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle = { "AlignMaxAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, AlignMaxAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlignMaxAngle_MetaData), NewProp_AlignMaxAngle_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->RandomYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw = { "RandomYaw", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomYaw_MetaData), NewProp_RandomYaw_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle = { "RandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, RandomPitchAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomPitchAngle_MetaData), NewProp_RandomPitchAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle = { "GroundSlopeAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, GroundSlopeAngle), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSlopeAngle_MetaData), NewProp_GroundSlopeAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, Height), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Height_MetaData), NewProp_Height_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_Inner = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers = { "LandscapeLayers", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, LandscapeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayers_MetaData), NewProp_LandscapeLayers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight = { "MinimumLayerWeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MinimumLayerWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumLayerWeight_MetaData), NewProp_MinimumLayerWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ExclusionLandscapeLayers_Inner = { "ExclusionLandscapeLayers", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ExclusionLandscapeLayers = { "ExclusionLandscapeLayers", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ExclusionLandscapeLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExclusionLandscapeLayers_MetaData), NewProp_ExclusionLandscapeLayers_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumExclusionLayerWeight = { "MinimumExclusionLayerWeight", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MinimumExclusionLayerWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumExclusionLayerWeight_MetaData), NewProp_MinimumExclusionLayerWeight_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer = { "LandscapeLayer", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, LandscapeLayer_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LandscapeLayer_MetaData), NewProp_LandscapeLayer_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->CollisionWithWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld = { "CollisionWithWorld", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionWithWorld_MetaData), NewProp_CollisionWithWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale = { "CollisionScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, CollisionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionScale_MetaData), NewProp_CollisionScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSampleCount = { "AverageNormalSampleCount", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, AverageNormalSampleCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageNormalSampleCount_MetaData), NewProp_AverageNormalSampleCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds = { "MeshBounds", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MeshBounds), Z_Construct_UScriptStruct_FBoxSphereBounds, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshBounds_MetaData), NewProp_MeshBounds_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius = { "LowBoundOriginRadius", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, LowBoundOriginRadius), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LowBoundOriginRadius_MetaData), NewProp_LowBoundOriginRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility = { "Mobility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, Mobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mobility_MetaData), NewProp_Mobility_MetaData) }; // 2012069661
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, CullDistance), Z_Construct_UScriptStruct_FInt32Interval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CullDistance_MetaData), NewProp_CullDistance_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bEnableStaticLighting_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting = { "bEnableStaticLighting", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStaticLighting_MetaData), NewProp_bEnableStaticLighting_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->CastShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow = { "CastShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadow_MetaData), NewProp_CastShadow_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bAffectDynamicIndirectLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting = { "bAffectDynamicIndirectLighting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDynamicIndirectLighting_MetaData), NewProp_bAffectDynamicIndirectLighting_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bAffectDistanceFieldLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting = { "bAffectDistanceFieldLighting", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectDistanceFieldLighting_MetaData), NewProp_bAffectDistanceFieldLighting_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bCastDynamicShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow = { "bCastDynamicShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDynamicShadow_MetaData), NewProp_bCastDynamicShadow_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bCastStaticShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow = { "bCastStaticShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastStaticShadow_MetaData), NewProp_bCastStaticShadow_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastContactShadow_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bCastContactShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastContactShadow = { "bCastContactShadow", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastContactShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastContactShadow_MetaData), NewProp_bCastContactShadow_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bCastShadowAsTwoSided = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided = { "bCastShadowAsTwoSided", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowAsTwoSided_MetaData), NewProp_bCastShadowAsTwoSided_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bReceivesDecals = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals = { "bReceivesDecals", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReceivesDecals_MetaData), NewProp_bReceivesDecals_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bOverrideLightMapRes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes = { "bOverrideLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLightMapRes_MetaData), NewProp_bOverrideLightMapRes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadowCacheInvalidationBehavior = { "ShadowCacheInvalidationBehavior", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ShadowCacheInvalidationBehavior), Z_Construct_UEnum_Engine_EShadowCacheInvalidationBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCacheInvalidationBehavior_MetaData), NewProp_ShadowCacheInvalidationBehavior_MetaData) }; // 2141891292
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes = { "OverriddenLightMapRes", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, OverriddenLightMapRes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverriddenLightMapRes_MetaData), NewProp_OverriddenLightMapRes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType = { "LightmapType", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, LightmapType), Z_Construct_UEnum_Engine_ELightmapType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmapType_MetaData), NewProp_LightmapType_MetaData) }; // 1850895107
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bUseAsOccluder = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder = { "bUseAsOccluder", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsOccluder_MetaData), NewProp_bUseAsOccluder_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bVisibleInRayTracing_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bVisibleInRayTracing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bVisibleInRayTracing = { "bVisibleInRayTracing", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bVisibleInRayTracing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bVisibleInRayTracing_MetaData), NewProp_bVisibleInRayTracing_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bEvaluateWorldPositionOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEvaluateWorldPositionOffset = { "bEvaluateWorldPositionOffset", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEvaluateWorldPositionOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEvaluateWorldPositionOffset_MetaData), NewProp_bEvaluateWorldPositionOffset_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_WorldPositionOffsetDisableDistance = { "WorldPositionOffsetDisableDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, WorldPositionOffsetDisableDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPositionOffsetDisableDistance_MetaData), NewProp_WorldPositionOffsetDisableDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance = { "BodyInstance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, BodyInstance), Z_Construct_UScriptStruct_FBodyInstance, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BodyInstance_MetaData), NewProp_BodyInstance_MetaData) }; // 3706165537
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry = { "CustomNavigableGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, CustomNavigableGeometry), Z_Construct_UEnum_Engine_EHasCustomNavigableGeometry, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomNavigableGeometry_MetaData), NewProp_CustomNavigableGeometry_MetaData) }; // 4074914048
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bRenderCustomDepth = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth = { "bRenderCustomDepth", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderCustomDepth_MetaData), NewProp_bRenderCustomDepth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilWriteMask_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilWriteMask = { "CustomDepthStencilWriteMask", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, CustomDepthStencilWriteMask), Z_Construct_UEnum_Engine_ERendererStencilMask, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilWriteMask_MetaData), NewProp_CustomDepthStencilWriteMask_MetaData) }; // 2385485039
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue = { "CustomDepthStencilValue", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, CustomDepthStencilValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomDepthStencilValue_MetaData), NewProp_CustomDepthStencilValue_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_TranslucencySortPriority = { "TranslucencySortPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, TranslucencySortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TranslucencySortPriority_MetaData), NewProp_TranslucencySortPriority_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt64PropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews = { "HiddenEditorViews", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, HiddenEditorViews), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenEditorViews_MetaData), NewProp_HiddenEditorViews_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->IsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSelected_MetaData), NewProp_IsSelected_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius = { "CollisionRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, CollisionRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionRadius_MetaData), NewProp_CollisionRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius = { "ShadeRadius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ShadeRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadeRadius_MetaData), NewProp_ShadeRadius_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps = { "NumSteps", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, NumSteps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSteps_MetaData), NewProp_NumSteps_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity = { "InitialSeedDensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, InitialSeedDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialSeedDensity_MetaData), NewProp_InitialSeedDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance = { "AverageSpreadDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, AverageSpreadDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AverageSpreadDistance_MetaData), NewProp_AverageSpreadDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance = { "SpreadVariance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, SpreadVariance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpreadVariance_MetaData), NewProp_SpreadVariance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep = { "SeedsPerStep", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, SeedsPerStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeedsPerStep_MetaData), NewProp_SeedsPerStep_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed = { "DistributionSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, DistributionSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistributionSeed_MetaData), NewProp_DistributionSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset = { "MaxInitialSeedOffset", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MaxInitialSeedOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInitialSeedOffset_MetaData), NewProp_MaxInitialSeedOffset_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bCanGrowInShade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade = { "bCanGrowInShade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanGrowInShade_MetaData), NewProp_bCanGrowInShade_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bSpawnsInShade = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade = { "bSpawnsInShade", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSpawnsInShade_MetaData), NewProp_bSpawnsInShade_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge = { "MaxInitialAge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MaxInitialAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxInitialAge_MetaData), NewProp_MaxInitialAge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge = { "MaxAge", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MaxAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAge_MetaData), NewProp_MaxAge_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority = { "OverlapPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, OverlapPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapPriority_MetaData), NewProp_OverlapPriority_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale = { "ProceduralScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ProceduralScale), Z_Construct_UScriptStruct_FFloatInterval, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProceduralScale_MetaData), NewProp_ProceduralScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve = { "ScaleCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleCurve_MetaData), NewProp_ScaleCurve_MetaData) }; // 762678829
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityFalloff = { "DensityFalloff", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, DensityFalloff), Z_Construct_UScriptStruct_FFoliageDensityFalloff, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DensityFalloff_MetaData), NewProp_DensityFalloff_MetaData) }; // 2297724365
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount = { "ChangeCount", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ChangeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChangeCount_MetaData), NewProp_ChangeCount_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyDensity = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity = { "ReapplyDensity", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyDensity_MetaData), NewProp_ReapplyDensity_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyRadius = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius = { "ReapplyRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyRadius_MetaData), NewProp_ReapplyRadius_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyAlignToNormal = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal = { "ReapplyAlignToNormal", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyAlignToNormal_MetaData), NewProp_ReapplyAlignToNormal_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyRandomYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw = { "ReapplyRandomYaw", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyRandomYaw_MetaData), NewProp_ReapplyRandomYaw_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling = { "ReapplyScaling", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyScaling_MetaData), NewProp_ReapplyScaling_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyScaleX = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX = { "ReapplyScaleX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyScaleX_MetaData), NewProp_ReapplyScaleX_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyScaleY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY = { "ReapplyScaleY", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyScaleY_MetaData), NewProp_ReapplyScaleY_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyScaleZ = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ = { "ReapplyScaleZ", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyScaleZ_MetaData), NewProp_ReapplyScaleZ_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyRandomPitchAngle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle = { "ReapplyRandomPitchAngle", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyRandomPitchAngle_MetaData), NewProp_ReapplyRandomPitchAngle_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyGroundSlope = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope = { "ReapplyGroundSlope", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyGroundSlope_MetaData), NewProp_ReapplyGroundSlope_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyHeight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight = { "ReapplyHeight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyHeight_MetaData), NewProp_ReapplyHeight_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyLandscapeLayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers = { "ReapplyLandscapeLayers", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyLandscapeLayers_MetaData), NewProp_ReapplyLandscapeLayers_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyZOffset = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset = { "ReapplyZOffset", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyZOffset_MetaData), NewProp_ReapplyZOffset_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyCollisionWithWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld = { "ReapplyCollisionWithWorld", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyCollisionWithWorld_MetaData), NewProp_ReapplyCollisionWithWorld_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->ReapplyVertexColorMask = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask = { "ReapplyVertexColorMask", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReapplyVertexColorMask_MetaData), NewProp_ReapplyVertexColorMask_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bEnableDensityScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling = { "bEnableDensityScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDensityScaling_MetaData), NewProp_bEnableDensityScaling_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDiscardOnLoad_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bEnableDiscardOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDiscardOnLoad = { "bEnableDiscardOnLoad", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDiscardOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableDiscardOnLoad_MetaData), NewProp_bEnableDiscardOnLoad_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableCullDistanceScaling_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bEnableCullDistanceScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableCullDistanceScaling = { "bEnableCullDistanceScaling", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableCullDistanceScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCullDistanceScaling_MetaData), NewProp_bEnableCullDistanceScaling_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_RuntimeVirtualTextures_Inner = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_RuntimeVirtualTextures = { "RuntimeVirtualTextures", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, RuntimeVirtualTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RuntimeVirtualTextures_MetaData), NewProp_RuntimeVirtualTextures_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VirtualTextureCullMips = { "VirtualTextureCullMips", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, VirtualTextureCullMips), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureCullMips_MetaData), NewProp_VirtualTextureCullMips_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VirtualTextureRenderPassType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_VirtualTextureRenderPassType = { "VirtualTextureRenderPassType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, VirtualTextureRenderPassType), Z_Construct_UEnum_Engine_ERuntimeVirtualTextureMainPassType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VirtualTextureRenderPassType_MetaData), NewProp_VirtualTextureRenderPassType_MetaData) }; // 531654431
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UFoliageType_Statics::NewProp_bIncludeInHLOD_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->bIncludeInHLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_bIncludeInHLOD = { "bIncludeInHLOD", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_bIncludeInHLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIncludeInHLOD_MetaData), NewProp_bIncludeInHLOD_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX = { "ScaleMinX", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleMinX_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMinX_MetaData), NewProp_ScaleMinX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY = { "ScaleMinY", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleMinY_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMinY_MetaData), NewProp_ScaleMinY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ = { "ScaleMinZ", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleMinZ_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMinZ_MetaData), NewProp_ScaleMinZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX = { "ScaleMaxX", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleMaxX_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMaxX_MetaData), NewProp_ScaleMaxX_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY = { "ScaleMaxY", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleMaxY_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMaxY_MetaData), NewProp_ScaleMaxY_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ = { "ScaleMaxZ", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ScaleMaxZ_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleMaxZ_MetaData), NewProp_ScaleMaxZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin = { "HeightMin", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, HeightMin_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMin_MetaData), NewProp_HeightMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax = { "HeightMax", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, HeightMax_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightMax_MetaData), NewProp_HeightMax_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin = { "ZOffsetMin", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ZOffsetMin_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffsetMin_MetaData), NewProp_ZOffsetMin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax = { "ZOffsetMax", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, ZOffsetMax_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOffsetMax_MetaData), NewProp_ZOffsetMax_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance = { "StartCullDistance", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, StartCullDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartCullDistance_MetaData), NewProp_StartCullDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance = { "EndCullDistance", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, EndCullDistance_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndCullDistance_MetaData), NewProp_EndCullDistance_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->UniformScale_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale = { "UniformScale", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UniformScale_MetaData), NewProp_UniformScale_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->LockScaleX_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX = { "LockScaleX", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockScaleX_MetaData), NewProp_LockScaleX_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->LockScaleY_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY = { "LockScaleY", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockScaleY_MetaData), NewProp_LockScaleY_MetaData) };
void Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_SetBit(void* Obj)
{
	((UFoliageType*)Obj)->LockScaleZ_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ = { "LockScaleZ", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UFoliageType), &Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockScaleZ_MetaData), NewProp_LockScaleZ_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope = { "GroundSlope", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, GroundSlope_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundSlope_MetaData), NewProp_GroundSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope = { "MinGroundSlope", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MinGroundSlope_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinGroundSlope_MetaData), NewProp_MinGroundSlope_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale = { "MinScale", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MinScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinScale_MetaData), NewProp_MinScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale = { "MaxScale", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFoliageType, MaxScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxScale_MetaData), NewProp_MaxScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFoliageType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_UpdateGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Density,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityAdjustmentFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bSingleInstanceModeOverrideRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_SingleInstanceModeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Scaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskByChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VertexColorMaskInvert,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignToNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSingleComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AlignMaxAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_RandomPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlopeAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Height,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumLayerWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ExclusionLandscapeLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ExclusionLandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinimumExclusionLayerWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LandscapeLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionWithWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageNormalSampleCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MeshBounds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LowBoundOriginRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_Mobility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableStaticLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CastShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDynamicIndirectLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bAffectDistanceFieldLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastDynamicShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastStaticShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastContactShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCastShadowAsTwoSided,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bReceivesDecals,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bOverrideLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadowCacheInvalidationBehavior_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadowCacheInvalidationBehavior,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_OverriddenLightMapRes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LightmapType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bUseAsOccluder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bVisibleInRayTracing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEvaluateWorldPositionOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_WorldPositionOffsetDisableDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_BodyInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomNavigableGeometry,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bRenderCustomDepth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilWriteMask_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilWriteMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CustomDepthStencilValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_TranslucencySortPriority,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_HiddenEditorViews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_IsSelected,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_CollisionRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ShadeRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_NumSteps,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_InitialSeedDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_AverageSpreadDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_SpreadVariance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_SeedsPerStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_DistributionSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialSeedOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bCanGrowInShade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bSpawnsInShade,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxInitialAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_OverlapPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ProceduralScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_DensityFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ChangeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyAlignToNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyRandomPitchAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyGroundSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyLandscapeLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyZOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyCollisionWithWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ReapplyVertexColorMask,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDensityScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableDiscardOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bEnableCullDistanceScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_RuntimeVirtualTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_RuntimeVirtualTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VirtualTextureCullMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VirtualTextureRenderPassType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_VirtualTextureRenderPassType,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_bIncludeInHLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMinZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ScaleMaxZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_HeightMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_ZOffsetMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_StartCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_EndCullDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_UniformScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_LockScaleZ,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_GroundSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinGroundSlope,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MinScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFoliageType_Statics::NewProp_MaxScale,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFoliageType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Foliage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFoliageType_Statics::ClassParams = {
	&UFoliageType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFoliageType_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::PropPointers),
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFoliageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UFoliageType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFoliageType()
{
	if (!Z_Registration_Info_UClass_UFoliageType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFoliageType.OuterSingleton, Z_Construct_UClass_UFoliageType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFoliageType.OuterSingleton;
}
template<> FOLIAGE_API UClass* StaticClass<UFoliageType>()
{
	return UFoliageType::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFoliageType);
UFoliageType::~UFoliageType() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UFoliageType)
// End Class UFoliageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ FoliageVertexColorMask_StaticEnum, TEXT("FoliageVertexColorMask"), &Z_Registration_Info_UEnum_FoliageVertexColorMask, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1281680900U) },
		{ EVertexColorMaskChannel_StaticEnum, TEXT("EVertexColorMaskChannel"), &Z_Registration_Info_UEnum_EVertexColorMaskChannel, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2290298241U) },
		{ EFoliageScaling_StaticEnum, TEXT("EFoliageScaling"), &Z_Registration_Info_UEnum_EFoliageScaling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3283125269U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFoliageVertexColorChannelMask::StaticStruct, Z_Construct_UScriptStruct_FFoliageVertexColorChannelMask_Statics::NewStructOps, TEXT("FoliageVertexColorChannelMask"), &Z_Registration_Info_UScriptStruct_FoliageVertexColorChannelMask, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliageVertexColorChannelMask), 193545670U) },
		{ FFoliageDensityFalloff::StaticStruct, Z_Construct_UScriptStruct_FFoliageDensityFalloff_Statics::NewStructOps, TEXT("FoliageDensityFalloff"), &Z_Registration_Info_UScriptStruct_FoliageDensityFalloff, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFoliageDensityFalloff), 2297724365U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFoliageType, UFoliageType::StaticClass, TEXT("UFoliageType"), &Z_Registration_Info_UClass_UFoliageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFoliageType), 2411335475U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_2002201334(TEXT("/Script/Foliage"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Foliage_Public_FoliageType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
