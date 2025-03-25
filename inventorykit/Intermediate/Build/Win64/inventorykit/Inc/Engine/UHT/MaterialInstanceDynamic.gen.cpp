// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialInstanceDynamic() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USparseVolumeTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UMaterialInstanceDynamic Function CopyInterpParameters
struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics
{
	struct MaterialInstanceDynamic_eventCopyInterpParameters_Parms
	{
		UMaterialInstance* Source;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\n\x09 * much faster than K2_CopyMaterialInstanceParameters(), \n\x09 * The output is the object itself (this).\n\x09 * @param Source ignores the call if 0\n\x09 */" },
		{ "DisplayName", "Copy Interp Parameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copies over parameters given a material instance (only copy from the instance, not following the hierarchy)\nmuch faster than K2_CopyMaterialInstanceParameters(),\nThe output is the object itself (this).\n@param Source ignores the call if 0" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyInterpParameters_Parms, Source), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::NewProp_Source,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyInterpParameters", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::MaterialInstanceDynamic_eventCopyInterpParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::MaterialInstanceDynamic_eventCopyInterpParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execCopyInterpParameters)
{
	P_GET_OBJECT(UMaterialInstance,Z_Param_Source);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyInterpParameters(Z_Param_Source);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function CopyInterpParameters

// Begin Class UMaterialInstanceDynamic Function CopyParameterOverrides
struct Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics
{
	struct MaterialInstanceDynamic_eventCopyParameterOverrides_Parms
	{
		UMaterialInstance* MaterialInstance;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copy parameter values from another material instance. This will copy only\n\x09 * parameters explicitly overridden in that material instance!!\n\x09 */" },
		{ "DisplayName", "Copy Parameter Overrides" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Copy parameter values from another material instance. This will copy only\nparameters explicitly overridden in that material instance!!" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MaterialInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance = { "MaterialInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventCopyParameterOverrides_Parms, MaterialInstance), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::NewProp_MaterialInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "CopyParameterOverrides", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::MaterialInstanceDynamic_eventCopyParameterOverrides_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::MaterialInstanceDynamic_eventCopyParameterOverrides_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execCopyParameterOverrides)
{
	P_GET_OBJECT(UMaterialInstance,Z_Param_MaterialInstance);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CopyParameterOverrides(Z_Param_MaterialInstance);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function CopyParameterOverrides

// Begin Class UMaterialInstanceDynamic Function InitializeScalarParameterAndGetIndex
struct Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics
{
	struct MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms
	{
		FName ParameterName;
		float Value;
		int32 OutParameterIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Use this function to set an initial value and fetch the index for use in SetScalarParameterByIndex.  This\n// function should only be called once for a particular name, and then use SetScalarParameterByIndex for subsequent\n// calls.  However, beware using this except in cases where optimization is critical, which is generally only if\n// you're using an unusually high number of parameters in a material and setting a large number of parameters in the\n// same frame.  Also, if the material is changed in any way that can change the parameter list, the index can be\n// invalidated.\n" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Use this function to set an initial value and fetch the index for use in SetScalarParameterByIndex.  This\nfunction should only be called once for a particular name, and then use SetScalarParameterByIndex for subsequent\ncalls.  However, beware using this except in cases where optimization is critical, which is generally only if\nyou're using an unusually high number of parameters in a material and setting a large number of parameters in the\nsame frame.  Also, if the material is changed in any way that can change the parameter list, the index can be\ninvalidated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutParameterIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms, ParameterName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterName_MetaData), NewProp_ParameterName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_OutParameterIndex = { "OutParameterIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms, OutParameterIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_OutParameterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "InitializeScalarParameterAndGetIndex", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::MaterialInstanceDynamic_eventInitializeScalarParameterAndGetIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execInitializeScalarParameterAndGetIndex)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutParameterIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->InitializeScalarParameterAndGetIndex(Z_Param_Out_ParameterName,Z_Param_Value,Z_Param_Out_OutParameterIndex);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function InitializeScalarParameterAndGetIndex

// Begin Class UMaterialInstanceDynamic Function K2_CopyMaterialInstanceParameters
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics
{
	struct MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms
	{
		UMaterialInterface* Source;
		bool bQuickParametersOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Copies over parameters given a material interface (copy each instance following the hierarchy)\n\x09 * Very slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\n\x09 * The output is the object itself (this). Copying 'quick parameters only' will result in a much\n\x09 * faster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n\x09 * @param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data\n\x09 */" },
		{ "CPP_Default_bQuickParametersOnly", "false" },
		{ "DisplayName", "Copy Material Instance Parameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "CopyMaterialInstanceParameters" },
		{ "ToolTip", "Copies over parameters given a material interface (copy each instance following the hierarchy)\nVery slow implementation, avoid using at runtime. Hopefully we can replace it later with something like CopyInterpParameters()\nThe output is the object itself (this). Copying 'quick parameters only' will result in a much\nfaster copy process but will only copy dynamic scalar, vector and texture parameters on clients.\n@param bQuickParametersOnly Copy scalar, vector and texture parameters only. Much faster but may not include required data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Source;
	static void NewProp_bQuickParametersOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bQuickParametersOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms, Source), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit(void* Obj)
{
	((MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms*)Obj)->bQuickParametersOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly = { "bQuickParametersOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_Source,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::NewProp_bQuickParametersOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_CopyMaterialInstanceParameters", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::MaterialInstanceDynamic_eventK2_CopyMaterialInstanceParameters_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Source);
	P_GET_UBOOL(Z_Param_bQuickParametersOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_CopyMaterialInstanceParameters(Z_Param_Source,Z_Param_bQuickParametersOnly);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_CopyMaterialInstanceParameters

// Begin Class UMaterialInstanceDynamic Function K2_GetScalarParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms
	{
		FName ParameterName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current scalar (float) parameter value from an MID */" },
		{ "DisplayName", "Get Scalar Parameter Value" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValue" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetScalarParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetScalarParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValue(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_GetScalarParameterValue

// Begin Class UMaterialInstanceDynamic Function K2_GetScalarParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "Get Scalar Parameter Value By Info" },
		{ "Keywords", "GetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetScalarParameterValueByInfo" },
		{ "ToolTip", "Get the current scalar (float) parameter value from an MID, using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetScalarParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetScalarParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->K2_GetScalarParameterValueByInfo(Z_Param_Out_ParameterInfo);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_GetScalarParameterValueByInfo

// Begin Class UMaterialInstanceDynamic Function K2_GetTextureParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms
	{
		FName ParameterName;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID texture parameter value */" },
		{ "DisplayName", "Get Texture Parameter Value" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValue" },
		{ "ToolTip", "Get the current MID texture parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetTextureParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetTextureParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValue(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_GetTextureParameterValue

// Begin Class UMaterialInstanceDynamic Function K2_GetTextureParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		UTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID texture parameter value, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "Get Texture Parameter Value By Info" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetTextureParameterValueByInfo" },
		{ "ToolTip", "Get the current MID texture parameter value, using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetTextureParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetTextureParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UTexture**)Z_Param__Result=P_THIS->K2_GetTextureParameterValueByInfo(Z_Param_Out_ParameterInfo);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_GetTextureParameterValueByInfo

// Begin Class UMaterialInstanceDynamic Function K2_GetVectorParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms
	{
		FName ParameterName;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID vector parameter value */" },
		{ "DisplayName", "Get Vector Parameter Value" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValue" },
		{ "ToolTip", "Get the current MID vector parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::MaterialInstanceDynamic_eventK2_GetVectorParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetVectorParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValue(Z_Param_ParameterName);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_GetVectorParameterValue

// Begin Class UMaterialInstanceDynamic Function K2_GetVectorParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the current MID vector parameter value, using MPI (to allow access to layer parameters) */" },
		{ "DisplayName", "Get VectorParameter Value By Info" },
		{ "Keywords", "GetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "GetVectorParameterValueByInfo" },
		{ "ToolTip", "Get the current MID vector parameter value, using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_GetVectorParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::MaterialInstanceDynamic_eventK2_GetVectorParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->K2_GetVectorParameterValueByInfo(Z_Param_Out_ParameterInfo);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_GetVectorParameterValueByInfo

// Begin Class UMaterialInstanceDynamic Function K2_InterpolateMaterialInstanceParams
struct Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics
{
	struct MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms
	{
		UMaterialInstance* SourceA;
		UMaterialInstance* SourceB;
		float Alpha;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/**\n\x09 * Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\n\x09 * The output is the object itself (this).\n\x09 * Supports the case SourceA==this || SourceB==this\n\x09 * Both material have to be from the same base material\n\x09 * @param SourceA value that is used for Alpha=0, silently ignores the case if 0\n\x09 * @param SourceB value that is used for Alpha=1, silently ignores the case if 0\n\x09 * @param Alpha usually in the range 0..1, values outside the range extrapolate\n\x09 */" },
		{ "DisplayName", "Interpolate Material Instance Parameters" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ScriptName", "InterpolateMaterialInstanceParameters" },
		{ "ToolTip", "Interpolates the scalar and vector parameters of this material instance based on two other material instances, and an alpha blending factor\nThe output is the object itself (this).\nSupports the case SourceA==this || SourceB==this\nBoth material have to be from the same base material\n@param SourceA value that is used for Alpha=0, silently ignores the case if 0\n@param SourceB value that is used for Alpha=1, silently ignores the case if 0\n@param Alpha usually in the range 0..1, values outside the range extrapolate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceA;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceB;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA = { "SourceA", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceA), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB = { "SourceB", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, SourceB), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceA,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_SourceB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "K2_InterpolateMaterialInstanceParams", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::MaterialInstanceDynamic_eventK2_InterpolateMaterialInstanceParams_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams)
{
	P_GET_OBJECT(UMaterialInstance,Z_Param_SourceA);
	P_GET_OBJECT(UMaterialInstance,Z_Param_SourceB);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Alpha);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_InterpolateMaterialInstanceParams(Z_Param_SourceA,Z_Param_SourceB,Z_Param_Alpha);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function K2_InterpolateMaterialInstanceParams

// Begin Class UMaterialInstanceDynamic Function SetDoubleVectorParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms
	{
		FName ParameterName;
		FVector4 Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value */" },
		{ "Keywords", "SetVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetDoubleVectorParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::MaterialInstanceDynamic_eventSetDoubleVectorParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetDoubleVectorParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FVector4,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDoubleVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetDoubleVectorParameterValue

// Begin Class UMaterialInstanceDynamic Function SetRuntimeVirtualTextureParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms
	{
		FName ParameterName;
		URuntimeVirtualTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms, Value), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetRuntimeVirtualTextureParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(URuntimeVirtualTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeVirtualTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetRuntimeVirtualTextureParameterValue

// Begin Class UMaterialInstanceDynamic Function SetRuntimeVirtualTextureParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		URuntimeVirtualTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value using MPI (to allow access to layer parameters) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms, Value), Z_Construct_UClass_URuntimeVirtualTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetRuntimeVirtualTextureParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetRuntimeVirtualTextureParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_GET_OBJECT(URuntimeVirtualTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRuntimeVirtualTextureParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetRuntimeVirtualTextureParameterValueByInfo

// Begin Class UMaterialInstanceDynamic Function SetScalarParameterByIndex
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics
{
	struct MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms
	{
		int32 ParameterIndex;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "// Use the cached value of OutParameterIndex from InitializeScalarParameterAndGetIndex to set the scalar parameter\n// ONLY on the exact same MID.  Do NOT presume the index can be used from one instance on another.  Only use this\n// pair of functions when optimization is critical; otherwise use either SetScalarParameterValueByInfo or\n// SetScalarParameterValue.\n" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Use the cached value of OutParameterIndex from InitializeScalarParameterAndGetIndex to set the scalar parameter\nONLY on the exact same MID.  Do NOT presume the index can be used from one instance on another.  Only use this\npair of functions when optimization is critical; otherwise use either SetScalarParameterValueByInfo or\nSetScalarParameterValue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ParameterIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ParameterIndex = { "ParameterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms, ParameterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms), &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ParameterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterByIndex", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::MaterialInstanceDynamic_eventSetScalarParameterByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ParameterIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetScalarParameterByIndex(Z_Param_ParameterIndex,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetScalarParameterByIndex

// Begin Class UMaterialInstanceDynamic Function SetScalarParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventSetScalarParameterValue_Parms
	{
		FName ParameterName;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValue_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::MaterialInstanceDynamic_eventSetScalarParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::MaterialInstanceDynamic_eventSetScalarParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetScalarParameterValue

// Begin Class UMaterialInstanceDynamic Function SetScalarParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters) */" },
		{ "Keywords", "SetFloatParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set a MID scalar (float) parameter value using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetScalarParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetScalarParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetScalarParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetScalarParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetScalarParameterValueByInfo

// Begin Class UMaterialInstanceDynamic Function SetSparseVolumeTextureParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms
	{
		FName ParameterName;
		USparseVolumeTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms, Value), Z_Construct_UClass_USparseVolumeTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetSparseVolumeTextureParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetSparseVolumeTextureParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetSparseVolumeTextureParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(USparseVolumeTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSparseVolumeTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetSparseVolumeTextureParameterValue

// Begin Class UMaterialInstanceDynamic Function SetTextureParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventSetTextureParameterValue_Parms
	{
		FName ParameterName;
		UTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValue_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetTextureParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::MaterialInstanceDynamic_eventSetTextureParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetTextureParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetTextureParameterValue

// Begin Class UMaterialInstanceDynamic Function SetTextureParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		UTexture* Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID texture parameter value using MPI (to allow access to layer parameters) */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID texture parameter value using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms, Value), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetTextureParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetTextureParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetTextureParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_GET_OBJECT(UTexture,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTextureParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetTextureParameterValueByInfo

// Begin Class UMaterialInstanceDynamic Function SetVectorParameterValue
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics
{
	struct MaterialInstanceDynamic_eventSetVectorParameterValue_Parms
	{
		FName ParameterName;
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, ParameterName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_ParameterName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValue", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::MaterialInstanceDynamic_eventSetVectorParameterValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::MaterialInstanceDynamic_eventSetVectorParameterValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetVectorParameterValue)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorParameterValue(Z_Param_ParameterName,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetVectorParameterValue

// Begin Class UMaterialInstanceDynamic Function SetVectorParameterValueByInfo
struct Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics
{
	struct MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms
	{
		FMaterialParameterInfo ParameterInfo;
		FLinearColor Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set an MID vector parameter value, using MPI (to allow access to layer parameters) */" },
		{ "Keywords", "SetColorParameterValue" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
		{ "ToolTip", "Set an MID vector parameter value, using MPI (to allow access to layer parameters)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParameterInfo_MetaData), NewProp_ParameterInfo_MetaData) }; // 682741679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_ParameterInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialInstanceDynamic, nullptr, "SetVectorParameterValueByInfo", nullptr, nullptr, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::MaterialInstanceDynamic_eventSetVectorParameterValueByInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMaterialInstanceDynamic::execSetVectorParameterValueByInfo)
{
	P_GET_STRUCT_REF(FMaterialParameterInfo,Z_Param_Out_ParameterInfo);
	P_GET_STRUCT(FLinearColor,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorParameterValueByInfo(Z_Param_Out_ParameterInfo,Z_Param_Value);
	P_NATIVE_END;
}
// End Class UMaterialInstanceDynamic Function SetVectorParameterValueByInfo

// Begin Class UMaterialInstanceDynamic
void UMaterialInstanceDynamic::StaticRegisterNativesUMaterialInstanceDynamic()
{
	UClass* Class = UMaterialInstanceDynamic::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyInterpParameters", &UMaterialInstanceDynamic::execCopyInterpParameters },
		{ "CopyParameterOverrides", &UMaterialInstanceDynamic::execCopyParameterOverrides },
		{ "InitializeScalarParameterAndGetIndex", &UMaterialInstanceDynamic::execInitializeScalarParameterAndGetIndex },
		{ "K2_CopyMaterialInstanceParameters", &UMaterialInstanceDynamic::execK2_CopyMaterialInstanceParameters },
		{ "K2_GetScalarParameterValue", &UMaterialInstanceDynamic::execK2_GetScalarParameterValue },
		{ "K2_GetScalarParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetScalarParameterValueByInfo },
		{ "K2_GetTextureParameterValue", &UMaterialInstanceDynamic::execK2_GetTextureParameterValue },
		{ "K2_GetTextureParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetTextureParameterValueByInfo },
		{ "K2_GetVectorParameterValue", &UMaterialInstanceDynamic::execK2_GetVectorParameterValue },
		{ "K2_GetVectorParameterValueByInfo", &UMaterialInstanceDynamic::execK2_GetVectorParameterValueByInfo },
		{ "K2_InterpolateMaterialInstanceParams", &UMaterialInstanceDynamic::execK2_InterpolateMaterialInstanceParams },
		{ "SetDoubleVectorParameterValue", &UMaterialInstanceDynamic::execSetDoubleVectorParameterValue },
		{ "SetRuntimeVirtualTextureParameterValue", &UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValue },
		{ "SetRuntimeVirtualTextureParameterValueByInfo", &UMaterialInstanceDynamic::execSetRuntimeVirtualTextureParameterValueByInfo },
		{ "SetScalarParameterByIndex", &UMaterialInstanceDynamic::execSetScalarParameterByIndex },
		{ "SetScalarParameterValue", &UMaterialInstanceDynamic::execSetScalarParameterValue },
		{ "SetScalarParameterValueByInfo", &UMaterialInstanceDynamic::execSetScalarParameterValueByInfo },
		{ "SetSparseVolumeTextureParameterValue", &UMaterialInstanceDynamic::execSetSparseVolumeTextureParameterValue },
		{ "SetTextureParameterValue", &UMaterialInstanceDynamic::execSetTextureParameterValue },
		{ "SetTextureParameterValueByInfo", &UMaterialInstanceDynamic::execSetTextureParameterValueByInfo },
		{ "SetVectorParameterValue", &UMaterialInstanceDynamic::execSetVectorParameterValue },
		{ "SetVectorParameterValueByInfo", &UMaterialInstanceDynamic::execSetVectorParameterValueByInfo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialInstanceDynamic);
UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister()
{
	return UMaterialInstanceDynamic::StaticClass();
}
struct Z_Construct_UClass_UMaterialInstanceDynamic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object Thumbnail" },
		{ "IncludePath", "Materials/MaterialInstanceDynamic.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialInstanceDynamic.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyInterpParameters, "CopyInterpParameters" }, // 1318000962
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_CopyParameterOverrides, "CopyParameterOverrides" }, // 2810622995
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_InitializeScalarParameterAndGetIndex, "InitializeScalarParameterAndGetIndex" }, // 4018192664
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_CopyMaterialInstanceParameters, "K2_CopyMaterialInstanceParameters" }, // 2977752238
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValue, "K2_GetScalarParameterValue" }, // 3833169591
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetScalarParameterValueByInfo, "K2_GetScalarParameterValueByInfo" }, // 1248927769
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValue, "K2_GetTextureParameterValue" }, // 3721149662
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetTextureParameterValueByInfo, "K2_GetTextureParameterValueByInfo" }, // 3523318849
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValue, "K2_GetVectorParameterValue" }, // 1299256060
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_GetVectorParameterValueByInfo, "K2_GetVectorParameterValueByInfo" }, // 1931002539
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_K2_InterpolateMaterialInstanceParams, "K2_InterpolateMaterialInstanceParams" }, // 1314687692
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetDoubleVectorParameterValue, "SetDoubleVectorParameterValue" }, // 879329775
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValue, "SetRuntimeVirtualTextureParameterValue" }, // 1692784480
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetRuntimeVirtualTextureParameterValueByInfo, "SetRuntimeVirtualTextureParameterValueByInfo" }, // 3459545505
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterByIndex, "SetScalarParameterByIndex" }, // 2105551137
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValue, "SetScalarParameterValue" }, // 1604209602
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetScalarParameterValueByInfo, "SetScalarParameterValueByInfo" }, // 1876801185
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetSparseVolumeTextureParameterValue, "SetSparseVolumeTextureParameterValue" }, // 340206532
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValue, "SetTextureParameterValue" }, // 1741244960
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetTextureParameterValueByInfo, "SetTextureParameterValueByInfo" }, // 1942865310
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValue, "SetVectorParameterValue" }, // 3226617464
		{ &Z_Construct_UFunction_UMaterialInstanceDynamic_SetVectorParameterValueByInfo, "SetVectorParameterValueByInfo" }, // 2457710182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialInstanceDynamic>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMaterialInstanceDynamic_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMaterialInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams = {
	&UMaterialInstanceDynamic::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008820A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams), Z_Construct_UClass_UMaterialInstanceDynamic_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMaterialInstanceDynamic()
{
	if (!Z_Registration_Info_UClass_UMaterialInstanceDynamic.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialInstanceDynamic.OuterSingleton, Z_Construct_UClass_UMaterialInstanceDynamic_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMaterialInstanceDynamic.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UMaterialInstanceDynamic>()
{
	return UMaterialInstanceDynamic::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialInstanceDynamic);
UMaterialInstanceDynamic::~UMaterialInstanceDynamic() {}
// End Class UMaterialInstanceDynamic

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialInstanceDynamic, UMaterialInstanceDynamic::StaticClass, TEXT("UMaterialInstanceDynamic"), &Z_Registration_Info_UClass_UMaterialInstanceDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialInstanceDynamic), 2616480319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_2245980212(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialInstanceDynamic_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
