// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightComponentBase() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase();
ENGINE_API UClass* Z_Construct_UClass_ULightComponentBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECastRayTracedShadow();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class ULightComponentBase Function GetLightColor
struct Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics
{
	struct LightComponentBase_eventGetLightColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Gets the light color as a linear color */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Gets the light color as a linear color" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponentBase_eventGetLightColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "GetLightColor", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::LightComponentBase_eventGetLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::LightComponentBase_eventGetLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_GetLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_GetLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execGetLightColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetLightColor();
	P_NATIVE_END;
}
// End Class ULightComponentBase Function GetLightColor

// Begin Class ULightComponentBase Function SetAffectGlobalIllumination
struct Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics
{
	struct LightComponentBase_eventSetAffectGlobalIllumination_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponentBase_eventSetAffectGlobalIllumination_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponentBase_eventSetAffectGlobalIllumination_Parms), &Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetAffectGlobalIllumination", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::LightComponentBase_eventSetAffectGlobalIllumination_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::LightComponentBase_eventSetAffectGlobalIllumination_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetAffectGlobalIllumination)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAffectGlobalIllumination(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetAffectGlobalIllumination

// Begin Class ULightComponentBase Function SetAffectReflection
struct Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics
{
	struct LightComponentBase_eventSetAffectReflection_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponentBase_eventSetAffectReflection_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponentBase_eventSetAffectReflection_Parms), &Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetAffectReflection", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::LightComponentBase_eventSetAffectReflection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::LightComponentBase_eventSetAffectReflection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetAffectReflection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetAffectReflection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetAffectReflection)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAffectReflection(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetAffectReflection

