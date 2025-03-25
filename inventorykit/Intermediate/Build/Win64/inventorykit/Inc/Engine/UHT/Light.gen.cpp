// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/Light.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLight() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_ALight();
ENGINE_API UClass* Z_Construct_UClass_ALight_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ALight Function GetBrightness
struct Z_Construct_UFunction_ALight_GetBrightness_Statics
{
	struct Light_eventGetBrightness_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALight_GetBrightness_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventGetBrightness_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_GetBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_GetBrightness_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_GetBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_GetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "GetBrightness", nullptr, nullptr, Z_Construct_UFunction_ALight_GetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_GetBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_GetBrightness_Statics::Light_eventGetBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_GetBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_GetBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_GetBrightness_Statics::Light_eventGetBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_GetBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_GetBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execGetBrightness)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBrightness();
	P_NATIVE_END;
}
// End Class ALight Function GetBrightness

// Begin Class ALight Function GetLightColor
struct Z_Construct_UFunction_ALight_GetLightColor_Statics
{
	struct Light_eventGetLightColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALight_GetLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_GetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_GetLightColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_GetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_GetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "GetLightColor", nullptr, nullptr, Z_Construct_UFunction_ALight_GetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_GetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_GetLightColor_Statics::Light_eventGetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_GetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_GetLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_GetLightColor_Statics::Light_eventGetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_GetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_GetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execGetLightColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetLightColor();
	P_NATIVE_END;
}
// End Class ALight Function GetLightColor

