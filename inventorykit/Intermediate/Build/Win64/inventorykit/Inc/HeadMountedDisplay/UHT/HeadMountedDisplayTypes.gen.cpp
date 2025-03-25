// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/HeadMountedDisplay/Public/HeadMountedDisplayTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHeadMountedDisplayTypes() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHandKeypointConversion();
HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UHandKeypointConversion_NoRegister();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType();
HEADMOUNTEDDISPLAY_API UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType();
HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRHMDData();
HEADMOUNTEDDISPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
UPackage* Z_Construct_UPackage__Script_HeadMountedDisplay();
// End Cross Module References

// Begin Enum EOrientPositionSelector
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrientPositionSelector;
static UEnum* EOrientPositionSelector_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EOrientPositionSelector"));
	}
	return Z_Registration_Info_UEnum_EOrientPositionSelector.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EOrientPositionSelector::Type>()
{
	return EOrientPositionSelector_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "Orientation.DisplayName", "Orientation" },
		{ "Orientation.Name", "EOrientPositionSelector::Orientation" },
		{ "OrientationAndPosition.DisplayName", "Orientation and Position" },
		{ "OrientationAndPosition.Name", "EOrientPositionSelector::OrientationAndPosition" },
		{ "Position.DisplayName", "Position" },
		{ "Position.Name", "EOrientPositionSelector::Position" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EOrientPositionSelector::Orientation", (int64)EOrientPositionSelector::Orientation },
		{ "EOrientPositionSelector::Position", (int64)EOrientPositionSelector::Position },
		{ "EOrientPositionSelector::OrientationAndPosition", (int64)EOrientPositionSelector::OrientationAndPosition },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EOrientPositionSelector",
	"EOrientPositionSelector::Type",
	Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector()
{
	if (!Z_Registration_Info_UEnum_EOrientPositionSelector.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrientPositionSelector.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EOrientPositionSelector_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EOrientPositionSelector.InnerSingleton;
}
// End Enum EOrientPositionSelector

// Begin Enum EHMDTrackingOrigin
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHMDTrackingOrigin;
static UEnum* EHMDTrackingOrigin_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHMDTrackingOrigin"));
	}
	return Z_Registration_Info_UEnum_EHMDTrackingOrigin.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDTrackingOrigin::Type>()
{
	return EHMDTrackingOrigin_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Specifies the type of tracking space origin we should use.  Be aware that not all devices support all Tracking Origin types. https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#reference-spaces\n*/" },
		{ "CustomOpenXR.Name", "EHMDTrackingOrigin::CustomOpenXR" },
		{ "CustomOpenXR.ToolTip", "Custom OpenXR tracking space of some kind. You cannot set this space explictly, it is automatically used by some platform plugin extensions." },
		{ "Local.Name", "EHMDTrackingOrigin::Local" },
		{ "Local.ToolTip", "For seated experiences. Always Supported. Typically centered around the HMDs initial position either at app startup or device startup.  Useful for seated experiences. Previously called Eye Space.  " },
		{ "LocalFloor.Name", "EHMDTrackingOrigin::LocalFloor" },
		{ "LocalFloor.ToolTip", "For standing stationary experiences. Typically centered around HMDs initial position either at app startup or device startup, with Z 0 set to match the floor as in the Stage Space. Falls back to local." },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "Stage.Name", "EHMDTrackingOrigin::Stage" },
		{ "Stage.ToolTip", "For walking-around experiences.  The origin will be at floor level and typically within a defined play areas who's bounds will be available. Falls back to local." },
		{ "ToolTip", "Specifies the type of tracking space origin we should use.  Be aware that not all devices support all Tracking Origin types. https://registry.khronos.org/OpenXR/specs/1.0/html/xrspec.html#reference-spaces" },
		{ "View.Name", "EHMDTrackingOrigin::View" },
		{ "View.ToolTip", "Previously sometimes used Eye space to query for the view transform, this space is fixed to the HMD, meaning that as the hmd moves this space moves relative to other spaces. This isn't used as a tracking origin." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHMDTrackingOrigin::View", (int64)EHMDTrackingOrigin::View },
		{ "EHMDTrackingOrigin::LocalFloor", (int64)EHMDTrackingOrigin::LocalFloor },
		{ "EHMDTrackingOrigin::Local", (int64)EHMDTrackingOrigin::Local },
		{ "EHMDTrackingOrigin::Stage", (int64)EHMDTrackingOrigin::Stage },
		{ "EHMDTrackingOrigin::CustomOpenXR", (int64)EHMDTrackingOrigin::CustomOpenXR },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EHMDTrackingOrigin",
	"EHMDTrackingOrigin::Type",
	Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin()
{
	if (!Z_Registration_Info_UEnum_EHMDTrackingOrigin.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHMDTrackingOrigin.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EHMDTrackingOrigin_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHMDTrackingOrigin.InnerSingleton;
}
// End Enum EHMDTrackingOrigin

// Begin Enum EHMDWornState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHMDWornState;
static UEnum* EHMDWornState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHMDWornState"));
	}
	return Z_Registration_Info_UEnum_EHMDWornState.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHMDWornState::Type>()
{
	return EHMDWornState_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown.\n*/" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "NotWorn.DisplayName", "Not Worn" },
		{ "NotWorn.Name", "EHMDWornState::NotWorn" },
		{ "ToolTip", "Stores if the user is wearing the HMD or not. For HMDs without a sensor to detect the user wearing it, the state defaults to Unknown." },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EHMDWornState::Unknown" },
		{ "Worn.DisplayName", "Worn" },
		{ "Worn.Name", "EHMDWornState::Worn" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHMDWornState::Unknown", (int64)EHMDWornState::Unknown },
		{ "EHMDWornState::Worn", (int64)EHMDWornState::Worn },
		{ "EHMDWornState::NotWorn", (int64)EHMDWornState::NotWorn },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EHMDWornState",
	"EHMDWornState::Type",
	Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState()
{
	if (!Z_Registration_Info_UEnum_EHMDWornState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHMDWornState.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EHMDWornState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHMDWornState.InnerSingleton;
}
// End Enum EHMDWornState

// Begin Enum EXRDeviceConnectionResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXRDeviceConnectionResult;
static UEnum* EXRDeviceConnectionResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRDeviceConnectionResult"));
	}
	return Z_Registration_Info_UEnum_EXRDeviceConnectionResult.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRDeviceConnectionResult::Type>()
{
	return EXRDeviceConnectionResult_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Enumeration of results from Connecting to Remote XR device\n*/" },
		{ "FeatureNotSupported.Name", "EXRDeviceConnectionResult::FeatureNotSupported" },
		{ "MiscFailure.Name", "EXRDeviceConnectionResult::MiscFailure" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "NoTrackingSystem.Name", "EXRDeviceConnectionResult::NoTrackingSystem" },
		{ "NoValidViewport.Name", "EXRDeviceConnectionResult::NoValidViewport" },
		{ "Success.Name", "EXRDeviceConnectionResult::Success" },
		{ "ToolTip", "Enumeration of results from Connecting to Remote XR device" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXRDeviceConnectionResult::NoTrackingSystem", (int64)EXRDeviceConnectionResult::NoTrackingSystem },
		{ "EXRDeviceConnectionResult::FeatureNotSupported", (int64)EXRDeviceConnectionResult::FeatureNotSupported },
		{ "EXRDeviceConnectionResult::NoValidViewport", (int64)EXRDeviceConnectionResult::NoValidViewport },
		{ "EXRDeviceConnectionResult::MiscFailure", (int64)EXRDeviceConnectionResult::MiscFailure },
		{ "EXRDeviceConnectionResult::Success", (int64)EXRDeviceConnectionResult::Success },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EXRDeviceConnectionResult",
	"EXRDeviceConnectionResult::Type",
	Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult()
{
	if (!Z_Registration_Info_UEnum_EXRDeviceConnectionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXRDeviceConnectionResult.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EXRDeviceConnectionResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXRDeviceConnectionResult.InnerSingleton;
}
// End Enum EXRDeviceConnectionResult

// Begin Enum EXRSystemFlags
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXRSystemFlags;
static UEnum* EXRSystemFlags_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRSystemFlags"));
	}
	return Z_Registration_Info_UEnum_EXRSystemFlags.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRSystemFlags::Type>()
{
	return EXRSystemFlags_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* Flags to better inform the user about specifics of the underlying XR system\n*/" },
		{ "IsAR.Name", "EXRSystemFlags::IsAR" },
		{ "IsHeadMounted.Name", "EXRSystemFlags::IsHeadMounted" },
		{ "IsTablet.Name", "EXRSystemFlags::IsTablet" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "NoFlags.Hidden", "" },
		{ "NoFlags.Name", "EXRSystemFlags::NoFlags" },
		{ "SupportsHandTracking.Name", "EXRSystemFlags::SupportsHandTracking" },
		{ "ToolTip", "Flags to better inform the user about specifics of the underlying XR system" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXRSystemFlags::NoFlags", (int64)EXRSystemFlags::NoFlags },
		{ "EXRSystemFlags::IsAR", (int64)EXRSystemFlags::IsAR },
		{ "EXRSystemFlags::IsTablet", (int64)EXRSystemFlags::IsTablet },
		{ "EXRSystemFlags::IsHeadMounted", (int64)EXRSystemFlags::IsHeadMounted },
		{ "EXRSystemFlags::SupportsHandTracking", (int64)EXRSystemFlags::SupportsHandTracking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EXRSystemFlags",
	"EXRSystemFlags::Type",
	Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags()
{
	if (!Z_Registration_Info_UEnum_EXRSystemFlags.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXRSystemFlags.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EXRSystemFlags_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXRSystemFlags.InnerSingleton;
}
// End Enum EXRSystemFlags

// Begin Enum ESpectatorScreenMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESpectatorScreenMode;
static UEnum* ESpectatorScreenMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("ESpectatorScreenMode"));
	}
	return Z_Registration_Info_UEnum_ESpectatorScreenMode.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<ESpectatorScreenMode>()
{
	return ESpectatorScreenMode_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* The Spectator Screen Mode controls what the non-vr video device displays on platforms that support one.\n* Not all modes are universal.\n* Modes SingleEyeCroppedToFill, Texture, and MirrorPlusTexture are supported on all.\n* Disabled is supported on all except PSVR.\n*/" },
		{ "Disabled.DisplayName", "Disabled" },
		{ "Disabled.Name", "ESpectatorScreenMode::Disabled" },
		{ "Distorted.DisplayName", "Distorted" },
		{ "Distorted.Name", "ESpectatorScreenMode::Distorted" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "SingleEye.DisplayName", "SingleEye" },
		{ "SingleEye.Name", "ESpectatorScreenMode::SingleEye" },
		{ "SingleEyeCroppedToFill.DisplayName", "SingleEyeCroppedToFill" },
		{ "SingleEyeCroppedToFill.Name", "ESpectatorScreenMode::SingleEyeCroppedToFill" },
		{ "SingleEyeLetterboxed.DisplayName", "SingleEyeLetterboxed" },
		{ "SingleEyeLetterboxed.Name", "ESpectatorScreenMode::SingleEyeLetterboxed" },
		{ "Texture.DisplayName", "Texture" },
		{ "Texture.Name", "ESpectatorScreenMode::Texture" },
		{ "TexturePlusEye.DisplayName", "TexturePlusEye" },
		{ "TexturePlusEye.Name", "ESpectatorScreenMode::TexturePlusEye" },
		{ "ToolTip", "The Spectator Screen Mode controls what the non-vr video device displays on platforms that support one.\nNot all modes are universal.\nModes SingleEyeCroppedToFill, Texture, and MirrorPlusTexture are supported on all.\nDisabled is supported on all except PSVR." },
		{ "Undistorted.DisplayName", "Undistorted" },
		{ "Undistorted.Name", "ESpectatorScreenMode::Undistorted" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESpectatorScreenMode::Disabled", (int64)ESpectatorScreenMode::Disabled },
		{ "ESpectatorScreenMode::SingleEyeLetterboxed", (int64)ESpectatorScreenMode::SingleEyeLetterboxed },
		{ "ESpectatorScreenMode::Undistorted", (int64)ESpectatorScreenMode::Undistorted },
		{ "ESpectatorScreenMode::Distorted", (int64)ESpectatorScreenMode::Distorted },
		{ "ESpectatorScreenMode::SingleEye", (int64)ESpectatorScreenMode::SingleEye },
		{ "ESpectatorScreenMode::SingleEyeCroppedToFill", (int64)ESpectatorScreenMode::SingleEyeCroppedToFill },
		{ "ESpectatorScreenMode::Texture", (int64)ESpectatorScreenMode::Texture },
		{ "ESpectatorScreenMode::TexturePlusEye", (int64)ESpectatorScreenMode::TexturePlusEye },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"ESpectatorScreenMode",
	"ESpectatorScreenMode",
	Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode()
{
	if (!Z_Registration_Info_UEnum_ESpectatorScreenMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESpectatorScreenMode.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_ESpectatorScreenMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESpectatorScreenMode.InnerSingleton;
}
// End Enum ESpectatorScreenMode

// Begin Enum EXRTrackedDeviceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXRTrackedDeviceType;
static UEnum* EXRTrackedDeviceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRTrackedDeviceType"));
	}
	return Z_Registration_Info_UEnum_EXRTrackedDeviceType.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRTrackedDeviceType>()
{
	return EXRTrackedDeviceType_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Any.Comment", "/** Pass to EnumerateTrackedDevices to get all devices regardless of type */" },
		{ "Any.Name", "EXRTrackedDeviceType::Any" },
		{ "Any.ToolTip", "Pass to EnumerateTrackedDevices to get all devices regardless of type" },
		{ "BlueprintType", "true" },
		{ "Controller.Comment", "/** Represents a controller */" },
		{ "Controller.Name", "EXRTrackedDeviceType::Controller" },
		{ "Controller.ToolTip", "Represents a controller" },
		{ "HeadMountedDisplay.Comment", "/** Represents a head mounted display */" },
		{ "HeadMountedDisplay.Name", "EXRTrackedDeviceType::HeadMountedDisplay" },
		{ "HeadMountedDisplay.ToolTip", "Represents a head mounted display" },
		{ "Invalid.Comment", "/** DeviceId is invalid */" },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "EXRTrackedDeviceType::Invalid" },
		{ "Invalid.ToolTip", "DeviceId is invalid" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "Other.Comment", "/** Misc. device types, for future expansion */" },
		{ "Other.Name", "EXRTrackedDeviceType::Other" },
		{ "Other.ToolTip", "Misc. device types, for future expansion" },
		{ "Tracker.Comment", "/** Represents trackers, such as a Vive tracker */" },
		{ "Tracker.Name", "EXRTrackedDeviceType::Tracker" },
		{ "Tracker.ToolTip", "Represents trackers, such as a Vive tracker" },
		{ "TrackingReference.Comment", "/** Represents a static tracking reference device, such as a Lighthouse or tracking camera */" },
		{ "TrackingReference.Name", "EXRTrackedDeviceType::TrackingReference" },
		{ "TrackingReference.ToolTip", "Represents a static tracking reference device, such as a Lighthouse or tracking camera" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXRTrackedDeviceType::HeadMountedDisplay", (int64)EXRTrackedDeviceType::HeadMountedDisplay },
		{ "EXRTrackedDeviceType::Controller", (int64)EXRTrackedDeviceType::Controller },
		{ "EXRTrackedDeviceType::TrackingReference", (int64)EXRTrackedDeviceType::TrackingReference },
		{ "EXRTrackedDeviceType::Tracker", (int64)EXRTrackedDeviceType::Tracker },
		{ "EXRTrackedDeviceType::Other", (int64)EXRTrackedDeviceType::Other },
		{ "EXRTrackedDeviceType::Invalid", (int64)EXRTrackedDeviceType::Invalid },
		{ "EXRTrackedDeviceType::Any", (int64)EXRTrackedDeviceType::Any },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EXRTrackedDeviceType",
	"EXRTrackedDeviceType",
	Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType()
{
	if (!Z_Registration_Info_UEnum_EXRTrackedDeviceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXRTrackedDeviceType.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EXRTrackedDeviceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXRTrackedDeviceType.InnerSingleton;
}
// End Enum EXRTrackedDeviceType

// Begin Enum EHandKeypoint
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHandKeypoint;
static UEnum* EHandKeypoint_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EHandKeypoint"));
	}
	return Z_Registration_Info_UEnum_EHandKeypoint.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EHandKeypoint>()
{
	return EHandKeypoint_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Transforms that are tracked on the hand.\n * Matches the enums from WMR to make it a direct mapping\n */" },
		{ "IndexDistal.Name", "EHandKeypoint::IndexDistal" },
		{ "IndexIntermediate.Name", "EHandKeypoint::IndexIntermediate" },
		{ "IndexMetacarpal.Name", "EHandKeypoint::IndexMetacarpal" },
		{ "IndexProximal.Name", "EHandKeypoint::IndexProximal" },
		{ "IndexTip.Name", "EHandKeypoint::IndexTip" },
		{ "LittleDistal.Name", "EHandKeypoint::LittleDistal" },
		{ "LittleIntermediate.Name", "EHandKeypoint::LittleIntermediate" },
		{ "LittleMetacarpal.Name", "EHandKeypoint::LittleMetacarpal" },
		{ "LittleProximal.Name", "EHandKeypoint::LittleProximal" },
		{ "LittleTip.Name", "EHandKeypoint::LittleTip" },
		{ "MiddleDistal.Name", "EHandKeypoint::MiddleDistal" },
		{ "MiddleIntermediate.Name", "EHandKeypoint::MiddleIntermediate" },
		{ "MiddleMetacarpal.Name", "EHandKeypoint::MiddleMetacarpal" },
		{ "MiddleProximal.Name", "EHandKeypoint::MiddleProximal" },
		{ "MiddleTip.Name", "EHandKeypoint::MiddleTip" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "Palm.Name", "EHandKeypoint::Palm" },
		{ "RingDistal.Name", "EHandKeypoint::RingDistal" },
		{ "RingIntermediate.Name", "EHandKeypoint::RingIntermediate" },
		{ "RingMetacarpal.Name", "EHandKeypoint::RingMetacarpal" },
		{ "RingProximal.Name", "EHandKeypoint::RingProximal" },
		{ "RingTip.Name", "EHandKeypoint::RingTip" },
		{ "ThumbDistal.Name", "EHandKeypoint::ThumbDistal" },
		{ "ThumbMetacarpal.Name", "EHandKeypoint::ThumbMetacarpal" },
		{ "ThumbProximal.Name", "EHandKeypoint::ThumbProximal" },
		{ "ThumbTip.Name", "EHandKeypoint::ThumbTip" },
		{ "ToolTip", "Transforms that are tracked on the hand.\nMatches the enums from WMR to make it a direct mapping" },
		{ "Wrist.Name", "EHandKeypoint::Wrist" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHandKeypoint::Palm", (int64)EHandKeypoint::Palm },
		{ "EHandKeypoint::Wrist", (int64)EHandKeypoint::Wrist },
		{ "EHandKeypoint::ThumbMetacarpal", (int64)EHandKeypoint::ThumbMetacarpal },
		{ "EHandKeypoint::ThumbProximal", (int64)EHandKeypoint::ThumbProximal },
		{ "EHandKeypoint::ThumbDistal", (int64)EHandKeypoint::ThumbDistal },
		{ "EHandKeypoint::ThumbTip", (int64)EHandKeypoint::ThumbTip },
		{ "EHandKeypoint::IndexMetacarpal", (int64)EHandKeypoint::IndexMetacarpal },
		{ "EHandKeypoint::IndexProximal", (int64)EHandKeypoint::IndexProximal },
		{ "EHandKeypoint::IndexIntermediate", (int64)EHandKeypoint::IndexIntermediate },
		{ "EHandKeypoint::IndexDistal", (int64)EHandKeypoint::IndexDistal },
		{ "EHandKeypoint::IndexTip", (int64)EHandKeypoint::IndexTip },
		{ "EHandKeypoint::MiddleMetacarpal", (int64)EHandKeypoint::MiddleMetacarpal },
		{ "EHandKeypoint::MiddleProximal", (int64)EHandKeypoint::MiddleProximal },
		{ "EHandKeypoint::MiddleIntermediate", (int64)EHandKeypoint::MiddleIntermediate },
		{ "EHandKeypoint::MiddleDistal", (int64)EHandKeypoint::MiddleDistal },
		{ "EHandKeypoint::MiddleTip", (int64)EHandKeypoint::MiddleTip },
		{ "EHandKeypoint::RingMetacarpal", (int64)EHandKeypoint::RingMetacarpal },
		{ "EHandKeypoint::RingProximal", (int64)EHandKeypoint::RingProximal },
		{ "EHandKeypoint::RingIntermediate", (int64)EHandKeypoint::RingIntermediate },
		{ "EHandKeypoint::RingDistal", (int64)EHandKeypoint::RingDistal },
		{ "EHandKeypoint::RingTip", (int64)EHandKeypoint::RingTip },
		{ "EHandKeypoint::LittleMetacarpal", (int64)EHandKeypoint::LittleMetacarpal },
		{ "EHandKeypoint::LittleProximal", (int64)EHandKeypoint::LittleProximal },
		{ "EHandKeypoint::LittleIntermediate", (int64)EHandKeypoint::LittleIntermediate },
		{ "EHandKeypoint::LittleDistal", (int64)EHandKeypoint::LittleDistal },
		{ "EHandKeypoint::LittleTip", (int64)EHandKeypoint::LittleTip },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EHandKeypoint",
	"EHandKeypoint",
	Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint()
{
	if (!Z_Registration_Info_UEnum_EHandKeypoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHandKeypoint.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHandKeypoint.InnerSingleton;
}
// End Enum EHandKeypoint

// Begin Class UHandKeypointConversion Function Conv_HandKeypointToInt32
struct Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics
{
	struct HandKeypointConversion_eventConv_HandKeypointToInt32_Parms
	{
		EHandKeypoint input;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Interpret a HandKeypoint as an int input */" },
		{ "CompactNodeTitle", "->" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "Interpret a HandKeypoint as an int input" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_input_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_input;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::NewProp_input_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::NewProp_input = { "input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandKeypointConversion_eventConv_HandKeypointToInt32_Parms, input), Z_Construct_UEnum_HeadMountedDisplay_EHandKeypoint, METADATA_PARAMS(0, nullptr) }; // 3656641922
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HandKeypointConversion_eventConv_HandKeypointToInt32_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::NewProp_input_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::NewProp_input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHandKeypointConversion, nullptr, "Conv_HandKeypointToInt32", nullptr, nullptr, Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::PropPointers), sizeof(Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::HandKeypointConversion_eventConv_HandKeypointToInt32_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::Function_MetaDataParams), Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::HandKeypointConversion_eventConv_HandKeypointToInt32_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UHandKeypointConversion::execConv_HandKeypointToInt32)
{
	P_GET_ENUM(EHandKeypoint,Z_Param_input);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UHandKeypointConversion::Conv_HandKeypointToInt32(EHandKeypoint(Z_Param_input));
	P_NATIVE_END;
}
// End Class UHandKeypointConversion Function Conv_HandKeypointToInt32

// Begin Class UHandKeypointConversion
void UHandKeypointConversion::StaticRegisterNativesUHandKeypointConversion()
{
	UClass* Class = UHandKeypointConversion::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Conv_HandKeypointToInt32", &UHandKeypointConversion::execConv_HandKeypointToInt32 },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHandKeypointConversion);
UClass* Z_Construct_UClass_UHandKeypointConversion_NoRegister()
{
	return UHandKeypointConversion::StaticClass();
}
struct Z_Construct_UClass_UHandKeypointConversion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "HeadMountedDisplayTypes.h" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UHandKeypointConversion_Conv_HandKeypointToInt32, "Conv_HandKeypointToInt32" }, // 634637817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHandKeypointConversion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UHandKeypointConversion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UHandKeypointConversion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UHandKeypointConversion_Statics::ClassParams = {
	&UHandKeypointConversion::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UHandKeypointConversion_Statics::Class_MetaDataParams), Z_Construct_UClass_UHandKeypointConversion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UHandKeypointConversion()
{
	if (!Z_Registration_Info_UClass_UHandKeypointConversion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHandKeypointConversion.OuterSingleton, Z_Construct_UClass_UHandKeypointConversion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UHandKeypointConversion.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UClass* StaticClass<UHandKeypointConversion>()
{
	return UHandKeypointConversion::StaticClass();
}
UHandKeypointConversion::UHandKeypointConversion(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UHandKeypointConversion);
UHandKeypointConversion::~UHandKeypointConversion() {}
// End Class UHandKeypointConversion

// Begin Enum EXRVisualType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EXRVisualType;
static UEnum* EXRVisualType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("EXRVisualType"));
	}
	return Z_Registration_Info_UEnum_EXRVisualType.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UEnum* StaticEnum<EXRVisualType>()
{
	return EXRVisualType_StaticEnum();
}
struct Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Controller.Name", "EXRVisualType::Controller" },
		{ "Hand.Name", "EXRVisualType::Hand" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EXRVisualType::Controller", (int64)EXRVisualType::Controller },
		{ "EXRVisualType::Hand", (int64)EXRVisualType::Hand },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	"EXRVisualType",
	"EXRVisualType",
	Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType()
{
	if (!Z_Registration_Info_UEnum_EXRVisualType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EXRVisualType.InnerSingleton, Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EXRVisualType.InnerSingleton;
}
// End Enum EXRVisualType

// Begin ScriptStruct FXRHMDData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XRHMDData;
class UScriptStruct* FXRHMDData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XRHMDData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XRHMDData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRHMDData, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRHMDData"));
	}
	return Z_Registration_Info_UScriptStruct_XRHMDData.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRHMDData>()
{
	return FXRHMDData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FXRHMDData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationInstanceID_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationInstanceID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRHMDData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FXRHMDData*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FXRHMDData), &Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRHMDData, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID = { "ApplicationInstanceID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRHMDData, ApplicationInstanceID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationInstanceID_MetaData), NewProp_ApplicationInstanceID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRHMDData, TrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingStatus_MetaData), NewProp_TrackingStatus_MetaData) }; // 2366538105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRHMDData, Position), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRHMDData, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_bValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_ApplicationInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_TrackingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRHMDData_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRHMDData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	&NewStructOps,
	"XRHMDData",
	Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::PropPointers),
	sizeof(FXRHMDData),
	alignof(FXRHMDData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRHMDData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FXRHMDData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FXRHMDData()
{
	if (!Z_Registration_Info_UScriptStruct_XRHMDData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XRHMDData.InnerSingleton, Z_Construct_UScriptStruct_FXRHMDData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_XRHMDData.InnerSingleton;
}
// End ScriptStruct FXRHMDData

// Begin ScriptStruct FXRMotionControllerData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_XRMotionControllerData;
class UScriptStruct* FXRMotionControllerData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_XRMotionControllerData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_XRMotionControllerData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FXRMotionControllerData, (UObject*)Z_Construct_UPackage__Script_HeadMountedDisplay(), TEXT("XRMotionControllerData"));
	}
	return Z_Registration_Info_UScriptStruct_XRMotionControllerData.OuterSingleton;
}
template<> HEADMOUNTEDDISPLAY_API UScriptStruct* StaticStruct<FXRMotionControllerData>()
{
	return FXRMotionControllerData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FXRMotionControllerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bValid_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceName_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationInstanceID_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeviceVisualType_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandIndex_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingStatus_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripPosition_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// Vector representing an object being held in the player's hand\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "Vector representing an object being held in the player's hand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GripRotation_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// Quaternion representing an object being held in the player's hand\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "Quaternion representing an object being held in the player's hand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimPosition_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// For handheld controllers, gives a vector for pointing at objects\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "For handheld controllers, gives a vector for pointing at objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AimRotation_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// For handheld controllers, gives a quaternion for pointing at objects\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "For handheld controllers, gives a quaternion for pointing at objects" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmPosition_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// For handheld controllers, gives a vector for representing the hand\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "For handheld controllers, gives a vector for representing the hand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PalmRotation_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// For handheld controllers, gives a quaternion for representing the hand\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "For handheld controllers, gives a quaternion for representing the hand" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandKeyPositions_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// The indices of this array are the values of EHandKeypoint (Palm, Wrist, ThumbMetacarpal, etc).\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "The indices of this array are the values of EHandKeypoint (Palm, Wrist, ThumbMetacarpal, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandKeyRotations_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// The indices of this array are the values of EHandKeypoint (Palm, Wrist, ThumbMetacarpal, etc).\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "The indices of this array are the values of EHandKeypoint (Palm, Wrist, ThumbMetacarpal, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandKeyRadii_MetaData[] = {
		{ "Category", "XR" },
		{ "Comment", "// The indices of this array are the values of EHandKeypoint (Palm, Wrist, ThumbMetacarpal, etc).\n" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
		{ "ToolTip", "The indices of this array are the values of EHandKeypoint (Palm, Wrist, ThumbMetacarpal, etc)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGrasped_MetaData[] = {
		{ "Category", "XR" },
		{ "ModuleRelativePath", "Public/HeadMountedDisplayTypes.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bValid_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bValid;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DeviceName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ApplicationInstanceID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DeviceVisualType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DeviceVisualType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_HandIndex_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_HandIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingStatus_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingStatus;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GripRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AimRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PalmPosition;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PalmRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandKeyPositions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandKeyPositions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandKeyRotations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandKeyRotations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HandKeyRadii_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandKeyRadii;
	static void NewProp_bIsGrasped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGrasped;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FXRMotionControllerData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_SetBit(void* Obj)
{
	((FXRMotionControllerData*)Obj)->bValid = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid = { "bValid", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FXRMotionControllerData), &Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bValid_MetaData), NewProp_bValid_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName = { "DeviceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, DeviceName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceName_MetaData), NewProp_DeviceName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID = { "ApplicationInstanceID", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, ApplicationInstanceID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ApplicationInstanceID_MetaData), NewProp_ApplicationInstanceID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType = { "DeviceVisualType", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, DeviceVisualType), Z_Construct_UEnum_HeadMountedDisplay_EXRVisualType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeviceVisualType_MetaData), NewProp_DeviceVisualType_MetaData) }; // 408230220
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex = { "HandIndex", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, HandIndex), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandIndex_MetaData), NewProp_HandIndex_MetaData) }; // 775183092
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus = { "TrackingStatus", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, TrackingStatus), Z_Construct_UEnum_HeadMountedDisplay_ETrackingStatus, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingStatus_MetaData), NewProp_TrackingStatus_MetaData) }; // 2366538105
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition = { "GripPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, GripPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripPosition_MetaData), NewProp_GripPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation = { "GripRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, GripRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GripRotation_MetaData), NewProp_GripRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition = { "AimPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, AimPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimPosition_MetaData), NewProp_AimPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation = { "AimRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, AimRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AimRotation_MetaData), NewProp_AimRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_PalmPosition = { "PalmPosition", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, PalmPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmPosition_MetaData), NewProp_PalmPosition_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_PalmRotation = { "PalmRotation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, PalmRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PalmRotation_MetaData), NewProp_PalmRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_Inner = { "HandKeyPositions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions = { "HandKeyPositions", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, HandKeyPositions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandKeyPositions_MetaData), NewProp_HandKeyPositions_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_Inner = { "HandKeyRotations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations = { "HandKeyRotations", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, HandKeyRotations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandKeyRotations_MetaData), NewProp_HandKeyRotations_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_Inner = { "HandKeyRadii", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii = { "HandKeyRadii", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FXRMotionControllerData, HandKeyRadii), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandKeyRadii_MetaData), NewProp_HandKeyRadii_MetaData) };
void Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_SetBit(void* Obj)
{
	((FXRMotionControllerData*)Obj)->bIsGrasped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped = { "bIsGrasped", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FXRMotionControllerData), &Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGrasped_MetaData), NewProp_bIsGrasped_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bValid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_ApplicationInstanceID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_DeviceVisualType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_TrackingStatus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_GripRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_AimRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_PalmPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_PalmRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyPositions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRotations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_HandKeyRadii,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewProp_bIsGrasped,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_HeadMountedDisplay,
	nullptr,
	&NewStructOps,
	"XRMotionControllerData",
	Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::PropPointers),
	sizeof(FXRMotionControllerData),
	alignof(FXRMotionControllerData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FXRMotionControllerData()
{
	if (!Z_Registration_Info_UScriptStruct_XRMotionControllerData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_XRMotionControllerData.InnerSingleton, Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_XRMotionControllerData.InnerSingleton;
}
// End ScriptStruct FXRMotionControllerData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EOrientPositionSelector_StaticEnum, TEXT("EOrientPositionSelector"), &Z_Registration_Info_UEnum_EOrientPositionSelector, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3091753543U) },
		{ EHMDTrackingOrigin_StaticEnum, TEXT("EHMDTrackingOrigin"), &Z_Registration_Info_UEnum_EHMDTrackingOrigin, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2713006415U) },
		{ EHMDWornState_StaticEnum, TEXT("EHMDWornState"), &Z_Registration_Info_UEnum_EHMDWornState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1859057782U) },
		{ EXRDeviceConnectionResult_StaticEnum, TEXT("EXRDeviceConnectionResult"), &Z_Registration_Info_UEnum_EXRDeviceConnectionResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2483634255U) },
		{ EXRSystemFlags_StaticEnum, TEXT("EXRSystemFlags"), &Z_Registration_Info_UEnum_EXRSystemFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3656401159U) },
		{ ESpectatorScreenMode_StaticEnum, TEXT("ESpectatorScreenMode"), &Z_Registration_Info_UEnum_ESpectatorScreenMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2064427484U) },
		{ EXRTrackedDeviceType_StaticEnum, TEXT("EXRTrackedDeviceType"), &Z_Registration_Info_UEnum_EXRTrackedDeviceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 566947910U) },
		{ EHandKeypoint_StaticEnum, TEXT("EHandKeypoint"), &Z_Registration_Info_UEnum_EHandKeypoint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3656641922U) },
		{ EXRVisualType_StaticEnum, TEXT("EXRVisualType"), &Z_Registration_Info_UEnum_EXRVisualType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 408230220U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FXRHMDData::StaticStruct, Z_Construct_UScriptStruct_FXRHMDData_Statics::NewStructOps, TEXT("XRHMDData"), &Z_Registration_Info_UScriptStruct_XRHMDData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXRHMDData), 2011970120U) },
		{ FXRMotionControllerData::StaticStruct, Z_Construct_UScriptStruct_FXRMotionControllerData_Statics::NewStructOps, TEXT("XRMotionControllerData"), &Z_Registration_Info_UScriptStruct_XRMotionControllerData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FXRMotionControllerData), 855871817U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UHandKeypointConversion, UHandKeypointConversion::StaticClass, TEXT("UHandKeypointConversion"), &Z_Registration_Info_UClass_UHandKeypointConversion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHandKeypointConversion), 1847512948U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_3859397391(TEXT("/Script/HeadMountedDisplay"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_HeadMountedDisplay_Public_HeadMountedDisplayTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
