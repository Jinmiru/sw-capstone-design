// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSceneCaptureComponent2D() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USceneCaptureComponent2D Function AddOrUpdateBlendable
struct Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics
{
	struct SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableObject;
		float InWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::NewProp_InWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::SceneCaptureComponent2D_eventAddOrUpdateBlendable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent2D::execAddOrUpdateBlendable)
{
	P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent2D Function AddOrUpdateBlendable

// Begin Class USceneCaptureComponent2D Function CaptureScene
struct Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering|SceneCapture" },
		{ "Comment", "/** \n\x09 * Render the scene to the texture target immediately.  \n\x09 * This should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly. \n\x09 * If r.SceneCapture.CullByDetailMode is set, nothing will happen if DetailMode is higher than r.DetailMode.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Render the scene to the texture target immediately.\nThis should not be used if bCaptureEveryFrame is enabled, or the scene capture will render redundantly.\nIf r.SceneCapture.CullByDetailMode is set, nothing will happen if DetailMode is higher than r.DetailMode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "CaptureScene", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent2D::execCaptureScene)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CaptureScene();
	P_NATIVE_END;
}
// End Class USceneCaptureComponent2D Function CaptureScene

// Begin Class USceneCaptureComponent2D Function RemoveBlendable
struct Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics
{
	struct SceneCaptureComponent2D_eventRemoveBlendable_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Removes a blendable. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Removes a blendable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SceneCaptureComponent2D_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::NewProp_InBlendableObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USceneCaptureComponent2D, nullptr, "RemoveBlendable", nullptr, nullptr, Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::SceneCaptureComponent2D_eventRemoveBlendable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::SceneCaptureComponent2D_eventRemoveBlendable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USceneCaptureComponent2D::execRemoveBlendable)
{
	P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBlendable(Z_Param_InBlendableObject);
	P_NATIVE_END;
}
// End Class USceneCaptureComponent2D Function RemoveBlendable

// Begin Class USceneCaptureComponent2D
void USceneCaptureComponent2D::StaticRegisterNativesUSceneCaptureComponent2D()
{
	UClass* Class = USceneCaptureComponent2D::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateBlendable", &USceneCaptureComponent2D::execAddOrUpdateBlendable },
		{ "CaptureScene", &USceneCaptureComponent2D::execCaptureScene },
		{ "RemoveBlendable", &USceneCaptureComponent2D::execRemoveBlendable },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USceneCaptureComponent2D);
UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister()
{
	return USceneCaptureComponent2D::StaticClass();
}
struct Z_Construct_UClass_USceneCaptureComponent2D_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/**\n *\x09Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target.\n */" },
		{ "HideCategories", "Collision Object Physics SceneComponent Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Components/SceneCaptureComponent2D.h" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Used to capture a 'snapshot' of the scene from a single plane and feed it to a render target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[] = {
		{ "Category", "Projection" },
		{ "DisplayName", "Projection Type" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVAngle_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** Camera field of view (in degrees). */" },
		{ "DisplayName", "Field of View" },
		{ "editcondition", "ProjectionType==0" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Camera field of view (in degrees)." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "editcondition", "ProjectionType==1" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateOrthoPlanes_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Automatically determine a min/max Near/Far clip plane position depending on OrthoWidth value */" },
		{ "editcondition", "ProjectionType==1" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Automatically determine a min/max Near/Far clip plane position depending on OrthoWidth value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPlaneShift_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane */" },
		{ "editcondition", "ProjectionType==1 && bAutoCalculateOrthoPlanes" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOrthoPlanes_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting*/" },
		{ "editcondition", "ProjectionType==1" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraHeightAsViewTarget_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present) */" },
		{ "editcondition", "ProjectionType==1 && bUpdateOrthoPlanes" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureTarget_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Output render target of the scene capture that can be read in materials. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Output render target of the scene capture that can be read in materials." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompositeMode_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** When enabled, the scene capture will composite into the render target instead of overwriting its contents. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "When enabled, the scene capture will composite into the render target instead of overwriting its contents." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcessVolume" },
		{ "Comment", "/** Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Range (0.0, 1.0) where 0 indicates no effect, 1 indicates full effect." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Projection" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** \n\x09 * Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane.\n\x09 */" },
		{ "editcondition", "bOverride_CustomNearClippingPlane" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCustomProjectionMatrix_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Whether a custom projection matrix will be used during rendering. Use with caution. Does not currently affect culling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomProjectionMatrix_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** The custom projection matrix to use */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "The custom projection matrix to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFauxOrthoViewPos_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "5.4 - bUseFauxOrthoViewPos has been deprecated alongside updates to Orthographic camera fixes" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOrthographicTiling_MetaData[] = {
		{ "Category", "Projection" },
		{ "Comment", "/** Render the scene in n frames (i.e TileCount) - Ignored in Perspective mode, works only in Orthographic mode when CaptureSource uses SceneColor (not FinalColor)\n\x09* If CaptureSource uses FinalColor, tiling will be ignored and a Warning message will be logged\x09*/" },
		{ "editcondition", "ProjectionType==1" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Render the scene in n frames (i.e TileCount) - Ignored in Perspective mode, works only in Orthographic mode when CaptureSource uses SceneColor (not FinalColor)\nIf CaptureSource uses FinalColor, tiling will be ignored and a Warning message will be logged" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumXTiles_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of X tiles to render. Ignored in Perspective mode, works only in Orthographic mode */" },
		{ "editcondition", "ProjectionType==1 && bEnableOrthographicTiling" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Number of X tiles to render. Ignored in Perspective mode, works only in Orthographic mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumYTiles_MetaData[] = {
		{ "Category", "Projection" },
		{ "ClampMax", "64" },
		{ "ClampMin", "1" },
		{ "Comment", "/** Number of Y tiles to render. Ignored in Perspective mode, works only in Orthographic mode */" },
		{ "editcondition", "ProjectionType==1 && bEnableOrthographicTiling" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Number of Y tiles to render. Ignored in Perspective mode, works only in Orthographic mode" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClipPlane_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/**\n\x09 * Enables a clip plane while rendering the scene capture which is useful for portals.  \n\x09 * The global clip plane must be enabled in the renderer project settings for this to work.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Enables a clip plane while rendering the scene capture which is useful for portals.\nThe global clip plane must be enabled in the renderer project settings for this to work." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneBase_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Base position for the clip plane, can be any position on the plane. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Base position for the clip plane, can be any position on the plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClipPlaneNormal_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Normal for the plane. */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Normal for the plane." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRenderInMainRenderer_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Render scene capture as additional render passes of the main renderer rather than as an independent renderer. Can only apply to scene depth and device depth modes. */" },
		{ "EditCondition", "CaptureSource == ESceneCaptureSource::SCS_SceneDepth || CaptureSource == ESceneCaptureSource::SCS_DeviceDepth" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Render scene capture as additional render passes of the main renderer rather than as an independent renderer. Can only apply to scene depth and device depth modes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraCutThisFrame_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** \n\x09 * True if we did a camera cut this frame. Automatically reset to false at every capture.\n\x09 * This flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\n\x09 * Similar to UPlayerCameraManager::bGameCameraCutThisFrame.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "True if we did a camera cut this frame. Automatically reset to false at every capture.\nThis flag affects various things in the renderer (such as whether to use the occlusion queries from last frame, and motion blur).\nSimilar to UPlayerCameraManager::bGameCameraCutThisFrame." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData[] = {
		{ "Category", "SceneCapture" },
		{ "Comment", "/** Whether to only render exponential height fog on opaque pixels which were rendered by the scene capture. */" },
		{ "DisplayName", "Fog only on rendered pixels" },
		{ "ModuleRelativePath", "Classes/Components/SceneCaptureComponent2D.h" },
		{ "ToolTip", "Whether to only render exponential height fog on opaque pixels which were rendered by the scene capture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
	static void NewProp_bAutoCalculateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateOrthoPlanes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoPlaneShift;
	static void NewProp_bUpdateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOrthoPlanes;
	static void NewProp_bUseCameraHeightAsViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraHeightAsViewTarget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureTarget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CompositeMode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static void NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CustomNearClippingPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomNearClippingPlane;
	static void NewProp_bUseCustomProjectionMatrix_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCustomProjectionMatrix;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CustomProjectionMatrix;
	static void NewProp_bUseFauxOrthoViewPos_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFauxOrthoViewPos;
	static void NewProp_bEnableOrthographicTiling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOrthographicTiling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumXTiles;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumYTiles;
	static void NewProp_bEnableClipPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClipPlane;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClipPlaneBase;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClipPlaneNormal;
	static void NewProp_bRenderInMainRenderer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderInMainRenderer;
	static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
	static void NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 3312440590
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_CaptureScene, "CaptureScene" }, // 2187232584
		{ &Z_Construct_UFunction_USceneCaptureComponent2D_RemoveBlendable, "RemoveBlendable" }, // 147490347
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USceneCaptureComponent2D>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, ProjectionType), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionType_MetaData), NewProp_ProjectionType_MetaData) }; // 785982369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle = { "FOVAngle", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, FOVAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVAngle_MetaData), NewProp_FOVAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoWidth_MetaData), NewProp_OrthoWidth_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bAutoCalculateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bAutoCalculateOrthoPlanes = { "bAutoCalculateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCalculateOrthoPlanes_MetaData), NewProp_bAutoCalculateOrthoPlanes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_AutoPlaneShift = { "AutoPlaneShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, AutoPlaneShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPlaneShift_MetaData), NewProp_AutoPlaneShift_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUpdateOrthoPlanes_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bUpdateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUpdateOrthoPlanes = { "bUpdateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUpdateOrthoPlanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateOrthoPlanes_MetaData), NewProp_bUpdateOrthoPlanes_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bUseCameraHeightAsViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCameraHeightAsViewTarget = { "bUseCameraHeightAsViewTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraHeightAsViewTarget_MetaData), NewProp_bUseCameraHeightAsViewTarget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget = { "TextureTarget", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, TextureTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureTarget_MetaData), NewProp_TextureTarget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode = { "CompositeMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, CompositeMode), Z_Construct_UEnum_Engine_ESceneCaptureCompositeMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompositeMode_MetaData), NewProp_CompositeMode_MetaData) }; // 504474153
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 1858651484
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, PostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bOverride_CustomNearClippingPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane = { "bOverride_CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CustomNearClippingPlane_MetaData), NewProp_bOverride_CustomNearClippingPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane = { "CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, CustomNearClippingPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomNearClippingPlane_MetaData), NewProp_CustomNearClippingPlane_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bUseCustomProjectionMatrix = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix = { "bUseCustomProjectionMatrix", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCustomProjectionMatrix_MetaData), NewProp_bUseCustomProjectionMatrix_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix = { "CustomProjectionMatrix", nullptr, (EPropertyFlags)0x0010040000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, CustomProjectionMatrix), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomProjectionMatrix_MetaData), NewProp_CustomProjectionMatrix_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bUseFauxOrthoViewPos = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos = { "bUseFauxOrthoViewPos", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFauxOrthoViewPos_MetaData), NewProp_bUseFauxOrthoViewPos_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bEnableOrthographicTiling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling = { "bEnableOrthographicTiling", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOrthographicTiling_MetaData), NewProp_bEnableOrthographicTiling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles = { "NumXTiles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, NumXTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumXTiles_MetaData), NewProp_NumXTiles_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles = { "NumYTiles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, NumYTiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumYTiles_MetaData), NewProp_NumYTiles_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bEnableClipPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane = { "bEnableClipPlane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableClipPlane_MetaData), NewProp_bEnableClipPlane_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase = { "ClipPlaneBase", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipPlaneBase_MetaData), NewProp_ClipPlaneBase_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal = { "ClipPlaneNormal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USceneCaptureComponent2D, ClipPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClipPlaneNormal_MetaData), NewProp_ClipPlaneNormal_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bRenderInMainRenderer_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bRenderInMainRenderer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bRenderInMainRenderer = { "bRenderInMainRenderer", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bRenderInMainRenderer_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRenderInMainRenderer_MetaData), NewProp_bRenderInMainRenderer_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bCameraCutThisFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000002004, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraCutThisFrame_MetaData), NewProp_bCameraCutThisFrame_MetaData) };
void Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit(void* Obj)
{
	((USceneCaptureComponent2D*)Obj)->bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent = { "bConsiderUnrenderedOpaquePixelAsFullyTranslucent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(USceneCaptureComponent2D), &Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData), NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ProjectionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_FOVAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_OrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bAutoCalculateOrthoPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_AutoPlaneShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUpdateOrthoPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCameraHeightAsViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_TextureTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CompositeMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bOverride_CustomNearClippingPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomNearClippingPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseCustomProjectionMatrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_CustomProjectionMatrix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bUseFauxOrthoViewPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableOrthographicTiling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumXTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_NumYTiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bEnableClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneBase,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_ClipPlaneNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bRenderInMainRenderer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bCameraCutThisFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USceneCaptureComponent2D_Statics::NewProp_bConsiderUnrenderedOpaquePixelAsFullyTranslucent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USceneCaptureComponent2D_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USceneCaptureComponent2D_Statics::ClassParams = {
	&USceneCaptureComponent2D::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::PropPointers),
	0,
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams), Z_Construct_UClass_USceneCaptureComponent2D_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USceneCaptureComponent2D()
{
	if (!Z_Registration_Info_UClass_USceneCaptureComponent2D.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USceneCaptureComponent2D.OuterSingleton, Z_Construct_UClass_USceneCaptureComponent2D_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USceneCaptureComponent2D.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USceneCaptureComponent2D>()
{
	return USceneCaptureComponent2D::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USceneCaptureComponent2D);
USceneCaptureComponent2D::~USceneCaptureComponent2D() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(USceneCaptureComponent2D)
// End Class USceneCaptureComponent2D

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USceneCaptureComponent2D, USceneCaptureComponent2D::StaticClass, TEXT("USceneCaptureComponent2D"), &Z_Registration_Info_UClass_USceneCaptureComponent2D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USceneCaptureComponent2D), 1437975073U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_1402192558(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_SceneCaptureComponent2D_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
