// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveLinearColorAtlas() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FCurveAtlasColorAdjustments
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments;
class UScriptStruct* FCurveAtlasColorAdjustments::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CurveAtlasColorAdjustments"));
	}
	return Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCurveAtlasColorAdjustments>()
{
	return FCurveAtlasColorAdjustments::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bChromaKeyTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightness_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustBrightnessCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustVibrance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustSaturation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustRGBCurve_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustHue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMinAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdjustMaxAlpha_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bChromaKeyTexture_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChromaKeyTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustBrightnessCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustVibrance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustSaturation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustRGBCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustHue;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMinAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AdjustMaxAlpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCurveAtlasColorAdjustments>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit(void* Obj)
{
	((FCurveAtlasColorAdjustments*)Obj)->bChromaKeyTexture = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture = { "bChromaKeyTexture", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FCurveAtlasColorAdjustments), &Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bChromaKeyTexture_MetaData), NewProp_bChromaKeyTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness = { "AdjustBrightness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightness_MetaData), NewProp_AdjustBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve = { "AdjustBrightnessCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustBrightnessCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustBrightnessCurve_MetaData), NewProp_AdjustBrightnessCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance = { "AdjustVibrance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustVibrance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustVibrance_MetaData), NewProp_AdjustVibrance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation = { "AdjustSaturation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustSaturation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustSaturation_MetaData), NewProp_AdjustSaturation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve = { "AdjustRGBCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustRGBCurve), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustRGBCurve_MetaData), NewProp_AdjustRGBCurve_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue = { "AdjustHue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustHue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustHue_MetaData), NewProp_AdjustHue_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha = { "AdjustMinAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustMinAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMinAlpha_MetaData), NewProp_AdjustMinAlpha_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha = { "AdjustMaxAlpha", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCurveAtlasColorAdjustments, AdjustMaxAlpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdjustMaxAlpha_MetaData), NewProp_AdjustMaxAlpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_bChromaKeyTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustBrightnessCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustVibrance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustSaturation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustRGBCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustHue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMinAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewProp_AdjustMaxAlpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"CurveAtlasColorAdjustments",
	Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::PropPointers),
	sizeof(FCurveAtlasColorAdjustments),
	alignof(FCurveAtlasColorAdjustments),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments()
{
	if (!Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.InnerSingleton, Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments.InnerSingleton;
}
// End ScriptStruct FCurveAtlasColorAdjustments

// Begin Class UCurveLinearColorAtlas Function GetCurvePosition
struct Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics
{
	struct CurveLinearColorAtlas_eventGetCurvePosition_Parms
	{
		UCurveLinearColor* InCurve;
		float Position;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCurve;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve = { "InCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, InCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CurveLinearColorAtlas_eventGetCurvePosition_Parms, Position), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CurveLinearColorAtlas_eventGetCurvePosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CurveLinearColorAtlas_eventGetCurvePosition_Parms), &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_InCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveLinearColorAtlas, nullptr, "GetCurvePosition", nullptr, nullptr, Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::CurveLinearColorAtlas_eventGetCurvePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::CurveLinearColorAtlas_eventGetCurvePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCurveLinearColorAtlas::execGetCurvePosition)
{
	P_GET_OBJECT(UCurveLinearColor,Z_Param_InCurve);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Position);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetCurvePosition(Z_Param_InCurve,Z_Param_Out_Position);
	P_NATIVE_END;
}
// End Class UCurveLinearColorAtlas Function GetCurvePosition

// Begin Class UCurveLinearColorAtlas
void UCurveLinearColorAtlas::StaticRegisterNativesUCurveLinearColorAtlas()
{
	UClass* Class = UCurveLinearColorAtlas::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurvePosition", &UCurveLinearColorAtlas::execGetCurvePosition },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveLinearColorAtlas);
UClass* Z_Construct_UClass_UCurveLinearColorAtlas_NoRegister()
{
	return UCurveLinearColorAtlas::StaticClass();
}
struct Z_Construct_UClass_UCurveLinearColorAtlas_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n*  Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor\n*/" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Curves/CurveLinearColorAtlas.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Manages gradient LUT textures for registered actors and assigns them to the corresponding materials on the actor" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsDirty_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "Curves" },
		{ "DisplayName", "Texture Width" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSquareResolution_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Set texture height equal to texture width. */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Set texture height equal to texture width." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureHeight_MetaData[] = {
		{ "Category", "Curves" },
		{ "EditCondition", "!bSquareResolution" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GradientCurves_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "// Height of the lookup textures\n" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Height of the lookup textures" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisableAllAdjustments_MetaData[] = {
		{ "Category", "Curves" },
		{ "Comment", "/** Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled. */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
		{ "ToolTip", "Disable all color adjustments to preserve negative values in curves. Color adjustments clamp to 0 when enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasCachedColorAdjustments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedColorAdjustments_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveLinearColorAtlas.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsDirty_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDirty;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureSize;
	static void NewProp_bSquareResolution_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSquareResolution;
	static const UECodeGen_Private::FUInt32PropertyParams NewProp_TextureHeight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GradientCurves_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GradientCurves;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDisableAllAdjustments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableAllAdjustments;
	static void NewProp_bHasCachedColorAdjustments_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasCachedColorAdjustments;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CachedColorAdjustments;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveLinearColorAtlas_GetCurvePosition, "GetCurvePosition" }, // 1102035312
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveLinearColorAtlas>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit(void* Obj)
{
	((UCurveLinearColorAtlas*)Obj)->bIsDirty = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty = { "bIsDirty", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsDirty_MetaData), NewProp_bIsDirty_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_SetBit(void* Obj)
{
	((UCurveLinearColorAtlas*)Obj)->bSquareResolution = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution = { "bSquareResolution", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSquareResolution_MetaData), NewProp_bSquareResolution_MetaData) };
const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight = { "TextureHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, TextureHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureHeight_MetaData), NewProp_TextureHeight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner = { "GradientCurves", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves = { "GradientCurves", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, GradientCurves), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GradientCurves_MetaData), NewProp_GradientCurves_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_SetBit(void* Obj)
{
	((UCurveLinearColorAtlas*)Obj)->bDisableAllAdjustments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments = { "bDisableAllAdjustments", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisableAllAdjustments_MetaData), NewProp_bDisableAllAdjustments_MetaData) };
void Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_SetBit(void* Obj)
{
	((UCurveLinearColorAtlas*)Obj)->bHasCachedColorAdjustments = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments = { "bHasCachedColorAdjustments", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCurveLinearColorAtlas), &Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasCachedColorAdjustments_MetaData), NewProp_bHasCachedColorAdjustments_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments = { "CachedColorAdjustments", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCurveLinearColorAtlas, CachedColorAdjustments), Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedColorAdjustments_MetaData), NewProp_CachedColorAdjustments_MetaData) }; // 240547095
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bIsDirty,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bSquareResolution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_TextureHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_GradientCurves,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bDisableAllAdjustments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_bHasCachedColorAdjustments,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveLinearColorAtlas_Statics::NewProp_CachedColorAdjustments,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCurveLinearColorAtlas_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTexture2D,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams = {
	&UCurveLinearColorAtlas::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams), Z_Construct_UClass_UCurveLinearColorAtlas_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCurveLinearColorAtlas()
{
	if (!Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton, Z_Construct_UClass_UCurveLinearColorAtlas_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCurveLinearColorAtlas.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCurveLinearColorAtlas>()
{
	return UCurveLinearColorAtlas::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveLinearColorAtlas);
UCurveLinearColorAtlas::~UCurveLinearColorAtlas() {}
// End Class UCurveLinearColorAtlas

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCurveAtlasColorAdjustments::StaticStruct, Z_Construct_UScriptStruct_FCurveAtlasColorAdjustments_Statics::NewStructOps, TEXT("CurveAtlasColorAdjustments"), &Z_Registration_Info_UScriptStruct_CurveAtlasColorAdjustments, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCurveAtlasColorAdjustments), 240547095U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCurveLinearColorAtlas, UCurveLinearColorAtlas::StaticClass, TEXT("UCurveLinearColorAtlas"), &Z_Registration_Info_UClass_UCurveLinearColorAtlas, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveLinearColorAtlas), 3698078178U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_1984150756(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveLinearColorAtlas_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
