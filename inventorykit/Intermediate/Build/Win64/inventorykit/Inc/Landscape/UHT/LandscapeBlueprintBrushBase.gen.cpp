// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Landscape/Public/LandscapeBlueprintBrushBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeBlueprintBrushBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscape_NoRegister();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase();
LANDSCAPE_API UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister();
LANDSCAPE_API UEnum* Z_Construct_UEnum_Landscape_ELandscapeToolTargetType();
LANDSCAPE_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeBrushParameters();
UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References

// Begin ScriptStruct FLandscapeBrushParameters
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_LandscapeBrushParameters;
class UScriptStruct* FLandscapeBrushParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeBrushParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_LandscapeBrushParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FLandscapeBrushParameters, (UObject*)Z_Construct_UPackage__Script_Landscape(), TEXT("LandscapeBrushParameters"));
	}
	return Z_Registration_Info_UScriptStruct_LandscapeBrushParameters.OuterSingleton;
}
template<> LANDSCAPE_API UScriptStruct* StaticStruct<FLandscapeBrushParameters>()
{
	return FLandscapeBrushParameters::StaticStruct();
}
struct Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LayerType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CombinedResult_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeightmapLayerName_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LayerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LayerType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CombinedResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_WeightmapLayerName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLandscapeBrushParameters>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_LayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_LayerType = { "LayerType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeBrushParameters, LayerType), Z_Construct_UEnum_Landscape_ELandscapeToolTargetType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LayerType_MetaData), NewProp_LayerType_MetaData) }; // 2122393641
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_CombinedResult = { "CombinedResult", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeBrushParameters, CombinedResult), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CombinedResult_MetaData), NewProp_CombinedResult_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_WeightmapLayerName = { "WeightmapLayerName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FLandscapeBrushParameters, WeightmapLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeightmapLayerName_MetaData), NewProp_WeightmapLayerName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_LayerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_LayerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_CombinedResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewProp_WeightmapLayerName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	nullptr,
	&NewStructOps,
	"LandscapeBrushParameters",
	Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::PropPointers),
	sizeof(FLandscapeBrushParameters),
	alignof(FLandscapeBrushParameters),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FLandscapeBrushParameters()
{
	if (!Z_Registration_Info_UScriptStruct_LandscapeBrushParameters.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_LandscapeBrushParameters.InnerSingleton, Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_LandscapeBrushParameters.InnerSingleton;
}
// End ScriptStruct FLandscapeBrushParameters

// Begin Class ALandscapeBlueprintBrushBase Function GetBlueprintRenderDependencies
struct LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms
{
	TArray<UObject*> OutStreamableAssets;
};
static FName NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies = FName(TEXT("GetBlueprintRenderDependencies"));
void ALandscapeBlueprintBrushBase::GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets)
{
	LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms Parms;
	Parms.OutStreamableAssets=OutStreamableAssets;
	ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies),&Parms);
	OutStreamableAssets=Parms.OutStreamableAssets;
}
struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutStreamableAssets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutStreamableAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets_Inner = { "OutStreamableAssets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets = { "OutStreamableAssets", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms, OutStreamableAssets), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::NewProp_OutStreamableAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "GetBlueprintRenderDependencies", nullptr, nullptr, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::PropPointers), sizeof(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(LandscapeBlueprintBrushBase_eventGetBlueprintRenderDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ALandscapeBlueprintBrushBase Function GetBlueprintRenderDependencies

// Begin Class ALandscapeBlueprintBrushBase Function Initialize
struct LandscapeBlueprintBrushBase_eventInitialize_Parms
{
	FTransform InLandscapeTransform;
	FIntPoint InLandscapeSize;
	FIntPoint InLandscapeRenderTargetSize;
};
static FName NAME_ALandscapeBlueprintBrushBase_Initialize = FName(TEXT("Initialize"));
void ALandscapeBlueprintBrushBase::Initialize(FTransform const& InLandscapeTransform, FIntPoint const& InLandscapeSize, FIntPoint const& InLandscapeRenderTargetSize)
{
	LandscapeBlueprintBrushBase_eventInitialize_Parms Parms;
	Parms.InLandscapeTransform=InLandscapeTransform;
	Parms.InLandscapeSize=InLandscapeSize;
	Parms.InLandscapeRenderTargetSize=InLandscapeRenderTargetSize;
	ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_Initialize),&Parms);
}
struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeSize_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InLandscapeRenderTargetSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLandscapeTransform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLandscapeSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLandscapeRenderTargetSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform = { "InLandscapeTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLandscapeTransform_MetaData), NewProp_InLandscapeTransform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize = { "InLandscapeSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLandscapeSize_MetaData), NewProp_InLandscapeSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize = { "InLandscapeRenderTargetSize", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventInitialize_Parms, InLandscapeRenderTargetSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InLandscapeRenderTargetSize_MetaData), NewProp_InLandscapeRenderTargetSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeTransform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::NewProp_InLandscapeRenderTargetSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "Initialize", nullptr, nullptr, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::PropPointers), sizeof(LandscapeBlueprintBrushBase_eventInitialize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::Function_MetaDataParams) };
static_assert(sizeof(LandscapeBlueprintBrushBase_eventInitialize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execInitialize)
{
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_InLandscapeTransform);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InLandscapeSize);
	P_GET_STRUCT_REF(FIntPoint,Z_Param_Out_InLandscapeRenderTargetSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation(Z_Param_Out_InLandscapeTransform,Z_Param_Out_InLandscapeSize,Z_Param_Out_InLandscapeRenderTargetSize);
	P_NATIVE_END;
}
// End Class ALandscapeBlueprintBrushBase Function Initialize

