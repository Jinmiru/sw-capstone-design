// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/ExponentialHeightFogComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExponentialHeightFogComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent();
ENGINE_API UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTextureCube_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FExponentialHeightFogData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FExponentialHeightFogData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ExponentialHeightFogData;
class UScriptStruct* FExponentialHeightFogData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ExponentialHeightFogData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ExponentialHeightFogData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FExponentialHeightFogData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ExponentialHeightFogData"));
	}
	return Z_Registration_Info_UScriptStruct_ExponentialHeightFogData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FExponentialHeightFogData>()
{
	return FExponentialHeightFogData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09""Data for an individual fog line integral.\n*\x09This is the data which is not shared between fogs when multiple fogs are set up on a single UExponentialHeightFogComponent\n*/" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Data for an individual fog line integral.\nThis is the data which is not shared between fogs when multiple fogs are set up on a single UExponentialHeightFogComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Global density factor for this fog. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Global density factor for this fog." },
		{ "UIMax", ".05" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/**\n\x09* Height density factor, controls how the density increases as height decreases.\n\x09* Smaller values make the visible transition larger.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogHeightOffset_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Height offset, relative to the actor position Z. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height offset, relative to the actor position Z." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogHeightOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FExponentialHeightFogData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExponentialHeightFogData, FogDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogDensity_MetaData), NewProp_FogDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExponentialHeightFogData, FogHeightFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogHeightFalloff_MetaData), NewProp_FogHeightFalloff_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset = { "FogHeightOffset", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FExponentialHeightFogData, FogHeightOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogHeightOffset_MetaData), NewProp_FogHeightOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewProp_FogHeightOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"ExponentialHeightFogData",
	Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::PropPointers),
	sizeof(FExponentialHeightFogData),
	alignof(FExponentialHeightFogData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FExponentialHeightFogData()
{
	if (!Z_Registration_Info_UScriptStruct_ExponentialHeightFogData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ExponentialHeightFogData.InnerSingleton, Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ExponentialHeightFogData.InnerSingleton;
}
// End ScriptStruct FExponentialHeightFogData

// Begin Class UExponentialHeightFogComponent Function SetDirectionalInscatteringColor
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics
{
	struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms
	{
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetDirectionalInscatteringColor", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::ExponentialHeightFogComponent_eventSetDirectionalInscatteringColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetDirectionalInscatteringColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirectionalInscatteringColor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetDirectionalInscatteringColor

// Begin Class UExponentialHeightFogComponent Function SetDirectionalInscatteringExponent
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics
{
	struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetDirectionalInscatteringExponent", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::ExponentialHeightFogComponent_eventSetDirectionalInscatteringExponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirectionalInscatteringExponent(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetDirectionalInscatteringExponent

// Begin Class UExponentialHeightFogComponent Function SetDirectionalInscatteringStartDistance
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics
{
	struct ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetDirectionalInscatteringStartDistance", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::ExponentialHeightFogComponent_eventSetDirectionalInscatteringStartDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDirectionalInscatteringStartDistance(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetDirectionalInscatteringStartDistance

// Begin Class UExponentialHeightFogComponent Function SetFogCutoffDistance
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics
{
	struct ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogCutoffDistance", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::ExponentialHeightFogComponent_eventSetFogCutoffDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogCutoffDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogCutoffDistance(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetFogCutoffDistance

// Begin Class UExponentialHeightFogComponent Function SetFogDensity
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics
{
	struct ExponentialHeightFogComponent_eventSetFogDensity_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogDensity_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogDensity", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::ExponentialHeightFogComponent_eventSetFogDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::ExponentialHeightFogComponent_eventSetFogDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogDensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogDensity(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetFogDensity

// Begin Class UExponentialHeightFogComponent Function SetFogHeightFalloff
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics
{
	struct ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogHeightFalloff", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::ExponentialHeightFogComponent_eventSetFogHeightFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogHeightFalloff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogHeightFalloff(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetFogHeightFalloff

// Begin Class UExponentialHeightFogComponent Function SetFogInscatteringColor
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics
{
	struct ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms
	{
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogInscatteringColor", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::ExponentialHeightFogComponent_eventSetFogInscatteringColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogInscatteringColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogInscatteringColor(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetFogInscatteringColor

// Begin Class UExponentialHeightFogComponent Function SetFogMaxOpacity
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics
{
	struct ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFogMaxOpacity", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::ExponentialHeightFogComponent_eventSetFogMaxOpacity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFogMaxOpacity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFogMaxOpacity(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetFogMaxOpacity

// Begin Class UExponentialHeightFogComponent Function SetFullyDirectionalInscatteringColorDistance
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics
{
	struct ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetFullyDirectionalInscatteringColorDistance", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::ExponentialHeightFogComponent_eventSetFullyDirectionalInscatteringColorDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFullyDirectionalInscatteringColorDistance(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetFullyDirectionalInscatteringColorDistance

// Begin Class UExponentialHeightFogComponent Function SetHoldout
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics
{
	struct ExponentialHeightFogComponent_eventSetHoldout_Parms
	{
		bool bNewHoldout;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewHoldout;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::NewProp_bNewHoldout_SetBit(void* Obj)
{
	((ExponentialHeightFogComponent_eventSetHoldout_Parms*)Obj)->bNewHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::NewProp_bNewHoldout = { "bNewHoldout", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExponentialHeightFogComponent_eventSetHoldout_Parms), &Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::NewProp_bNewHoldout_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::NewProp_bNewHoldout,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetHoldout", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::ExponentialHeightFogComponent_eventSetHoldout_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::ExponentialHeightFogComponent_eventSetHoldout_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetHoldout)
{
	P_GET_UBOOL(Z_Param_bNewHoldout);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHoldout(Z_Param_bNewHoldout);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetHoldout

// Begin Class UExponentialHeightFogComponent Function SetInscatteringColorCubemap
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics
{
	struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms
	{
		UTextureCube* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms, Value), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetInscatteringColorCubemap", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::ExponentialHeightFogComponent_eventSetInscatteringColorCubemap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetInscatteringColorCubemap)
{
	P_GET_OBJECT(UTextureCube,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInscatteringColorCubemap(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetInscatteringColorCubemap

// Begin Class UExponentialHeightFogComponent Function SetInscatteringColorCubemapAngle
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics
{
	struct ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetInscatteringColorCubemapAngle", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::ExponentialHeightFogComponent_eventSetInscatteringColorCubemapAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInscatteringColorCubemapAngle(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetInscatteringColorCubemapAngle

// Begin Class UExponentialHeightFogComponent Function SetInscatteringTextureTint
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics
{
	struct ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms
	{
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetInscatteringTextureTint", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::ExponentialHeightFogComponent_eventSetInscatteringTextureTint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetInscatteringTextureTint)
{
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetInscatteringTextureTint(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetInscatteringTextureTint

// Begin Class UExponentialHeightFogComponent Function SetNonDirectionalInscatteringColorDistance
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics
{
	struct ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetNonDirectionalInscatteringColorDistance", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::ExponentialHeightFogComponent_eventSetNonDirectionalInscatteringColorDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNonDirectionalInscatteringColorDistance(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetNonDirectionalInscatteringColorDistance

// Begin Class UExponentialHeightFogComponent Function SetRenderInMainPass
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics
{
	struct ExponentialHeightFogComponent_eventSetRenderInMainPass_Parms
	{
		bool bValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::NewProp_bValue_SetBit(void* Obj)
{
	((ExponentialHeightFogComponent_eventSetRenderInMainPass_Parms*)Obj)->bValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExponentialHeightFogComponent_eventSetRenderInMainPass_Parms), &Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::NewProp_bValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetRenderInMainPass", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::ExponentialHeightFogComponent_eventSetRenderInMainPass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::ExponentialHeightFogComponent_eventSetRenderInMainPass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetRenderInMainPass)
{
	P_GET_UBOOL(Z_Param_bValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRenderInMainPass(Z_Param_bValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetRenderInMainPass

// Begin Class UExponentialHeightFogComponent Function SetSecondFogData
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics
{
	struct ExponentialHeightFogComponent_eventSetSecondFogData_Parms
	{
		FExponentialHeightFogData NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetSecondFogData_Parms, NewValue), Z_Construct_UScriptStruct_FExponentialHeightFogData, METADATA_PARAMS(0, nullptr) }; // 1298901701
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetSecondFogData", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::ExponentialHeightFogComponent_eventSetSecondFogData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::ExponentialHeightFogComponent_eventSetSecondFogData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetSecondFogData)
{
	P_GET_STRUCT(FExponentialHeightFogData,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondFogData(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetSecondFogData

// Begin Class UExponentialHeightFogComponent Function SetSecondFogDensity
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics
{
	struct ExponentialHeightFogComponent_eventSetSecondFogDensity_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetSecondFogDensity_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetSecondFogDensity", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::ExponentialHeightFogComponent_eventSetSecondFogDensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::ExponentialHeightFogComponent_eventSetSecondFogDensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetSecondFogDensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondFogDensity(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetSecondFogDensity

// Begin Class UExponentialHeightFogComponent Function SetSecondFogHeightFalloff
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics
{
	struct ExponentialHeightFogComponent_eventSetSecondFogHeightFalloff_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetSecondFogHeightFalloff_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetSecondFogHeightFalloff", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::ExponentialHeightFogComponent_eventSetSecondFogHeightFalloff_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::ExponentialHeightFogComponent_eventSetSecondFogHeightFalloff_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetSecondFogHeightFalloff)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondFogHeightFalloff(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetSecondFogHeightFalloff

// Begin Class UExponentialHeightFogComponent Function SetSecondFogHeightOffset
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics
{
	struct ExponentialHeightFogComponent_eventSetSecondFogHeightOffset_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetSecondFogHeightOffset_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetSecondFogHeightOffset", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::ExponentialHeightFogComponent_eventSetSecondFogHeightOffset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::ExponentialHeightFogComponent_eventSetSecondFogHeightOffset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetSecondFogHeightOffset)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSecondFogHeightOffset(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetSecondFogHeightOffset

// Begin Class UExponentialHeightFogComponent Function SetStartDistance
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics
{
	struct ExponentialHeightFogComponent_eventSetStartDistance_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|ExponentialHeightFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetStartDistance_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetStartDistance", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::ExponentialHeightFogComponent_eventSetStartDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::ExponentialHeightFogComponent_eventSetStartDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetStartDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetStartDistance(Z_Param_Value);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetStartDistance

// Begin Class UExponentialHeightFogComponent Function SetVolumetricFog
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics
{
	struct ExponentialHeightFogComponent_eventSetVolumetricFog_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((ExponentialHeightFogComponent_eventSetVolumetricFog_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFog", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::ExponentialHeightFogComponent_eventSetVolumetricFog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::ExponentialHeightFogComponent_eventSetVolumetricFog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFog)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricFog(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetVolumetricFog

// Begin Class UExponentialHeightFogComponent Function SetVolumetricFogAlbedo
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics
{
	struct ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms
	{
		FColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms, NewValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogAlbedo", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogAlbedo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogAlbedo)
{
	P_GET_STRUCT(FColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricFogAlbedo(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetVolumetricFogAlbedo

// Begin Class UExponentialHeightFogComponent Function SetVolumetricFogDistance
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics
{
	struct ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogDistance", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricFogDistance(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetVolumetricFogDistance

// Begin Class UExponentialHeightFogComponent Function SetVolumetricFogEmissive
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics
{
	struct ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms
	{
		FLinearColor NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms, NewValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogEmissive", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogEmissive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogEmissive)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricFogEmissive(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetVolumetricFogEmissive

// Begin Class UExponentialHeightFogComponent Function SetVolumetricFogExtinctionScale
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics
{
	struct ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogExtinctionScale", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogExtinctionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricFogExtinctionScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetVolumetricFogExtinctionScale

// Begin Class UExponentialHeightFogComponent Function SetVolumetricFogScatteringDistribution
struct Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics
{
	struct ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|VolumetricFog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UExponentialHeightFogComponent, nullptr, "SetVolumetricFogScatteringDistribution", nullptr, nullptr, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::PropPointers), sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams), Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::ExponentialHeightFogComponent_eventSetVolumetricFogScatteringDistribution_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVolumetricFogScatteringDistribution(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UExponentialHeightFogComponent Function SetVolumetricFogScatteringDistribution

// Begin Class UExponentialHeightFogComponent
void UExponentialHeightFogComponent::StaticRegisterNativesUExponentialHeightFogComponent()
{
	UClass* Class = UExponentialHeightFogComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetDirectionalInscatteringColor", &UExponentialHeightFogComponent::execSetDirectionalInscatteringColor },
		{ "SetDirectionalInscatteringExponent", &UExponentialHeightFogComponent::execSetDirectionalInscatteringExponent },
		{ "SetDirectionalInscatteringStartDistance", &UExponentialHeightFogComponent::execSetDirectionalInscatteringStartDistance },
		{ "SetFogCutoffDistance", &UExponentialHeightFogComponent::execSetFogCutoffDistance },
		{ "SetFogDensity", &UExponentialHeightFogComponent::execSetFogDensity },
		{ "SetFogHeightFalloff", &UExponentialHeightFogComponent::execSetFogHeightFalloff },
		{ "SetFogInscatteringColor", &UExponentialHeightFogComponent::execSetFogInscatteringColor },
		{ "SetFogMaxOpacity", &UExponentialHeightFogComponent::execSetFogMaxOpacity },
		{ "SetFullyDirectionalInscatteringColorDistance", &UExponentialHeightFogComponent::execSetFullyDirectionalInscatteringColorDistance },
		{ "SetHoldout", &UExponentialHeightFogComponent::execSetHoldout },
		{ "SetInscatteringColorCubemap", &UExponentialHeightFogComponent::execSetInscatteringColorCubemap },
		{ "SetInscatteringColorCubemapAngle", &UExponentialHeightFogComponent::execSetInscatteringColorCubemapAngle },
		{ "SetInscatteringTextureTint", &UExponentialHeightFogComponent::execSetInscatteringTextureTint },
		{ "SetNonDirectionalInscatteringColorDistance", &UExponentialHeightFogComponent::execSetNonDirectionalInscatteringColorDistance },
		{ "SetRenderInMainPass", &UExponentialHeightFogComponent::execSetRenderInMainPass },
		{ "SetSecondFogData", &UExponentialHeightFogComponent::execSetSecondFogData },
		{ "SetSecondFogDensity", &UExponentialHeightFogComponent::execSetSecondFogDensity },
		{ "SetSecondFogHeightFalloff", &UExponentialHeightFogComponent::execSetSecondFogHeightFalloff },
		{ "SetSecondFogHeightOffset", &UExponentialHeightFogComponent::execSetSecondFogHeightOffset },
		{ "SetStartDistance", &UExponentialHeightFogComponent::execSetStartDistance },
		{ "SetVolumetricFog", &UExponentialHeightFogComponent::execSetVolumetricFog },
		{ "SetVolumetricFogAlbedo", &UExponentialHeightFogComponent::execSetVolumetricFogAlbedo },
		{ "SetVolumetricFogDistance", &UExponentialHeightFogComponent::execSetVolumetricFogDistance },
		{ "SetVolumetricFogEmissive", &UExponentialHeightFogComponent::execSetVolumetricFogEmissive },
		{ "SetVolumetricFogExtinctionScale", &UExponentialHeightFogComponent::execSetVolumetricFogExtinctionScale },
		{ "SetVolumetricFogScatteringDistribution", &UExponentialHeightFogComponent::execSetVolumetricFogScatteringDistribution },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExponentialHeightFogComponent);
UClass* Z_Construct_UClass_UExponentialHeightFogComponent_NoRegister()
{
	return UExponentialHeightFogComponent::StaticClass();
}
struct Z_Construct_UClass_UExponentialHeightFogComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to create fogging effects such as clouds but with a density that is related to the height of the fog.\n */" },
		{ "HideCategories", "Object Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/ExponentialHeightFogComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Used to create fogging effects such as clouds but with a density that is related to the height of the fog." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Global density factor. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Global density factor." },
		{ "UIMax", ".05" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/**\n\x09 * Height density factor, controls how the density increases as height decreases.\n\x09 * Smaller values make the visible transition larger.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Height density factor, controls how the density increases as height decreases.\nSmaller values make the visible transition larger." },
		{ "UIMax", "2" },
		{ "UIMin", "0.001" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SecondFogData_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Settings for the second fog. Setting the density of this to 0 means it doesn't have any influence. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Settings for the second fog. Setting the density of this to 0 means it doesn't have any influence." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringLuminance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "DisplayName", "Fog Inscattering Color" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkyAtmosphereAmbientContributionColorScale_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Color used to modulate the SkyAtmosphere component contribution to the non directional component of the fog. Only effective when r.SupportSkyAtmosphereAffectsHeightFog>0 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Color used to modulate the SkyAtmosphere component contribution to the non directional component of the fog. Only effective when r.SupportSkyAtmosphereAffectsHeightFog>0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemap_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** \n\x09 * Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky.\n\x09 * When the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Cubemap that can be specified for fog color, which is useful to make distant, heavily fogged scene elements match the sky.\nWhen the cubemap is specified, FogInscatteringColor is ignored and Directional inscattering is disabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InscatteringColorCubemapAngle_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Angle to rotate the InscatteringColorCubemap around the Z axis. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Angle to rotate the InscatteringColorCubemap around the Z axis." },
		{ "UIMax", "360" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InscatteringTextureTint_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Tint color used when InscatteringColorCubemap is specified, for quick edits without having to reimport InscatteringColorCubemap." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FullyDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance at which InscatteringColorCubemap should be used directly for the Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NonDirectionalInscatteringColorDistance_MetaData[] = {
		{ "Category", "InscatteringTexture" },
		{ "Comment", "/** Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance at which only the average color of InscatteringColorCubemap should be used as Inscattering Color." },
		{ "UIMax", "1000000" },
		{ "UIMin", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "Comment", "/** \n\x09 * Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.  \n\x09 * Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the size of the directional inscattering cone, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
		{ "UIMax", "64" },
		{ "UIMin", "2" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "Comment", "/** \n\x09 * Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light. \n\x09 * Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the start distance from the viewer of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringLuminance_MetaData[] = {
		{ "Category", "DirectionalInscattering" },
		{ "Comment", "/** \n\x09 * Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light. \n\x09 * Note: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used.\n\x09 */" },
		{ "DisplayName", "Directional Inscattering Color" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the color of the directional inscattering, which is used to approximate inscattering from a directional light.\nNote: there must be a directional light with bUsedAsAtmosphereSunLight enabled for DirectionalInscattering to be used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** \n\x09 * Maximum opacity of the fog.  \n\x09 * A value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\n\x09 * A value of 0 means the fog color will not be factored in at all.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Maximum opacity of the fog.\nA value of 1 means the fog can become fully opaque at a distance and replace scene color completely,\nA value of 0 means the fog color will not be factored in at all." },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Distance from the camera that the fog will start, in world units. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance from the camera that the fog will start, in world units." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FogCutoffDistance_MetaData[] = {
		{ "Category", "ExponentialHeightFogComponent" },
		{ "Comment", "/** Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in. */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Scene elements past this distance will not have fog applied.  This is useful for excluding skyboxes which already have fog baked in." },
		{ "UIMax", "20000000" },
		{ "UIMin", "100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableVolumetricFog_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation. \n\x09 * Note that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance.\n\x09 * Volumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior.\n\x09 */" },
		{ "DisplayName", "Volumetric Fog" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Whether to enable Volumetric fog.  Scalability settings control the resolution of the fog simulation.\nNote that Volumetric fog currently does not support StartDistance, FogMaxOpacity and FogCutoffDistance.\nVolumetric fog also can't match exponential height fog in general as exponential height fog has non-physical behavior." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogScatteringDistribution_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Controls the scattering phase function - how much incoming light scatters in various directions.\n\x09 * A distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.  \n\x09 * In order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0.\n\x09 */" },
		{ "DisplayName", "Scattering Distribution" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Controls the scattering phase function - how much incoming light scatters in various directions.\nA distribution value of 0 scatters equally in all directions, while .9 scatters predominantly in the light direction.\nIn order to have visible volumetric fog light shafts from the side, the distribution will need to be closer to 0." },
		{ "UIMax", ".9" },
		{ "UIMin", "-.9" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogAlbedo_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * The height fog particle reflectiveness used by volumetric fog. \n\x09 * Water particles in air have an albedo near white, while dust has slightly darker value.\n\x09 */" },
		{ "DisplayName", "Albedo" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "The height fog particle reflectiveness used by volumetric fog.\nWater particles in air have an albedo near white, while dust has slightly darker value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogEmissive_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\n\x09 * In most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting, \n\x09 * So stationary skylights are unshadowed and static skylights don't affect volumetric fog at all.\n\x09 */" },
		{ "DisplayName", "Emissive" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Light emitted by height fog.  This is a density so more light is emitted the further you are looking through the fog.\nIn most cases skylight is a better choice, however right now volumetric fog does not support precomputed lighting,\nSo stationary skylights are unshadowed and static skylights don't affect volumetric fog at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogExtinctionScale_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light. */" },
		{ "DisplayName", "Extinction Scale" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Scales the height fog particle extinction amount used by volumetric fog.  Values larger than 1 cause fog particles everywhere absorb more light." },
		{ "UIMax", "10" },
		{ "UIMin", ".1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogDistance_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Distance over which volumetric fog should be computed, after the start distance.  Larger values extend the effect into the distance but expose under-sampling artifacts in details.\n\x09 */" },
		{ "DisplayName", "View Distance" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance over which volumetric fog should be computed, after the start distance.  Larger values extend the effect into the distance but expose under-sampling artifacts in details." },
		{ "UIMax", "10000" },
		{ "UIMin", "1000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogStartDistance_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Distance from the camera that the volumetric fog will start, in world units. \n\x09 */" },
		{ "DisplayName", "Start Distance" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance from the camera that the volumetric fog will start, in world units." },
		{ "UIMax", "5000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogNearFadeInDistance_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Distance over which volumetric fog will fade in from the start distance.\n\x09 */" },
		{ "DisplayName", "Near Fade In Distance" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Distance over which volumetric fog will fade in from the start distance." },
		{ "UIMax", "1000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "DisplayName", "Static Lighting Scattering Intensity" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "UIMax", "10" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData[] = {
		{ "Category", "VolumetricFog" },
		{ "Comment", "/** \n\x09 * Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color. \n\x09 * Make sure your directional light has 'Atmosphere Sun Light' enabled!\n\x09 * Enabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "Whether to use FogInscatteringColor for the Sky Light volumetric scattering color and DirectionalInscatteringColor for the Directional Light scattering color.\nMake sure your directional light has 'Atmosphere Sun Light' enabled!\nEnabling this allows Volumetric fog to better match Height fog in the distance, but produces non-physical volumetric lighting that may not match surface lighting." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoldout_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\". */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "If this is True, this primitive will render black with an alpha of 0, but all secondary effects (shadows, reflections, indirect lighting) remain. This feature required the project setting \"Enable alpha channel support in post processing\"." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInMainPass_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, this component will be rendered in the main pass (basepass, transparency) */" },
		{ "ModuleRelativePath", "Classes/Components/ExponentialHeightFogComponent.h" },
		{ "ToolTip", "If true, this component will be rendered in the main pass (basepass, transparency)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SecondFogData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FogInscatteringLuminance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkyAtmosphereAmbientContributionColorScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InscatteringColorCubemap;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InscatteringColorCubemapAngle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InscatteringTextureTint;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FullyDirectionalInscatteringColorDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NonDirectionalInscatteringColorDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringLuminance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FogCutoffDistance;
	static void NewProp_bEnableVolumetricFog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableVolumetricFog;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogScatteringDistribution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFogAlbedo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VolumetricFogEmissive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogExtinctionScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogStartDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogNearFadeInDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricFogStaticLightingScatteringIntensity;
	static void NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLightColorsWithFogInscatteringColors;
	static void NewProp_bHoldout_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldout;
	static void NewProp_bRenderInMainPass_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInMainPass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringColor, "SetDirectionalInscatteringColor" }, // 4291644186
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringExponent, "SetDirectionalInscatteringExponent" }, // 3841826170
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetDirectionalInscatteringStartDistance, "SetDirectionalInscatteringStartDistance" }, // 2447358333
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogCutoffDistance, "SetFogCutoffDistance" }, // 2437185850
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogDensity, "SetFogDensity" }, // 899761775
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogHeightFalloff, "SetFogHeightFalloff" }, // 2596701505
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogInscatteringColor, "SetFogInscatteringColor" }, // 186662175
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFogMaxOpacity, "SetFogMaxOpacity" }, // 529638511
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetFullyDirectionalInscatteringColorDistance, "SetFullyDirectionalInscatteringColorDistance" }, // 2927893280
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetHoldout, "SetHoldout" }, // 1543236509
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemap, "SetInscatteringColorCubemap" }, // 1346612220
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringColorCubemapAngle, "SetInscatteringColorCubemapAngle" }, // 1762943808
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetInscatteringTextureTint, "SetInscatteringTextureTint" }, // 1663924132
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetNonDirectionalInscatteringColorDistance, "SetNonDirectionalInscatteringColorDistance" }, // 2042851112
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetRenderInMainPass, "SetRenderInMainPass" }, // 3688359531
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogData, "SetSecondFogData" }, // 3802987150
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogDensity, "SetSecondFogDensity" }, // 365136497
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightFalloff, "SetSecondFogHeightFalloff" }, // 3151841803
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetSecondFogHeightOffset, "SetSecondFogHeightOffset" }, // 3443757686
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetStartDistance, "SetStartDistance" }, // 2409977364
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFog, "SetVolumetricFog" }, // 953587834
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogAlbedo, "SetVolumetricFogAlbedo" }, // 2759741677
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogDistance, "SetVolumetricFogDistance" }, // 1296070050
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogEmissive, "SetVolumetricFogEmissive" }, // 2815192751
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogExtinctionScale, "SetVolumetricFogExtinctionScale" }, // 1710798647
		{ &Z_Construct_UFunction_UExponentialHeightFogComponent_SetVolumetricFogScatteringDistribution, "SetVolumetricFogScatteringDistribution" }, // 1836064877
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExponentialHeightFogComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogDensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogDensity_MetaData), NewProp_FogDensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogHeightFalloff), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogHeightFalloff_MetaData), NewProp_FogHeightFalloff_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData = { "SecondFogData", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, SecondFogData), Z_Construct_UScriptStruct_FExponentialHeightFogData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SecondFogData_MetaData), NewProp_SecondFogData_MetaData) }; // 1298901701
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogInscatteringColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogInscatteringColor_MetaData), NewProp_FogInscatteringColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringLuminance = { "FogInscatteringLuminance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogInscatteringLuminance), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogInscatteringLuminance_MetaData), NewProp_FogInscatteringLuminance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SkyAtmosphereAmbientContributionColorScale = { "SkyAtmosphereAmbientContributionColorScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, SkyAtmosphereAmbientContributionColorScale), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkyAtmosphereAmbientContributionColorScale_MetaData), NewProp_SkyAtmosphereAmbientContributionColorScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap = { "InscatteringColorCubemap", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemap), Z_Construct_UClass_UTextureCube_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InscatteringColorCubemap_MetaData), NewProp_InscatteringColorCubemap_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle = { "InscatteringColorCubemapAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringColorCubemapAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InscatteringColorCubemapAngle_MetaData), NewProp_InscatteringColorCubemapAngle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint = { "InscatteringTextureTint", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, InscatteringTextureTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InscatteringTextureTint_MetaData), NewProp_InscatteringTextureTint_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance = { "FullyDirectionalInscatteringColorDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FullyDirectionalInscatteringColorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FullyDirectionalInscatteringColorDistance_MetaData), NewProp_FullyDirectionalInscatteringColorDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance = { "NonDirectionalInscatteringColorDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, NonDirectionalInscatteringColorDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NonDirectionalInscatteringColorDistance_MetaData), NewProp_NonDirectionalInscatteringColorDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringExponent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalInscatteringExponent_MetaData), NewProp_DirectionalInscatteringExponent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalInscatteringStartDistance_MetaData), NewProp_DirectionalInscatteringStartDistance_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringColor_DEPRECATED), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalInscatteringColor_MetaData), NewProp_DirectionalInscatteringColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringLuminance = { "DirectionalInscatteringLuminance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, DirectionalInscatteringLuminance), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionalInscatteringLuminance_MetaData), NewProp_DirectionalInscatteringLuminance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity = { "FogMaxOpacity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogMaxOpacity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogMaxOpacity_MetaData), NewProp_FogMaxOpacity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, StartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartDistance_MetaData), NewProp_StartDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance = { "FogCutoffDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, FogCutoffDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FogCutoffDistance_MetaData), NewProp_FogCutoffDistance_MetaData) };
void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_SetBit(void* Obj)
{
	((UExponentialHeightFogComponent*)Obj)->bEnableVolumetricFog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog = { "bEnableVolumetricFog", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableVolumetricFog_MetaData), NewProp_bEnableVolumetricFog_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution = { "VolumetricFogScatteringDistribution", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogScatteringDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogScatteringDistribution_MetaData), NewProp_VolumetricFogScatteringDistribution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo = { "VolumetricFogAlbedo", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogAlbedo), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogAlbedo_MetaData), NewProp_VolumetricFogAlbedo_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive = { "VolumetricFogEmissive", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogEmissive), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogEmissive_MetaData), NewProp_VolumetricFogEmissive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale = { "VolumetricFogExtinctionScale", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogExtinctionScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogExtinctionScale_MetaData), NewProp_VolumetricFogExtinctionScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance = { "VolumetricFogDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogDistance_MetaData), NewProp_VolumetricFogDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStartDistance = { "VolumetricFogStartDistance", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogStartDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogStartDistance_MetaData), NewProp_VolumetricFogStartDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogNearFadeInDistance = { "VolumetricFogNearFadeInDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogNearFadeInDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogNearFadeInDistance_MetaData), NewProp_VolumetricFogNearFadeInDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity = { "VolumetricFogStaticLightingScatteringIntensity", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UExponentialHeightFogComponent, VolumetricFogStaticLightingScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData), NewProp_VolumetricFogStaticLightingScatteringIntensity_MetaData) };
