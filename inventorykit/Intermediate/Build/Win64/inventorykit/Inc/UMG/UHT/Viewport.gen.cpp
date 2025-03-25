// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/UMG/Public/Components/Viewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewport() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
UMG_API UClass* Z_Construct_UClass_UContentWidget();
UMG_API UClass* Z_Construct_UClass_UViewport();
UMG_API UClass* Z_Construct_UClass_UViewport_NoRegister();
UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References

// Begin Class UViewport Function GetViewLocation
struct Z_Construct_UFunction_UViewport_GetViewLocation_Statics
{
	struct Viewport_eventGetViewLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_GetViewLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventGetViewLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewLocation", nullptr, nullptr, Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Viewport_eventGetViewLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Viewport_eventGetViewLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_GetViewLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_GetViewLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execGetViewLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetViewLocation();
	P_NATIVE_END;
}
// End Class UViewport Function GetViewLocation

// Begin Class UViewport Function GetViewportWorld
struct Z_Construct_UFunction_UViewport_GetViewportWorld_Statics
{
	struct Viewport_eventGetViewportWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventGetViewportWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewportWorld", nullptr, nullptr, Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Viewport_eventGetViewportWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Viewport_eventGetViewportWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_GetViewportWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execGetViewportWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->GetViewportWorld();
	P_NATIVE_END;
}
// End Class UViewport Function GetViewportWorld

