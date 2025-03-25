// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCameraComponent Function AddOrUpdateBlendable
struct Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics
{
	struct CameraComponent_eventAddOrUpdateBlendable_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableObject;
		float InWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight */" },
		{ "CPP_Default_InWeight", "1.000000" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Adds an Blendable (implements IBlendableInterface) to the array of Blendables (if it doesn't exist) and update the weight" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight = { "InWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventAddOrUpdateBlendable_Parms, InWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InBlendableObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::NewProp_InWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "AddOrUpdateBlendable", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::CameraComponent_eventAddOrUpdateBlendable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::CameraComponent_eventAddOrUpdateBlendable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execAddOrUpdateBlendable)
{
	P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddOrUpdateBlendable(Z_Param_InBlendableObject,Z_Param_InWeight);
	P_NATIVE_END;
}
// End Class UCameraComponent Function AddOrUpdateBlendable

// Begin Class UCameraComponent Function GetCameraView
struct Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics
{
	struct CameraComponent_eventGetCameraView_Parms
	{
		float DeltaTime;
		FMinimalViewInfo DesiredView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "Comment", "/**\n\x09 * Returns camera's Point of View.\n\x09 * Called by Camera class. Subclass and postprocess to add any effects.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Returns camera's Point of View.\nCalled by Camera class. Subclass and postprocess to add any effects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DesiredView = { "DesiredView", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventGetCameraView_Parms, DesiredView), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(0, nullptr) }; // 994039058
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::NewProp_DesiredView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "GetCameraView", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::CameraComponent_eventGetCameraView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::CameraComponent_eventGetCameraView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_GetCameraView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_GetCameraView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execGetCameraView)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_STRUCT_REF(FMinimalViewInfo,Z_Param_Out_DesiredView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetCameraView(Z_Param_DeltaTime,Z_Param_Out_DesiredView);
	P_NATIVE_END;
}
// End Class UCameraComponent Function GetCameraView

// Begin Class UCameraComponent Function GetFilmbackText
#if WITH_EDITOR
struct Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics
{
	struct CameraComponent_eventGetFilmbackText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Returns the filmback text used for burnins on preview viewports\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Returns the filmback text used for burnins on preview viewports" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventGetFilmbackText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "GetFilmbackText", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::CameraComponent_eventGetFilmbackText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x60020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::CameraComponent_eventGetFilmbackText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_GetFilmbackText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_GetFilmbackText_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UCameraComponent::execGetFilmbackText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetFilmbackText();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UCameraComponent Function GetFilmbackText

// Begin Class UCameraComponent Function OnCameraMeshHiddenChanged
struct Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09* Internal function for updating the camera mesh visibility in PIE\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Internal function for updating the camera mesh visibility in PIE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "OnCameraMeshHiddenChanged", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execOnCameraMeshHiddenChanged)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCameraMeshHiddenChanged();
	P_NATIVE_END;
}
// End Class UCameraComponent Function OnCameraMeshHiddenChanged

// Begin Class UCameraComponent Function RemoveBlendable
struct Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics
{
	struct CameraComponent_eventRemoveBlendable_Parms
	{
		TScriptInterface<IBlendableInterface> InBlendableObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Removes a blendable. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Removes a blendable." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InBlendableObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::NewProp_InBlendableObject = { "InBlendableObject", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventRemoveBlendable_Parms, InBlendableObject), Z_Construct_UClass_UBlendableInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::NewProp_InBlendableObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "RemoveBlendable", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::CameraComponent_eventRemoveBlendable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::CameraComponent_eventRemoveBlendable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_RemoveBlendable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_RemoveBlendable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execRemoveBlendable)
{
	P_GET_TINTERFACE(IBlendableInterface,Z_Param_InBlendableObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveBlendable(Z_Param_InBlendableObject);
	P_NATIVE_END;
}
// End Class UCameraComponent Function RemoveBlendable

// Begin Class UCameraComponent Function SetAspectRatio
struct Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics
{
	struct CameraComponent_eventSetAspectRatio_Parms
	{
		float InAspectRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAspectRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::NewProp_InAspectRatio = { "InAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetAspectRatio_Parms, InAspectRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::NewProp_InAspectRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::CameraComponent_eventSetAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::CameraComponent_eventSetAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetAspectRatio)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAspectRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAspectRatio(Z_Param_InAspectRatio);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetAspectRatio

// Begin Class UCameraComponent Function SetAspectRatioAxisConstraint
struct Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics
{
	struct CameraComponent_eventSetAspectRatioAxisConstraint_Parms
	{
		TEnumAsByte<EAspectRatioAxisConstraint> InAspectRatioAxisConstraint;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InAspectRatioAxisConstraint;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::NewProp_InAspectRatioAxisConstraint = { "InAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetAspectRatioAxisConstraint_Parms, InAspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(0, nullptr) }; // 707974947
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::NewProp_InAspectRatioAxisConstraint,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetAspectRatioAxisConstraint", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::CameraComponent_eventSetAspectRatioAxisConstraint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::CameraComponent_eventSetAspectRatioAxisConstraint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetAspectRatioAxisConstraint)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InAspectRatioAxisConstraint);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAspectRatioAxisConstraint(EAspectRatioAxisConstraint(Z_Param_InAspectRatioAxisConstraint));
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetAspectRatioAxisConstraint

// Begin Class UCameraComponent Function SetAutoCalculateOrthoPlanes
struct Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics
{
	struct CameraComponent_eventSetAutoCalculateOrthoPlanes_Parms
	{
		bool bAutoCalculate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bAutoCalculate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::NewProp_bAutoCalculate_SetBit(void* Obj)
{
	((CameraComponent_eventSetAutoCalculateOrthoPlanes_Parms*)Obj)->bAutoCalculate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::NewProp_bAutoCalculate = { "bAutoCalculate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraComponent_eventSetAutoCalculateOrthoPlanes_Parms), &Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::NewProp_bAutoCalculate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::NewProp_bAutoCalculate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetAutoCalculateOrthoPlanes", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::CameraComponent_eventSetAutoCalculateOrthoPlanes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::CameraComponent_eventSetAutoCalculateOrthoPlanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetAutoCalculateOrthoPlanes)
{
	P_GET_UBOOL(Z_Param_bAutoCalculate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoCalculateOrthoPlanes(Z_Param_bAutoCalculate);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetAutoCalculateOrthoPlanes

// Begin Class UCameraComponent Function SetAutoPlaneShift
struct Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics
{
	struct CameraComponent_eventSetAutoPlaneShift_Parms
	{
		float InAutoPlaneShift;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAutoPlaneShift;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::NewProp_InAutoPlaneShift = { "InAutoPlaneShift", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetAutoPlaneShift_Parms, InAutoPlaneShift), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::NewProp_InAutoPlaneShift,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetAutoPlaneShift", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::CameraComponent_eventSetAutoPlaneShift_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::CameraComponent_eventSetAutoPlaneShift_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetAutoPlaneShift)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAutoPlaneShift);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAutoPlaneShift(Z_Param_InAutoPlaneShift);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetAutoPlaneShift

// Begin Class UCameraComponent Function SetConstraintAspectRatio
struct Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics
{
	struct CameraComponent_eventSetConstraintAspectRatio_Parms
	{
		bool bInConstrainAspectRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInConstrainAspectRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio_SetBit(void* Obj)
{
	((CameraComponent_eventSetConstraintAspectRatio_Parms*)Obj)->bInConstrainAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio = { "bInConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraComponent_eventSetConstraintAspectRatio_Parms), &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::NewProp_bInConstrainAspectRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetConstraintAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::CameraComponent_eventSetConstraintAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::CameraComponent_eventSetConstraintAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetConstraintAspectRatio)
{
	P_GET_UBOOL(Z_Param_bInConstrainAspectRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConstraintAspectRatio(Z_Param_bInConstrainAspectRatio);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetConstraintAspectRatio

// Begin Class UCameraComponent Function SetFieldOfView
struct Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics
{
	struct CameraComponent_eventSetFieldOfView_Parms
	{
		float InFieldOfView;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFieldOfView;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::NewProp_InFieldOfView = { "InFieldOfView", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetFieldOfView_Parms, InFieldOfView), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::NewProp_InFieldOfView,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::CameraComponent_eventSetFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::CameraComponent_eventSetFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetFieldOfView)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFieldOfView);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFieldOfView(Z_Param_InFieldOfView);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetFieldOfView

// Begin Class UCameraComponent Function SetOrthoFarClipPlane
struct Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics
{
	struct CameraComponent_eventSetOrthoFarClipPlane_Parms
	{
		float InOrthoFarClipPlane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOrthoFarClipPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::NewProp_InOrthoFarClipPlane = { "InOrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetOrthoFarClipPlane_Parms, InOrthoFarClipPlane), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::NewProp_InOrthoFarClipPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoFarClipPlane", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::CameraComponent_eventSetOrthoFarClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::CameraComponent_eventSetOrthoFarClipPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetOrthoFarClipPlane)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoFarClipPlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrthoFarClipPlane(Z_Param_InOrthoFarClipPlane);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetOrthoFarClipPlane

// Begin Class UCameraComponent Function SetOrthoNearClipPlane
struct Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics
{
	struct CameraComponent_eventSetOrthoNearClipPlane_Parms
	{
		float InOrthoNearClipPlane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOrthoNearClipPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::NewProp_InOrthoNearClipPlane = { "InOrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetOrthoNearClipPlane_Parms, InOrthoNearClipPlane), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::NewProp_InOrthoNearClipPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoNearClipPlane", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::CameraComponent_eventSetOrthoNearClipPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::CameraComponent_eventSetOrthoNearClipPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetOrthoNearClipPlane)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoNearClipPlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrthoNearClipPlane(Z_Param_InOrthoNearClipPlane);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetOrthoNearClipPlane

// Begin Class UCameraComponent Function SetOrthoWidth
struct Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics
{
	struct CameraComponent_eventSetOrthoWidth_Parms
	{
		float InOrthoWidth;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InOrthoWidth;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::NewProp_InOrthoWidth = { "InOrthoWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetOrthoWidth_Parms, InOrthoWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::NewProp_InOrthoWidth,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetOrthoWidth", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::CameraComponent_eventSetOrthoWidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::CameraComponent_eventSetOrthoWidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetOrthoWidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetOrthoWidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetOrthoWidth)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InOrthoWidth);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOrthoWidth(Z_Param_InOrthoWidth);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetOrthoWidth

// Begin Class UCameraComponent Function SetPostProcessBlendWeight
struct Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics
{
	struct CameraComponent_eventSetPostProcessBlendWeight_Parms
	{
		float InPostProcessBlendWeight;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InPostProcessBlendWeight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::NewProp_InPostProcessBlendWeight = { "InPostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetPostProcessBlendWeight_Parms, InPostProcessBlendWeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::NewProp_InPostProcessBlendWeight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetPostProcessBlendWeight", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::CameraComponent_eventSetPostProcessBlendWeight_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::CameraComponent_eventSetPostProcessBlendWeight_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetPostProcessBlendWeight)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InPostProcessBlendWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPostProcessBlendWeight(Z_Param_InPostProcessBlendWeight);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetPostProcessBlendWeight

// Begin Class UCameraComponent Function SetProjectionMode
struct Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics
{
	struct CameraComponent_eventSetProjectionMode_Parms
	{
		TEnumAsByte<ECameraProjectionMode::Type> InProjectionMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InProjectionMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::NewProp_InProjectionMode = { "InProjectionMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CameraComponent_eventSetProjectionMode_Parms, InProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(0, nullptr) }; // 785982369
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::NewProp_InProjectionMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetProjectionMode", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::CameraComponent_eventSetProjectionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::CameraComponent_eventSetProjectionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetProjectionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetProjectionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetProjectionMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InProjectionMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetProjectionMode(ECameraProjectionMode::Type(Z_Param_InProjectionMode));
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetProjectionMode

// Begin Class UCameraComponent Function SetUpdateOrthoPlanes
struct Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics
{
	struct CameraComponent_eventSetUpdateOrthoPlanes_Parms
	{
		bool bInUpdateOrthoPlanes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUpdateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUpdateOrthoPlanes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::NewProp_bInUpdateOrthoPlanes_SetBit(void* Obj)
{
	((CameraComponent_eventSetUpdateOrthoPlanes_Parms*)Obj)->bInUpdateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::NewProp_bInUpdateOrthoPlanes = { "bInUpdateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraComponent_eventSetUpdateOrthoPlanes_Parms), &Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::NewProp_bInUpdateOrthoPlanes_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::NewProp_bInUpdateOrthoPlanes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetUpdateOrthoPlanes", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::CameraComponent_eventSetUpdateOrthoPlanes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::CameraComponent_eventSetUpdateOrthoPlanes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetUpdateOrthoPlanes)
{
	P_GET_UBOOL(Z_Param_bInUpdateOrthoPlanes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUpdateOrthoPlanes(Z_Param_bInUpdateOrthoPlanes);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetUpdateOrthoPlanes

// Begin Class UCameraComponent Function SetUseCameraHeightAsViewTarget
struct Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics
{
	struct CameraComponent_eventSetUseCameraHeightAsViewTarget_Parms
	{
		bool bInUseCameraHeightAsViewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUseCameraHeightAsViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseCameraHeightAsViewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::NewProp_bInUseCameraHeightAsViewTarget_SetBit(void* Obj)
{
	((CameraComponent_eventSetUseCameraHeightAsViewTarget_Parms*)Obj)->bInUseCameraHeightAsViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::NewProp_bInUseCameraHeightAsViewTarget = { "bInUseCameraHeightAsViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraComponent_eventSetUseCameraHeightAsViewTarget_Parms), &Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::NewProp_bInUseCameraHeightAsViewTarget_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::NewProp_bInUseCameraHeightAsViewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetUseCameraHeightAsViewTarget", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::CameraComponent_eventSetUseCameraHeightAsViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::CameraComponent_eventSetUseCameraHeightAsViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetUseCameraHeightAsViewTarget)
{
	P_GET_UBOOL(Z_Param_bInUseCameraHeightAsViewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseCameraHeightAsViewTarget(Z_Param_bInUseCameraHeightAsViewTarget);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetUseCameraHeightAsViewTarget

// Begin Class UCameraComponent Function SetUseFieldOfViewForLOD
struct Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics
{
	struct CameraComponent_eventSetUseFieldOfViewForLOD_Parms
	{
		bool bInUseFieldOfViewForLOD;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bInUseFieldOfViewForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInUseFieldOfViewForLOD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD_SetBit(void* Obj)
{
	((CameraComponent_eventSetUseFieldOfViewForLOD_Parms*)Obj)->bInUseFieldOfViewForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD = { "bInUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CameraComponent_eventSetUseFieldOfViewForLOD_Parms), &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::NewProp_bInUseFieldOfViewForLOD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCameraComponent, nullptr, "SetUseFieldOfViewForLOD", nullptr, nullptr, Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::CameraComponent_eventSetUseFieldOfViewForLOD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::CameraComponent_eventSetUseFieldOfViewForLOD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCameraComponent::execSetUseFieldOfViewForLOD)
{
	P_GET_UBOOL(Z_Param_bInUseFieldOfViewForLOD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetUseFieldOfViewForLOD(Z_Param_bInUseFieldOfViewForLOD);
	P_NATIVE_END;
}
// End Class UCameraComponent Function SetUseFieldOfViewForLOD

// Begin Class UCameraComponent
void UCameraComponent::StaticRegisterNativesUCameraComponent()
{
	UClass* Class = UCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddOrUpdateBlendable", &UCameraComponent::execAddOrUpdateBlendable },
		{ "GetCameraView", &UCameraComponent::execGetCameraView },
#if WITH_EDITOR
		{ "GetFilmbackText", &UCameraComponent::execGetFilmbackText },
#endif // WITH_EDITOR
		{ "OnCameraMeshHiddenChanged", &UCameraComponent::execOnCameraMeshHiddenChanged },
		{ "RemoveBlendable", &UCameraComponent::execRemoveBlendable },
		{ "SetAspectRatio", &UCameraComponent::execSetAspectRatio },
		{ "SetAspectRatioAxisConstraint", &UCameraComponent::execSetAspectRatioAxisConstraint },
		{ "SetAutoCalculateOrthoPlanes", &UCameraComponent::execSetAutoCalculateOrthoPlanes },
		{ "SetAutoPlaneShift", &UCameraComponent::execSetAutoPlaneShift },
		{ "SetConstraintAspectRatio", &UCameraComponent::execSetConstraintAspectRatio },
		{ "SetFieldOfView", &UCameraComponent::execSetFieldOfView },
		{ "SetOrthoFarClipPlane", &UCameraComponent::execSetOrthoFarClipPlane },
		{ "SetOrthoNearClipPlane", &UCameraComponent::execSetOrthoNearClipPlane },
		{ "SetOrthoWidth", &UCameraComponent::execSetOrthoWidth },
		{ "SetPostProcessBlendWeight", &UCameraComponent::execSetPostProcessBlendWeight },
		{ "SetProjectionMode", &UCameraComponent::execSetProjectionMode },
		{ "SetUpdateOrthoPlanes", &UCameraComponent::execSetUpdateOrthoPlanes },
		{ "SetUseCameraHeightAsViewTarget", &UCameraComponent::execSetUseCameraHeightAsViewTarget },
		{ "SetUseFieldOfViewForLOD", &UCameraComponent::execSetUseFieldOfViewForLOD },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCameraComponent);
UClass* Z_Construct_UClass_UCameraComponent_NoRegister()
{
	return UCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n  * Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.\n  * The default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings.\n  */" },
		{ "HideCategories", "Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "IncludePath", "Camera/CameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Represents a camera viewpoint and settings, such as projection type, field of view, and post-process overrides.\nThe default behavior for an actor used as the camera view target is to look for an attached camera component and use its location, rotation, and settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FieldOfView_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "360.0" },
		{ "ClampMin", "0.001" },
		{ "Comment", "/** \n\x09 * The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode)\n\x09 *\n\x09 * If the aspect ratio axis constraint (from ULocalPlayer, ALevelSequenceActor, etc.) is set to maintain vertical FOV, the AspectRatio\n\x09 * property will be used to convert this property's value to a vertical FOV.\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The horizontal field of view (in degrees) in perspective mode (ignored in Orthographic mode)\n\nIf the aspect ratio axis constraint (from ULocalPlayer, ALevelSequenceActor, etc.) is set to maintain vertical FOV, the AspectRatio\nproperty will be used to convert this property's value to a vertical FOV." },
		{ "UIMax", "170" },
		{ "UIMin", "5.0" },
		{ "Units", "deg" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateOrthoPlanes_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Automatically determine a min/max Near/Far clip plane position depending on OrthoWidth value*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Automatically determine a min/max Near/Far clip plane position depending on OrthoWidth value" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPlaneShift_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane */" },
		{ "EditCondition", "bAutoCalculateOrthoPlanes" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** The near plane distance of the orthographic view (in world units) */" },
		{ "EditCondition", "!bAutoCalculateOrthoPlanes" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** The far plane distance of the orthographic view (in world units) */" },
		{ "EditCondition", "!bAutoCalculateOrthoPlanes" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOrthoPlanes_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraHeightAsViewTarget_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "/** If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present) */" },
		{ "EditCondition", "bUpdateOrthoPlanes" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "ClampMax", "100.0" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/** Aspect Ratio (Width/Height) */" },
		{ "EditCondition", "bConstrainAspectRatio" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Aspect Ratio (Width/Height)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/** Override for the default aspect ratio axis constraint defined on the local player */" },
		{ "EditCondition", "bOverrideAspectRatioAxisConstraint" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Override for the default aspect ratio axis constraint defined on the local player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/** If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideAspectRatioAxisConstraint_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/** Whether to override the default aspect ratio axis constraint defined on the local player */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Whether to override the default aspect ratio axis constraint defined on the local player" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "// If true, account for the field of view angle when computing which level of detail to use for meshes.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawFrustumAllowed_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The Frustum visibility flag for draw frustum component initialization\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The Frustum visibility flag for draw frustum component initialization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCameraMeshHiddenInGame_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If the camera mesh is visible in game. Only relevant when running editor builds. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If the camera mesh is visible in game. Only relevant when running editor builds." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLockToHmd_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/** True if the camera's orientation and position should be locked to the HMD */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "True if the camera's orientation and position should be locked to the HMD" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUsePawnControlRotation_MetaData[] = {
		{ "Category", "CameraOptions" },
		{ "Comment", "/**\n\x09 * If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n\x09 * @see APawn::GetViewRotation()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "If this camera component is placed on a pawn, should it use the view/control rotation of the pawn where possible?\n@see APawn::GetViewRotation()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "// The type of camera\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "The type of camera" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraMesh_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Indicates if PostProcessSettings should be used when using this Camera to view through. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "Indicates if PostProcessSettings should be used when using this Camera to view through." },
		{ "UIMax", "1.0" },
		{ "UIMin", "0.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "PostProcess" },
		{ "Comment", "/** Post process settings to use for this camera. Don't forget to check the properties you want to override */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Post process settings to use for this camera. Don't forget to check the properties you want to override" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseControllerViewRotation_MetaData[] = {
		{ "Comment", "/** DEPRECATED: use bUsePawnControlRotation instead */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraComponent.h" },
		{ "ToolTip", "DEPRECATED: use bUsePawnControlRotation instead" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FieldOfView;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
	static void NewProp_bAutoCalculateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateOrthoPlanes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoPlaneShift;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
	static void NewProp_bUpdateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOrthoPlanes;
	static void NewProp_bUseCameraHeightAsViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraHeightAsViewTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AspectRatioAxisConstraint;
	static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
	static void NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideAspectRatioAxisConstraint;
	static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
#if WITH_EDITORONLY_DATA
	static void NewProp_bDrawFrustumAllowed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawFrustumAllowed;
	static void NewProp_bCameraMeshHiddenInGame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraMeshHiddenInGame;
#endif // WITH_EDITORONLY_DATA
	static void NewProp_bLockToHmd_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockToHmd;
	static void NewProp_bUsePawnControlRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePawnControlRotation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraMesh;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
#if WITH_EDITORONLY_DATA
	static void NewProp_bUseControllerViewRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseControllerViewRotation;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCameraComponent_AddOrUpdateBlendable, "AddOrUpdateBlendable" }, // 3040898659
		{ &Z_Construct_UFunction_UCameraComponent_GetCameraView, "GetCameraView" }, // 372591667
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UCameraComponent_GetFilmbackText, "GetFilmbackText" }, // 2684798786
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UCameraComponent_OnCameraMeshHiddenChanged, "OnCameraMeshHiddenChanged" }, // 1610109950
		{ &Z_Construct_UFunction_UCameraComponent_RemoveBlendable, "RemoveBlendable" }, // 2426426146
		{ &Z_Construct_UFunction_UCameraComponent_SetAspectRatio, "SetAspectRatio" }, // 154840828
		{ &Z_Construct_UFunction_UCameraComponent_SetAspectRatioAxisConstraint, "SetAspectRatioAxisConstraint" }, // 2202252521
		{ &Z_Construct_UFunction_UCameraComponent_SetAutoCalculateOrthoPlanes, "SetAutoCalculateOrthoPlanes" }, // 1030503689
		{ &Z_Construct_UFunction_UCameraComponent_SetAutoPlaneShift, "SetAutoPlaneShift" }, // 2822080330
		{ &Z_Construct_UFunction_UCameraComponent_SetConstraintAspectRatio, "SetConstraintAspectRatio" }, // 1215752068
		{ &Z_Construct_UFunction_UCameraComponent_SetFieldOfView, "SetFieldOfView" }, // 1519996155
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoFarClipPlane, "SetOrthoFarClipPlane" }, // 1113530990
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoNearClipPlane, "SetOrthoNearClipPlane" }, // 1775643696
		{ &Z_Construct_UFunction_UCameraComponent_SetOrthoWidth, "SetOrthoWidth" }, // 2889840876
		{ &Z_Construct_UFunction_UCameraComponent_SetPostProcessBlendWeight, "SetPostProcessBlendWeight" }, // 2973776400
		{ &Z_Construct_UFunction_UCameraComponent_SetProjectionMode, "SetProjectionMode" }, // 3079165629
		{ &Z_Construct_UFunction_UCameraComponent_SetUpdateOrthoPlanes, "SetUpdateOrthoPlanes" }, // 952648300
		{ &Z_Construct_UFunction_UCameraComponent_SetUseCameraHeightAsViewTarget, "SetUseCameraHeightAsViewTarget" }, // 1321349581
		{ &Z_Construct_UFunction_UCameraComponent_SetUseFieldOfViewForLOD, "SetUseFieldOfViewForLOD" }, // 4107509743
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView = { "FieldOfView", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, FieldOfView), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FieldOfView_MetaData), NewProp_FieldOfView_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoWidth_MetaData), NewProp_OrthoWidth_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bAutoCalculateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bAutoCalculateOrthoPlanes = { "bAutoCalculateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCalculateOrthoPlanes_MetaData), NewProp_bAutoCalculateOrthoPlanes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_AutoPlaneShift = { "AutoPlaneShift", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, AutoPlaneShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPlaneShift_MetaData), NewProp_AutoPlaneShift_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, OrthoNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoNearClipPlane_MetaData), NewProp_OrthoNearClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, OrthoFarClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoFarClipPlane_MetaData), NewProp_OrthoFarClipPlane_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUpdateOrthoPlanes_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bUpdateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUpdateOrthoPlanes = { "bUpdateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUpdateOrthoPlanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateOrthoPlanes_MetaData), NewProp_bUpdateOrthoPlanes_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bUseCameraHeightAsViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseCameraHeightAsViewTarget = { "bUseCameraHeightAsViewTarget", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraHeightAsViewTarget_MetaData), NewProp_bUseCameraHeightAsViewTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatioAxisConstraint = { "AspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, AspectRatioAxisConstraint), Z_Construct_UEnum_Engine_EAspectRatioAxisConstraint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatioAxisConstraint_MetaData), NewProp_AspectRatioAxisConstraint_MetaData) }; // 707974947
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bConstrainAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData), NewProp_bConstrainAspectRatio_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bOverrideAspectRatioAxisConstraint = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bOverrideAspectRatioAxisConstraint = { "bOverrideAspectRatioAxisConstraint", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bOverrideAspectRatioAxisConstraint_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideAspectRatioAxisConstraint_MetaData), NewProp_bOverrideAspectRatioAxisConstraint_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bUseFieldOfViewForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFieldOfViewForLOD_MetaData), NewProp_bUseFieldOfViewForLOD_MetaData) };
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bDrawFrustumAllowed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed = { "bDrawFrustumAllowed", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawFrustumAllowed_MetaData), NewProp_bDrawFrustumAllowed_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bCameraMeshHiddenInGame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame = { "bCameraMeshHiddenInGame", nullptr, (EPropertyFlags)0x0010000800000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCameraMeshHiddenInGame_MetaData), NewProp_bCameraMeshHiddenInGame_MetaData) };
#endif // WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bLockToHmd = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd = { "bLockToHmd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLockToHmd_MetaData), NewProp_bLockToHmd_MetaData) };
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bUsePawnControlRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation = { "bUsePawnControlRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUsePawnControlRotation_MetaData), NewProp_bUsePawnControlRotation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 785982369
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh = { "CameraMesh", nullptr, (EPropertyFlags)0x0124080800000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, CameraMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraMesh_MetaData), NewProp_CameraMesh_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, PostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCameraComponent, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 1858651484
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_SetBit(void* Obj)
{
	((UCameraComponent*)Obj)->bUseControllerViewRotation_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation = { "bUseControllerViewRotation", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCameraComponent), &Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseControllerViewRotation_MetaData), NewProp_bUseControllerViewRotation_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_FieldOfView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bAutoCalculateOrthoPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_AutoPlaneShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoNearClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_OrthoFarClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUpdateOrthoPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseCameraHeightAsViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_AspectRatioAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bOverrideAspectRatioAxisConstraint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseFieldOfViewForLOD,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bDrawFrustumAllowed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bCameraMeshHiddenInGame,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bLockToHmd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUsePawnControlRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_ProjectionMode,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_CameraMesh,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_PostProcessSettings,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCameraComponent_Statics::NewProp_bUseControllerViewRotation,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USceneComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCameraComponent_Statics::ClassParams = {
	&UCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCameraComponent()
{
	if (!Z_Registration_Info_UClass_UCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCameraComponent.OuterSingleton, Z_Construct_UClass_UCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCameraComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCameraComponent>()
{
	return UCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCameraComponent);
UCameraComponent::~UCameraComponent() {}
#if WITH_EDITORONLY_DATA
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCameraComponent)
#endif // WITH_EDITORONLY_DATA
// End Class UCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCameraComponent, UCameraComponent::StaticClass, TEXT("UCameraComponent"), &Z_Registration_Info_UClass_UCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCameraComponent), 1743991537U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_97114128(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
