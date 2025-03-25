// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalLightComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent();
ENGINE_API UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULightComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UDirectionalLightComponent Function SetAtmosphereSunLight
struct Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics
{
	struct DirectionalLightComponent_eventSetAtmosphereSunLight_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((DirectionalLightComponent_eventSetAtmosphereSunLight_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DirectionalLightComponent_eventSetAtmosphereSunLight_Parms), &Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetAtmosphereSunLight", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::DirectionalLightComponent_eventSetAtmosphereSunLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::DirectionalLightComponent_eventSetAtmosphereSunLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetAtmosphereSunLight)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAtmosphereSunLight(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetAtmosphereSunLight

// Begin Class UDirectionalLightComponent Function SetAtmosphereSunLightIndex
struct Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics
{
	struct DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetAtmosphereSunLightIndex", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::DirectionalLightComponent_eventSetAtmosphereSunLightIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetAtmosphereSunLightIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAtmosphereSunLightIndex(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetAtmosphereSunLightIndex

// Begin Class UDirectionalLightComponent Function SetCascadeDistributionExponent
struct Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics
{
	struct DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetCascadeDistributionExponent", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::DirectionalLightComponent_eventSetCascadeDistributionExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetCascadeDistributionExponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCascadeDistributionExponent(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetCascadeDistributionExponent

// Begin Class UDirectionalLightComponent Function SetCascadeTransitionFraction
struct Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics
{
	struct DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetCascadeTransitionFraction", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::DirectionalLightComponent_eventSetCascadeTransitionFraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetCascadeTransitionFraction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCascadeTransitionFraction(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetCascadeTransitionFraction

// Begin Class UDirectionalLightComponent Function SetDynamicShadowCascades
struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics
{
	struct DirectionalLightComponent_eventSetDynamicShadowCascades_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowCascades_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowCascades", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::DirectionalLightComponent_eventSetDynamicShadowCascades_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::DirectionalLightComponent_eventSetDynamicShadowCascades_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetDynamicShadowCascades)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicShadowCascades(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetDynamicShadowCascades

// Begin Class UDirectionalLightComponent Function SetDynamicShadowDistanceMovableLight
struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics
{
	struct DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowDistanceMovableLight", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::DirectionalLightComponent_eventSetDynamicShadowDistanceMovableLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicShadowDistanceMovableLight(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetDynamicShadowDistanceMovableLight

// Begin Class UDirectionalLightComponent Function SetDynamicShadowDistanceStationaryLight
struct Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics
{
	struct DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetDynamicShadowDistanceStationaryLight", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::DirectionalLightComponent_eventSetDynamicShadowDistanceStationaryLight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDynamicShadowDistanceStationaryLight(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetDynamicShadowDistanceStationaryLight

// Begin Class UDirectionalLightComponent Function SetEnableLightShaftOcclusion
struct Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics
{
	struct DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetEnableLightShaftOcclusion", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::DirectionalLightComponent_eventSetEnableLightShaftOcclusion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetEnableLightShaftOcclusion)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableLightShaftOcclusion(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetEnableLightShaftOcclusion

// Begin Class UDirectionalLightComponent Function SetForwardShadingPriority
struct Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics
{
	struct DirectionalLightComponent_eventSetForwardShadingPriority_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetForwardShadingPriority_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetForwardShadingPriority", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::DirectionalLightComponent_eventSetForwardShadingPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::DirectionalLightComponent_eventSetForwardShadingPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetForwardShadingPriority)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetForwardShadingPriority(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetForwardShadingPriority

// Begin Class UDirectionalLightComponent Function SetLightShaftOverrideDirection
struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics
{
	struct DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms
	{
		FVector NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms, NewValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightShaftOverrideDirection", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::DirectionalLightComponent_eventSetLightShaftOverrideDirection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetLightShaftOverrideDirection)
{
	P_GET_STRUCT(FVector,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightShaftOverrideDirection(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetLightShaftOverrideDirection

// Begin Class UDirectionalLightComponent Function SetLightSourceAngle
struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics
{
	struct DirectionalLightComponent_eventSetLightSourceAngle_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightSourceAngle_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightSourceAngle", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::DirectionalLightComponent_eventSetLightSourceAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::DirectionalLightComponent_eventSetLightSourceAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetLightSourceAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightSourceAngle(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetLightSourceAngle

// Begin Class UDirectionalLightComponent Function SetLightSourceSoftAngle
struct Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics
{
	struct DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetLightSourceSoftAngle", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::DirectionalLightComponent_eventSetLightSourceSoftAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetLightSourceSoftAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightSourceSoftAngle(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetLightSourceSoftAngle

// Begin Class UDirectionalLightComponent Function SetOcclusionDepthRange
struct Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics
{
	struct DirectionalLightComponent_eventSetOcclusionDepthRange_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetOcclusionDepthRange_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetOcclusionDepthRange", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::DirectionalLightComponent_eventSetOcclusionDepthRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::DirectionalLightComponent_eventSetOcclusionDepthRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetOcclusionDepthRange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOcclusionDepthRange(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetOcclusionDepthRange

// Begin Class UDirectionalLightComponent Function SetOcclusionMaskDarkness
struct Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics
{
	struct DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetOcclusionMaskDarkness", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::DirectionalLightComponent_eventSetOcclusionMaskDarkness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetOcclusionMaskDarkness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOcclusionMaskDarkness(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetOcclusionMaskDarkness

// Begin Class UDirectionalLightComponent Function SetShadowAmount
struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics
{
	struct DirectionalLightComponent_eventSetShadowAmount_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowAmount_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowAmount", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::DirectionalLightComponent_eventSetShadowAmount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::DirectionalLightComponent_eventSetShadowAmount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowAmount)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowAmount(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetShadowAmount

// Begin Class UDirectionalLightComponent Function SetShadowCascadeBiasDistribution
struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics
{
	struct DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowCascadeBiasDistribution", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::DirectionalLightComponent_eventSetShadowCascadeBiasDistribution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowCascadeBiasDistribution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowCascadeBiasDistribution(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetShadowCascadeBiasDistribution

// Begin Class UDirectionalLightComponent Function SetShadowDistanceFadeoutFraction
struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics
{
	struct DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowDistanceFadeoutFraction", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::DirectionalLightComponent_eventSetShadowDistanceFadeoutFraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowDistanceFadeoutFraction(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetShadowDistanceFadeoutFraction

// Begin Class UDirectionalLightComponent Function SetShadowSourceAngleFactor
struct Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics
{
	struct DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDirectionalLightComponent, nullptr, "SetShadowSourceAngleFactor", nullptr, nullptr, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::DirectionalLightComponent_eventSetShadowSourceAngleFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDirectionalLightComponent::execSetShadowSourceAngleFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShadowSourceAngleFactor(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UDirectionalLightComponent Function SetShadowSourceAngleFactor

// Begin Class UDirectionalLightComponent
void UDirectionalLightComponent::StaticRegisterNativesUDirectionalLightComponent()
{
	UClass* Class = UDirectionalLightComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetAtmosphereSunLight", &UDirectionalLightComponent::execSetAtmosphereSunLight },
		{ "SetAtmosphereSunLightIndex", &UDirectionalLightComponent::execSetAtmosphereSunLightIndex },
		{ "SetCascadeDistributionExponent", &UDirectionalLightComponent::execSetCascadeDistributionExponent },
		{ "SetCascadeTransitionFraction", &UDirectionalLightComponent::execSetCascadeTransitionFraction },
		{ "SetDynamicShadowCascades", &UDirectionalLightComponent::execSetDynamicShadowCascades },
		{ "SetDynamicShadowDistanceMovableLight", &UDirectionalLightComponent::execSetDynamicShadowDistanceMovableLight },
		{ "SetDynamicShadowDistanceStationaryLight", &UDirectionalLightComponent::execSetDynamicShadowDistanceStationaryLight },
		{ "SetEnableLightShaftOcclusion", &UDirectionalLightComponent::execSetEnableLightShaftOcclusion },
		{ "SetForwardShadingPriority", &UDirectionalLightComponent::execSetForwardShadingPriority },
		{ "SetLightShaftOverrideDirection", &UDirectionalLightComponent::execSetLightShaftOverrideDirection },
		{ "SetLightSourceAngle", &UDirectionalLightComponent::execSetLightSourceAngle },
		{ "SetLightSourceSoftAngle", &UDirectionalLightComponent::execSetLightSourceSoftAngle },
		{ "SetOcclusionDepthRange", &UDirectionalLightComponent::execSetOcclusionDepthRange },
		{ "SetOcclusionMaskDarkness", &UDirectionalLightComponent::execSetOcclusionMaskDarkness },
		{ "SetShadowAmount", &UDirectionalLightComponent::execSetShadowAmount },
		{ "SetShadowCascadeBiasDistribution", &UDirectionalLightComponent::execSetShadowCascadeBiasDistribution },
		{ "SetShadowDistanceFadeoutFraction", &UDirectionalLightComponent::execSetShadowDistanceFadeoutFraction },
		{ "SetShadowSourceAngleFactor", &UDirectionalLightComponent::execSetShadowSourceAngleFactor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDirectionalLightComponent);
UClass* Z_Construct_UClass_UDirectionalLightComponent_NoRegister()
{
	return UDirectionalLightComponent::StaticClass();
}
struct Z_Construct_UClass_UDirectionalLightComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Lights" },
		{ "Comment", "/**\n * A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume.\n */" },
		{ "HideCategories", "Object LightProfiles Trigger Activation Components|Activation Physics Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/DirectionalLightComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "A light component that has parallel rays. Will provide a uniform lighting across any affected surface (eg. The Sun). This will affect all objects in the defined light-mass importance volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowCascadeBiasDistribution_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Controls the depth bias scaling across cascades. This allows to mitigage the shadow acne difference on shadow cascades transition.\n\x09* A value of 1 scales shadow bias based on each cascade size (Default).\n\x09* A value of 0 scales shadow bias uniformly accross all cacascade.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls the depth bias scaling across cascades. This allows to mitigage the shadow acne difference on shadow cascades transition.\nA value of 1 scales shadow bias based on each cascade size (Default).\nA value of 0 scales shadow bias uniformly accross all cacascade." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableLightShaftOcclusion_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light. */" },
		{ "DisplayName", "Light Shaft Occlusion" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether to occlude fog and atmosphere inscattering with screenspace blurred occlusion from this light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionMaskDarkness_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** \n\x09 * Controls how dark the occlusion masking is, a value of 1 results in no darkening term.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls how dark the occlusion masking is, a value of 1 results in no darkening term." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OcclusionDepthRange_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** Everything closer to the camera than this distance will occlude light shafts. */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Everything closer to the camera than this distance will occlude light shafts." },
		{ "UIMax", "500000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightShaftOverrideDirection_MetaData[] = {
		{ "Category", "LightShafts" },
		{ "Comment", "/** \n\x09 * Can be used to make light shafts come from somewhere other than the light's actual direction. \n\x09 * This will only be used when non-zero.  It does not have to be normalized.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Can be used to make light shafts come from somewhere other than the light's actual direction.\nThis will only be used when non-zero.  It does not have to be normalized." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WholeSceneDynamicShadowRadius_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceMovableLight_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera.\n\x09 * A value of 0 disables the dynamic shadow.\n\x09 */" },
		{ "DisplayName", "Dynamic Shadow Distance MovableLight" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a movable light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowDistanceStationaryLight_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera.\n\x09 * A value of 0 disables the dynamic shadow.\n\x09 */" },
		{ "DisplayName", "Dynamic Shadow Distance StationaryLight" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "How far Cascaded Shadow Map dynamic shadows will cover for a stationary light, measured from the camera.\nA value of 0 disables the dynamic shadow." },
		{ "UIMax", "20000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicShadowCascades_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Number of cascades to split the view frustum into for the whole scene dynamic shadow.  \n\x09 * More cascades result in better shadow resolution, but adds significant rendering cost.\n\x09 */" },
		{ "DisplayName", "Num Dynamic Shadow Cascades" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Number of cascades to split the view frustum into for the whole scene dynamic shadow.\nMore cascades result in better shadow resolution, but adds significant rendering cost." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeDistributionExponent_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent).\n\x09 * An exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution.\n\x09 */" },
		{ "DisplayName", "Distribution Exponent" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls whether the cascades are distributed closer to the camera (larger exponent) or further from the camera (smaller exponent).\nAn exponent of 1 means that cascade transitions will happen at a distance proportional to their resolution." },
		{ "UIMax", "4" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CascadeTransitionFraction_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Proportion of the fade region between cascades.\n\x09 * Pixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels.\n\x09 * A value of zero eliminates the fade region, creating hard transitions.\n\x09 * Higher values increase the size of the fade region, creating a more gradual transition between cascades.\n\x09 * The value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap).\n\x09 * Ideal values are the smallest possible which still hide the transition.\n\x09 * An increased fade region size causes an increase in shadow rendering cost.\n\x09 */" },
		{ "DisplayName", "Transition Fraction" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Proportion of the fade region between cascades.\nPixels within the fade region of two cascades have their shadows blended to avoid hard transitions between quality levels.\nA value of zero eliminates the fade region, creating hard transitions.\nHigher values increase the size of the fade region, creating a more gradual transition between cascades.\nThe value is expressed as a percentage proportion (i.e. 0.1 = 10% overlap).\nIdeal values are the smallest possible which still hide the transition.\nAn increased fade region size causes an increase in shadow rendering cost." },
		{ "UIMax", "0.3" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowDistanceFadeoutFraction_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Controls the size of the fade out region at the far extent of the dynamic shadow's influence.  \n\x09 * This is specified as a fraction of DynamicShadowDistance. \n\x09 */" },
		{ "DisplayName", "Distance Fadeout Fraction" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Controls the size of the fade out region at the far extent of the dynamic shadow's influence.\nThis is specified as a fraction of DynamicShadowDistance." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseInsetShadowsForMovableObjects_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled.\n\x09 * This allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small.\n\x09 * If DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off.\n\x09 * Disabling this can reduce shadowing cost significantly with many movable objects.\n\x09 */" },
		{ "DisplayName", "Inset Shadows For Movable Objects" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Stationary lights only: Whether to use per-object inset shadows for movable components, even though cascaded shadow maps are enabled.\nThis allows dynamic objects to have a shadow even when they are outside of the cascaded shadow map, which is important when DynamicShadowDistanceStationaryLight is small.\nIf DynamicShadowDistanceStationaryLight is large (currently > 8000), this will be forced off.\nDisabling this can reduce shadowing cost significantly with many movable objects." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarShadowCascadeCount_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** 0: no Far Shadow Cascades, otherwise the number of cascades between DynamicShadowDistance and FarShadowDistance that are covered by Far Shadow Cascades. */" },
		{ "DisplayName", "Far Shadow Cascade Count" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "0: no Far Shadow Cascades, otherwise the number of cascades between DynamicShadowDistance and FarShadowDistance that are covered by Far Shadow Cascades." },
		{ "UIMax", "4" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FarShadowDistance_MetaData[] = {
		{ "Category", "CascadedShadowMaps" },
		{ "Comment", "/** \n\x09 * Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance. \n\x09 */" },
		{ "DisplayName", "Far Shadow Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Distance at which the far shadow cascade should end.  Far shadows will cover the range between 'Dynamic Shadow Distance' and this distance." },
		{ "UIMax", "800000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFieldShadowDistance_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** \n\x09 * Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance. \n\x09 */" },
		{ "DisplayName", "DistanceField Shadow Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Distance at which the ray traced shadow cascade should end.  Distance field shadows will cover the range between 'Dynamic Shadow Distance' this distance." },
		{ "UIMax", "100000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardShadingPriority_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Forward lighting priority for the single directional light that will be used for forward shading, translucent, single layer water and volumetric fog.\n\x09 * When two lights have equal priorities, the selection will be based on their overall brightness as a fallback.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Forward lighting priority for the single directional light that will be used for forward shading, translucent, single layer water and volumetric fog.\nWhen two lights have equal priorities, the selection will be based on their overall brightness as a fallback." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightSourceAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Angle subtended by light source in degrees (also known as angular diameter).\n\x09 * Defaults to 0.5357 which is the angle for our sun.\n\x09 */" },
		{ "DisplayName", "Source Angle" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Angle subtended by light source in degrees (also known as angular diameter).\nDefaults to 0.5357 which is the angle for our sun." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightSourceSoftAngle_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Angle subtended by soft light source in degrees.\n\x09 */" },
		{ "DisplayName", "Source Soft Angle" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Angle subtended by soft light source in degrees." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowSourceAngleFactor_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/**\n\x09 * Shadow source angle factor, relative to the light source angle.\n\x09 * Defaults to 1.0 to coincide with light source angle.\n\x09 */" },
		{ "DisplayName", "Shadow Source Angle Factor" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Shadow source angle factor, relative to the light source angle.\nDefaults to 1.0 to coincide with light source angle." },
		{ "UIMax", "5" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceDistance_MetaData[] = {
		{ "Category", "DistanceFieldShadows" },
		{ "Comment", "/** Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost. */" },
		{ "DisplayName", "DistanceField Trace Distance" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Determines how far shadows can be cast, in world units.  Larger values increase the shadowing cost." },
		{ "UIMax", "100000" },
		{ "UIMin", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsedAsAtmosphereSunLight_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAtmosphereSunLight_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the directional light can interact with the atmosphere, cloud and generate a visual disk. All of which compose the visual sky.\n\x09 */" },
		{ "DisplayName", "Atmosphere Sun Light" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Whether the directional light can interact with the atmosphere, cloud and generate a visual disk. All of which compose the visual sky." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereSunLightIndex_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Two atmosphere lights are supported. For instance: a sun and a moon, or two suns.\n\x09 */" },
		{ "DisplayName", "Atmosphere Sun Light Index" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Two atmosphere lights are supported. For instance: a sun and a moon, or two suns." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AtmosphereSunDiskColorScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * A color multiplied with the sun disk luminance.\n\x09 */" },
		{ "DisplayName", "Atmosphere Sun Disk Color Scale" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "A color multiplied with the sun disk luminance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPerPixelAtmosphereTransmittance_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether to apply atmosphere transmittance per pixel on opaque meshes, instead of using the light global transmittance. Note: VolumetricCloud per pixel transmittance option is selectable on the VolumetricCloud component itself.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether to apply atmosphere transmittance per pixel on opaque meshes, instead of using the light global transmittance. Note: VolumetricCloud per pixel transmittance option is selectable on the VolumetricCloud component itself." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsOnClouds_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows from opaque meshes onto clouds. This is disabled when 'Atmosphere Sun Light Index' is set to 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast any shadows from opaque meshes onto clouds. This is disabled when 'Atmosphere Sun Light Index' is set to 1." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadowsOnAtmosphere_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows from opaque meshes onto the atmosphere.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast any shadows from opaque meshes onto the atmosphere." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastCloudShadows_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows from clouds onto the atmosphere and other scene elements.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast any shadows from clouds onto the atmosphere and other scene elements." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The overall strength of the cloud shadow, higher value will block more light.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The overall strength of the cloud shadow, higher value will block more light." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnAtmosphereStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The strength of the shadow on atmosphere. Disabled when 0.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The strength of the shadow on atmosphere. Disabled when 0." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowOnSurfaceStrength_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The strength of the shadow on opaque and transparent meshes. Disabled when 0.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "The strength of the shadow on opaque and transparent meshes. Disabled when 0." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowDepthBias_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * The bias applied to the shadow front depth of the volumetric cloud shadow map.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "The bias applied to the shadow front depth of the volumetric cloud shadow map." },
		{ "UIMax", "1" },
		{ "UIMin", "-1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowExtent_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The world space radius of the cloud shadow map around the camera in kilometers.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "The world space radius of the cloud shadow map around the camera in kilometers." },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowMapResolutionScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the cloud shadow map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.ShadowMap.MaxResolution'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the cloud shadow map resolution, base resolution is 512. The resolution is still clamped to 'r.VolumetricCloud.ShadowMap.MaxResolution'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudShadowRaySampleCountScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "ClampMin", "0.25" },
		{ "Comment", "/**\n\x09 * Scale the shadow map tracing sample count.\n\x09 * The sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ShadowMap.RaySampleMaxCount'.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "SliderExponent", "1.000000" },
		{ "ToolTip", "Scale the shadow map tracing sample count.\nThe sample count resolution is still clamped according to scalability setting to 'r.VolumetricCloud.ShadowMap.RaySampleMaxCount'." },
		{ "UIMax", "8" },
		{ "UIMin", "0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CloudScatteredLuminanceScale_MetaData[] = {
		{ "Category", "AtmosphereAndCloud" },
		{ "Comment", "/**\n\x09 * Scales the lights contribution when scattered in cloud participating media. This can help counter balance the fact that our multiple scattering solution is only an approximation.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Scales the lights contribution when scattered in cloud participating media. This can help counter balance the fact that our multiple scattering solution is only an approximation." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightmassSettings_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** The Lightmass settings for this object. */" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "The Lightmass settings for this object." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastModulatedShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True.\n\x09**/" },
		{ "EditCondition", "Mobility == EComponentMobility::Stationary" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Whether the light should cast modulated shadows from dynamic objects (mobile only).  Also requires Cast Shadows to be set to True." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModulatedShadowColor_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09* Color to modulate against the scene color when rendering modulated shadows. (mobile only)\n\x09**/" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Color to modulate against the scene color when rendering modulated shadows. (mobile only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowAmount_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Control the amount of shadow occlusion. A value of 0 means no occlusion, thus no shadow.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/DirectionalLightComponent.h" },
		{ "ToolTip", "Control the amount of shadow occlusion. A value of 0 means no occlusion, thus no shadow." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowCascadeBiasDistribution;
	static void NewProp_bEnableLightShaftOcclusion_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableLightShaftOcclusion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionMaskDarkness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OcclusionDepthRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightShaftOverrideDirection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WholeSceneDynamicShadowRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceMovableLight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicShadowDistanceStationaryLight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DynamicShadowCascades;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CascadeDistributionExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CascadeTransitionFraction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowDistanceFadeoutFraction;
	static void NewProp_bUseInsetShadowsForMovableObjects_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInsetShadowsForMovableObjects;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FarShadowCascadeCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FarShadowDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFieldShadowDistance;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ForwardShadingPriority;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightSourceAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightSourceSoftAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowSourceAngleFactor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceDistance;
	static void NewProp_bUsedAsAtmosphereSunLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsedAsAtmosphereSunLight;
	static void NewProp_bAtmosphereSunLight_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAtmosphereSunLight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AtmosphereSunLightIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AtmosphereSunDiskColorScale;
	static void NewProp_bPerPixelAtmosphereTransmittance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPerPixelAtmosphereTransmittance;
	static void NewProp_bCastShadowsOnClouds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsOnClouds;
	static void NewProp_bCastShadowsOnAtmosphere_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadowsOnAtmosphere;
	static void NewProp_bCastCloudShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastCloudShadows;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnAtmosphereStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowOnSurfaceStrength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowDepthBias;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowMapResolutionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CloudShadowRaySampleCountScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CloudScatteredLuminanceScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightmassSettings;
	static void NewProp_bCastModulatedShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastModulatedShadows;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModulatedShadowColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ShadowAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLight, "SetAtmosphereSunLight" }, // 4134026616
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetAtmosphereSunLightIndex, "SetAtmosphereSunLightIndex" }, // 3845523425
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeDistributionExponent, "SetCascadeDistributionExponent" }, // 4125551215
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetCascadeTransitionFraction, "SetCascadeTransitionFraction" }, // 1045702192
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowCascades, "SetDynamicShadowCascades" }, // 2192887511
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceMovableLight, "SetDynamicShadowDistanceMovableLight" }, // 1767738567
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetDynamicShadowDistanceStationaryLight, "SetDynamicShadowDistanceStationaryLight" }, // 2560663659
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetEnableLightShaftOcclusion, "SetEnableLightShaftOcclusion" }, // 194490149
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetForwardShadingPriority, "SetForwardShadingPriority" }, // 4054441369
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightShaftOverrideDirection, "SetLightShaftOverrideDirection" }, // 3287598937
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceAngle, "SetLightSourceAngle" }, // 1611947386
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetLightSourceSoftAngle, "SetLightSourceSoftAngle" }, // 3939668537
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionDepthRange, "SetOcclusionDepthRange" }, // 2427079962
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetOcclusionMaskDarkness, "SetOcclusionMaskDarkness" }, // 3387062373
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowAmount, "SetShadowAmount" }, // 4221555417
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowCascadeBiasDistribution, "SetShadowCascadeBiasDistribution" }, // 253297713
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowDistanceFadeoutFraction, "SetShadowDistanceFadeoutFraction" }, // 2738462978
		{ &Z_Construct_UFunction_UDirectionalLightComponent_SetShadowSourceAngleFactor, "SetShadowSourceAngleFactor" }, // 2835236990
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDirectionalLightComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution = { "ShadowCascadeBiasDistribution", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, ShadowCascadeBiasDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowCascadeBiasDistribution_MetaData), NewProp_ShadowCascadeBiasDistribution_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bEnableLightShaftOcclusion = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion = { "bEnableLightShaftOcclusion", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableLightShaftOcclusion_MetaData), NewProp_bEnableLightShaftOcclusion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness = { "OcclusionMaskDarkness", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionMaskDarkness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionMaskDarkness_MetaData), NewProp_OcclusionMaskDarkness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange = { "OcclusionDepthRange", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, OcclusionDepthRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OcclusionDepthRange_MetaData), NewProp_OcclusionDepthRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection = { "LightShaftOverrideDirection", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightShaftOverrideDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightShaftOverrideDirection_MetaData), NewProp_LightShaftOverrideDirection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius = { "WholeSceneDynamicShadowRadius", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, WholeSceneDynamicShadowRadius_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WholeSceneDynamicShadowRadius_MetaData), NewProp_WholeSceneDynamicShadowRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight = { "DynamicShadowDistanceMovableLight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceMovableLight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicShadowDistanceMovableLight_MetaData), NewProp_DynamicShadowDistanceMovableLight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight = { "DynamicShadowDistanceStationaryLight", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowDistanceStationaryLight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicShadowDistanceStationaryLight_MetaData), NewProp_DynamicShadowDistanceStationaryLight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades = { "DynamicShadowCascades", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, DynamicShadowCascades), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicShadowCascades_MetaData), NewProp_DynamicShadowCascades_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent = { "CascadeDistributionExponent", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CascadeDistributionExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeDistributionExponent_MetaData), NewProp_CascadeDistributionExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction = { "CascadeTransitionFraction", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CascadeTransitionFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CascadeTransitionFraction_MetaData), NewProp_CascadeTransitionFraction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction = { "ShadowDistanceFadeoutFraction", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, ShadowDistanceFadeoutFraction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowDistanceFadeoutFraction_MetaData), NewProp_ShadowDistanceFadeoutFraction_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bUseInsetShadowsForMovableObjects = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects = { "bUseInsetShadowsForMovableObjects", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseInsetShadowsForMovableObjects_MetaData), NewProp_bUseInsetShadowsForMovableObjects_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount = { "FarShadowCascadeCount", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowCascadeCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarShadowCascadeCount_MetaData), NewProp_FarShadowCascadeCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance = { "FarShadowDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, FarShadowDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FarShadowDistance_MetaData), NewProp_FarShadowDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance = { "DistanceFieldShadowDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, DistanceFieldShadowDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceFieldShadowDistance_MetaData), NewProp_DistanceFieldShadowDistance_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority = { "ForwardShadingPriority", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, ForwardShadingPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardShadingPriority_MetaData), NewProp_ForwardShadingPriority_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle = { "LightSourceAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightSourceAngle_MetaData), NewProp_LightSourceAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle = { "LightSourceSoftAngle", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightSourceSoftAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightSourceSoftAngle_MetaData), NewProp_LightSourceSoftAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor = { "ShadowSourceAngleFactor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, ShadowSourceAngleFactor), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowSourceAngleFactor_MetaData), NewProp_ShadowSourceAngleFactor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance = { "TraceDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, TraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceDistance_MetaData), NewProp_TraceDistance_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bUsedAsAtmosphereSunLight_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight = { "bUsedAsAtmosphereSunLight", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsedAsAtmosphereSunLight_MetaData), NewProp_bUsedAsAtmosphereSunLight_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bAtmosphereSunLight = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight = { "bAtmosphereSunLight", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAtmosphereSunLight_MetaData), NewProp_bAtmosphereSunLight_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex = { "AtmosphereSunLightIndex", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, AtmosphereSunLightIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtmosphereSunLightIndex_MetaData), NewProp_AtmosphereSunLightIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale = { "AtmosphereSunDiskColorScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, AtmosphereSunDiskColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AtmosphereSunDiskColorScale_MetaData), NewProp_AtmosphereSunDiskColorScale_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bPerPixelAtmosphereTransmittance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance = { "bPerPixelAtmosphereTransmittance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPerPixelAtmosphereTransmittance_MetaData), NewProp_bPerPixelAtmosphereTransmittance_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bCastShadowsOnClouds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds = { "bCastShadowsOnClouds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowsOnClouds_MetaData), NewProp_bCastShadowsOnClouds_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bCastShadowsOnAtmosphere = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere = { "bCastShadowsOnAtmosphere", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastShadowsOnAtmosphere_MetaData), NewProp_bCastShadowsOnAtmosphere_MetaData) };
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bCastCloudShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows = { "bCastCloudShadows", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastCloudShadows_MetaData), NewProp_bCastCloudShadows_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength = { "CloudShadowStrength", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowStrength_MetaData), NewProp_CloudShadowStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength = { "CloudShadowOnAtmosphereStrength", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowOnAtmosphereStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowOnAtmosphereStrength_MetaData), NewProp_CloudShadowOnAtmosphereStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength = { "CloudShadowOnSurfaceStrength", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowOnSurfaceStrength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowOnSurfaceStrength_MetaData), NewProp_CloudShadowOnSurfaceStrength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias = { "CloudShadowDepthBias", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowDepthBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowDepthBias_MetaData), NewProp_CloudShadowDepthBias_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent = { "CloudShadowExtent", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowExtent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowExtent_MetaData), NewProp_CloudShadowExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale = { "CloudShadowMapResolutionScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowMapResolutionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowMapResolutionScale_MetaData), NewProp_CloudShadowMapResolutionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale = { "CloudShadowRaySampleCountScale", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudShadowRaySampleCountScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudShadowRaySampleCountScale_MetaData), NewProp_CloudShadowRaySampleCountScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale = { "CloudScatteredLuminanceScale", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, CloudScatteredLuminanceScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CloudScatteredLuminanceScale_MetaData), NewProp_CloudScatteredLuminanceScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings = { "LightmassSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, LightmassSettings), Z_Construct_UScriptStruct_FLightmassDirectionalLightSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightmassSettings_MetaData), NewProp_LightmassSettings_MetaData) }; // 3419206444
void Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_SetBit(void* Obj)
{
	((UDirectionalLightComponent*)Obj)->bCastModulatedShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows = { "bCastModulatedShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDirectionalLightComponent), &Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastModulatedShadows_MetaData), NewProp_bCastModulatedShadows_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor = { "ModulatedShadowColor", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, ModulatedShadowColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModulatedShadowColor_MetaData), NewProp_ModulatedShadowColor_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount = { "ShadowAmount", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDirectionalLightComponent, ShadowAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowAmount_MetaData), NewProp_ShadowAmount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowCascadeBiasDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bEnableLightShaftOcclusion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionMaskDarkness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_OcclusionDepthRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightShaftOverrideDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_WholeSceneDynamicShadowRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceMovableLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowDistanceStationaryLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DynamicShadowCascades,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeDistributionExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CascadeTransitionFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowDistanceFadeoutFraction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUseInsetShadowsForMovableObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowCascadeCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_FarShadowDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_DistanceFieldShadowDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ForwardShadingPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightSourceSoftAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowSourceAngleFactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_TraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bUsedAsAtmosphereSunLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bAtmosphereSunLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunLightIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_AtmosphereSunDiskColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bPerPixelAtmosphereTransmittance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnClouds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastShadowsOnAtmosphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastCloudShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnAtmosphereStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowOnSurfaceStrength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowDepthBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowMapResolutionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudShadowRaySampleCountScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_CloudScatteredLuminanceScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_LightmassSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_bCastModulatedShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ModulatedShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDirectionalLightComponent_Statics::NewProp_ShadowAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDirectionalLightComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ULightComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDirectionalLightComponent_Statics::ClassParams = {
	&UDirectionalLightComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDirectionalLightComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDirectionalLightComponent()
{
	if (!Z_Registration_Info_UClass_UDirectionalLightComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDirectionalLightComponent.OuterSingleton, Z_Construct_UClass_UDirectionalLightComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDirectionalLightComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDirectionalLightComponent>()
{
	return UDirectionalLightComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDirectionalLightComponent);
UDirectionalLightComponent::~UDirectionalLightComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UDirectionalLightComponent)
// End Class UDirectionalLightComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDirectionalLightComponent, UDirectionalLightComponent::StaticClass, TEXT("UDirectionalLightComponent"), &Z_Registration_Info_UClass_UDirectionalLightComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDirectionalLightComponent), 2889707934U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_2322751283(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DirectionalLightComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
