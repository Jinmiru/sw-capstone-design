// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/LightComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureLightProfile_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightingChannels();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedLightInstanceData();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FSceneComponentInstanceData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightComponent Function SetAffectTranslucentLighting
struct Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics
{
	struct LightComponent_eventSetAffectTranslucentLighting_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponent_eventSetAffectTranslucentLighting_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetAffectTranslucentLighting_Parms), &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetAffectTranslucentLighting", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::LightComponent_eventSetAffectTranslucentLighting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::LightComponent_eventSetAffectTranslucentLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetAffectTranslucentLighting)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAffectTranslucentLighting(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetAffectTranslucentLighting

// Begin Class ULightComponent Function SetBloomMaxBrightness
struct Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics
{
	struct LightComponent_eventSetBloomMaxBrightness_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetBloomMaxBrightness_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomMaxBrightness", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::LightComponent_eventSetBloomMaxBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::LightComponent_eventSetBloomMaxBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetBloomMaxBrightness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBloomMaxBrightness(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetBloomMaxBrightness

// Begin Class ULightComponent Function SetBloomScale
struct Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics
{
	struct LightComponent_eventSetBloomScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetBloomScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomScale", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::LightComponent_eventSetBloomScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::LightComponent_eventSetBloomScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetBloomScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetBloomScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBloomScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetBloomScale

// Begin Class ULightComponent Function SetBloomThreshold
struct Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics
{
	struct LightComponent_eventSetBloomThreshold_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetBloomThreshold_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomThreshold", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::LightComponent_eventSetBloomThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::LightComponent_eventSetBloomThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetBloomThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetBloomThreshold)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBloomThreshold(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetBloomThreshold

// Begin Class ULightComponent Function SetBloomTint
struct Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics
{
	struct LightComponent_eventSetBloomTint_Parms
	{
		FColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetBloomTint_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetBloomTint", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::LightComponent_eventSetBloomTint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::LightComponent_eventSetBloomTint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetBloomTint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetBloomTint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetBloomTint)
{
	P_GET_STRUCT(FColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBloomTint(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetBloomTint

// Begin Class ULightComponent Function SetEnableLightShaftBloom
struct Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics
{
	struct LightComponent_eventSetEnableLightShaftBloom_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponent_eventSetEnableLightShaftBloom_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetEnableLightShaftBloom_Parms), &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetEnableLightShaftBloom", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::LightComponent_eventSetEnableLightShaftBloom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::LightComponent_eventSetEnableLightShaftBloom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetEnableLightShaftBloom)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableLightShaftBloom(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetEnableLightShaftBloom

// Begin Class ULightComponent Function SetForceCachedShadowsForMovablePrimitives
struct Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics
{
	struct LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms), &Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetForceCachedShadowsForMovablePrimitives", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::LightComponent_eventSetForceCachedShadowsForMovablePrimitives_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetForceCachedShadowsForMovablePrimitives)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForceCachedShadowsForMovablePrimitives(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetForceCachedShadowsForMovablePrimitives

// Begin Class ULightComponent Function SetIESBrightnessScale
struct Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics
{
	struct LightComponent_eventSetIESBrightnessScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set IES Intensity Scale" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetIESBrightnessScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIESBrightnessScale", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::LightComponent_eventSetIESBrightnessScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::LightComponent_eventSetIESBrightnessScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetIESBrightnessScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIESBrightnessScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetIESBrightnessScale

// Begin Class ULightComponent Function SetIESTexture
struct Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics
{
	struct LightComponent_eventSetIESTexture_Parms
	{
		UTextureLightProfile* NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set IES Texture" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetIESTexture_Parms, NewValue), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIESTexture", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::LightComponent_eventSetIESTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::LightComponent_eventSetIESTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetIESTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIESTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetIESTexture)
{
	P_GET_OBJECT(UTextureLightProfile,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIESTexture(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetIESTexture

// Begin Class ULightComponent Function SetIndirectLightingIntensity
struct Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics
{
	struct LightComponent_eventSetIndirectLightingIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetIndirectLightingIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIndirectLightingIntensity", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::LightComponent_eventSetIndirectLightingIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::LightComponent_eventSetIndirectLightingIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetIndirectLightingIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIndirectLightingIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetIndirectLightingIntensity

// Begin Class ULightComponent Function SetIntensity
struct Z_Construct_UFunction_ULightComponent_SetIntensity_Statics
{
	struct LightComponent_eventSetIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set intensity of the light */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set intensity of the light" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetIntensity", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::LightComponent_eventSetIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::LightComponent_eventSetIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetIntensity

// Begin Class ULightComponent Function SetLightColor
struct Z_Construct_UFunction_ULightComponent_SetLightColor_Statics
{
	struct LightComponent_eventSetLightColor_Parms
	{
		FLinearColor NewLightColor;
		bool bSRGB;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set color of the light */" },
		{ "CPP_Default_bSRGB", "true" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
	static void NewProp_bSRGB_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSRGB;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB_SetBit(void* Obj)
{
	((LightComponent_eventSetLightColor_Parms*)Obj)->bSRGB = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB = { "bSRGB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetLightColor_Parms), &Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_NewLightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::NewProp_bSRGB,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightColor", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::LightComponent_eventSetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::LightComponent_eventSetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor);
	P_GET_UBOOL(Z_Param_bSRGB);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightColor(Z_Param_NewLightColor,Z_Param_bSRGB);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightColor

// Begin Class ULightComponent Function SetLightFColor
struct Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics
{
	struct LightComponent_eventSetLightFColor_Parms
	{
		FColor NewLightColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Set color of the light */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Set color of the light" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetLightFColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::NewProp_NewLightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFColor", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::LightComponent_eventSetLightFColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::LightComponent_eventSetLightFColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightFColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightFColor)
{
	P_GET_STRUCT(FColor,Z_Param_NewLightColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFColor(Z_Param_NewLightColor);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightFColor

// Begin Class ULightComponent Function SetLightFunctionDisabledBrightness
struct Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics
{
	struct LightComponent_eventSetLightFunctionDisabledBrightness_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetLightFunctionDisabledBrightness_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionDisabledBrightness", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::LightComponent_eventSetLightFunctionDisabledBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::LightComponent_eventSetLightFunctionDisabledBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightFunctionDisabledBrightness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionDisabledBrightness(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightFunctionDisabledBrightness

// Begin Class ULightComponent Function SetLightFunctionFadeDistance
struct Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics
{
	struct LightComponent_eventSetLightFunctionFadeDistance_Parms
	{
		float NewLightFunctionFadeDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightFunctionFadeDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance = { "NewLightFunctionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetLightFunctionFadeDistance_Parms, NewLightFunctionFadeDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionFadeDistance", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::LightComponent_eventSetLightFunctionFadeDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::LightComponent_eventSetLightFunctionFadeDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightFunctionFadeDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFunctionFadeDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightFunctionFadeDistance

// Begin Class ULightComponent Function SetLightFunctionMaterial
struct Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics
{
	struct LightComponent_eventSetLightFunctionMaterial_Parms
	{
		UMaterialInterface* NewLightFunctionMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLightFunctionMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial = { "NewLightFunctionMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetLightFunctionMaterial_Parms, NewLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionMaterial", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::LightComponent_eventSetLightFunctionMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::LightComponent_eventSetLightFunctionMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightFunctionMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightFunctionMaterial

// Begin Class ULightComponent Function SetLightFunctionScale
struct Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics
{
	struct LightComponent_eventSetLightFunctionScale_Parms
	{
		FVector NewLightFunctionScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightFunctionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale = { "NewLightFunctionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetLightFunctionScale_Parms, NewLightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightFunctionScale", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::LightComponent_eventSetLightFunctionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::LightComponent_eventSetLightFunctionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightFunctionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightFunctionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightFunctionScale)
{
	P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionScale(Z_Param_NewLightFunctionScale);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightFunctionScale

// Begin Class ULightComponent Function SetLightingChannels
struct Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics
{
	struct LightComponent_eventSetLightingChannels_Parms
	{
		bool bChannel0;
		bool bChannel1;
		bool bChannel2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bChannel0_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel0;
	static void NewProp_bChannel1_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel1;
	static void NewProp_bChannel2_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bChannel2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0_SetBit(void* Obj)
{
	((LightComponent_eventSetLightingChannels_Parms*)Obj)->bChannel0 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0 = { "bChannel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1_SetBit(void* Obj)
{
	((LightComponent_eventSetLightingChannels_Parms*)Obj)->bChannel1 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1 = { "bChannel1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2_SetBit(void* Obj)
{
	((LightComponent_eventSetLightingChannels_Parms*)Obj)->bChannel2 = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2 = { "bChannel2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetLightingChannels_Parms), &Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::NewProp_bChannel2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetLightingChannels", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::LightComponent_eventSetLightingChannels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::LightComponent_eventSetLightingChannels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetLightingChannels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetLightingChannels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetLightingChannels)
{
	P_GET_UBOOL(Z_Param_bChannel0);
	P_GET_UBOOL(Z_Param_bChannel1);
	P_GET_UBOOL(Z_Param_bChannel2);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightingChannels(Z_Param_bChannel0,Z_Param_bChannel1,Z_Param_bChannel2);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetLightingChannels

// Begin Class ULightComponent Function SetShadowBias
struct Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics
{
	struct LightComponent_eventSetShadowBias_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetShadowBias_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetShadowBias", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::LightComponent_eventSetShadowBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::LightComponent_eventSetShadowBias_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetShadowBias()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetShadowBias_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetShadowBias)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowBias(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetShadowBias

// Begin Class ULightComponent Function SetShadowSlopeBias
struct Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics
{
	struct LightComponent_eventSetShadowSlopeBias_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetShadowSlopeBias_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetShadowSlopeBias", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::LightComponent_eventSetShadowSlopeBias_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::LightComponent_eventSetShadowSlopeBias_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetShadowSlopeBias)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowSlopeBias(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetShadowSlopeBias

// Begin Class ULightComponent Function SetSpecularScale
struct Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics
{
	struct LightComponent_eventSetSpecularScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetSpecularScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetSpecularScale", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::LightComponent_eventSetSpecularScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::LightComponent_eventSetSpecularScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetSpecularScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetSpecularScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetSpecularScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpecularScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetSpecularScale

// Begin Class ULightComponent Function SetTemperature
struct Z_Construct_UFunction_ULightComponent_SetTemperature_Statics
{
	struct LightComponent_eventSetTemperature_Parms
	{
		float NewTemperature;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTemperature;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::NewProp_NewTemperature = { "NewTemperature", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetTemperature_Parms, NewTemperature), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::NewProp_NewTemperature,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetTemperature", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::LightComponent_eventSetTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::LightComponent_eventSetTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetTemperature)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTemperature);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTemperature(Z_Param_NewTemperature);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetTemperature

// Begin Class ULightComponent Function SetTransmission
struct Z_Construct_UFunction_ULightComponent_SetTransmission_Statics
{
	struct LightComponent_eventSetTransmission_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponent_eventSetTransmission_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetTransmission_Parms), &Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetTransmission", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::LightComponent_eventSetTransmission_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::LightComponent_eventSetTransmission_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetTransmission()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetTransmission_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetTransmission)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTransmission(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetTransmission

// Begin Class ULightComponent Function SetUseIESBrightness
struct Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics
{
	struct LightComponent_eventSetUseIESBrightness_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DisplayName", "Set Use IES Intensity" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponent_eventSetUseIESBrightness_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetUseIESBrightness_Parms), &Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetUseIESBrightness", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::LightComponent_eventSetUseIESBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::LightComponent_eventSetUseIESBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetUseIESBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetUseIESBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetUseIESBrightness)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseIESBrightness(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetUseIESBrightness

// Begin Class ULightComponent Function SetUseTemperature
struct Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics
{
	struct LightComponent_eventSetUseTemperature_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponent_eventSetUseTemperature_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponent_eventSetUseTemperature_Parms), &Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetUseTemperature", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::LightComponent_eventSetUseTemperature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::LightComponent_eventSetUseTemperature_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetUseTemperature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetUseTemperature_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetUseTemperature)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseTemperature(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetUseTemperature

// Begin Class ULightComponent Function SetVolumetricScatteringIntensity
struct Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics
{
	struct LightComponent_eventSetVolumetricScatteringIntensity_Parms
	{
		float NewIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity = { "NewIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponent_eventSetVolumetricScatteringIntensity_Parms, NewIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::NewProp_NewIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponent, nullptr, "SetVolumetricScatteringIntensity", nullptr, nullptr, Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::LightComponent_eventSetVolumetricScatteringIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::LightComponent_eventSetVolumetricScatteringIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponent::execSetVolumetricScatteringIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricScatteringIntensity(Z_Param_NewIntensity);
	P_NATIVE_END;
}
// End Class ULightComponent Function SetVolumetricScatteringIntensity

// Begin Class ULightComponent
void ULightComponent::StaticRegisterNativesULightComponent()
{
	UClass* Class = ULightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAffectTranslucentLighting", &ULightComponent::execSetAffectTranslucentLighting },
		{ "SetBloomMaxBrightness", &ULightComponent::execSetBloomMaxBrightness },
		{ "SetBloomScale", &ULightComponent::execSetBloomScale },
		{ "SetBloomThreshold", &ULightComponent::execSetBloomThreshold },
		{ "SetBloomTint", &ULightComponent::execSetBloomTint },
		{ "SetEnableLightShaftBloom", &ULightComponent::execSetEnableLightShaftBloom },
		{ "SetForceCachedShadowsForMovablePrimitives", &ULightComponent::execSetForceCachedShadowsForMovablePrimitives },
		{ "SetIESBrightnessScale", &ULightComponent::execSetIESBrightnessScale },
		{ "SetIESTexture", &ULightComponent::execSetIESTexture },
		{ "SetIndirectLightingIntensity", &ULightComponent::execSetIndirectLightingIntensity },
		{ "SetIntensity", &ULightComponent::execSetIntensity },
		{ "SetLightColor", &ULightComponent::execSetLightColor },
		{ "SetLightFColor", &ULightComponent::execSetLightFColor },
		{ "SetLightFunctionDisabledBrightness", &ULightComponent::execSetLightFunctionDisabledBrightness },
		{ "SetLightFunctionFadeDistance", &ULightComponent::execSetLightFunctionFadeDistance },
		{ "SetLightFunctionMaterial", &ULightComponent::execSetLightFunctionMaterial },
		{ "SetLightFunctionScale", &ULightComponent::execSetLightFunctionScale },
		{ "SetLightingChannels", &ULightComponent::execSetLightingChannels },
		{ "SetShadowBias", &ULightComponent::execSetShadowBias },
		{ "SetShadowSlopeBias", &ULightComponent::execSetShadowSlopeBias },
		{ "SetSpecularScale", &ULightComponent::execSetSpecularScale },
		{ "SetTemperature", &ULightComponent::execSetTemperature },
		{ "SetTransmission", &ULightComponent::execSetTransmission },
		{ "SetUseIESBrightness", &ULightComponent::execSetUseIESBrightness },
		{ "SetUseTemperature", &ULightComponent::execSetUseTemperature },
		{ "SetVolumetricScatteringIntensity", &ULightComponent::execSetVolumetricScatteringIntensity },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightComponent);
UClass* Z_Construct_UClass_ULightComponent_NoRegister()
{
	return ULightComponent::StaticClass();
}
struct Z_Construct_UClass_ULightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Temperature_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Color temperature in Kelvin of the blackbody illuminant.\n\x09* White (D65) is 6500K.\n\x09*/" },
		{ "DisplayAfter", "bUseTemperature" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Color temperature in Kelvin of the blackbody illuminant.\nWhite (D65) is 6500K." },
		{ "UIMax", "12000.0" },
		{ "UIMin", "1700.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDrawDistance_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceFadeRange_MetaData[] = {
		{ "Category", "Performance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTemperature_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** false: use white (D65) as illuminant. */" },
		{ "DisplayName", "Use Temperature" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "false: use white (D65) as illuminant." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowMapChannel_MetaData[] = {
		{ "Comment", "/** \n\x09 * Legacy shadowmap channel from the lighting build, now stored in FLightComponentMapBuildData.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Legacy shadowmap channel from the lighting build, now stored in FLightComponentMapBuildData." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinRoughness_MetaData[] = {
		{ "Comment", "/** Min roughness effective for this light. Used for softening specular highlights. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Min roughness effective for this light. Used for softening specular highlights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpecularScale_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Multiplier on specular highlights. Use only with great care! Any value besides 1 is not physical!\n\x09 * Can be used to artistically remove highlights mimicking polarizing filters or photo touch up.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Multiplier on specular highlights. Use only with great care! Any value besides 1 is not physical!\nCan be used to artistically remove highlights mimicking polarizing filters or photo touch up." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowResolutionScale_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster. \n\x09 * Setting the scale to zero disables shadow maps, but does not disable, e.g., contact shadows.\n\x09 * Note: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the resolution of shadowmaps used to shadow this light.  By default shadowmap resolution is chosen based on screen size of the caster.\nSetting the scale to zero disables shadow maps, but does not disable, e.g., contact shadows.\nNote: shadowmap resolution is still clamped by 'r.Shadow.MaxResolution'" },
		{ "UIMax", "8" },
		{ "UIMin", ".125" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowBias_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Controls how accurate self shadowing of whole scene shadows from this light are.  \n\x09 * At 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\n\x09 * larger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\n\x09 * around 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how accurate self shadowing of whole scene shadows from this light are.\nAt 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\nlarger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\naround 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSlopeBias_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Controls how accurate self shadowing of whole scene shadows from this light are. This works in addition to shadow bias, by increasing the \n\x09 * amount of bias depending on the slope of a surface.\n\x09 * At 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\n\x09 * larger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\n\x09 * around 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how accurate self shadowing of whole scene shadows from this light are. This works in addition to shadow bias, by increasing the\namount of bias depending on the slope of a surface.\nAt 0, shadows will start at the their caster surface, but there will be many self shadowing artifacts.\nlarger values, shadows will start further from their caster, and there won't be self shadowing artifacts but object might appear to fly.\naround 0.5 seems to be a good tradeoff. This also affects the soft transition of shadows" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSharpen_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Amount to sharpen shadow filtering */" },
		{ "DisplayName", "Shadow Filter Sharpen" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Amount to sharpen shadow filtering" },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLength_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Length of screen space ray trace for sharp contact shadows. Zero is disabled. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Length of screen space ray trace for sharp contact shadows. Zero is disabled." },
		{ "UIMax", "0.1" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowLengthInWS_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Where Length of screen space ray trace for sharp contact shadows is in world space units or in screen space units. */" },
		{ "DisplayName", "Contact Shadow Length In World Space Units" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Where Length of screen space ray trace for sharp contact shadows is in world space units or in screen space units." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowCastingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Intensity of the shadows cast by primitives with \"cast contact shadow\" enabled. 0 = no shadow, 1 (default) = fully shadowed. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Intensity of the shadows cast by primitives with \"cast contact shadow\" enabled. 0 = no shadow, 1 (default) = fully shadowed." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContactShadowNonCastingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Intensity of the shadows cast by primitives with \"cast contact shadow\" disabled. 0 (default) = no shadow, 1 = fully shadowed. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Intensity of the shadows cast by primitives with \"cast contact shadow\" disabled. 0 (default) = no shadow, 1 = fully shadowed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InverseSquaredFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastTranslucentShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light is allowed to cast dynamic shadows from translucency. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light is allowed to cast dynamic shadows from translucency." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether the light should only cast shadows from components marked as bCastCinematicShadows. \n\x09 * This is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background.\n\x09 * Note: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether the light should only cast shadows from components marked as bCastCinematicShadows.\nThis is useful for setting up cinematic Movable spotlights aimed at characters and avoiding the shadow depth rendering costs of the background.\nNote: this only works with dynamic shadow maps, not with static shadowing or Ray Traced Distance Field shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceCachedShadowsForMovablePrimitives_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Enables cached shadows for movable primitives for this light even if r.shadow.cachedshadowscastfrommovableprimitives is 0\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Enables cached shadows for movable primitives for this light even if r.shadow.cachedshadowscastfrommovableprimitives is 0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightingChannels_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Channels that this light should affect.  \n\x09 * These channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Channels that this light should affect.\nThese channels only apply to opaque materials, direct lighting, and dynamic lighting and shadowing." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionMaterial_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "Comment", "/** \n\x09 * The light function material to be applied to this light.\n\x09 * Note that only non-lightmapped lights (UseDirectLightMap=False) can have a light function. \n\x09 * Light functions are supported within VolumetricFog, but only for Directional, Point and Spot lights. Rect lights are not supported.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "The light function material to be applied to this light.\nNote that only non-lightmapped lights (UseDirectLightMap=False) can have a light function.\nLight functions are supported within VolumetricFog, but only for Directional, Point and Spot lights. Rect lights are not supported." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StashedLightFunctionMaterial_MetaData[] = {
		{ "Comment", "/** When clearing the light func, e.g. because the light is made static, this field remembers the last value */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "When clearing the light func, e.g. because the light is made static, this field remembers the last value" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionScale_MetaData[] = {
		{ "AllowPreserveRatio", "true" },
		{ "Category", "LightFunction" },
		{ "Comment", "/** Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the light function projection.  X and Y scale in the directions perpendicular to the light's direction, Z scales along the light direction." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESTexture_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "Comment", "/** IES texture (light profiles from real world measured data) */" },
		{ "DisplayName", "IES Texture" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "IES texture (light profiles from real world measured data)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseIESBrightness_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "Comment", "/** true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied. */" },
		{ "DisplayName", "Use IES Intensity" },
		{ "EditCondition", "IESTexture!=nullptr" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "true: take light brightness from IES profile, false: use the light brightness - the maximum light in one direction is used to define no masking. Use with InverseSquareFalloff. Will be disabled if a valid IES profile texture is not supplied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IESBrightnessScale_MetaData[] = {
		{ "Category", "LightProfiles" },
		{ "Comment", "/** Global scale for IES brightness contribution. Only available when \"Use IES Brightness\" is selected, and a valid IES profile texture is set */" },
		{ "DisplayName", "IES Intensity Scale" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Global scale for IES brightness contribution. Only available when \"Use IES Brightness\" is selected, and a valid IES profile texture is set" },
		{ "UIMax", "10.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightFunctionFadeDistance_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "Comment", "/** \n\x09 * Distance at which the light function should be completely faded to DisabledBrightness.  \n\x09 * This is useful for hiding aliasing from light functions applied in the distance.\n\x09 */" },
		{ "DisplayName", "Fade Distance" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Distance at which the light function should be completely faded to DisabledBrightness.\nThis is useful for hiding aliasing from light functions applied in the distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DisabledBrightness_MetaData[] = {
		{ "Category", "LightFunction" },
		{ "Comment", "/** \n\x09 * Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows. \n\x09 * This should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Brightness factor applied to the light when the light function is specified but disabled, for example in scene captures that use SceneCapView_LitNoShadows.\nThis should be set to the average brightness of the light function material's emissive input, which should be between 0 and 1." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftBloom_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** \n\x09 * Whether to render light shaft bloom from this light. \n\x09 * For directional lights, the color around the light direction will be blurred radially and added back to the scene.\n\x09 * for point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene.\n\x09 */" },
		{ "DisplayName", "Light Shaft Bloom" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether to render light shaft bloom from this light.\nFor directional lights, the color around the light direction will be blurred radially and added back to the scene.\nfor point lights, the color on pixels closer than the light's SourceRadius will be blurred radially and added back to the scene." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomScale_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Scales the additive color. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scales the additive color." },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomThreshold_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Scene color must be larger than this to create bloom in the light shafts. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Scene color must be larger than this to create bloom in the light shafts." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomMaxBrightness_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** After exposure is applied, scene color brightness larger than BloomMaxBrightness will be rescaled down to BloomMaxBrightness. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "SliderExponent", "20.000000" },
		{ "ToolTip", "After exposure is applied, scene color brightness larger than BloomMaxBrightness will be rescaled down to BloomMaxBrightness." },
		{ "UIMax", "100" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BloomTint_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Multiplies against scene color to create the bloom color. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Multiplies against scene color to create the bloom color." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRayTracedDistanceFieldShadows_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** \n\x09 * Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect.\n\x09 * Distance field shadows support area lights so they create soft shadows with sharp contacts.  \n\x09 * They have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation).\n\x09 * These shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun.\n\x09 */" },
		{ "DisplayName", "Distance Field Shadows" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Whether to use ray traced distance field area shadows.  The project setting bGenerateMeshDistanceFields must be enabled for this to have effect.\nDistance field shadows support area lights so they create soft shadows with sharp contacts.\nThey have less aliasing artifacts than standard shadowmaps, but inherit all the limitations of distance field representations (only uniform scale, no deformation).\nThese shadows have a low per-object cost (and don't depend on triangle count) so they are effective for distant shadows from a dynamic sun." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RayStartOffsetDepthScale_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** \n\x09 * Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away.  \n\x09 * This can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Controls how large of an offset ray traced shadows have from the receiving surface as the camera gets further away.\nThis can be useful to hide self-shadowing artifacts from low resolution distance fields on huge static meshes." },
		{ "UIMax", ".1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Temperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDrawDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceFadeRange;
	static void NewProp_bUseTemperature_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTemperature;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ShadowMapChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinRoughness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecularScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowResolutionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowSlopeBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowSharpen;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowLength;
	static void NewProp_ContactShadowLengthInWS_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ContactShadowLengthInWS;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowCastingIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ContactShadowNonCastingIntensity;
	static void NewProp_InverseSquaredFalloff_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InverseSquaredFalloff;
	static void NewProp_CastTranslucentShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastTranslucentShadows;
	static void NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsFromCinematicObjectsOnly;
	static void NewProp_bForceCachedShadowsForMovablePrimitives_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceCachedShadowsForMovablePrimitives;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightingChannels;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightFunctionMaterial;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StashedLightFunctionMaterial;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightFunctionScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_IESTexture;
	static void NewProp_bUseIESBrightness_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIESBrightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IESBrightnessScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightFunctionFadeDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DisabledBrightness;
	static void NewProp_bEnableLightShaftBloom_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftBloom;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BloomMaxBrightness;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BloomTint;
	static void NewProp_bUseRayTracedDistanceFieldShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRayTracedDistanceFieldShadows;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RayStartOffsetDepthScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightComponent_SetAffectTranslucentLighting, "SetAffectTranslucentLighting" }, // 2092661131
		{ &Z_Construct_UFunction_ULightComponent_SetBloomMaxBrightness, "SetBloomMaxBrightness" }, // 1225056819
		{ &Z_Construct_UFunction_ULightComponent_SetBloomScale, "SetBloomScale" }, // 1242028842
		{ &Z_Construct_UFunction_ULightComponent_SetBloomThreshold, "SetBloomThreshold" }, // 2581078015
		{ &Z_Construct_UFunction_ULightComponent_SetBloomTint, "SetBloomTint" }, // 1635694088
		{ &Z_Construct_UFunction_ULightComponent_SetEnableLightShaftBloom, "SetEnableLightShaftBloom" }, // 2285515514
		{ &Z_Construct_UFunction_ULightComponent_SetForceCachedShadowsForMovablePrimitives, "SetForceCachedShadowsForMovablePrimitives" }, // 1192056321
		{ &Z_Construct_UFunction_ULightComponent_SetIESBrightnessScale, "SetIESBrightnessScale" }, // 3081112849
		{ &Z_Construct_UFunction_ULightComponent_SetIESTexture, "SetIESTexture" }, // 1046216443
		{ &Z_Construct_UFunction_ULightComponent_SetIndirectLightingIntensity, "SetIndirectLightingIntensity" }, // 4029573106
		{ &Z_Construct_UFunction_ULightComponent_SetIntensity, "SetIntensity" }, // 1624780197
		{ &Z_Construct_UFunction_ULightComponent_SetLightColor, "SetLightColor" }, // 625727521
		{ &Z_Construct_UFunction_ULightComponent_SetLightFColor, "SetLightFColor" }, // 1259456588
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionDisabledBrightness, "SetLightFunctionDisabledBrightness" }, // 634845946
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionFadeDistance, "SetLightFunctionFadeDistance" }, // 1117930301
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionMaterial, "SetLightFunctionMaterial" }, // 1276774989
		{ &Z_Construct_UFunction_ULightComponent_SetLightFunctionScale, "SetLightFunctionScale" }, // 2298623563
		{ &Z_Construct_UFunction_ULightComponent_SetLightingChannels, "SetLightingChannels" }, // 549732025
		{ &Z_Construct_UFunction_ULightComponent_SetShadowBias, "SetShadowBias" }, // 2869857838
		{ &Z_Construct_UFunction_ULightComponent_SetShadowSlopeBias, "SetShadowSlopeBias" }, // 1488286772
		{ &Z_Construct_UFunction_ULightComponent_SetSpecularScale, "SetSpecularScale" }, // 3428395240
		{ &Z_Construct_UFunction_ULightComponent_SetTemperature, "SetTemperature" }, // 335876892
		{ &Z_Construct_UFunction_ULightComponent_SetTransmission, "SetTransmission" }, // 469056857
		{ &Z_Construct_UFunction_ULightComponent_SetUseIESBrightness, "SetUseIESBrightness" }, // 2107893039
		{ &Z_Construct_UFunction_ULightComponent_SetUseTemperature, "SetUseTemperature" }, // 3418270189
		{ &Z_Construct_UFunction_ULightComponent_SetVolumetricScatteringIntensity, "SetVolumetricScatteringIntensity" }, // 1964588234
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature = { "Temperature", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, Temperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Temperature_MetaData), NewProp_Temperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance = { "MaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, MaxDrawDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDrawDistance_MetaData), NewProp_MaxDrawDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange = { "MaxDistanceFadeRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, MaxDistanceFadeRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxDistanceFadeRange_MetaData), NewProp_MaxDistanceFadeRange_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->bUseTemperature = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature = { "bUseTemperature", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTemperature_MetaData), NewProp_bUseTemperature_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel = { "ShadowMapChannel", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ShadowMapChannel_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowMapChannel_MetaData), NewProp_ShadowMapChannel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness = { "MinRoughness", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, MinRoughness_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinRoughness_MetaData), NewProp_MinRoughness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale = { "SpecularScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, SpecularScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpecularScale_MetaData), NewProp_SpecularScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale = { "ShadowResolutionScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ShadowResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowResolutionScale_MetaData), NewProp_ShadowResolutionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias = { "ShadowBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ShadowBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowBias_MetaData), NewProp_ShadowBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias = { "ShadowSlopeBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ShadowSlopeBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowSlopeBias_MetaData), NewProp_ShadowSlopeBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen = { "ShadowSharpen", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ShadowSharpen), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowSharpen_MetaData), NewProp_ShadowSharpen_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength = { "ContactShadowLength", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ContactShadowLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactShadowLength_MetaData), NewProp_ContactShadowLength_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->ContactShadowLengthInWS = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS = { "ContactShadowLengthInWS", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactShadowLengthInWS_MetaData), NewProp_ContactShadowLengthInWS_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity = { "ContactShadowCastingIntensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ContactShadowCastingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactShadowCastingIntensity_MetaData), NewProp_ContactShadowCastingIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity = { "ContactShadowNonCastingIntensity", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, ContactShadowNonCastingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContactShadowNonCastingIntensity_MetaData), NewProp_ContactShadowNonCastingIntensity_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->InverseSquaredFalloff_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff = { "InverseSquaredFalloff", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InverseSquaredFalloff_MetaData), NewProp_InverseSquaredFalloff_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->CastTranslucentShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows = { "CastTranslucentShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastTranslucentShadows_MetaData), NewProp_CastTranslucentShadows_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->bCastShadowsFromCinematicObjectsOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly = { "bCastShadowsFromCinematicObjectsOnly", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData), NewProp_bCastShadowsFromCinematicObjectsOnly_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->bForceCachedShadowsForMovablePrimitives = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives = { "bForceCachedShadowsForMovablePrimitives", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceCachedShadowsForMovablePrimitives_MetaData), NewProp_bForceCachedShadowsForMovablePrimitives_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels = { "LightingChannels", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, LightingChannels), Z_Construct_UScriptStruct_FLightingChannels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightingChannels_MetaData), NewProp_LightingChannels_MetaData) }; // 828539464
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial = { "LightFunctionMaterial", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, LightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightFunctionMaterial_MetaData), NewProp_LightFunctionMaterial_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial = { "StashedLightFunctionMaterial", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, StashedLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StashedLightFunctionMaterial_MetaData), NewProp_StashedLightFunctionMaterial_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale = { "LightFunctionScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, LightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightFunctionScale_MetaData), NewProp_LightFunctionScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture = { "IESTexture", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, IESTexture), Z_Construct_UClass_UTextureLightProfile_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESTexture_MetaData), NewProp_IESTexture_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->bUseIESBrightness = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness = { "bUseIESBrightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseIESBrightness_MetaData), NewProp_bUseIESBrightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale = { "IESBrightnessScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, IESBrightnessScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IESBrightnessScale_MetaData), NewProp_IESBrightnessScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance = { "LightFunctionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, LightFunctionFadeDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightFunctionFadeDistance_MetaData), NewProp_LightFunctionFadeDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness = { "DisabledBrightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, DisabledBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DisabledBrightness_MetaData), NewProp_DisabledBrightness_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->bEnableLightShaftBloom = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom = { "bEnableLightShaftBloom", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLightShaftBloom_MetaData), NewProp_bEnableLightShaftBloom_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale = { "BloomScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, BloomScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomScale_MetaData), NewProp_BloomScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold = { "BloomThreshold", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, BloomThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomThreshold_MetaData), NewProp_BloomThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness = { "BloomMaxBrightness", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, BloomMaxBrightness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomMaxBrightness_MetaData), NewProp_BloomMaxBrightness_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint = { "BloomTint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, BloomTint), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BloomTint_MetaData), NewProp_BloomTint_MetaData) };
void Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_SetBit(void* Obj)
{
	((ULightComponent*)Obj)->bUseRayTracedDistanceFieldShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows = { "bUseRayTracedDistanceFieldShadows", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ULightComponent), &Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRayTracedDistanceFieldShadows_MetaData), NewProp_bUseRayTracedDistanceFieldShadows_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale = { "RayStartOffsetDepthScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponent, RayStartOffsetDepthScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RayStartOffsetDepthScale_MetaData), NewProp_RayStartOffsetDepthScale_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_Temperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDrawDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MaxDistanceFadeRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowMapChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_MinRoughness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_SpecularScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSlopeBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ShadowSharpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowLengthInWS,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowCastingIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_ContactShadowNonCastingIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_InverseSquaredFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_CastTranslucentShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bCastShadowsFromCinematicObjectsOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bForceCachedShadowsForMovablePrimitives,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightingChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionMaterial,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_StashedLightFunctionMaterial,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_IESTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseIESBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_IESBrightnessScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_LightFunctionFadeDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_DisabledBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bEnableLightShaftBloom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomMaxBrightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_BloomTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_bUseRayTracedDistanceFieldShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponent_Statics::NewProp_RayStartOffsetDepthScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULightComponentBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightComponent_Statics::ClassParams = {
	&ULightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightComponent()
{
	if (!Z_Registration_Info_UClass_ULightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightComponent.OuterSingleton, Z_Construct_UClass_ULightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightComponent>()
{
	return ULightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponent);
ULightComponent::~ULightComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponent)
// End Class ULightComponent

// Begin ScriptStruct FPrecomputedLightInstanceData
static_assert(std::is_polymorphic<FPrecomputedLightInstanceData>() == std::is_polymorphic<FSceneComponentInstanceData>(), "USTRUCT FPrecomputedLightInstanceData cannot be polymorphic unless super FSceneComponentInstanceData is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData;
class UScriptStruct* FPrecomputedLightInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PrecomputedLightInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPrecomputedLightInstanceData>()
{
	return FPrecomputedLightInstanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Used to store lightmap data during RerunConstructionScripts */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
		{ "ToolTip", "Used to store lightmap data during RerunConstructionScripts" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewShadowMapChannel_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/LightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewShadowMapChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecomputedLightInstanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedLightInstanceData, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Transform_MetaData), NewProp_Transform_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedLightInstanceData, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightGuid_MetaData), NewProp_LightGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel = { "PreviewShadowMapChannel", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPrecomputedLightInstanceData, PreviewShadowMapChannel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewShadowMapChannel_MetaData), NewProp_PreviewShadowMapChannel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_LightGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewProp_PreviewShadowMapChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	Z_Construct_UScriptStruct_FSceneComponentInstanceData,
	&NewStructOps,
	"PrecomputedLightInstanceData",
	Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::PropPointers),
	sizeof(FPrecomputedLightInstanceData),
	alignof(FPrecomputedLightInstanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPrecomputedLightInstanceData()
{
	if (!Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData.InnerSingleton;
}
// End ScriptStruct FPrecomputedLightInstanceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPrecomputedLightInstanceData::StaticStruct, Z_Construct_UScriptStruct_FPrecomputedLightInstanceData_Statics::NewStructOps, TEXT("PrecomputedLightInstanceData"), &Z_Registration_Info_UScriptStruct_PrecomputedLightInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrecomputedLightInstanceData), 1075397626U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightComponent, ULightComponent::StaticClass, TEXT("ULightComponent"), &Z_Registration_Info_UClass_ULightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightComponent), 3724680661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_2506918550(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
