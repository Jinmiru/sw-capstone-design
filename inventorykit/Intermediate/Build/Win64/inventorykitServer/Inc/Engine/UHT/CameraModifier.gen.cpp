// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraModifier() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
ENGINE_API UClass* Z_Construct_UClass_UCameraModifier_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCameraModifier Function BlueprintModifyCamera
struct CameraModifier_eventBlueprintModifyCamera_Parms
{
	float DeltaTime;
	FVector ViewLocation;
	FRotator ViewRotation;
	float FOV;
	FVector NewViewLocation;
	FRotator NewViewRotation;
	float NewFOV;
};
static FName NAME_UCameraModifier_BlueprintModifyCamera = FName(TEXT("BlueprintModifyCamera"));
void UCameraModifier::BlueprintModifyCamera(float DeltaTime, FVector ViewLocation, FRotator ViewRotation, float FOV, FVector& NewViewLocation, FRotator& NewViewRotation, float& NewFOV)
{
	CameraModifier_eventBlueprintModifyCamera_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.ViewLocation=ViewLocation;
	Parms.ViewRotation=ViewRotation;
	Parms.FOV=FOV;
	Parms.NewViewLocation=NewViewLocation;
	Parms.NewViewRotation=NewViewRotation;
	Parms.NewFOV=NewFOV;
	ProcessEvent(FindFunctionChecked(NAME_UCameraModifier_BlueprintModifyCamera),&Parms);
	NewViewLocation=Parms.NewViewLocation;
	NewViewRotation=Parms.NewViewRotation;
	NewFOV=Parms.NewFOV;
}
struct Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's transform. \n\x09 * Scaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n\x09 * @param\x09""DeltaTime\x09""Change in time since last update\n\x09 * @param\x09ViewLocation\x09\x09The current camera location.\n\x09 * @param\x09ViewRotation\x09\x09The current camera rotation.\n\x09 * @param\x09""FOV\x09\x09\x09\x09\x09The current camera fov.\n\x09 * @param\x09NewViewLocation\x09\x09(out) The modified camera location.\n\x09 * @param\x09NewViewRotation\x09\x09(out) The modified camera rotation.\n\x09 * @param\x09NewFOV\x09\x09\x09\x09(out) The modified camera FOV.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's transform.\nScaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n@param       DeltaTime       Change in time since last update\n@param       ViewLocation            The current camera location.\n@param       ViewRotation            The current camera rotation.\n@param       FOV                                     The current camera fov.\n@param       NewViewLocation         (out) The modified camera location.\n@param       NewViewRotation         (out) The modified camera rotation.\n@param       NewFOV                          (out) The modified camera FOV." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ViewRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewViewRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewLocation = { "ViewLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, ViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewRotation = { "ViewRotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, ViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, FOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewLocation = { "NewViewLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewViewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewRotation = { "NewViewRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyCamera_Parms, NewFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_ViewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewViewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::NewProp_NewFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "BlueprintModifyCamera", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::PropPointers), sizeof(CameraModifier_eventBlueprintModifyCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C2080A, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(CameraModifier_eventBlueprintModifyCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCameraModifier Function BlueprintModifyCamera

// Begin Class UCameraModifier Function BlueprintModifyPostProcess
struct CameraModifier_eventBlueprintModifyPostProcess_Parms
{
	float DeltaTime;
	float PostProcessBlendWeight;
	FPostProcessSettings PostProcessSettings;
};
static FName NAME_UCameraModifier_BlueprintModifyPostProcess = FName(TEXT("BlueprintModifyPostProcess"));
void UCameraModifier::BlueprintModifyPostProcess(float DeltaTime, float& PostProcessBlendWeight, FPostProcessSettings& PostProcessSettings)
{
	CameraModifier_eventBlueprintModifyPostProcess_Parms Parms;
	Parms.DeltaTime=DeltaTime;
	Parms.PostProcessBlendWeight=PostProcessBlendWeight;
	Parms.PostProcessSettings=PostProcessSettings;
	ProcessEvent(FindFunctionChecked(NAME_UCameraModifier_BlueprintModifyPostProcess),&Parms);
	PostProcessBlendWeight=Parms.PostProcessBlendWeight;
	PostProcessSettings=Parms.PostProcessSettings;
}
struct Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's postprocess effects.\n\x09 * Scaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n\x09 * @param\x09""DeltaTime\x09\x09\x09\x09""Change in time since last update\n\x09 * @param\x09PostProcessBlendWeight\x09(out) Blend weight applied to the entire postprocess structure.\n\x09 * @param\x09PostProcessSettings\x09\x09(out) Post process structure defining what settings and values to override.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Called per tick that the modifier is active to allow Blueprinted modifiers to modify the camera's postprocess effects.\nScaling by Alpha happens after this in code, so no need to deal with that in the blueprint.\n@param       DeltaTime                               Change in time since last update\n@param       PostProcessBlendWeight  (out) Blend weight applied to the entire postprocess structure.\n@param       PostProcessSettings             (out) Post process structure defining what settings and values to override." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, PostProcessBlendWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventBlueprintModifyPostProcess_Parms, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(0, nullptr) }; // 1858651484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::NewProp_PostProcessSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "BlueprintModifyPostProcess", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::PropPointers), sizeof(CameraModifier_eventBlueprintModifyPostProcess_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0842080A, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::Function_MetaDataParams) };
static_assert(sizeof(CameraModifier_eventBlueprintModifyPostProcess_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UCameraModifier Function BlueprintModifyPostProcess

// Begin Class UCameraModifier Function DisableModifier
struct Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics
{
	struct CameraModifier_eventDisableModifier_Parms
	{
		bool bImmediate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** \n\x09 *  Disables this modifier.\n\x09 *  @param  bImmediate  - true to disable with no blend out, false (default) to allow blend out\n\x09 */" },
		{ "CPP_Default_bImmediate", "false" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Disables this modifier.\n@param  bImmediate  - true to disable with no blend out, false (default) to allow blend out" },
	};
#endif // WITH_METADATA
	static void NewProp_bImmediate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit(void* Obj)
{
	((CameraModifier_eventDisableModifier_Parms*)Obj)->bImmediate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate = { "bImmediate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraModifier_eventDisableModifier_Parms), &Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::NewProp_bImmediate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "DisableModifier", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::CameraModifier_eventDisableModifier_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::CameraModifier_eventDisableModifier_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_DisableModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_DisableModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraModifier::execDisableModifier)
{
	P_GET_UBOOL(Z_Param_bImmediate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DisableModifier(Z_Param_bImmediate);
	P_NATIVE_END;
}
// End Class UCameraModifier Function DisableModifier

// Begin Class UCameraModifier Function EnableModifier
struct Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Enables this modifier. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Enables this modifier." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "EnableModifier", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCameraModifier_EnableModifier()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_EnableModifier_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraModifier::execEnableModifier)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableModifier();
	P_NATIVE_END;
}
// End Class UCameraModifier Function EnableModifier

// Begin Class UCameraModifier Function GetViewTarget
struct Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics
{
	struct CameraModifier_eventGetViewTarget_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** @return Returns the actor the camera is currently viewing. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns the actor the camera is currently viewing." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventGetViewTarget_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "GetViewTarget", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::CameraModifier_eventGetViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::CameraModifier_eventGetViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_GetViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_GetViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraModifier::execGetViewTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetViewTarget();
	P_NATIVE_END;
}
// End Class UCameraModifier Function GetViewTarget

// Begin Class UCameraModifier Function IsDisabled
struct Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics
{
	struct CameraModifier_eventIsDisabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** @return Returns true if modifier is disabled, false otherwise. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns true if modifier is disabled, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CameraModifier_eventIsDisabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraModifier_eventIsDisabled_Parms), &Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "IsDisabled", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::CameraModifier_eventIsDisabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::CameraModifier_eventIsDisabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_IsDisabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_IsDisabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraModifier::execIsDisabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDisabled();
	P_NATIVE_END;
}
// End Class UCameraModifier Function IsDisabled

// Begin Class UCameraModifier Function IsPendingDisable
struct Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics
{
	struct CameraModifier_eventIsPendingDisable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** @return Returns true if modifier is pending disable, false otherwise. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "@return Returns true if modifier is pending disable, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CameraModifier_eventIsPendingDisable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraModifier_eventIsPendingDisable_Parms), &Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "IsPendingDisable", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::CameraModifier_eventIsPendingDisable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::CameraModifier_eventIsPendingDisable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_IsPendingDisable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_IsPendingDisable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraModifier::execIsPendingDisable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPendingDisable();
	P_NATIVE_END;
}
// End Class UCameraModifier Function IsPendingDisable

// Begin Class UCameraModifier Function OnCameraOwnerDestroyed
struct Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics
{
	struct CameraModifier_eventOnCameraOwnerDestroyed_Parms
	{
		AActor* InOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::NewProp_InOwner = { "InOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraModifier_eventOnCameraOwnerDestroyed_Parms, InOwner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::NewProp_InOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraModifier, nullptr, "OnCameraOwnerDestroyed", nullptr, nullptr, Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::CameraModifier_eventOnCameraOwnerDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::CameraModifier_eventOnCameraOwnerDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraModifier::execOnCameraOwnerDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_InOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraOwnerDestroyed(Z_Param_InOwner);
	P_NATIVE_END;
}
// End Class UCameraModifier Function OnCameraOwnerDestroyed

// Begin Class UCameraModifier
void UCameraModifier::StaticRegisterNativesUCameraModifier()
{
	UClass* Class = UCameraModifier::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DisableModifier", &UCameraModifier::execDisableModifier },
		{ "EnableModifier", &UCameraModifier::execEnableModifier },
		{ "GetViewTarget", &UCameraModifier::execGetViewTarget },
		{ "IsDisabled", &UCameraModifier::execIsDisabled },
		{ "IsPendingDisable", &UCameraModifier::execIsPendingDisable },
		{ "OnCameraOwnerDestroyed", &UCameraModifier::execOnCameraOwnerDestroyed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraModifier);
UClass* Z_Construct_UClass_UCameraModifier_NoRegister()
{
	return UCameraModifier::StaticClass();
}
struct Z_Construct_UClass_UCameraModifier_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A CameraModifier is a base class for objects that may adjust the final camera properties after\n * being computed by the APlayerCameraManager (@see ModifyCamera). A CameraModifier\n * can be stateful, and is associated uniquely with a specific APlayerCameraManager.\n */" },
		{ "IncludePath", "Camera/CameraModifier.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "A CameraModifier is a base class for objects that may adjust the final camera properties after\nbeing computed by the APlayerCameraManager (@see ModifyCamera). A CameraModifier\ncan be stateful, and is associated uniquely with a specific APlayerCameraManager." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** If true, enables certain debug visualization features. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "If true, enables certain debug visualization features." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bExclusive_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** If true, no other modifiers of same priority allowed. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "If true, no other modifiers of same priority allowed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Priority value that determines the order in which modifiers are applied. 0 = highest priority, 255 = lowest. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Priority value that determines the order in which modifiers are applied. 0 = highest priority, 255 = lowest." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraOwner_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Camera this object is associated with. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Camera this object is associated with." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaInTime_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** When blending in, alpha proceeds from 0 to 1 over this time */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "When blending in, alpha proceeds from 0 to 1 over this time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaOutTime_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** When blending out, alpha proceeds from 1 to 0 over this time */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "When blending out, alpha proceeds from 1 to 0 over this time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[] = {
		{ "Category", "CameraModifier" },
		{ "Comment", "/** Current blend alpha. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraModifier.h" },
		{ "ToolTip", "Current blend alpha." },
	};
#endif // WITH_METADATA
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static void NewProp_bExclusive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExclusive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaInTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AlphaOutTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraModifier_BlueprintModifyCamera, "BlueprintModifyCamera" }, // 957993303
		{ &Z_Construct_UFunction_UCameraModifier_BlueprintModifyPostProcess, "BlueprintModifyPostProcess" }, // 404762535
		{ &Z_Construct_UFunction_UCameraModifier_DisableModifier, "DisableModifier" }, // 1866480138
		{ &Z_Construct_UFunction_UCameraModifier_EnableModifier, "EnableModifier" }, // 2120438765
		{ &Z_Construct_UFunction_UCameraModifier_GetViewTarget, "GetViewTarget" }, // 587670252
		{ &Z_Construct_UFunction_UCameraModifier_IsDisabled, "IsDisabled" }, // 2552255317
		{ &Z_Construct_UFunction_UCameraModifier_IsPendingDisable, "IsPendingDisable" }, // 2427007819
		{ &Z_Construct_UFunction_UCameraModifier_OnCameraOwnerDestroyed, "OnCameraOwnerDestroyed" }, // 1996611517
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraModifier>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UCameraModifier*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraModifier), &Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
void Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit(void* Obj)
{
	((UCameraModifier*)Obj)->bExclusive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive = { "bExclusive", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraModifier), &Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bExclusive_MetaData), NewProp_bExclusive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModifier, Priority), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner = { "CameraOwner", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModifier, CameraOwner), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraOwner_MetaData), NewProp_CameraOwner_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime = { "AlphaInTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModifier, AlphaInTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaInTime_MetaData), NewProp_AlphaInTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime = { "AlphaOutTime", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModifier, AlphaOutTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaOutTime_MetaData), NewProp_AlphaOutTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0020080000002014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraModifier, Alpha), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Alpha_MetaData), NewProp_Alpha_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraModifier_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_bExclusive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_CameraOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaInTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_AlphaOutTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraModifier_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraModifier_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraModifier_Statics::ClassParams = {
	&UCameraModifier::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCameraModifier_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::PropPointers),
	0,
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraModifier_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraModifier()
{
	if (!Z_Registration_Info_UClass_UCameraModifier.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraModifier.OuterSingleton, Z_Construct_UClass_UCameraModifier_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraModifier.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraModifier>()
{
	return UCameraModifier::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraModifier);
UCameraModifier::~UCameraModifier() {}
// End Class UCameraModifier

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraModifier, UCameraModifier::StaticClass, TEXT("UCameraModifier"), &Z_Registration_Info_UClass_UCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraModifier), 640374018U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_3617249211(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraModifier_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
