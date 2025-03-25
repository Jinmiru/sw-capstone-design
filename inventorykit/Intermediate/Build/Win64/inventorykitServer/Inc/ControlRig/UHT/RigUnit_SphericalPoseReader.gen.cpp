// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRig/Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h"
#include "ControlRig/Public/Rigs/RigHierarchyCache.h"
#include "ControlRig/Public/Rigs/RigHierarchyDefines.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_SphericalPoseReader() {}

// Begin Cross Module References
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FCachedRigElement();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRegionScaleFactors();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings();
CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FSphericalRegion();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

// Begin ScriptStruct FRegionScaleFactors
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RegionScaleFactors;
class UScriptStruct* FRegionScaleFactors::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RegionScaleFactors.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RegionScaleFactors.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRegionScaleFactors, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RegionScaleFactors"));
	}
	return Z_Registration_Info_UScriptStruct_RegionScaleFactors.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRegionScaleFactors>()
{
	return FRegionScaleFactors::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRegionScaleFactors_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveWidth_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the POSITIVE width direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the POSITIVE width direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeWidth_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the NEGATIVE width direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the NEGATIVE width direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositiveHeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the POSITIVE height direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the POSITIVE height direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NegativeHeight_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// Scale the region in the NEGATIVE height direction. Range is 0-1. Default is 1.0.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Scale the region in the NEGATIVE height direction. Range is 0-1. Default is 1.0." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeWidth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PositiveHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NegativeHeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRegionScaleFactors>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth = { "PositiveWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionScaleFactors, PositiveWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveWidth_MetaData), NewProp_PositiveWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth = { "NegativeWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionScaleFactors, NegativeWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeWidth_MetaData), NewProp_NegativeWidth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight = { "PositiveHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionScaleFactors, PositiveHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositiveHeight_MetaData), NewProp_PositiveHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight = { "NegativeHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRegionScaleFactors, NegativeHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NegativeHeight_MetaData), NewProp_NegativeHeight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_PositiveHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewProp_NegativeHeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"RegionScaleFactors",
	Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::PropPointers),
	sizeof(FRegionScaleFactors),
	alignof(FRegionScaleFactors),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRegionScaleFactors()
{
	if (!Z_Registration_Info_UScriptStruct_RegionScaleFactors.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RegionScaleFactors.InnerSingleton, Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RegionScaleFactors.InnerSingleton;
}
// End ScriptStruct FRegionScaleFactors

// Begin ScriptStruct FSphericalRegion
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalRegion;
class UScriptStruct* FSphericalRegion::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalRegion.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalRegion.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalRegion, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("SphericalRegion"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalRegion.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FSphericalRegion>()
{
	return FSphericalRegion::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSphericalRegion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalRegion>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalRegion_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"SphericalRegion",
	nullptr,
	0,
	sizeof(FSphericalRegion),
	alignof(FSphericalRegion),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalRegion_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphericalRegion_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSphericalRegion()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalRegion.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalRegion.InnerSingleton, Z_Construct_UScriptStruct_FSphericalRegion_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SphericalRegion.InnerSingleton;
}
// End ScriptStruct FSphericalRegion

// Begin ScriptStruct FSphericalPoseReaderDebugSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings;
class UScriptStruct* FSphericalPoseReaderDebugSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("SphericalPoseReaderDebugSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FSphericalPoseReaderDebugSettings>()
{
	return FSphericalPoseReaderDebugSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDraw2D_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawLocalAxes_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugScale_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMin", "0.0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "UIMax", "100.0" },
		{ "UIMin", "0.01" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugSegments_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugThickness_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "50" },
		{ "ClampMin", "0" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "UIMax", "2.0" },
		{ "UIMin", "0.01" },
	};
#endif // WITH_METADATA
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static void NewProp_bDraw2D_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDraw2D;
	static void NewProp_bDrawLocalAxes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawLocalAxes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugScale;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DebugSegments;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DebugThickness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSphericalPoseReaderDebugSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((FSphericalPoseReaderDebugSettings*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSphericalPoseReaderDebugSettings), &Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
void Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_SetBit(void* Obj)
{
	((FSphericalPoseReaderDebugSettings*)Obj)->bDraw2D = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D = { "bDraw2D", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSphericalPoseReaderDebugSettings), &Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDraw2D_MetaData), NewProp_bDraw2D_MetaData) };
void Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_SetBit(void* Obj)
{
	((FSphericalPoseReaderDebugSettings*)Obj)->bDrawLocalAxes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes = { "bDrawLocalAxes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSphericalPoseReaderDebugSettings), &Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawLocalAxes_MetaData), NewProp_bDrawLocalAxes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale = { "DebugScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalPoseReaderDebugSettings, DebugScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugScale_MetaData), NewProp_DebugScale_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments = { "DebugSegments", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalPoseReaderDebugSettings, DebugSegments), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugSegments_MetaData), NewProp_DebugSegments_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness = { "DebugThickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSphericalPoseReaderDebugSettings, DebugThickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugThickness_MetaData), NewProp_DebugThickness_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDraw2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_bDrawLocalAxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugSegments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewProp_DebugThickness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	nullptr,
	&NewStructOps,
	"SphericalPoseReaderDebugSettings",
	Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::PropPointers),
	sizeof(FSphericalPoseReaderDebugSettings),
	alignof(FSphericalPoseReaderDebugSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.InnerSingleton, Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings.InnerSingleton;
}
// End ScriptStruct FSphericalPoseReaderDebugSettings

// Begin ScriptStruct FRigUnit_SphericalPoseReader
static_assert(std::is_polymorphic<FRigUnit_SphericalPoseReader>() == std::is_polymorphic<FRigUnit_HighlevelBaseMutable>(), "USTRUCT FRigUnit_SphericalPoseReader cannot be polymorphic unless super FRigUnit_HighlevelBaseMutable is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader;
class UScriptStruct* FRigUnit_SphericalPoseReader::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SphericalPoseReader"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SphericalPoseReader_Execute;
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OutputParam"), TEXT("float"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverAxis"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("RotationOffset"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("ActiveRegionSize"), TEXT("float"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("ActiveRegionScaleFactors"), TEXT("FRegionScaleFactors"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FalloffSize"), TEXT("float"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FalloffRegionScaleFactors"), TEXT("FRegionScaleFactors"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FlipWidthScaling"), TEXT("bool"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("FlipHeightScaling"), TEXT("bool"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OptionalParentItem"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("Debug"), TEXT("FSphericalPoseReaderDebugSettings"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("InnerRegion"), TEXT("FSphericalRegion"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OuterRegion"), TEXT("FSphericalRegion"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverNormal"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("Driver2D"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("DriverCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("OptionalParentCache"), TEXT("FCachedRigElement"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("LocalDriverTransformInit"), TEXT("FTransform"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("CachedRotationOffset"), TEXT("FVector"));
		Arguments_FRigUnit_SphericalPoseReader_Execute.Emplace(TEXT("bCachedInitTransforms"), TEXT("bool"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SphericalPoseReader::Execute"), &FRigUnit_SphericalPoseReader::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton, Arguments_FRigUnit_SphericalPoseReader_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SphericalPoseReader>()
{
	return FRigUnit_SphericalPoseReader::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Category", "Hierarchy" },
		{ "Comment", "/*\n * Outputs a float value between 0-1 based off of the driver item's rotation in a specified region.\n */" },
		{ "DisplayName", "Spherical Pose Reader" },
		{ "Keywords", "Pose Reader, SPR" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "* Outputs a float value between 0-1 based off of the driver item's rotation in a specified region." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputParam_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The normalized output parameter; ranges from 0 (when outside yellow region) to 1 (in the green region) and smoothly blends from 0-1 in the yellow region.\n" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "Output", "" },
		{ "ToolTip", "The normalized output parameter; ranges from 0 (when outside yellow region) to 1 (in the green region) and smoothly blends from 0-1 in the yellow region." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The bone that will drive the output parameter when rotated into the active regions of this pose reader.\n" },
		{ "ExpandByDefault", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The bone that will drive the output parameter when rotated into the active regions of this pose reader." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverAxis_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The axis of the driver transform that is compared against the falloff regions. Typically the axis that is pointing at the child; usually X by convention. Default is X-axis (1,0,0).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The axis of the driver transform that is compared against the falloff regions. Typically the axis that is pointing at the child; usually X by convention. Default is X-axis (1,0,0)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Rotate the entire falloff region to align with the desired area of effect.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Rotate the entire falloff region to align with the desired area of effect." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRegionSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The size of the active region (green) that outputs the full value (1.0). Range is 0-1. Default is 0.1.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The size of the active region (green) that outputs the full value (1.0). Range is 0-1. Default is 0.1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveRegionScaleFactors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The directional scaling parameters for the active region (green).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The directional scaling parameters for the active region (green)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffSize_MetaData[] = {
		{ "Category", "Pins" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "// The size of the falloff region (yellow) that defines the start of the output range. A value of 1 wraps the entire sphere with falloff. Range is 0-1. Default is 0.2.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The size of the falloff region (yellow) that defines the start of the output range. A value of 1 wraps the entire sphere with falloff. Range is 0-1. Default is 0.2." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FalloffRegionScaleFactors_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The directional scaling parameters for the falloff region (yellow).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "The directional scaling parameters for the falloff region (yellow)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipWidthScaling_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Flip the positive / negative directions of the width scale factors.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Flip the positive / negative directions of the width scale factors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipHeightScaling_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// Flip the positive / negative directions of the height scale factors.\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "Flip the positive / negative directions of the height scale factors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalParentItem_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// An optional parent to use as a stable frame of reference for the active regions (defaults to DriverItem's parent if unset).\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "An optional parent to use as a stable frame of reference for the active regions (defaults to DriverItem's parent if unset)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Debug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InnerRegion_MetaData[] = {
		{ "Comment", "// private work data\n" },
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
		{ "ToolTip", "private work data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OuterRegion_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Driver2D_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DriverCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalParentCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalDriverTransformInit_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedRotationOffset_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCachedInitTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/Units/Highlevel/Hierarchy/RigUnit_SphericalPoseReader.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputParam;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverAxis;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ActiveRegionSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveRegionScaleFactors;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FalloffSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FalloffRegionScaleFactors;
	static void NewProp_FlipWidthScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipWidthScaling;
	static void NewProp_FlipHeightScaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_FlipHeightScaling;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalParentItem;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Debug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InnerRegion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OuterRegion;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Driver2D;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DriverCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalParentCache;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocalDriverTransformInit;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedRotationOffset;
	static void NewProp_bCachedInitTransforms_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCachedInitTransforms;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SphericalPoseReader>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam = { "OutputParam", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OutputParam), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputParam_MetaData), NewProp_OutputParam_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem = { "DriverItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverItem_MetaData), NewProp_DriverItem_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis = { "DriverAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverAxis_MetaData), NewProp_DriverAxis_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset = { "RotationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, RotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationOffset_MetaData), NewProp_RotationOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize = { "ActiveRegionSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, ActiveRegionSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRegionSize_MetaData), NewProp_ActiveRegionSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors = { "ActiveRegionScaleFactors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, ActiveRegionScaleFactors), Z_Construct_UScriptStruct_FRegionScaleFactors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveRegionScaleFactors_MetaData), NewProp_ActiveRegionScaleFactors_MetaData) }; // 1838758710
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize = { "FalloffSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, FalloffSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffSize_MetaData), NewProp_FalloffSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors = { "FalloffRegionScaleFactors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, FalloffRegionScaleFactors), Z_Construct_UScriptStruct_FRegionScaleFactors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FalloffRegionScaleFactors_MetaData), NewProp_FalloffRegionScaleFactors_MetaData) }; // 1838758710
void Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_SetBit(void* Obj)
{
	((FRigUnit_SphericalPoseReader*)Obj)->FlipWidthScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling = { "FlipWidthScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphericalPoseReader), &Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipWidthScaling_MetaData), NewProp_FlipWidthScaling_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_SetBit(void* Obj)
{
	((FRigUnit_SphericalPoseReader*)Obj)->FlipHeightScaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling = { "FlipHeightScaling", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphericalPoseReader), &Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipHeightScaling_MetaData), NewProp_FlipHeightScaling_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem = { "OptionalParentItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OptionalParentItem), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalParentItem_MetaData), NewProp_OptionalParentItem_MetaData) }; // 1447557315
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug = { "Debug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, Debug), Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Debug_MetaData), NewProp_Debug_MetaData) }; // 2242153513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion = { "InnerRegion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, InnerRegion), Z_Construct_UScriptStruct_FSphericalRegion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InnerRegion_MetaData), NewProp_InnerRegion_MetaData) }; // 2821588918
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion = { "OuterRegion", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OuterRegion), Z_Construct_UScriptStruct_FSphericalRegion, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OuterRegion_MetaData), NewProp_OuterRegion_MetaData) }; // 2821588918
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal = { "DriverNormal", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverNormal_MetaData), NewProp_DriverNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D = { "Driver2D", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, Driver2D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Driver2D_MetaData), NewProp_Driver2D_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache = { "DriverCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, DriverCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DriverCache_MetaData), NewProp_DriverCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache = { "OptionalParentCache", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, OptionalParentCache), Z_Construct_UScriptStruct_FCachedRigElement, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalParentCache_MetaData), NewProp_OptionalParentCache_MetaData) }; // 2782416853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit = { "LocalDriverTransformInit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, LocalDriverTransformInit), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalDriverTransformInit_MetaData), NewProp_LocalDriverTransformInit_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset = { "CachedRotationOffset", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRigUnit_SphericalPoseReader, CachedRotationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedRotationOffset_MetaData), NewProp_CachedRotationOffset_MetaData) };
void Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_SetBit(void* Obj)
{
	((FRigUnit_SphericalPoseReader*)Obj)->bCachedInitTransforms = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms = { "bCachedInitTransforms", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRigUnit_SphericalPoseReader), &Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCachedInitTransforms_MetaData), NewProp_bCachedInitTransforms_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OutputParam,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_RotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_ActiveRegionScaleFactors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FalloffRegionScaleFactors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipWidthScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_FlipHeightScaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentItem,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Debug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_InnerRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OuterRegion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_Driver2D,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_DriverCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_OptionalParentCache,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_LocalDriverTransformInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_CachedRotationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewProp_bCachedInitTransforms,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	Z_Construct_UScriptStruct_FRigUnit_HighlevelBaseMutable,
	&NewStructOps,
	"RigUnit_SphericalPoseReader",
	Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::PropPointers),
	sizeof(FRigUnit_SphericalPoseReader),
	alignof(FRigUnit_SphericalPoseReader),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader.InnerSingleton;
}
void FRigUnit_SphericalPoseReader::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}
void FRigUnit_SphericalPoseReader::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		OutputParam,
		DriverItem,
		DriverAxis,
		RotationOffset,
		ActiveRegionSize,
		ActiveRegionScaleFactors,
		FalloffSize,
		FalloffRegionScaleFactors,
		FlipWidthScaling,
		FlipHeightScaling,
		OptionalParentItem,
		Debug,
		InnerRegion,
		OuterRegion,
		DriverNormal,
		Driver2D,
		DriverCache,
		OptionalParentCache,
		LocalDriverTransformInit,
		CachedRotationOffset,
		bCachedInitTransforms
	);
}
// End ScriptStruct FRigUnit_SphericalPoseReader

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRegionScaleFactors::StaticStruct, Z_Construct_UScriptStruct_FRegionScaleFactors_Statics::NewStructOps, TEXT("RegionScaleFactors"), &Z_Registration_Info_UScriptStruct_RegionScaleFactors, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRegionScaleFactors), 1838758710U) },
		{ FSphericalRegion::StaticStruct, Z_Construct_UScriptStruct_FSphericalRegion_Statics::NewStructOps, TEXT("SphericalRegion"), &Z_Registration_Info_UScriptStruct_SphericalRegion, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalRegion), 2821588918U) },
		{ FSphericalPoseReaderDebugSettings::StaticStruct, Z_Construct_UScriptStruct_FSphericalPoseReaderDebugSettings_Statics::NewStructOps, TEXT("SphericalPoseReaderDebugSettings"), &Z_Registration_Info_UScriptStruct_SphericalPoseReaderDebugSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSphericalPoseReaderDebugSettings), 2242153513U) },
		{ FRigUnit_SphericalPoseReader::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SphericalPoseReader_Statics::NewStructOps, TEXT("RigUnit_SphericalPoseReader"), &Z_Registration_Info_UScriptStruct_RigUnit_SphericalPoseReader, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SphericalPoseReader), 1917223999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_2822465731(TEXT("/Script/ControlRig"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Units_Highlevel_Hierarchy_RigUnit_SphericalPoseReader_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