// Begin Class ALandscapeBlueprintBrushBase Function Render
struct LandscapeBlueprintBrushBase_eventRender_Parms
{
	bool InIsHeightmap;
	UTextureRenderTarget2D* InCombinedResult;
	FName InWeightmapLayerName;
	UTextureRenderTarget2D* ReturnValue;

	/** Constructor, initializes return property only **/
	LandscapeBlueprintBrushBase_eventRender_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ALandscapeBlueprintBrushBase_Render = FName(TEXT("Render"));
UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::Render(bool InIsHeightmap, UTextureRenderTarget2D* InCombinedResult, FName const& InWeightmapLayerName)
{
	LandscapeBlueprintBrushBase_eventRender_Parms Parms;
	Parms.InIsHeightmap=InIsHeightmap ? true : false;
	Parms.InCombinedResult=InCombinedResult;
	Parms.InWeightmapLayerName=InWeightmapLayerName;
	ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_Render),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use RenderLayer instead." },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InWeightmapLayerName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_InIsHeightmap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsHeightmap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InCombinedResult;
	static const UECodeGen_Private::FNamePropertyParams NewProp_InWeightmapLayerName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap_SetBit(void* Obj)
{
	((LandscapeBlueprintBrushBase_eventRender_Parms*)Obj)->InIsHeightmap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap = { "InIsHeightmap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeBlueprintBrushBase_eventRender_Parms), &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InCombinedResult = { "InCombinedResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, InCombinedResult), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName = { "InWeightmapLayerName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, InWeightmapLayerName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InWeightmapLayerName_MetaData), NewProp_InWeightmapLayerName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRender_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InIsHeightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InCombinedResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_InWeightmapLayerName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "Render", nullptr, nullptr, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::PropPointers), sizeof(LandscapeBlueprintBrushBase_eventRender_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::Function_MetaDataParams) };
static_assert(sizeof(LandscapeBlueprintBrushBase_eventRender_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execRender)
{
	P_GET_UBOOL(Z_Param_InIsHeightmap);
	P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_InCombinedResult);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InWeightmapLayerName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->Render_Implementation(Z_Param_InIsHeightmap,Z_Param_InCombinedResult,Z_Param_Out_InWeightmapLayerName);
	P_NATIVE_END;
}
// End Class ALandscapeBlueprintBrushBase Function Render

// Begin Class ALandscapeBlueprintBrushBase Function RenderLayer
struct LandscapeBlueprintBrushBase_eventRenderLayer_Parms
{
	FLandscapeBrushParameters InParameters;
	UTextureRenderTarget2D* ReturnValue;

	/** Constructor, initializes return property only **/
	LandscapeBlueprintBrushBase_eventRenderLayer_Parms()
		: ReturnValue(NULL)
	{
	}
};
static FName NAME_ALandscapeBlueprintBrushBase_RenderLayer = FName(TEXT("RenderLayer"));
UTextureRenderTarget2D* ALandscapeBlueprintBrushBase::RenderLayer(FLandscapeBrushParameters const& InParameters)
{
	LandscapeBlueprintBrushBase_eventRenderLayer_Parms Parms;
	Parms.InParameters=InParameters;
	ProcessEvent(FindFunctionChecked(NAME_ALandscapeBlueprintBrushBase_RenderLayer),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRenderLayer_Parms, InParameters), Z_Construct_UScriptStruct_FLandscapeBrushParameters, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InParameters_MetaData), NewProp_InParameters_MetaData) }; // 1851286240
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LandscapeBlueprintBrushBase_eventRenderLayer_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::NewProp_InParameters,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "RenderLayer", nullptr, nullptr, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::PropPointers), sizeof(LandscapeBlueprintBrushBase_eventRenderLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(LandscapeBlueprintBrushBase_eventRenderLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execRenderLayer)
{
	P_GET_STRUCT_REF(FLandscapeBrushParameters,Z_Param_Out_InParameters);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderLayer_Implementation(Z_Param_Out_InParameters);
	P_NATIVE_END;
}
// End Class ALandscapeBlueprintBrushBase Function RenderLayer

// Begin Class ALandscapeBlueprintBrushBase Function RequestLandscapeUpdate
struct Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics
{
	struct LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms
	{
		bool bInUserTriggered;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "CPP_Default_bInUserTriggered", "false" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUserTriggered_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUserTriggered;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered_SetBit(void* Obj)
{
	((LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms*)Obj)->bInUserTriggered = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered = { "bInUserTriggered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms), &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::NewProp_bInUserTriggered,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALandscapeBlueprintBrushBase, nullptr, "RequestLandscapeUpdate", nullptr, nullptr, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::LandscapeBlueprintBrushBase_eventRequestLandscapeUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate)
{
	P_GET_UBOOL(Z_Param_bInUserTriggered);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestLandscapeUpdate(Z_Param_bInUserTriggered);
	P_NATIVE_END;
}
// End Class ALandscapeBlueprintBrushBase Function RequestLandscapeUpdate

// Begin Class ALandscapeBlueprintBrushBase
void ALandscapeBlueprintBrushBase::SetAffectHeightmap_WrapperImpl(void* Object, const void* InValue)
{
#if WITH_EDITORONLY_DATA
	ALandscapeBlueprintBrushBase* Obj = (ALandscapeBlueprintBrushBase*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetCanAffectHeightmap(Value);
#endif // WITH_EDITORONLY_DATA
}
void ALandscapeBlueprintBrushBase::SetAffectWeightmap_WrapperImpl(void* Object, const void* InValue)
{
#if WITH_EDITORONLY_DATA
	ALandscapeBlueprintBrushBase* Obj = (ALandscapeBlueprintBrushBase*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetCanAffectWeightmap(Value);
#endif // WITH_EDITORONLY_DATA
}
void ALandscapeBlueprintBrushBase::SetAffectVisibilityLayer_WrapperImpl(void* Object, const void* InValue)
{
#if WITH_EDITORONLY_DATA
	ALandscapeBlueprintBrushBase* Obj = (ALandscapeBlueprintBrushBase*)Object;
	bool& Value = *(bool*)InValue;
	Obj->SetCanAffectVisibilityLayer(Value);
#endif // WITH_EDITORONLY_DATA
}
void ALandscapeBlueprintBrushBase::StaticRegisterNativesALandscapeBlueprintBrushBase()
{
	UClass* Class = ALandscapeBlueprintBrushBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Initialize", &ALandscapeBlueprintBrushBase::execInitialize },
		{ "Render", &ALandscapeBlueprintBrushBase::execRender },
		{ "RenderLayer", &ALandscapeBlueprintBrushBase::execRenderLayer },
		{ "RequestLandscapeUpdate", &ALandscapeBlueprintBrushBase::execRequestLandscapeUpdate },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALandscapeBlueprintBrushBase);
UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase_NoRegister()
{
	return ALandscapeBlueprintBrushBase::StaticClass();
}
struct Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeBlueprintBrushBase.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningLandscape_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateOnPropertyChange_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectHeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectWeightmap_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectVisibilityLayer_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AffectedWeightmapLayers_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeBlueprintBrushBase.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningLandscape;
	static void NewProp_UpdateOnPropertyChange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_UpdateOnPropertyChange;
	static void NewProp_AffectHeightmap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectHeightmap;
	static void NewProp_AffectWeightmap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectWeightmap;
	static void NewProp_AffectVisibilityLayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_AffectVisibilityLayer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AffectedWeightmapLayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedWeightmapLayers;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_GetBlueprintRenderDependencies, "GetBlueprintRenderDependencies" }, // 1262889506
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Initialize, "Initialize" }, // 3312046283
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_Render, "Render" }, // 1388349345
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RenderLayer, "RenderLayer" }, // 2249275292
		{ &Z_Construct_UFunction_ALandscapeBlueprintBrushBase_RequestLandscapeUpdate, "RequestLandscapeUpdate" }, // 3163508526
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandscapeBlueprintBrushBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape = { "OwningLandscape", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeBlueprintBrushBase, OwningLandscape), Z_Construct_UClass_ALandscape_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningLandscape_MetaData), NewProp_OwningLandscape_MetaData) };
void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_SetBit(void* Obj)
{
	((ALandscapeBlueprintBrushBase*)Obj)->UpdateOnPropertyChange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange = { "UpdateOnPropertyChange", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateOnPropertyChange_MetaData), NewProp_UpdateOnPropertyChange_MetaData) };