// Begin Class ALight Function IsEnabled
struct Z_Construct_UFunction_ALight_IsEnabled_Statics
{
	struct Light_eventIsEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALight_IsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((Light_eventIsEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALight_IsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Light_eventIsEnabled_Parms), &Z_Construct_UFunction_ALight_IsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_IsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_IsEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_IsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_IsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "IsEnabled", nullptr, nullptr, Z_Construct_UFunction_ALight_IsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_IsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_IsEnabled_Statics::Light_eventIsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_IsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_IsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_IsEnabled_Statics::Light_eventIsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_IsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_IsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execIsEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEnabled();
	P_NATIVE_END;
}
// End Class ALight Function IsEnabled

// Begin Class ALight Function OnRep_bEnabled
struct Z_Construct_UFunction_ALight_OnRep_bEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Replication Notification Callbacks */" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
		{ "ToolTip", "Replication Notification Callbacks" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_OnRep_bEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "OnRep_bEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_OnRep_bEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_OnRep_bEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALight_OnRep_bEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_OnRep_bEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execOnRep_bEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_bEnabled();
	P_NATIVE_END;
}
// End Class ALight Function OnRep_bEnabled

// Begin Class ALight Function SetAffectTranslucentLighting
struct Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics
{
	struct Light_eventSetAffectTranslucentLighting_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((Light_eventSetAffectTranslucentLighting_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Light_eventSetAffectTranslucentLighting_Parms), &Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetAffectTranslucentLighting", nullptr, nullptr, Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::Light_eventSetAffectTranslucentLighting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::Light_eventSetAffectTranslucentLighting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetAffectTranslucentLighting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetAffectTranslucentLighting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetAffectTranslucentLighting)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAffectTranslucentLighting(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ALight Function SetAffectTranslucentLighting

// Begin Class ALight Function SetBrightness
struct Z_Construct_UFunction_ALight_SetBrightness_Statics
{
	struct Light_eventSetBrightness_Parms
	{
		float NewBrightness;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewBrightness;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALight_SetBrightness_Statics::NewProp_NewBrightness = { "NewBrightness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventSetBrightness_Parms, NewBrightness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetBrightness_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetBrightness_Statics::NewProp_NewBrightness,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetBrightness_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetBrightness_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetBrightness", nullptr, nullptr, Z_Construct_UFunction_ALight_SetBrightness_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetBrightness_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetBrightness_Statics::Light_eventSetBrightness_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetBrightness_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetBrightness_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetBrightness_Statics::Light_eventSetBrightness_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetBrightness()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetBrightness_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetBrightness)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewBrightness);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBrightness(Z_Param_NewBrightness);
	P_NATIVE_END;
}
// End Class ALight Function SetBrightness

// Begin Class ALight Function SetCastShadows
struct Z_Construct_UFunction_ALight_SetCastShadows_Statics
{
	struct Light_eventSetCastShadows_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALight_SetCastShadows_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((Light_eventSetCastShadows_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALight_SetCastShadows_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Light_eventSetCastShadows_Parms), &Z_Construct_UFunction_ALight_SetCastShadows_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetCastShadows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetCastShadows_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetCastShadows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetCastShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetCastShadows", nullptr, nullptr, Z_Construct_UFunction_ALight_SetCastShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetCastShadows_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetCastShadows_Statics::Light_eventSetCastShadows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetCastShadows_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetCastShadows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetCastShadows_Statics::Light_eventSetCastShadows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetCastShadows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetCastShadows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetCastShadows)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastShadows(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ALight Function SetCastShadows

// Begin Class ALight Function SetEnabled
struct Z_Construct_UFunction_ALight_SetEnabled_Statics
{
	struct Light_eventSetEnabled_Parms
	{
		bool bSetEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "Comment", "// BEGIN DEPRECATED (use component functions now in level script)\n" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
		{ "ToolTip", "BEGIN DEPRECATED (use component functions now in level script)" },
	};
#endif // WITH_METADATA
	static void NewProp_bSetEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ALight_SetEnabled_Statics::NewProp_bSetEnabled_SetBit(void* Obj)
{
	((Light_eventSetEnabled_Parms*)Obj)->bSetEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALight_SetEnabled_Statics::NewProp_bSetEnabled = { "bSetEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Light_eventSetEnabled_Parms), &Z_Construct_UFunction_ALight_SetEnabled_Statics::NewProp_bSetEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetEnabled_Statics::NewProp_bSetEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetEnabled", nullptr, nullptr, Z_Construct_UFunction_ALight_SetEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetEnabled_Statics::Light_eventSetEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetEnabled_Statics::Light_eventSetEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetEnabled)
{
	P_GET_UBOOL(Z_Param_bSetEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnabled(Z_Param_bSetEnabled);
	P_NATIVE_END;
}
// End Class ALight Function SetEnabled

// Begin Class ALight Function SetLightColor
struct Z_Construct_UFunction_ALight_SetLightColor_Statics
{
	struct Light_eventSetLightColor_Parms
	{
		FLinearColor NewLightColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALight_SetLightColor_Statics::NewProp_NewLightColor = { "NewLightColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventSetLightColor_Parms, NewLightColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetLightColor_Statics::NewProp_NewLightColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetLightColor", nullptr, nullptr, Z_Construct_UFunction_ALight_SetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetLightColor_Statics::Light_eventSetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetLightColor_Statics::Light_eventSetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetLightColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewLightColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightColor(Z_Param_NewLightColor);
	P_NATIVE_END;
}
// End Class ALight Function SetLightColor

// Begin Class ALight Function SetLightFunctionFadeDistance
struct Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics
{
	struct Light_eventSetLightFunctionFadeDistance_Parms
	{
		float NewLightFunctionFadeDistance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLightFunctionFadeDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance = { "NewLightFunctionFadeDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventSetLightFunctionFadeDistance_Parms, NewLightFunctionFadeDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::NewProp_NewLightFunctionFadeDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetLightFunctionFadeDistance", nullptr, nullptr, Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::Light_eventSetLightFunctionFadeDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::Light_eventSetLightFunctionFadeDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetLightFunctionFadeDistance)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLightFunctionFadeDistance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionFadeDistance(Z_Param_NewLightFunctionFadeDistance);
	P_NATIVE_END;
}
// End Class ALight Function SetLightFunctionFadeDistance

// Begin Class ALight Function SetLightFunctionMaterial
struct Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics
{
	struct Light_eventSetLightFunctionMaterial_Parms
	{
		UMaterialInterface* NewLightFunctionMaterial;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLightFunctionMaterial;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial = { "NewLightFunctionMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventSetLightFunctionMaterial_Parms, NewLightFunctionMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::NewProp_NewLightFunctionMaterial,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetLightFunctionMaterial", nullptr, nullptr, Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::Light_eventSetLightFunctionMaterial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::Light_eventSetLightFunctionMaterial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetLightFunctionMaterial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetLightFunctionMaterial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetLightFunctionMaterial)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_NewLightFunctionMaterial);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionMaterial(Z_Param_NewLightFunctionMaterial);
	P_NATIVE_END;
}
// End Class ALight Function SetLightFunctionMaterial

// Begin Class ALight Function SetLightFunctionScale
struct Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics
{
	struct Light_eventSetLightFunctionScale_Parms
	{
		FVector NewLightFunctionScale;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLightFunctionScale;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale = { "NewLightFunctionScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Light_eventSetLightFunctionScale_Parms, NewLightFunctionScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::NewProp_NewLightFunctionScale,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "SetLightFunctionScale", nullptr, nullptr, Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::Light_eventSetLightFunctionScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::Light_eventSetLightFunctionScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ALight_SetLightFunctionScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_SetLightFunctionScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execSetLightFunctionScale)
{
	P_GET_STRUCT(FVector,Z_Param_NewLightFunctionScale);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightFunctionScale(Z_Param_NewLightFunctionScale);
	P_NATIVE_END;
}
// End Class ALight Function SetLightFunctionScale

// Begin Class ALight Function ToggleEnabled
struct Z_Construct_UFunction_ALight_ToggleEnabled_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Lighting" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ALight_ToggleEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALight, nullptr, "ToggleEnabled", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ALight_ToggleEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_ALight_ToggleEnabled_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ALight_ToggleEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ALight_ToggleEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ALight::execToggleEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleEnabled();
	P_NATIVE_END;
}
// End Class ALight Function ToggleEnabled

// Begin Class ALight
void ALight::StaticRegisterNativesALight()
{
	UClass* Class = ALight::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBrightness", &ALight::execGetBrightness },
		{ "GetLightColor", &ALight::execGetLightColor },
		{ "IsEnabled", &ALight::execIsEnabled },
		{ "OnRep_bEnabled", &ALight::execOnRep_bEnabled },
		{ "SetAffectTranslucentLighting", &ALight::execSetAffectTranslucentLighting },
		{ "SetBrightness", &ALight::execSetBrightness },
		{ "SetCastShadows", &ALight::execSetCastShadows },
		{ "SetEnabled", &ALight::execSetEnabled },
		{ "SetLightColor", &ALight::execSetLightColor },
		{ "SetLightFunctionFadeDistance", &ALight::execSetLightFunctionFadeDistance },
		{ "SetLightFunctionMaterial", &ALight::execSetLightFunctionMaterial },
		{ "SetLightFunctionScale", &ALight::execSetLightFunctionScale },
		{ "ToggleEnabled", &ALight::execToggleEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALight);
UClass* Z_Construct_UClass_ALight_NoRegister()
{
	return ALight::StaticClass();
}
struct Z_Construct_UClass_ALight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "Lights" },
		{ "HideCategories", "Input Collision Replication" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/Light.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Light" },
		{ "Comment", "/** @todo document */" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Light,Rendering,Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "Comment", "/** replicated copy of LightComponent's bEnabled property */" },
		{ "ModuleRelativePath", "Classes/Engine/Light.h" },
		{ "ToolTip", "replicated copy of LightComponent's bEnabled property" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LightComponent;
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ALight_GetBrightness, "GetBrightness" }, // 2743375737
		{ &Z_Construct_UFunction_ALight_GetLightColor, "GetLightColor" }, // 1873904279
		{ &Z_Construct_UFunction_ALight_IsEnabled, "IsEnabled" }, // 3302354122
		{ &Z_Construct_UFunction_ALight_OnRep_bEnabled, "OnRep_bEnabled" }, // 1256519212
		{ &Z_Construct_UFunction_ALight_SetAffectTranslucentLighting, "SetAffectTranslucentLighting" }, // 218259550
		{ &Z_Construct_UFunction_ALight_SetBrightness, "SetBrightness" }, // 251344827
		{ &Z_Construct_UFunction_ALight_SetCastShadows, "SetCastShadows" }, // 94771190
		{ &Z_Construct_UFunction_ALight_SetEnabled, "SetEnabled" }, // 4131750731
		{ &Z_Construct_UFunction_ALight_SetLightColor, "SetLightColor" }, // 1588186649
		{ &Z_Construct_UFunction_ALight_SetLightFunctionFadeDistance, "SetLightFunctionFadeDistance" }, // 330691681
		{ &Z_Construct_UFunction_ALight_SetLightFunctionMaterial, "SetLightFunctionMaterial" }, // 1430862979
		{ &Z_Construct_UFunction_ALight_SetLightFunctionScale, "SetLightFunctionScale" }, // 38282024
		{ &Z_Construct_UFunction_ALight_ToggleEnabled, "ToggleEnabled" }, // 1281046203
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALight_Statics::NewProp_LightComponent = { "LightComponent", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALight, LightComponent), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightComponent_MetaData), NewProp_LightComponent_MetaData) };
void Z_Construct_UClass_ALight_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((ALight*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALight_Statics::NewProp_bEnabled = { "bEnabled", "OnRep_bEnabled", (EPropertyFlags)0x0010000100000020, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ALight), &Z_Construct_UClass_ALight_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_Statics::NewProp_LightComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALight_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ALight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALight_Statics::ClassParams = {
	&ALight::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ALight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Statics::PropPointers),
	0,
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALight_Statics::Class_MetaDataParams), Z_Construct_UClass_ALight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALight()
{
	if (!Z_Registration_Info_UClass_ALight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALight.OuterSingleton, Z_Construct_UClass_ALight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALight.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ALight>()
{
	return ALight::StaticClass();
}
void ALight::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_bEnabled(TEXT("bEnabled"));
	const bool bIsValid = true
		&& Name_bEnabled == ClassReps[(int32)ENetFields_Private::bEnabled].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALight"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALight);
ALight::~ALight() {}
// End Class ALight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALight, ALight::StaticClass, TEXT("ALight"), &Z_Registration_Info_UClass_ALight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALight), 1452697066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_1875124822(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_Light_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