// Begin Class ULightComponentBase Function SetCastDeepShadow
struct Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics
{
	struct LightComponentBase_eventSetCastDeepShadow_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponentBase_eventSetCastDeepShadow_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastDeepShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastDeepShadow", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::LightComponentBase_eventSetCastDeepShadow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::LightComponentBase_eventSetCastDeepShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetCastDeepShadow)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastDeepShadow(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetCastDeepShadow

// Begin Class ULightComponentBase Function SetCastRaytracedShadow
struct Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics
{
	struct LightComponentBase_eventSetCastRaytracedShadow_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ULightComponentBase::SetCastRaytracedShadow is deprecated. Use ULightComponentBase::SetCastRaytracedShadows instead." },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponentBase_eventSetCastRaytracedShadow_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastRaytracedShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastRaytracedShadow", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::LightComponentBase_eventSetCastRaytracedShadow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::LightComponentBase_eventSetCastRaytracedShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetCastRaytracedShadow)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastRaytracedShadow(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetCastRaytracedShadow

// Begin Class ULightComponentBase Function SetCastRaytracedShadows
struct Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics
{
	struct LightComponentBase_eventSetCastRaytracedShadows_Parms
	{
		TEnumAsByte<ECastRayTracedShadow::Type> bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponentBase_eventSetCastRaytracedShadows_Parms, bNewValue), Z_Construct_UEnum_Engine_ECastRayTracedShadow, METADATA_PARAMS(0, nullptr) }; // 2444491373
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastRaytracedShadows", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::LightComponentBase_eventSetCastRaytracedShadows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::LightComponentBase_eventSetCastRaytracedShadows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetCastRaytracedShadows)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastRaytracedShadows(ECastRayTracedShadow::Type(Z_Param_bNewValue));
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetCastRaytracedShadows

// Begin Class ULightComponentBase Function SetCastShadows
struct Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics
{
	struct LightComponentBase_eventSetCastShadows_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "Comment", "/** Sets whether this light casts shadows */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sets whether this light casts shadows" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponentBase_eventSetCastShadows_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastShadows_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastShadows", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::LightComponentBase_eventSetCastShadows_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::LightComponentBase_eventSetCastShadows_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastShadows()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastShadows_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetCastShadows)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastShadows(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetCastShadows

// Begin Class ULightComponentBase Function SetCastVolumetricShadow
struct Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics
{
	struct LightComponentBase_eventSetCastVolumetricShadow_Parms
	{
		bool bNewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue_SetBit(void* Obj)
{
	((LightComponentBase_eventSetCastVolumetricShadow_Parms*)Obj)->bNewValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue = { "bNewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LightComponentBase_eventSetCastVolumetricShadow_Parms), &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::NewProp_bNewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetCastVolumetricShadow", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::LightComponentBase_eventSetCastVolumetricShadow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::LightComponentBase_eventSetCastVolumetricShadow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetCastVolumetricShadow)
{
	P_GET_UBOOL(Z_Param_bNewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCastVolumetricShadow(Z_Param_bNewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetCastVolumetricShadow

// Begin Class ULightComponentBase Function SetSamplesPerPixel
struct Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics
{
	struct LightComponentBase_eventSetSamplesPerPixel_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|Light" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LightComponentBase_eventSetSamplesPerPixel_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULightComponentBase, nullptr, "SetSamplesPerPixel", nullptr, nullptr, Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::LightComponentBase_eventSetSamplesPerPixel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::LightComponentBase_eventSetSamplesPerPixel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULightComponentBase::execSetSamplesPerPixel)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSamplesPerPixel(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class ULightComponentBase Function SetSamplesPerPixel

// Begin Class ULightComponentBase
void ULightComponentBase::StaticRegisterNativesULightComponentBase()
{
	UClass* Class = ULightComponentBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetLightColor", &ULightComponentBase::execGetLightColor },
		{ "SetAffectGlobalIllumination", &ULightComponentBase::execSetAffectGlobalIllumination },
		{ "SetAffectReflection", &ULightComponentBase::execSetAffectReflection },
		{ "SetCastDeepShadow", &ULightComponentBase::execSetCastDeepShadow },
		{ "SetCastRaytracedShadow", &ULightComponentBase::execSetCastRaytracedShadow },
		{ "SetCastRaytracedShadows", &ULightComponentBase::execSetCastRaytracedShadows },
		{ "SetCastShadows", &ULightComponentBase::execSetCastShadows },
		{ "SetCastVolumetricShadow", &ULightComponentBase::execSetCastVolumetricShadow },
		{ "SetSamplesPerPixel", &ULightComponentBase::execSetSamplesPerPixel },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULightComponentBase);
UClass* Z_Construct_UClass_ULightComponentBase_NoRegister()
{
	return ULightComponentBase::StaticClass();
}
struct Z_Construct_UClass_ULightComponentBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger Activation Components|Activation Physics Trigger PhysicsVolume" },
		{ "IncludePath", "Components/LightComponentBase.h" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightGuid_MetaData[] = {
		{ "Comment", "/**\n\x09 * GUID used to associate a light component with precomputed shadowing information across levels.\n\x09 * The GUID changes whenever the light position changes.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "GUID used to associate a light component with precomputed shadowing information across levels.\nThe GUID changes whenever the light position changes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Brightness_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Total energy that the light emits.  \n\x09 */" },
		{ "DisplayName", "Intensity" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Total energy that the light emits." },
		{ "UIMax", "20.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LightColor_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Filter color of the light.\n\x09 * Note that this can change the light's effective intensity.\n\x09 */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Filter color of the light.\nNote that this can change the light's effective intensity." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectsWorld_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Whether the light can affect the world, or whether it is disabled.\n\x09 * A disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed.\n\x09 * Setting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ShouldShowInViewport", "TRUE" },
		{ "ToolTip", "Whether the light can affect the world, or whether it is disabled.\nA disabled light will not contribute to the scene in any way.  This setting cannot be changed at runtime and unbuilds lighting when changed.\nSetting this to false has the same effect as deleting the light, so it is useful for non-destructive experiments." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast any shadows.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast any shadows." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastStaticShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast shadows from static objects.  Also requires Cast Shadows to be set to True." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastDynamicShadows_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True.\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast shadows from dynamic objects.  Also requires Cast Shadows to be set to True." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectTranslucentLighting_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects translucency or not.  Disabling this can save GPU time when there are many small lights." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bTransmission_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether light from this light transmits through surfaces with subsurface scattering profiles. Requires light to be movable. */" },
		{ "EditCondition", "Mobility==EComponentMobility::Movable" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether light from this light transmits through surfaces with subsurface scattering profiles. Requires light to be movable." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastVolumetricShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light shadows volumetric fog.  Disabling this can save GPU time. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light shadows volumetric fog.  Disabling this can save GPU time." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastDeepShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/**\n\x09 * Whether the light should cast high quality hair-strands self-shadowing. When this option is enabled, an extra GPU cost for this light. \n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light should cast high quality hair-strands self-shadowing. When this option is enabled, an extra GPU cost for this light." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCastRaytracedShadow_MetaData[] = {
		{ "Comment", "/** Whether the light shadows are computed with shadow-mapping or ray-tracing (when available). */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light shadows are computed with shadow-mapping or ray-tracing (when available)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CastRaytracedShadow_MetaData[] = {
		{ "Category", "Light" },
		{ "DisplayName", "Cast Ray Traced Shadows" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectReflection_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light affects objects in reflections, when ray-traced reflection is enabled. */" },
		{ "DisplayName", "Affect Ray Tracing Reflections" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects objects in reflections, when ray-traced reflection is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAffectGlobalIllumination_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Whether the light affects global illumination, when ray-traced global illumination is enabled. */" },
		{ "DisplayName", "Affect Ray Tracing Global Illumination" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Whether the light affects global illumination, when ray-traced global illumination is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeepShadowLayerDistribution_MetaData[] = {
		{ "Category", "Light" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 *Change the deep shadow layers distribution 0:linear distribution (uniform layer distribution), 1:exponential (more details on near small details).\n\x09 **/" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Change the deep shadow layers distribution 0:linear distribution (uniform layer distribution), 1:exponential (more details on near small details)." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IndirectLightingIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** \n\x09 * Scales the indirect lighting contribution from this light. \n\x09 * A value of 0 disables any GI from this light. Default is 1.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Scales the indirect lighting contribution from this light.\nA value of 0 disables any GI from this light. Default is 1." },
		{ "UIMax", "6.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumetricScatteringIntensity_MetaData[] = {
		{ "Category", "Light" },
		{ "Comment", "/** Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Intensity of the volumetric scattering from this light.  This scales Intensity and LightColor." },
		{ "UIMax", "4.0" },
		{ "UIMin", "0.25" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SamplesPerPixel_MetaData[] = {
		{ "Category", "RayTracing" },
		{ "Comment", "/** Samples per pixel for ray tracing */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Samples per pixel for ray tracing" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTexture_MetaData[] = {
		{ "Comment", "/** Sprite for static light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite for static light in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticEditorTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for static light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite scaling for static light in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTexture_MetaData[] = {
		{ "Comment", "/** Sprite for dynamic light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite for dynamic light in the editor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DynamicEditorTextureScale_MetaData[] = {
		{ "Comment", "/** Sprite scaling for dynamic light in the editor. */" },
		{ "ModuleRelativePath", "Classes/Components/LightComponentBase.h" },
		{ "ToolTip", "Sprite scaling for dynamic light in the editor." },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightGuid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Brightness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LightColor;
	static void NewProp_bAffectsWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsWorld;
	static void NewProp_CastShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
	static void NewProp_CastStaticShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastStaticShadows;
	static void NewProp_CastDynamicShadows_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_CastDynamicShadows;
	static void NewProp_bAffectTranslucentLighting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectTranslucentLighting;
	static void NewProp_bTransmission_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransmission;
	static void NewProp_bCastVolumetricShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastVolumetricShadow;
	static void NewProp_bCastDeepShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastDeepShadow;
	static void NewProp_bCastRaytracedShadow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastRaytracedShadow;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CastRaytracedShadow;
	static void NewProp_bAffectReflection_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectReflection;
	static void NewProp_bAffectGlobalIllumination_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectGlobalIllumination;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeepShadowLayerDistribution;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_IndirectLightingIntensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumetricScatteringIntensity;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SamplesPerPixel;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticEditorTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StaticEditorTextureScale;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicEditorTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DynamicEditorTextureScale;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULightComponentBase_GetLightColor, "GetLightColor" }, // 2926512888
		{ &Z_Construct_UFunction_ULightComponentBase_SetAffectGlobalIllumination, "SetAffectGlobalIllumination" }, // 3755021293
		{ &Z_Construct_UFunction_ULightComponentBase_SetAffectReflection, "SetAffectReflection" }, // 2997715841
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastDeepShadow, "SetCastDeepShadow" }, // 2105860062
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadow, "SetCastRaytracedShadow" }, // 1988341234
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastRaytracedShadows, "SetCastRaytracedShadows" }, // 2160357689
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastShadows, "SetCastShadows" }, // 174885944
		{ &Z_Construct_UFunction_ULightComponentBase_SetCastVolumetricShadow, "SetCastVolumetricShadow" }, // 2055324637
		{ &Z_Construct_UFunction_ULightComponentBase_SetSamplesPerPixel, "SetSamplesPerPixel" }, // 132539141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULightComponentBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid = { "LightGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, LightGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightGuid_MetaData), NewProp_LightGuid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness = { "Brightness", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, Brightness_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Brightness_MetaData), NewProp_Brightness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, Intensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intensity_MetaData), NewProp_Intensity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor = { "LightColor", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, LightColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LightColor_MetaData), NewProp_LightColor_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bAffectsWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld = { "bAffectsWorld", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectsWorld_MetaData), NewProp_bAffectsWorld_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->CastShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastShadows_MetaData), NewProp_CastShadows_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->CastStaticShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows = { "CastStaticShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastStaticShadows_MetaData), NewProp_CastStaticShadows_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->CastDynamicShadows = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows = { "CastDynamicShadows", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastDynamicShadows_MetaData), NewProp_CastDynamicShadows_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bAffectTranslucentLighting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting = { "bAffectTranslucentLighting", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectTranslucentLighting_MetaData), NewProp_bAffectTranslucentLighting_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bTransmission = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission = { "bTransmission", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bTransmission_MetaData), NewProp_bTransmission_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bCastVolumetricShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow = { "bCastVolumetricShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastVolumetricShadow_MetaData), NewProp_bCastVolumetricShadow_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bCastDeepShadow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow = { "bCastDeepShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastDeepShadow_MetaData), NewProp_bCastDeepShadow_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bCastRaytracedShadow_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow = { "bCastRaytracedShadow", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCastRaytracedShadow_MetaData), NewProp_bCastRaytracedShadow_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow = { "CastRaytracedShadow", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, CastRaytracedShadow), Z_Construct_UEnum_Engine_ECastRayTracedShadow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CastRaytracedShadow_MetaData), NewProp_CastRaytracedShadow_MetaData) }; // 2444491373
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bAffectReflection = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection = { "bAffectReflection", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectReflection_MetaData), NewProp_bAffectReflection_MetaData) };
void Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_SetBit(void* Obj)
{
	((ULightComponentBase*)Obj)->bAffectGlobalIllumination = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination = { "bAffectGlobalIllumination", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(ULightComponentBase), &Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAffectGlobalIllumination_MetaData), NewProp_bAffectGlobalIllumination_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution = { "DeepShadowLayerDistribution", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, DeepShadowLayerDistribution), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeepShadowLayerDistribution_MetaData), NewProp_DeepShadowLayerDistribution_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity = { "IndirectLightingIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, IndirectLightingIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IndirectLightingIntensity_MetaData), NewProp_IndirectLightingIntensity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity = { "VolumetricScatteringIntensity", nullptr, (EPropertyFlags)0x0010000200000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, VolumetricScatteringIntensity), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumetricScatteringIntensity_MetaData), NewProp_VolumetricScatteringIntensity_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel = { "SamplesPerPixel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, SamplesPerPixel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SamplesPerPixel_MetaData), NewProp_SamplesPerPixel_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture = { "StaticEditorTexture", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, StaticEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticEditorTexture_MetaData), NewProp_StaticEditorTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale = { "StaticEditorTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, StaticEditorTextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticEditorTextureScale_MetaData), NewProp_StaticEditorTextureScale_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture = { "DynamicEditorTexture", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicEditorTexture_MetaData), NewProp_DynamicEditorTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale = { "DynamicEditorTextureScale", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULightComponentBase, DynamicEditorTextureScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DynamicEditorTextureScale_MetaData), NewProp_DynamicEditorTextureScale_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULightComponentBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Brightness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_LightColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectsWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastStaticShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastDynamicShadows,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectTranslucentLighting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bTransmission,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastVolumetricShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastDeepShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bCastRaytracedShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_CastRaytracedShadow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectReflection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_bAffectGlobalIllumination,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DeepShadowLayerDistribution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_IndirectLightingIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_VolumetricScatteringIntensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_SamplesPerPixel,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_StaticEditorTextureScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULightComponentBase_Statics::NewProp_DynamicEditorTextureScale,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULightComponentBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULightComponentBase_Statics::ClassParams = {
	&ULightComponentBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULightComponentBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::PropPointers),
	0,
	0x00A800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ULightComponentBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULightComponentBase()
{
	if (!Z_Registration_Info_UClass_ULightComponentBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULightComponentBase.OuterSingleton, Z_Construct_UClass_ULightComponentBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULightComponentBase.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULightComponentBase>()
{
	return ULightComponentBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULightComponentBase);
ULightComponentBase::~ULightComponentBase() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULightComponentBase)
// End Class ULightComponentBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULightComponentBase, ULightComponentBase::StaticClass, TEXT("ULightComponentBase"), &Z_Registration_Info_UClass_ULightComponentBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULightComponentBase), 3908240847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_3760282912(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_LightComponentBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