void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit(void* Obj)
{
	((UExponentialHeightFogComponent*)Obj)->bOverrideLightColorsWithFogInscatteringColors = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors = { "bOverrideLightColorsWithFogInscatteringColors", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData), NewProp_bOverrideLightColorsWithFogInscatteringColors_MetaData) };
void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bHoldout_SetBit(void* Obj)
{
	((UExponentialHeightFogComponent*)Obj)->bHoldout = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bHoldout = { "bHoldout", nullptr, (EPropertyFlags)0x0010040200000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bHoldout_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoldout_MetaData), NewProp_bHoldout_MetaData) };
void Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bRenderInMainPass_SetBit(void* Obj)
{
	((UExponentialHeightFogComponent*)Obj)->bRenderInMainPass = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bRenderInMainPass = { "bRenderInMainPass", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UExponentialHeightFogComponent), &Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bRenderInMainPass_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInMainPass_MetaData), NewProp_bRenderInMainPass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogDensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogHeightFalloff,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SecondFogData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogInscatteringLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_SkyAtmosphereAmbientContributionColorScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringColorCubemapAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_InscatteringTextureTint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FullyDirectionalInscatteringColorDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_NonDirectionalInscatteringColorDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringExponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_DirectionalInscatteringLuminance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogMaxOpacity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_StartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_FogCutoffDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bEnableVolumetricFog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogScatteringDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogAlbedo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogEmissive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogExtinctionScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStartDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogNearFadeInDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_VolumetricFogStaticLightingScatteringIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bOverrideLightColorsWithFogInscatteringColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bHoldout,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExponentialHeightFogComponent_Statics::NewProp_bRenderInMainPass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UExponentialHeightFogComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExponentialHeightFogComponent_Statics::ClassParams = {
	&UExponentialHeightFogComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::PropPointers),
	0,
	0x00A830A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UExponentialHeightFogComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExponentialHeightFogComponent()
{
	if (!Z_Registration_Info_UClass_UExponentialHeightFogComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExponentialHeightFogComponent.OuterSingleton, Z_Construct_UClass_UExponentialHeightFogComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExponentialHeightFogComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UExponentialHeightFogComponent>()
{
	return UExponentialHeightFogComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExponentialHeightFogComponent);
UExponentialHeightFogComponent::~UExponentialHeightFogComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UExponentialHeightFogComponent)
// End Class UExponentialHeightFogComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FExponentialHeightFogData::StaticStruct, Z_Construct_UScriptStruct_FExponentialHeightFogData_Statics::NewStructOps, TEXT("ExponentialHeightFogData"), &Z_Registration_Info_UScriptStruct_ExponentialHeightFogData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FExponentialHeightFogData), 1298901701U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExponentialHeightFogComponent, UExponentialHeightFogComponent::StaticClass, TEXT("UExponentialHeightFogComponent"), &Z_Registration_Info_UClass_UExponentialHeightFogComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExponentialHeightFogComponent), 1072950354U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_2711749916(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_ExponentialHeightFogComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