// Begin Class UViewport Function GetViewRotation
struct Z_Construct_UFunction_UViewport_GetViewRotation_Statics
{
	struct Viewport_eventGetViewRotation_Parms
	{
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewRotation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Viewport_eventGetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Viewport_eventGetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_GetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_GetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execGetViewRotation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation();
	P_NATIVE_END;
}
// End Class UViewport Function GetViewRotation

// Begin Class UViewport Function SetEnableAdvancedFeatures
struct Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics
{
	struct Viewport_eventSetEnableAdvancedFeatures_Parms
	{
		bool InEnableAdvancedFeatures;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static void NewProp_InEnableAdvancedFeatures_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InEnableAdvancedFeatures;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::NewProp_InEnableAdvancedFeatures_SetBit(void* Obj)
{
	((Viewport_eventSetEnableAdvancedFeatures_Parms*)Obj)->InEnableAdvancedFeatures = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::NewProp_InEnableAdvancedFeatures = { "InEnableAdvancedFeatures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Viewport_eventSetEnableAdvancedFeatures_Parms), &Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::NewProp_InEnableAdvancedFeatures_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::NewProp_InEnableAdvancedFeatures,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetEnableAdvancedFeatures", nullptr, nullptr, Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::Viewport_eventSetEnableAdvancedFeatures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::Viewport_eventSetEnableAdvancedFeatures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSetEnableAdvancedFeatures)
{
	P_GET_UBOOL(Z_Param_InEnableAdvancedFeatures);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetEnableAdvancedFeatures(Z_Param_InEnableAdvancedFeatures);
	P_NATIVE_END;
}
// End Class UViewport Function SetEnableAdvancedFeatures

// Begin Class UViewport Function SetLightIntensity
struct Z_Construct_UFunction_UViewport_SetLightIntensity_Statics
{
	struct Viewport_eventSetLightIntensity_Parms
	{
		float LightIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSetLightIntensity_Parms, LightIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::NewProp_LightIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetLightIntensity", nullptr, nullptr, Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::Viewport_eventSetLightIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::Viewport_eventSetLightIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_SetLightIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetLightIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSetLightIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LightIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLightIntensity(Z_Param_LightIntensity);
	P_NATIVE_END;
}
// End Class UViewport Function SetLightIntensity

// Begin Class UViewport Function SetShowFlag
struct Z_Construct_UFunction_UViewport_SetShowFlag_Statics
{
	struct Viewport_eventSetShowFlag_Parms
	{
		FString InShowFlagName;
		bool InValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InShowFlagName;
	static void NewProp_InValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UViewport_SetShowFlag_Statics::NewProp_InShowFlagName = { "InShowFlagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSetShowFlag_Parms, InShowFlagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UViewport_SetShowFlag_Statics::NewProp_InValue_SetBit(void* Obj)
{
	((Viewport_eventSetShowFlag_Parms*)Obj)->InValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UViewport_SetShowFlag_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Viewport_eventSetShowFlag_Parms), &Z_Construct_UFunction_UViewport_SetShowFlag_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetShowFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetShowFlag_Statics::NewProp_InShowFlagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetShowFlag_Statics::NewProp_InValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetShowFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetShowFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetShowFlag", nullptr, nullptr, Z_Construct_UFunction_UViewport_SetShowFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetShowFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_SetShowFlag_Statics::Viewport_eventSetShowFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetShowFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_SetShowFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_SetShowFlag_Statics::Viewport_eventSetShowFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_SetShowFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetShowFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSetShowFlag)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InShowFlagName);
	P_GET_UBOOL(Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetShowFlag(Z_Param_InShowFlagName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class UViewport Function SetShowFlag

// Begin Class UViewport Function SetSkyIntensity
struct Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics
{
	struct Viewport_eventSetSkyIntensity_Parms
	{
		float LightIntensity;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LightIntensity;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::NewProp_LightIntensity = { "LightIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSetSkyIntensity_Parms, LightIntensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::NewProp_LightIntensity,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetSkyIntensity", nullptr, nullptr, Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::Viewport_eventSetSkyIntensity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::Viewport_eventSetSkyIntensity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_SetSkyIntensity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetSkyIntensity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSetSkyIntensity)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_LightIntensity);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSkyIntensity(Z_Param_LightIntensity);
	P_NATIVE_END;
}
// End Class UViewport Function SetSkyIntensity

// Begin Class UViewport Function SetViewLocation
struct Z_Construct_UFunction_UViewport_SetViewLocation_Statics
{
	struct Viewport_eventSetViewLocation_Parms
	{
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_SetViewLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSetViewLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetViewLocation_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetViewLocation", nullptr, nullptr, Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Viewport_eventSetViewLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Viewport_eventSetViewLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_SetViewLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetViewLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSetViewLocation)
{
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewLocation(Z_Param_Location);
	P_NATIVE_END;
}
// End Class UViewport Function SetViewLocation

// Begin Class UViewport Function SetViewRotation
struct Z_Construct_UFunction_UViewport_SetViewRotation_Statics
{
	struct Viewport_eventSetViewRotation_Parms
	{
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_SetViewRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSetViewRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetViewRotation_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetViewRotation", nullptr, nullptr, Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Viewport_eventSetViewRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Viewport_eventSetViewRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_SetViewRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetViewRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSetViewRotation)
{
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewRotation(Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class UViewport Function SetViewRotation

// Begin Class UViewport Function Spawn
struct Z_Construct_UFunction_UViewport_Spawn_Statics
{
	struct Viewport_eventSpawn_Parms
	{
		TSubclassOf<AActor> ActorClass;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSpawn_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Viewport_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "Spawn", nullptr, nullptr, Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_UViewport_Spawn_Statics::Viewport_eventSpawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UViewport_Spawn_Statics::Viewport_eventSpawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UViewport_Spawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_Spawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UViewport::execSpawn)
{
	P_GET_OBJECT(UClass,Z_Param_ActorClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->Spawn(Z_Param_ActorClass);
	P_NATIVE_END;
}
// End Class UViewport Function Spawn

// Begin Class UViewport
void UViewport::GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue)
{
	const UViewport* Obj = (const UViewport*)Object;
	FLinearColor& Result = *(FLinearColor*)OutValue;
	Result = (FLinearColor)Obj->GetBackgroundColor();
}
void UViewport::SetBackgroundColor_WrapperImpl(void* Object, const void* InValue)
{
	UViewport* Obj = (UViewport*)Object;
	FLinearColor& Value = *(FLinearColor*)InValue;
	Obj->SetBackgroundColor(Value);
}
void UViewport::StaticRegisterNativesUViewport()
{
	UClass* Class = UViewport::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetViewLocation", &UViewport::execGetViewLocation },
		{ "GetViewportWorld", &UViewport::execGetViewportWorld },
		{ "GetViewRotation", &UViewport::execGetViewRotation },
		{ "SetEnableAdvancedFeatures", &UViewport::execSetEnableAdvancedFeatures },
		{ "SetLightIntensity", &UViewport::execSetLightIntensity },
		{ "SetShowFlag", &UViewport::execSetShowFlag },
		{ "SetSkyIntensity", &UViewport::execSetSkyIntensity },
		{ "SetViewLocation", &UViewport::execSetViewLocation },
		{ "SetViewRotation", &UViewport::execSetViewRotation },
		{ "Spawn", &UViewport::execSpawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewport);
UClass* Z_Construct_UClass_UViewport_NoRegister()
{
	return UViewport::StaticClass();
}
struct Z_Construct_UClass_UViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Components/Viewport.h" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewport_GetViewLocation, "GetViewLocation" }, // 2536327299
		{ &Z_Construct_UFunction_UViewport_GetViewportWorld, "GetViewportWorld" }, // 612559691
		{ &Z_Construct_UFunction_UViewport_GetViewRotation, "GetViewRotation" }, // 1869204945
		{ &Z_Construct_UFunction_UViewport_SetEnableAdvancedFeatures, "SetEnableAdvancedFeatures" }, // 1033185481
		{ &Z_Construct_UFunction_UViewport_SetLightIntensity, "SetLightIntensity" }, // 955546928
		{ &Z_Construct_UFunction_UViewport_SetShowFlag, "SetShowFlag" }, // 2560454645
		{ &Z_Construct_UFunction_UViewport_SetSkyIntensity, "SetSkyIntensity" }, // 4035236818
		{ &Z_Construct_UFunction_UViewport_SetViewLocation, "SetViewLocation" }, // 1911083404
		{ &Z_Construct_UFunction_UViewport_SetViewRotation, "SetViewRotation" }, // 3201934465
		{ &Z_Construct_UFunction_UViewport_Spawn, "Spawn" }, // 3879930509
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewport>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, &UViewport::SetBackgroundColor_WrapperImpl, &UViewport::GetBackgroundColor_WrapperImpl, 1, STRUCT_OFFSET(UViewport, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UViewport_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UContentWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_UMG,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewport_Statics::ClassParams = {
	&UViewport::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UViewport_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::PropPointers),
	0,
	0x00A800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams), Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UViewport()
{
	if (!Z_Registration_Info_UClass_UViewport.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewport.OuterSingleton, Z_Construct_UClass_UViewport_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UViewport.OuterSingleton;
}
template<> UMG_API UClass* StaticClass<UViewport>()
{
	return UViewport::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UViewport);
UViewport::~UViewport() {}
// End Class UViewport

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UViewport, UViewport::StaticClass, TEXT("UViewport"), &Z_Registration_Info_UClass_UViewport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewport), 1225192568U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_3236581629(TEXT("/Script/UMG"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
