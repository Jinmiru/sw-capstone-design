// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/LocalFogVolumeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalFogVolumeComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_ULocalFogVolumeComponent();
ENGINE_API UClass* Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULocalFogVolumeComponent Function SetFogAlbedo
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics
{
	struct LocalFogVolumeComponent_eventSetFogAlbedo_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetFogAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetFogAlbedo", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::LocalFogVolumeComponent_eventSetFogAlbedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::LocalFogVolumeComponent_eventSetFogAlbedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetFogAlbedo)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogAlbedo(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetFogAlbedo

// Begin Class ULocalFogVolumeComponent Function SetFogEmissive
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics
{
	struct LocalFogVolumeComponent_eventSetFogEmissive_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetFogEmissive_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetFogEmissive", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::LocalFogVolumeComponent_eventSetFogEmissive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::LocalFogVolumeComponent_eventSetFogEmissive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetFogEmissive)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogEmissive(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetFogEmissive

// Begin Class ULocalFogVolumeComponent Function SetFogPhaseG
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics
{
	struct LocalFogVolumeComponent_eventSetFogPhaseG_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Scattering Distribution" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetFogPhaseG_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetFogPhaseG", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::LocalFogVolumeComponent_eventSetFogPhaseG_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::LocalFogVolumeComponent_eventSetFogPhaseG_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetFogPhaseG)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogPhaseG(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetFogPhaseG

// Begin Class ULocalFogVolumeComponent Function SetHeightFogExtinction
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics
{
	struct LocalFogVolumeComponent_eventSetHeightFogExtinction_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Height Fog Density" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetHeightFogExtinction_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetHeightFogExtinction", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::LocalFogVolumeComponent_eventSetHeightFogExtinction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::LocalFogVolumeComponent_eventSetHeightFogExtinction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetHeightFogExtinction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightFogExtinction(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetHeightFogExtinction

// Begin Class ULocalFogVolumeComponent Function SetHeightFogFalloff
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics
{
	struct LocalFogVolumeComponent_eventSetHeightFogFalloff_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetHeightFogFalloff_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetHeightFogFalloff", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::LocalFogVolumeComponent_eventSetHeightFogFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::LocalFogVolumeComponent_eventSetHeightFogFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetHeightFogFalloff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightFogFalloff(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetHeightFogFalloff

// Begin Class ULocalFogVolumeComponent Function SetHeightFogOffset
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics
{
	struct LocalFogVolumeComponent_eventSetHeightFogOffset_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetHeightFogOffset_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetHeightFogOffset", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::LocalFogVolumeComponent_eventSetHeightFogOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::LocalFogVolumeComponent_eventSetHeightFogOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetHeightFogOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHeightFogOffset(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetHeightFogOffset

// Begin Class ULocalFogVolumeComponent Function SetRadialFogExtinction
struct Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics
{
	struct LocalFogVolumeComponent_eventSetRadialFogExtinction_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "DisplayName", "Set Radial Fog Density" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalFogVolumeComponent_eventSetRadialFogExtinction_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalFogVolumeComponent, nullptr, "SetRadialFogExtinction", nullptr, nullptr, Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::LocalFogVolumeComponent_eventSetRadialFogExtinction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::LocalFogVolumeComponent_eventSetRadialFogExtinction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalFogVolumeComponent::execSetRadialFogExtinction)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRadialFogExtinction(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULocalFogVolumeComponent Function SetRadialFogExtinction

// Begin Class ULocalFogVolumeComponent
void ULocalFogVolumeComponent::StaticRegisterNativesULocalFogVolumeComponent()
{
	UClass* Class = ULocalFogVolumeComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFogAlbedo", &ULocalFogVolumeComponent::execSetFogAlbedo },
		{ "SetFogEmissive", &ULocalFogVolumeComponent::execSetFogEmissive },
		{ "SetFogPhaseG", &ULocalFogVolumeComponent::execSetFogPhaseG },
		{ "SetHeightFogExtinction", &ULocalFogVolumeComponent::execSetHeightFogExtinction },
		{ "SetHeightFogFalloff", &ULocalFogVolumeComponent::execSetHeightFogFalloff },
		{ "SetHeightFogOffset", &ULocalFogVolumeComponent::execSetHeightFogOffset },
		{ "SetRadialFogExtinction", &ULocalFogVolumeComponent::execSetRadialFogExtinction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalFogVolumeComponent);
UClass* Z_Construct_UClass_ULocalFogVolumeComponent_NoRegister()
{
	return ULocalFogVolumeComponent::StaticClass();
}
struct Z_Construct_UClass_ULocalFogVolumeComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "HideCategories", "Object Mobility Activation Components|Activation Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LocalFogVolumeComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RadialFogExtinction_MetaData[] = {
		{ "Category", "Radial Fog Distribution" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The density of the radial fog representing its extinction coefficient at the center of the sphere. The final look of the volume is determined by combining the \"Coverage=1-Transmittance\" of both radial and height fog in order to achieve both soft edges and height fog.*/" },
		{ "DisplayName", "Radial Fog Density" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The density of the radial fog representing its extinction coefficient at the center of the sphere. The final look of the volume is determined by combining the \"Coverage=1-Transmittance\" of both radial and height fog in order to achieve both soft edges and height fog." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogExtinction_MetaData[] = {
		{ "Category", "Height Fog Distribution" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** The density of the radial fog representing its extinction coefficient at height 0 in the unit sphere. The final look of the volume is determined by combining the \"Coverage=1-Transmittance\" of both radial and height fog in order to achieve both soft edges and height fog.*/" },
		{ "DisplayName", "Height Fog Density" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "The density of the radial fog representing its extinction coefficient at height 0 in the unit sphere. The final look of the volume is determined by combining the \"Coverage=1-Transmittance\" of both radial and height fog in order to achieve both soft edges and height fog." },
		{ "UIMax", "2.0" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogFalloff_MetaData[] = {
		{ "Category", "Height Fog Distribution" },
		{ "ClampMin", "1.000000" },
		{ "Comment", "/** Controls how the density decreases as height increases. Smaller values make the visible transition larger. 1.0 is the lowest value before visual artifact are visible at the horizon. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "SliderExponent", "2.000000" },
		{ "ToolTip", "Controls how the density decreases as height increases. Smaller values make the visible transition larger. 1.0 is the lowest value before visual artifact are visible at the horizon." },
		{ "UIMax", "5000" },
		{ "UIMin", "1.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightFogOffset_MetaData[] = {
		{ "Category", "Height Fog Distribution" },
		{ "Comment", "/** Height offset, relative to the actor Z position. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "ToolTip", "Height offset, relative to the actor Z position." },
		{ "UIMax", "2.0" },
		{ "UIMin", "-2.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogPhaseG_MetaData[] = {
		{ "Category", "Shading" },
		{ "ClampMax", "0.999000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Controls the phase `G` parameter, describing the directionality of the scattering within this fog volume. */" },
		{ "DisplayName", "Scattering Distribution" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "ToolTip", "Controls the phase `G` parameter, describing the directionality of the scattering within this fog volume." },
		{ "UIMax", "0.999" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogAlbedo_MetaData[] = {
		{ "Category", "Shading" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Controls the albedo of this fog volume. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "ToolTip", "Controls the albedo of this fog volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogEmissive_MetaData[] = {
		{ "Category", "Shading" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
		{ "Comment", "/** Controls the emissive color of this fog volume. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "ToolTip", "Controls the emissive color of this fog volume." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogSortPriority_MetaData[] = {
		{ "Category", "Sorting" },
		{ "ClampMax", "127" },
		{ "ClampMin", "-127" },
		{ "Comment", "/** The priority can be used as a way to override the sorting by distance. A lower value means the volume will be considered further away, i.e. it will draw behind the one with a higher priority value. */" },
		{ "ModuleRelativePath", "Classes/Components/LocalFogVolumeComponent.h" },
		{ "ToolTip", "The priority can be used as a way to override the sorting by distance. A lower value means the volume will be considered further away, i.e. it will draw behind the one with a higher priority value." },
		{ "UIMax", "127" },
		{ "UIMin", "-127" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RadialFogExtinction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogExtinction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightFogOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogPhaseG;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FogAlbedo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FogEmissive;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FogSortPriority;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogAlbedo, "SetFogAlbedo" }, // 1144768716
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogEmissive, "SetFogEmissive" }, // 677136404
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetFogPhaseG, "SetFogPhaseG" }, // 2007316307
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogExtinction, "SetHeightFogExtinction" }, // 590140508
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogFalloff, "SetHeightFogFalloff" }, // 541956558
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetHeightFogOffset, "SetHeightFogOffset" }, // 905921411
		{ &Z_Construct_UFunction_ULocalFogVolumeComponent_SetRadialFogExtinction, "SetRadialFogExtinction" }, // 3968533602
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalFogVolumeComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_RadialFogExtinction = { "RadialFogExtinction", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, RadialFogExtinction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RadialFogExtinction_MetaData), NewProp_RadialFogExtinction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_HeightFogExtinction = { "HeightFogExtinction", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, HeightFogExtinction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFogExtinction_MetaData), NewProp_HeightFogExtinction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_HeightFogFalloff = { "HeightFogFalloff", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, HeightFogFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFogFalloff_MetaData), NewProp_HeightFogFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_HeightFogOffset = { "HeightFogOffset", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, HeightFogOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightFogOffset_MetaData), NewProp_HeightFogOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogPhaseG = { "FogPhaseG", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, FogPhaseG), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogPhaseG_MetaData), NewProp_FogPhaseG_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogAlbedo = { "FogAlbedo", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, FogAlbedo), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogAlbedo_MetaData), NewProp_FogAlbedo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogEmissive = { "FogEmissive", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, FogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogEmissive_MetaData), NewProp_FogEmissive_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogSortPriority = { "FogSortPriority", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalFogVolumeComponent, FogSortPriority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogSortPriority_MetaData), NewProp_FogSortPriority_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalFogVolumeComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_RadialFogExtinction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_HeightFogExtinction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_HeightFogFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_HeightFogOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogPhaseG,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogAlbedo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogEmissive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalFogVolumeComponent_Statics::NewProp_FogSortPriority,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFogVolumeComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalFogVolumeComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFogVolumeComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalFogVolumeComponent_Statics::ClassParams = {
	&ULocalFogVolumeComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULocalFogVolumeComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFogVolumeComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalFogVolumeComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalFogVolumeComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalFogVolumeComponent()
{
	if (!Z_Registration_Info_UClass_ULocalFogVolumeComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalFogVolumeComponent.OuterSingleton, Z_Construct_UClass_ULocalFogVolumeComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalFogVolumeComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULocalFogVolumeComponent>()
{
	return ULocalFogVolumeComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalFogVolumeComponent);
// End Class ULocalFogVolumeComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULocalFogVolumeComponent, ULocalFogVolumeComponent::StaticClass, TEXT("ULocalFogVolumeComponent"), &Z_Registration_Info_UClass_ULocalFogVolumeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalFogVolumeComponent), 2543457848U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_4211848149(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LocalFogVolumeComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