void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_SetBit(void* Obj)
{
	((ALandscapeBlueprintBrushBase*)Obj)->AffectHeightmap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap = { "AffectHeightmap", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &ALandscapeBlueprintBrushBase::SetAffectHeightmap_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectHeightmap_MetaData), NewProp_AffectHeightmap_MetaData) };
void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_SetBit(void* Obj)
{
	((ALandscapeBlueprintBrushBase*)Obj)->AffectWeightmap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap = { "AffectWeightmap", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &ALandscapeBlueprintBrushBase::SetAffectWeightmap_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectWeightmap_MetaData), NewProp_AffectWeightmap_MetaData) };
void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectVisibilityLayer_SetBit(void* Obj)
{
	((ALandscapeBlueprintBrushBase*)Obj)->AffectVisibilityLayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectVisibilityLayer = { "AffectVisibilityLayer", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, &ALandscapeBlueprintBrushBase::SetAffectVisibilityLayer_WrapperImpl, nullptr, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectVisibilityLayer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectVisibilityLayer_MetaData), NewProp_AffectVisibilityLayer_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_Inner = { "AffectedWeightmapLayers", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers = { "AffectedWeightmapLayers", nullptr, (EPropertyFlags)0x0020080800000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALandscapeBlueprintBrushBase, AffectedWeightmapLayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AffectedWeightmapLayers_MetaData), NewProp_AffectedWeightmapLayers_MetaData) };
void Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((ALandscapeBlueprintBrushBase*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0020080800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ALandscapeBlueprintBrushBase), &Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_OwningLandscape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_UpdateOnPropertyChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectHeightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectWeightmap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectVisibilityLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_AffectedWeightmapLayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::NewProp_bIsVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::ClassParams = {
	&ALandscapeBlueprintBrushBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::PropPointers), 0),
	0,
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALandscapeBlueprintBrushBase()
{
	if (!Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.OuterSingleton, Z_Construct_UClass_ALandscapeBlueprintBrushBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase.OuterSingleton;
}
template<> LANDSCAPE_API UClass* StaticClass<ALandscapeBlueprintBrushBase>()
{
	return ALandscapeBlueprintBrushBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALandscapeBlueprintBrushBase);
ALandscapeBlueprintBrushBase::~ALandscapeBlueprintBrushBase() {}
// End Class ALandscapeBlueprintBrushBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FLandscapeBrushParameters::StaticStruct, Z_Construct_UScriptStruct_FLandscapeBrushParameters_Statics::NewStructOps, TEXT("LandscapeBrushParameters"), &Z_Registration_Info_UScriptStruct_LandscapeBrushParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FLandscapeBrushParameters), 1851286240U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALandscapeBlueprintBrushBase, ALandscapeBlueprintBrushBase::StaticClass, TEXT("ALandscapeBlueprintBrushBase"), &Z_Registration_Info_UClass_ALandscapeBlueprintBrushBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALandscapeBlueprintBrushBase), 50092202U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_353175769(TEXT("/Script/Landscape"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Public_LandscapeBlueprintBrushBase_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
