// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum ECameraProjectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraProjectionMode;
static UEnum* ECameraProjectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraProjectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraProjectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraProjectionMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraProjectionMode"));
	}
	return Z_Registration_Info_UEnum_ECameraProjectionMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECameraProjectionMode::Type>()
{
	return ECameraProjectionMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "//@TODO: Document\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "Orthographic.Name", "ECameraProjectionMode::Orthographic" },
		{ "Perspective.Name", "ECameraProjectionMode::Perspective" },
		{ "ToolTip", "@TODO: Document" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraProjectionMode::Perspective", (int64)ECameraProjectionMode::Perspective },
		{ "ECameraProjectionMode::Orthographic", (int64)ECameraProjectionMode::Orthographic },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECameraProjectionMode",
	"ECameraProjectionMode::Type",
	Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECameraProjectionMode()
{
	if (!Z_Registration_Info_UEnum_ECameraProjectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraProjectionMode.InnerSingleton, Z_Construct_UEnum_Engine_ECameraProjectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraProjectionMode.InnerSingleton;
}
// End Enum ECameraProjectionMode

// Begin Enum ECameraShakePlaySpace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECameraShakePlaySpace;
static UEnum* ECameraShakePlaySpace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECameraShakePlaySpace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECameraShakePlaySpace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ECameraShakePlaySpace, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ECameraShakePlaySpace"));
	}
	return Z_Registration_Info_UEnum_ECameraShakePlaySpace.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ECameraShakePlaySpace>()
{
	return ECameraShakePlaySpace_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CameraLocal.Comment", "/** This anim is applied in camera space. */" },
		{ "CameraLocal.Name", "ECameraShakePlaySpace::CameraLocal" },
		{ "CameraLocal.ToolTip", "This anim is applied in camera space." },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "UserDefined.Comment", "/** This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix). */" },
		{ "UserDefined.Name", "ECameraShakePlaySpace::UserDefined" },
		{ "UserDefined.ToolTip", "This anim is applied in a user-specified space (defined by UserPlaySpaceMatrix)." },
		{ "World.Comment", "/** This anim is applied in world space. */" },
		{ "World.Name", "ECameraShakePlaySpace::World" },
		{ "World.ToolTip", "This anim is applied in world space." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECameraShakePlaySpace::CameraLocal", (int64)ECameraShakePlaySpace::CameraLocal },
		{ "ECameraShakePlaySpace::World", (int64)ECameraShakePlaySpace::World },
		{ "ECameraShakePlaySpace::UserDefined", (int64)ECameraShakePlaySpace::UserDefined },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ECameraShakePlaySpace",
	"ECameraShakePlaySpace",
	Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace()
{
	if (!Z_Registration_Info_UEnum_ECameraShakePlaySpace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECameraShakePlaySpace.InnerSingleton, Z_Construct_UEnum_Engine_ECameraShakePlaySpace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECameraShakePlaySpace.InnerSingleton;
}
// End Enum ECameraShakePlaySpace

// Begin ScriptStruct FMinimalViewInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MinimalViewInfo;
class UScriptStruct* FMinimalViewInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalViewInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MinimalViewInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMinimalViewInfo, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MinimalViewInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MinimalViewInfo.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMinimalViewInfo>()
{
	return FMinimalViewInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMinimalViewInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Location */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Rotation */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The horizontal field of view (in degrees) in perspective mode (ignored in orthographic mode). */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The horizontal field of view (in degrees) in perspective mode (ignored in orthographic mode)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DesiredFOV_MetaData[] = {
		{ "Comment", "/** The originally desired horizontal field of view before any adjustments to account for different aspect ratios */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The originally desired horizontal field of view before any adjustments to account for different aspect ratios" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoWidth_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The desired width (in world units) of the orthographic view (ignored in Perspective mode) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The desired width (in world units) of the orthographic view (ignored in Perspective mode)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCalculateOrthoPlanes_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Option for the Ortho camera to automatically calculated the near/far plane */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Option for the Ortho camera to automatically calculated the near/far plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoPlaneShift_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Manually adjusts the planes of this camera, maintaining the distance between them. Positive moves out to the farplane, negative towards the near plane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUpdateOrthoPlanes_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting*/" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Adjusts the near/far planes and the view origin of the current camera automatically to avoid clipping and light artefacting" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCameraHeightAsViewTarget_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If UpdateOrthoPlanes is enabled, this setting will use the cameras current height to compensate the distance to the general view (as a pseudo distance to view target when one isn't present)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoNearClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The near plane distance of the orthographic view (in world units) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The near plane distance of the orthographic view (in world units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OrthoFarClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The far plane distance of the orthographic view (in world units) */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The far plane distance of the orthographic view (in world units)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerspectiveNearClipPlane_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** The near plane distance of the perspective view (in world units). Set to a negative value to use the default global value of GNearClippingPlane */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The near plane distance of the perspective view (in world units). Set to a negative value to use the default global value of GNearClippingPlane" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// Aspect Ratio (Width/Height)\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Aspect Ratio (Width/Height)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bConstrainAspectRatio_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If bConstrainAspectRatio is true, black bars will be added if the destination view has a different aspect ratio than this camera requested." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseFieldOfViewForLOD_MetaData[] = {
		{ "Category", "CameraSettings" },
		{ "Comment", "// If true, account for the field of view angle when computing which level of detail to use for meshes.\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "If true, account for the field of view angle when computing which level of detail to use for meshes." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionMode_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "// The type of camera\n" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "The type of camera" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessBlendWeight_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Indicates if PostProcessSettings should be applied. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Indicates if PostProcessSettings should be applied." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessSettings_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Post-process settings to use if PostProcessBlendWeight is non-zero. */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Post-process settings to use if PostProcessBlendWeight is non-zero." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Off-axis / off-center projection offset as proportion of screen dimensions */" },
		{ "ModuleRelativePath", "Classes/Camera/CameraTypes.h" },
		{ "ToolTip", "Off-axis / off-center projection offset as proportion of screen dimensions" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoWidth;
	static void NewProp_bAutoCalculateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCalculateOrthoPlanes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AutoPlaneShift;
	static void NewProp_bUpdateOrthoPlanes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateOrthoPlanes;
	static void NewProp_bUseCameraHeightAsViewTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCameraHeightAsViewTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoNearClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OrthoFarClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PerspectiveNearClipPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static void NewProp_bConstrainAspectRatio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bConstrainAspectRatio;
	static void NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFieldOfViewForLOD;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PostProcessBlendWeight;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PostProcessSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMinimalViewInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, FOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOV_MetaData), NewProp_FOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV = { "DesiredFOV", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, DesiredFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DesiredFOV_MetaData), NewProp_DesiredFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth = { "OrthoWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, OrthoWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoWidth_MetaData), NewProp_OrthoWidth_MetaData) };
void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit(void* Obj)
{
	((FMinimalViewInfo*)Obj)->bAutoCalculateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bAutoCalculateOrthoPlanes = { "bAutoCalculateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bAutoCalculateOrthoPlanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCalculateOrthoPlanes_MetaData), NewProp_bAutoCalculateOrthoPlanes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AutoPlaneShift = { "AutoPlaneShift", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, AutoPlaneShift), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoPlaneShift_MetaData), NewProp_AutoPlaneShift_MetaData) };
void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUpdateOrthoPlanes_SetBit(void* Obj)
{
	((FMinimalViewInfo*)Obj)->bUpdateOrthoPlanes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUpdateOrthoPlanes = { "bUpdateOrthoPlanes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUpdateOrthoPlanes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUpdateOrthoPlanes_MetaData), NewProp_bUpdateOrthoPlanes_MetaData) };
void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit(void* Obj)
{
	((FMinimalViewInfo*)Obj)->bUseCameraHeightAsViewTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseCameraHeightAsViewTarget = { "bUseCameraHeightAsViewTarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseCameraHeightAsViewTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCameraHeightAsViewTarget_MetaData), NewProp_bUseCameraHeightAsViewTarget_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane = { "OrthoNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, OrthoNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoNearClipPlane_MetaData), NewProp_OrthoNearClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane = { "OrthoFarClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, OrthoFarClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OrthoFarClipPlane_MetaData), NewProp_OrthoFarClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane = { "PerspectiveNearClipPlane", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, PerspectiveNearClipPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerspectiveNearClipPlane_MetaData), NewProp_PerspectiveNearClipPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, AspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AspectRatio_MetaData), NewProp_AspectRatio_MetaData) };
void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_SetBit(void* Obj)
{
	((FMinimalViewInfo*)Obj)->bConstrainAspectRatio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio = { "bConstrainAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bConstrainAspectRatio_MetaData), NewProp_bConstrainAspectRatio_MetaData) };
void Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_SetBit(void* Obj)
{
	((FMinimalViewInfo*)Obj)->bUseFieldOfViewForLOD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD = { "bUseFieldOfViewForLOD", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FMinimalViewInfo), &Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseFieldOfViewForLOD_MetaData), NewProp_bUseFieldOfViewForLOD_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode = { "ProjectionMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, ProjectionMode), Z_Construct_UEnum_Engine_ECameraProjectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionMode_MetaData), NewProp_ProjectionMode_MetaData) }; // 785982369
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight = { "PostProcessBlendWeight", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, PostProcessBlendWeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessBlendWeight_MetaData), NewProp_PostProcessBlendWeight_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings = { "PostProcessSettings", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, PostProcessSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PostProcessSettings_MetaData), NewProp_PostProcessSettings_MetaData) }; // 1858651484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000000022805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMinimalViewInfo, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OffCenterProjectionOffset_MetaData), NewProp_OffCenterProjectionOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_FOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_DesiredFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bAutoCalculateOrthoPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AutoPlaneShift,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUpdateOrthoPlanes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseCameraHeightAsViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoNearClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OrthoFarClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PerspectiveNearClipPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_AspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bConstrainAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_bUseFieldOfViewForLOD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_ProjectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessBlendWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_PostProcessSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewProp_OffCenterProjectionOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"MinimalViewInfo",
	Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::PropPointers),
	sizeof(FMinimalViewInfo),
	alignof(FMinimalViewInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MinimalViewInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MinimalViewInfo.InnerSingleton, Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MinimalViewInfo.InnerSingleton;
}
// End ScriptStruct FMinimalViewInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ECameraProjectionMode_StaticEnum, TEXT("ECameraProjectionMode"), &Z_Registration_Info_UEnum_ECameraProjectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 785982369U) },
		{ ECameraShakePlaySpace_StaticEnum, TEXT("ECameraShakePlaySpace"), &Z_Registration_Info_UEnum_ECameraShakePlaySpace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2661961121U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMinimalViewInfo::StaticStruct, Z_Construct_UScriptStruct_FMinimalViewInfo_Statics::NewStructOps, TEXT("MinimalViewInfo"), &Z_Registration_Info_UScriptStruct_MinimalViewInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMinimalViewInfo), 994039058U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_3606506485(TEXT("/Script/Engine"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
