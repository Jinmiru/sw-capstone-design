// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtmosphericFogComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent();
ENGINE_API UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkyAtmosphereComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAtmosphericFogComponent Function DisableGroundScattering
struct Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics
{
	struct AtmosphericFogComponent_eventDisableGroundScattering_Parms
	{
		bool NewGroundScattering;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static void NewProp_NewGroundScattering_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewGroundScattering;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering_SetBit(void* Obj)
{
	((AtmosphericFogComponent_eventDisableGroundScattering_Parms*)Obj)->NewGroundScattering = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering = { "NewGroundScattering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtmosphericFogComponent_eventDisableGroundScattering_Parms), &Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::NewProp_NewGroundScattering,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "DisableGroundScattering", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::AtmosphericFogComponent_eventDisableGroundScattering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::AtmosphericFogComponent_eventDisableGroundScattering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execDisableGroundScattering)
{
	P_GET_UBOOL(Z_Param_NewGroundScattering);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableGroundScattering(Z_Param_NewGroundScattering);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function DisableGroundScattering

// Begin Class UAtmosphericFogComponent Function DisableSunDisk
struct Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics
{
	struct AtmosphericFogComponent_eventDisableSunDisk_Parms
	{
		bool NewSunDisk;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static void NewProp_NewSunDisk_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewSunDisk;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk_SetBit(void* Obj)
{
	((AtmosphericFogComponent_eventDisableSunDisk_Parms*)Obj)->NewSunDisk = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk = { "NewSunDisk", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AtmosphericFogComponent_eventDisableSunDisk_Parms), &Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::NewProp_NewSunDisk,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "DisableSunDisk", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::AtmosphericFogComponent_eventDisableSunDisk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::AtmosphericFogComponent_eventDisableSunDisk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execDisableSunDisk)
{
	P_GET_UBOOL(Z_Param_NewSunDisk);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableSunDisk(Z_Param_NewSunDisk);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function DisableSunDisk

// Begin Class UAtmosphericFogComponent Function SetAltitudeScale
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics
{
	struct AtmosphericFogComponent_eventSetAltitudeScale_Parms
	{
		float NewAltitudeScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewAltitudeScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::NewProp_NewAltitudeScale = { "NewAltitudeScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetAltitudeScale_Parms, NewAltitudeScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::NewProp_NewAltitudeScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetAltitudeScale", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::AtmosphericFogComponent_eventSetAltitudeScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::AtmosphericFogComponent_eventSetAltitudeScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetAltitudeScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewAltitudeScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAltitudeScale(Z_Param_NewAltitudeScale);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetAltitudeScale

// Begin Class UAtmosphericFogComponent Function SetDefaultBrightness
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics
{
	struct AtmosphericFogComponent_eventSetDefaultBrightness_Parms
	{
		float NewBrightness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBrightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::NewProp_NewBrightness = { "NewBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDefaultBrightness_Parms, NewBrightness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::NewProp_NewBrightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDefaultBrightness", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::AtmosphericFogComponent_eventSetDefaultBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::AtmosphericFogComponent_eventSetDefaultBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDefaultBrightness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrightness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultBrightness(Z_Param_NewBrightness);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetDefaultBrightness

// Begin Class UAtmosphericFogComponent Function SetDefaultLightColor
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics
{
	struct AtmosphericFogComponent_eventSetDefaultLightColor_Parms
	{
		FLinearColor NewLightColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDefaultLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::NewProp_NewLightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDefaultLightColor", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::AtmosphericFogComponent_eventSetDefaultLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::AtmosphericFogComponent_eventSetDefaultLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDefaultLightColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultLightColor(Z_Param_NewLightColor);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetDefaultLightColor

// Begin Class UAtmosphericFogComponent Function SetDensityMultiplier
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics
{
	struct AtmosphericFogComponent_eventSetDensityMultiplier_Parms
	{
		float NewDensityMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDensityMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::NewProp_NewDensityMultiplier = { "NewDensityMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDensityMultiplier_Parms, NewDensityMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::NewProp_NewDensityMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDensityMultiplier", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::AtmosphericFogComponent_eventSetDensityMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::AtmosphericFogComponent_eventSetDensityMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDensityMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDensityMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDensityMultiplier(Z_Param_NewDensityMultiplier);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetDensityMultiplier

// Begin Class UAtmosphericFogComponent Function SetDensityOffset
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics
{
	struct AtmosphericFogComponent_eventSetDensityOffset_Parms
	{
		float NewDensityOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDensityOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::NewProp_NewDensityOffset = { "NewDensityOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDensityOffset_Parms, NewDensityOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::NewProp_NewDensityOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDensityOffset", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::AtmosphericFogComponent_eventSetDensityOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::AtmosphericFogComponent_eventSetDensityOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDensityOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDensityOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDensityOffset(Z_Param_NewDensityOffset);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetDensityOffset

// Begin Class UAtmosphericFogComponent Function SetDistanceOffset
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics
{
	struct AtmosphericFogComponent_eventSetDistanceOffset_Parms
	{
		float NewDistanceOffset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDistanceOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::NewProp_NewDistanceOffset = { "NewDistanceOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDistanceOffset_Parms, NewDistanceOffset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::NewProp_NewDistanceOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDistanceOffset", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::AtmosphericFogComponent_eventSetDistanceOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::AtmosphericFogComponent_eventSetDistanceOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDistanceOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDistanceOffset);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistanceOffset(Z_Param_NewDistanceOffset);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetDistanceOffset

// Begin Class UAtmosphericFogComponent Function SetDistanceScale
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics
{
	struct AtmosphericFogComponent_eventSetDistanceScale_Parms
	{
		float NewDistanceScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewDistanceScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::NewProp_NewDistanceScale = { "NewDistanceScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetDistanceScale_Parms, NewDistanceScale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::NewProp_NewDistanceScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetDistanceScale", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::AtmosphericFogComponent_eventSetDistanceScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::AtmosphericFogComponent_eventSetDistanceScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetDistanceScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewDistanceScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDistanceScale(Z_Param_NewDistanceScale);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetDistanceScale

// Begin Class UAtmosphericFogComponent Function SetFogMultiplier
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics
{
	struct AtmosphericFogComponent_eventSetFogMultiplier_Parms
	{
		float NewFogMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFogMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::NewProp_NewFogMultiplier = { "NewFogMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetFogMultiplier_Parms, NewFogMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::NewProp_NewFogMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetFogMultiplier", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::AtmosphericFogComponent_eventSetFogMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::AtmosphericFogComponent_eventSetFogMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetFogMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFogMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogMultiplier(Z_Param_NewFogMultiplier);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetFogMultiplier

// Begin Class UAtmosphericFogComponent Function SetPrecomputeParams
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics
{
	struct AtmosphericFogComponent_eventSetPrecomputeParams_Parms
	{
		float DensityHeight;
		int32 MaxScatteringOrder;
		int32 InscatterAltitudeSampleNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DensityHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxScatteringOrder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InscatterAltitudeSampleNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_DensityHeight = { "DensityHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, DensityHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_MaxScatteringOrder = { "MaxScatteringOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, MaxScatteringOrder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_InscatterAltitudeSampleNum = { "InscatterAltitudeSampleNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetPrecomputeParams_Parms, InscatterAltitudeSampleNum), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_DensityHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_MaxScatteringOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::NewProp_InscatterAltitudeSampleNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetPrecomputeParams", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::AtmosphericFogComponent_eventSetPrecomputeParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::AtmosphericFogComponent_eventSetPrecomputeParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetPrecomputeParams)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DensityHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxScatteringOrder);
	P_GET_PROPERTY(FIntProperty,Z_Param_InscatterAltitudeSampleNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPrecomputeParams(Z_Param_DensityHeight,Z_Param_MaxScatteringOrder,Z_Param_InscatterAltitudeSampleNum);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetPrecomputeParams

// Begin Class UAtmosphericFogComponent Function SetStartDistance
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics
{
	struct AtmosphericFogComponent_eventSetStartDistance_Parms
	{
		float NewStartDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewStartDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::NewProp_NewStartDistance = { "NewStartDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetStartDistance_Parms, NewStartDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::NewProp_NewStartDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetStartDistance", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::AtmosphericFogComponent_eventSetStartDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::AtmosphericFogComponent_eventSetStartDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetStartDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewStartDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartDistance(Z_Param_NewStartDistance);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetStartDistance

// Begin Class UAtmosphericFogComponent Function SetSunMultiplier
struct Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics
{
	struct AtmosphericFogComponent_eventSetSunMultiplier_Parms
	{
		float NewSunMultiplier;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|AtmosphericFog" },
		{ "Comment", "/** Deprecated */" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Deprecated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSunMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::NewProp_NewSunMultiplier = { "NewSunMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AtmosphericFogComponent_eventSetSunMultiplier_Parms, NewSunMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::NewProp_NewSunMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAtmosphericFogComponent, nullptr, "SetSunMultiplier", nullptr, nullptr, Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::AtmosphericFogComponent_eventSetSunMultiplier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::AtmosphericFogComponent_eventSetSunMultiplier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAtmosphericFogComponent::execSetSunMultiplier)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSunMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSunMultiplier(Z_Param_NewSunMultiplier);
	P_NATIVE_END;
}
// End Class UAtmosphericFogComponent Function SetSunMultiplier

// Begin Class UAtmosphericFogComponent
void UAtmosphericFogComponent::StaticRegisterNativesUAtmosphericFogComponent()
{
	UClass* Class = UAtmosphericFogComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableGroundScattering", &UAtmosphericFogComponent::execDisableGroundScattering },
		{ "DisableSunDisk", &UAtmosphericFogComponent::execDisableSunDisk },
		{ "SetAltitudeScale", &UAtmosphericFogComponent::execSetAltitudeScale },
		{ "SetDefaultBrightness", &UAtmosphericFogComponent::execSetDefaultBrightness },
		{ "SetDefaultLightColor", &UAtmosphericFogComponent::execSetDefaultLightColor },
		{ "SetDensityMultiplier", &UAtmosphericFogComponent::execSetDensityMultiplier },
		{ "SetDensityOffset", &UAtmosphericFogComponent::execSetDensityOffset },
		{ "SetDistanceOffset", &UAtmosphericFogComponent::execSetDistanceOffset },
		{ "SetDistanceScale", &UAtmosphericFogComponent::execSetDistanceScale },
		{ "SetFogMultiplier", &UAtmosphericFogComponent::execSetFogMultiplier },
		{ "SetPrecomputeParams", &UAtmosphericFogComponent::execSetPrecomputeParams },
		{ "SetStartDistance", &UAtmosphericFogComponent::execSetStartDistance },
		{ "SetSunMultiplier", &UAtmosphericFogComponent::execSetSunMultiplier },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAtmosphericFogComponent);
UClass* Z_Construct_UClass_UAtmosphericFogComponent_NoRegister()
{
	return UAtmosphericFogComponent::StaticClass();
}
struct Z_Construct_UClass_UAtmosphericFogComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to create fogging effects such as clouds.\n */" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Atmosphere/AtmosphericFogComponent.h" },
		{ "ModuleRelativePath", "Classes/Atmosphere/AtmosphericFogComponent.h" },
		{ "ToolTip", "Used to create fogging effects such as clouds." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_DisableGroundScattering, "DisableGroundScattering" }, // 1521038902
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_DisableSunDisk, "DisableSunDisk" }, // 1997830400
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetAltitudeScale, "SetAltitudeScale" }, // 22946648
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultBrightness, "SetDefaultBrightness" }, // 958425541
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDefaultLightColor, "SetDefaultLightColor" }, // 3236371796
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityMultiplier, "SetDensityMultiplier" }, // 1543179973
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDensityOffset, "SetDensityOffset" }, // 2087962261
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceOffset, "SetDistanceOffset" }, // 309981765
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetDistanceScale, "SetDistanceScale" }, // 1319783249
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetFogMultiplier, "SetFogMultiplier" }, // 1833170357
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetPrecomputeParams, "SetPrecomputeParams" }, // 601364166
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetStartDistance, "SetStartDistance" }, // 1642775574
		{ &Z_Construct_UFunction_UAtmosphericFogComponent_SetSunMultiplier, "SetSunMultiplier" }, // 825906112
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtmosphericFogComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAtmosphericFogComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USkyAtmosphereComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAtmosphericFogComponent_Statics::ClassParams = {
	&UAtmosphericFogComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00A832A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAtmosphericFogComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UAtmosphericFogComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAtmosphericFogComponent()
{
	if (!Z_Registration_Info_UClass_UAtmosphericFogComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAtmosphericFogComponent.OuterSingleton, Z_Construct_UClass_UAtmosphericFogComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAtmosphericFogComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAtmosphericFogComponent>()
{
	return UAtmosphericFogComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAtmosphericFogComponent);
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAtmosphericFogComponent)
// End Class UAtmosphericFogComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAtmosphericFogComponent, UAtmosphericFogComponent::StaticClass, TEXT("UAtmosphericFogComponent"), &Z_Registration_Info_UClass_UAtmosphericFogComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAtmosphericFogComponent), 4260608577U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_2338740537(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Atmosphere_AtmosphericFogComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
