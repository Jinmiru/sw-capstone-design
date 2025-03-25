// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaPlate/Public/MediaPlateComponent.h"
#include "Runtime/MediaAssets/Public/MediaSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaPlateComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlaylist_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaSoundComponent_NoRegister();
MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
MEDIAASSETS_API UEnum* Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles();
MEDIAASSETS_API UScriptStruct* Z_Construct_UScriptStruct_FMediaSourceCacheSettings();
MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent();
MEDIAPLATE_API UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister();
MEDIAPLATE_API UEnum* Z_Construct_UEnum_MediaPlate_EMediaPlateEventState();
MEDIAPLATE_API UScriptStruct* Z_Construct_UScriptStruct_FMediaTextureResourceSettings();
UPackage* Z_Construct_UPackage__Script_MediaPlate();
// End Cross Module References

// Begin Enum EMediaPlateEventState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMediaPlateEventState;
static UEnum* EMediaPlateEventState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState, (UObject*)Z_Construct_UPackage__Script_MediaPlate(), TEXT("EMediaPlateEventState"));
	}
	return Z_Registration_Info_UEnum_EMediaPlateEventState.OuterSingleton;
}
template<> MEDIAPLATE_API UEnum* StaticEnum<EMediaPlateEventState>()
{
	return EMediaPlateEventState_StaticEnum();
}
struct Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Close.Name", "EMediaPlateEventState::Close" },
		{ "Forward.Name", "EMediaPlateEventState::Forward" },
		{ "MAX.Name", "EMediaPlateEventState::MAX" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "Open.Name", "EMediaPlateEventState::Open" },
		{ "Pause.Name", "EMediaPlateEventState::Pause" },
		{ "Play.Name", "EMediaPlateEventState::Play" },
		{ "Reverse.Name", "EMediaPlateEventState::Reverse" },
		{ "Rewind.Name", "EMediaPlateEventState::Rewind" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMediaPlateEventState::Play", (int64)EMediaPlateEventState::Play },
		{ "EMediaPlateEventState::Open", (int64)EMediaPlateEventState::Open },
		{ "EMediaPlateEventState::Close", (int64)EMediaPlateEventState::Close },
		{ "EMediaPlateEventState::Pause", (int64)EMediaPlateEventState::Pause },
		{ "EMediaPlateEventState::Reverse", (int64)EMediaPlateEventState::Reverse },
		{ "EMediaPlateEventState::Forward", (int64)EMediaPlateEventState::Forward },
		{ "EMediaPlateEventState::Rewind", (int64)EMediaPlateEventState::Rewind },
		{ "EMediaPlateEventState::MAX", (int64)EMediaPlateEventState::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MediaPlate,
	nullptr,
	"EMediaPlateEventState",
	"EMediaPlateEventState",
	Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MediaPlate_EMediaPlateEventState()
{
	if (!Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton, Z_Construct_UEnum_MediaPlate_EMediaPlateEventState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMediaPlateEventState.InnerSingleton;
}
// End Enum EMediaPlateEventState

// Begin ScriptStruct FMediaTextureResourceSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings;
class UScriptStruct* FMediaTextureResourceSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMediaTextureResourceSettings, (UObject*)Z_Construct_UPackage__Script_MediaPlate(), TEXT("MediaTextureResourceSettings"));
	}
	return Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings.OuterSingleton;
}
template<> MEDIAPLATE_API UScriptStruct* StaticStruct<FMediaTextureResourceSettings>()
{
	return FMediaTextureResourceSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This struct is used to expose Media Texture settings via Media Plate Component and is a mirror of some\n * of the settings.\n */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "This struct is used to expose Media Texture settings via Media Plate Component and is a mirror of some\nof the settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableGenMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Enable mips generation */" },
		{ "DisplayName", "Enable RealTime Mips" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Enable mips generation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentNumMips_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Current number of mips to be generated as output */" },
		{ "DisplayName", "Mips Quantity" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Current number of mips to be generated as output" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableGenMips_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableGenMips;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentNumMips;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMediaTextureResourceSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
void Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_bEnableGenMips_SetBit(void* Obj)
{
	((FMediaTextureResourceSettings*)Obj)->bEnableGenMips = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_bEnableGenMips = { "bEnableGenMips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FMediaTextureResourceSettings), &Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_bEnableGenMips_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableGenMips_MetaData), NewProp_bEnableGenMips_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_CurrentNumMips = { "CurrentNumMips", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMediaTextureResourceSettings, CurrentNumMips), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentNumMips_MetaData), NewProp_CurrentNumMips_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_bEnableGenMips,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewProp_CurrentNumMips,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
	nullptr,
	&NewStructOps,
	"MediaTextureResourceSettings",
	Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::PropPointers),
	sizeof(FMediaTextureResourceSettings),
	alignof(FMediaTextureResourceSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMediaTextureResourceSettings()
{
	if (!Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings.InnerSingleton, Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings.InnerSingleton;
}
// End ScriptStruct FMediaTextureResourceSettings

// Begin Class UMediaPlateComponent Function Close
struct Z_Construct_UFunction_UMediaPlateComponent_Close_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to close the media.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to close the media." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Close", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_Close()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Close_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execClose)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Close();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function Close

// Begin Class UMediaPlateComponent Function GetIsAspectRatioAuto
struct Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics
{
	struct MediaPlateComponent_eventGetIsAspectRatioAuto_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Gets whether automatic aspect ratio is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Gets whether automatic aspect ratio is enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlateComponent_eventGetIsAspectRatioAuto_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventGetIsAspectRatioAuto_Parms), &Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetIsAspectRatioAuto", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::MediaPlateComponent_eventGetIsAspectRatioAuto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::MediaPlateComponent_eventGetIsAspectRatioAuto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execGetIsAspectRatioAuto)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIsAspectRatioAuto();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function GetIsAspectRatioAuto

// Begin Class UMediaPlateComponent Function GetLetterboxAspectRatio
struct Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics
{
	struct MediaPlateComponent_eventGetLetterboxAspectRatio_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to get the aspect ratio of the screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to get the aspect ratio of the screen." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventGetLetterboxAspectRatio_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetLetterboxAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::MediaPlateComponent_eventGetLetterboxAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::MediaPlateComponent_eventGetLetterboxAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execGetLetterboxAspectRatio)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLetterboxAspectRatio();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function GetLetterboxAspectRatio

// Begin Class UMediaPlateComponent Function GetLoop
struct Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics
{
	struct MediaPlateComponent_eventGetLoop_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Call this to see if we want to loop.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to see if we want to loop." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlateComponent_eventGetLoop_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventGetLoop_Parms), &Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetLoop", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::MediaPlateComponent_eventGetLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::MediaPlateComponent_eventGetLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execGetLoop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLoop();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function GetLoop

// Begin Class UMediaPlateComponent Function GetMediaPlayer
struct Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics
{
	struct MediaPlateComponent_eventGetMediaPlayer_Parms
	{
		UMediaPlayer* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this get our media player.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this get our media player." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetMediaPlayer", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::MediaPlateComponent_eventGetMediaPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::MediaPlateComponent_eventGetMediaPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execGetMediaPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function GetMediaPlayer

// Begin Class UMediaPlateComponent Function GetMediaTexture
struct Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics
{
	struct MediaPlateComponent_eventGetMediaTexture_Parms
	{
		int32 Index;
		UMediaTexture* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this get our media texture.\n\x09 */" },
		{ "CPP_Default_Index", "0" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this get our media texture." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventGetMediaTexture_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventGetMediaTexture_Parms, ReturnValue), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetMediaTexture", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::MediaPlateComponent_eventGetMediaTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::MediaPlateComponent_eventGetMediaTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execGetMediaTexture)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMediaTexture**)Z_Param__Result=P_THIS->GetMediaTexture(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function GetMediaTexture

// Begin Class UMediaPlateComponent Function GetMeshRange
struct Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics
{
	struct MediaPlateComponent_eventGetMeshRange_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/** Return the arc size in degrees used for visible mips and tiles calculations, specific to the sphere. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Return the arc size in degrees used for visible mips and tiles calculations, specific to the sphere." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventGetMeshRange_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "GetMeshRange", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::MediaPlateComponent_eventGetMeshRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::MediaPlateComponent_eventGetMeshRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execGetMeshRange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetMeshRange();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function GetMeshRange

// Begin Class UMediaPlateComponent Function IsMediaPlatePlaying
struct Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics
{
	struct MediaPlateComponent_eventIsMediaPlatePlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Comment", "/**\n\x09 * Call this to see if the media plate is playing.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to see if the media plate is playing." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlateComponent_eventIsMediaPlatePlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventIsMediaPlatePlaying_Parms), &Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "IsMediaPlatePlaying", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::MediaPlateComponent_eventIsMediaPlatePlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::MediaPlateComponent_eventIsMediaPlatePlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execIsMediaPlatePlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMediaPlatePlaying();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function IsMediaPlatePlaying

// Begin Class UMediaPlateComponent Function OnMediaEnd
struct Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the video ends.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Called by the media player when the video ends." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "OnMediaEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execOnMediaEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediaEnd();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function OnMediaEnd

// Begin Class UMediaPlateComponent Function OnMediaOpened
struct Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics
{
	struct MediaPlateComponent_eventOnMediaOpened_Parms
	{
		FString DeviceUrl;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the media opens.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Called by the media player when the media opens." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DeviceUrl;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::NewProp_DeviceUrl = { "DeviceUrl", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventOnMediaOpened_Parms, DeviceUrl), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::NewProp_DeviceUrl,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "OnMediaOpened", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::MediaPlateComponent_eventOnMediaOpened_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::MediaPlateComponent_eventOnMediaOpened_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execOnMediaOpened)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DeviceUrl);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediaOpened(Z_Param_DeviceUrl);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function OnMediaOpened

// Begin Class UMediaPlateComponent Function OnMediaResumed
struct Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the video resumes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Called by the media player when the video resumes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "OnMediaResumed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execOnMediaResumed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediaResumed();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function OnMediaResumed

// Begin Class UMediaPlateComponent Function OnMediaSuspended
struct Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Called by the media player when the video pauses.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Called by the media player when the video pauses." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "OnMediaSuspended", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execOnMediaSuspended)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnMediaSuspended();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function OnMediaSuspended

// Begin Class UMediaPlateComponent Function Open
struct Z_Construct_UFunction_UMediaPlateComponent_Open_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to open the media.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to open the media." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Open", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_Open()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Open_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execOpen)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Open();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function Open

// Begin Class UMediaPlateComponent Function Pause
struct Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to pause playback.\n\x09 * Play can be called to resume playback.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to pause playback.\nPlay can be called to resume playback." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function Pause

// Begin Class UMediaPlateComponent Function Play
struct Z_Construct_UFunction_UMediaPlateComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to start playing.\n\x09 * Open must be called before this.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to start playing.\nOpen must be called before this." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMediaPlateComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function Play

// Begin Class UMediaPlateComponent Function Rewind
struct Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics
{
	struct MediaPlateComponent_eventRewind_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Rewinds the media to the beginning.\n\x09 *\n\x09 * This is the same as seeking to zero time.\n\x09 *\n\x09 * @return\x09\x09\x09\x09True if rewinding, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Rewinds the media to the beginning.\n\nThis is the same as seeking to zero time.\n\n@return                              True if rewinding, false otherwise." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlateComponent_eventRewind_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventRewind_Parms), &Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Rewind", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::MediaPlateComponent_eventRewind_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::MediaPlateComponent_eventRewind_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_Rewind()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Rewind_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execRewind)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Rewind();
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function Rewind

// Begin Class UMediaPlateComponent Function Seek
struct Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics
{
	struct MediaPlateComponent_eventSeek_Parms
	{
		FTimespan Time;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to seek to the specified playback time.\n\x09 *\n\x09 * @param Time\x09\x09\x09Time to seek to.\n\x09 * @return\x09\x09\x09\x09True on success, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to seek to the specified playback time.\n\n@param Time                  Time to seek to.\n@return                              True on success, false otherwise." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventSeek_Parms, Time), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
void Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MediaPlateComponent_eventSeek_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventSeek_Parms), &Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "Seek", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::MediaPlateComponent_eventSeek_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::MediaPlateComponent_eventSeek_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_Seek()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_Seek_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execSeek)
{
	P_GET_STRUCT_REF(FTimespan,Z_Param_Out_Time);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Seek(Z_Param_Out_Time);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function Seek

// Begin Class UMediaPlateComponent Function SetIsAspectRatioAuto
struct Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics
{
	struct MediaPlateComponent_eventSetIsAspectRatioAuto_Parms
	{
		bool bInIsAspectRatioAuto;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Sets whether automatic aspect ratio is enabled.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Sets whether automatic aspect ratio is enabled." },
	};
#endif // WITH_METADATA
	static void NewProp_bInIsAspectRatioAuto_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInIsAspectRatioAuto;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto_SetBit(void* Obj)
{
	((MediaPlateComponent_eventSetIsAspectRatioAuto_Parms*)Obj)->bInIsAspectRatioAuto = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto = { "bInIsAspectRatioAuto", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventSetIsAspectRatioAuto_Parms), &Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::NewProp_bInIsAspectRatioAuto,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetIsAspectRatioAuto", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::MediaPlateComponent_eventSetIsAspectRatioAuto_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::MediaPlateComponent_eventSetIsAspectRatioAuto_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execSetIsAspectRatioAuto)
{
	P_GET_UBOOL(Z_Param_bInIsAspectRatioAuto);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIsAspectRatioAuto(Z_Param_bInIsAspectRatioAuto);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function SetIsAspectRatioAuto

// Begin Class UMediaPlateComponent Function SetLetterboxAspectRatio
struct Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics
{
	struct MediaPlateComponent_eventSetLetterboxAspectRatio_Parms
	{
		float AspectRatio;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/**\n\x09 * Call this to set the aspect ratio of the screen.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to set the aspect ratio of the screen." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AspectRatio;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::NewProp_AspectRatio = { "AspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventSetLetterboxAspectRatio_Parms, AspectRatio), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::NewProp_AspectRatio,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetLetterboxAspectRatio", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::MediaPlateComponent_eventSetLetterboxAspectRatio_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::MediaPlateComponent_eventSetLetterboxAspectRatio_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execSetLetterboxAspectRatio)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_AspectRatio);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLetterboxAspectRatio(Z_Param_AspectRatio);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function SetLetterboxAspectRatio

// Begin Class UMediaPlateComponent Function SetLoop
struct Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics
{
	struct MediaPlateComponent_eventSetLoop_Parms
	{
		bool bInLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Comment", "/**\n\x09 * Call this enable/disable looping.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this enable/disable looping." },
	};
#endif // WITH_METADATA
	static void NewProp_bInLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop_SetBit(void* Obj)
{
	((MediaPlateComponent_eventSetLoop_Parms*)Obj)->bInLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop = { "bInLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventSetLoop_Parms), &Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::NewProp_bInLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetLoop", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::MediaPlateComponent_eventSetLoop_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::MediaPlateComponent_eventSetLoop_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetLoop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetLoop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execSetLoop)
{
	P_GET_UBOOL(Z_Param_bInLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLoop(Z_Param_bInLoop);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function SetLoop

// Begin Class UMediaPlateComponent Function SetMeshRange
struct Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics
{
	struct MediaPlateComponent_eventSetMeshRange_Parms
	{
		FVector2D InMeshRange;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/** Set the arc size in degrees used for visible mips and tiles calculations, specific to the sphere. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Set the arc size in degrees used for visible mips and tiles calculations, specific to the sphere." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InMeshRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::NewProp_InMeshRange = { "InMeshRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MediaPlateComponent_eventSetMeshRange_Parms, InMeshRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::NewProp_InMeshRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetMeshRange", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::MediaPlateComponent_eventSetMeshRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::MediaPlateComponent_eventSetMeshRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execSetMeshRange)
{
	P_GET_STRUCT(FVector2D,Z_Param_InMeshRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMeshRange(Z_Param_InMeshRange);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function SetMeshRange

// Begin Class UMediaPlateComponent Function SetPlayOnlyWhenVisible
struct Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics
{
	struct MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms
	{
		bool bInPlayOnlyWhenVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Media|MediaPlateComponent" },
		{ "Comment", "/** Call this to set bPlayOnlyWhenVisible. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Call this to set bPlayOnlyWhenVisible." },
	};
#endif // WITH_METADATA
	static void NewProp_bInPlayOnlyWhenVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInPlayOnlyWhenVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible_SetBit(void* Obj)
{
	((MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms*)Obj)->bInPlayOnlyWhenVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible = { "bInPlayOnlyWhenVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms), &Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::NewProp_bInPlayOnlyWhenVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaPlateComponent, nullptr, "SetPlayOnlyWhenVisible", nullptr, nullptr, Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::MediaPlateComponent_eventSetPlayOnlyWhenVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMediaPlateComponent::execSetPlayOnlyWhenVisible)
{
	P_GET_UBOOL(Z_Param_bInPlayOnlyWhenVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayOnlyWhenVisible(Z_Param_bInPlayOnlyWhenVisible);
	P_NATIVE_END;
}
// End Class UMediaPlateComponent Function SetPlayOnlyWhenVisible

// Begin Class UMediaPlateComponent
void UMediaPlateComponent::StaticRegisterNativesUMediaPlateComponent()
{
	UClass* Class = UMediaPlateComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Close", &UMediaPlateComponent::execClose },
		{ "GetIsAspectRatioAuto", &UMediaPlateComponent::execGetIsAspectRatioAuto },
		{ "GetLetterboxAspectRatio", &UMediaPlateComponent::execGetLetterboxAspectRatio },
		{ "GetLoop", &UMediaPlateComponent::execGetLoop },
		{ "GetMediaPlayer", &UMediaPlateComponent::execGetMediaPlayer },
		{ "GetMediaTexture", &UMediaPlateComponent::execGetMediaTexture },
		{ "GetMeshRange", &UMediaPlateComponent::execGetMeshRange },
		{ "IsMediaPlatePlaying", &UMediaPlateComponent::execIsMediaPlatePlaying },
		{ "OnMediaEnd", &UMediaPlateComponent::execOnMediaEnd },
		{ "OnMediaOpened", &UMediaPlateComponent::execOnMediaOpened },
		{ "OnMediaResumed", &UMediaPlateComponent::execOnMediaResumed },
		{ "OnMediaSuspended", &UMediaPlateComponent::execOnMediaSuspended },
		{ "Open", &UMediaPlateComponent::execOpen },
		{ "Pause", &UMediaPlateComponent::execPause },
		{ "Play", &UMediaPlateComponent::execPlay },
		{ "Rewind", &UMediaPlateComponent::execRewind },
		{ "Seek", &UMediaPlateComponent::execSeek },
		{ "SetIsAspectRatioAuto", &UMediaPlateComponent::execSetIsAspectRatioAuto },
		{ "SetLetterboxAspectRatio", &UMediaPlateComponent::execSetLetterboxAspectRatio },
		{ "SetLoop", &UMediaPlateComponent::execSetLoop },
		{ "SetMeshRange", &UMediaPlateComponent::execSetMeshRange },
		{ "SetPlayOnlyWhenVisible", &UMediaPlateComponent::execSetPlayOnlyWhenVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaPlateComponent);
UClass* Z_Construct_UClass_UMediaPlateComponent_NoRegister()
{
	return UMediaPlateComponent::StaticClass();
}
struct Z_Construct_UClass_UMediaPlateComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This is a component for AMediaPlate that can play and show media in the world.\n */" },
		{ "IncludePath", "MediaPlateComponent.h" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "This is a component for AMediaPlate that can play and show media in the world." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnOpen_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If set then play when opening the media. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then play when opening the media." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoPlay_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If set then start playing when this object is active. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then start playing when this object is active." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableAudio_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/** If set then enable audio. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then enable audio." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[] = {
		{ "Category", "Control" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** What time to start playing from (in seconds). */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "What time to start playing from (in seconds)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SoundComponent_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Holds the component to play sound. */" },
		{ "DisplayName", "Audio Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the component to play sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[] = {
		{ "Category", "Advanced" },
		{ "Comment", "/** Holds the component for the mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the component for the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Letterboxes_MetaData[] = {
		{ "Category", "Advanced|Other" },
		{ "Comment", "/** Holds the component for the mesh. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the component for the mesh." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlaylist_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** What media playlist to play. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "What media playlist to play." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaylistIndex_MetaData[] = {
		{ "Category", "MediaPlate" },
		{ "Comment", "/** The current index of the source in the play list being played. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "The current index of the source in the play list being played." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CacheSettings_MetaData[] = {
		{ "Category", "Cache" },
		{ "Comment", "/** Override the default cache settings. */" },
		{ "DisplayName", "Cache" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Override the default cache settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMediaPlatePlaying_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "IsMediaPlatePlaying" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/**\n\x09 * If true, then we want the media plate to play.\n\x09 * Note that this could be true, but the player is not actually playing because\n\x09 * bPlayOnlyWhenVisible = true and the plate is not visible.\n\x09 */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true, then we want the media plate to play.\nNote that this could be true, but the player is not actually playing because\nbPlayOnlyWhenVisible = true and the plate is not visible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayOnlyWhenVisible_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "Control" },
		{ "Comment", "/** If true then only allow playback when the media plate is visible. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then only allow playback when the media plate is visible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetLoop" },
		{ "BlueprintSetter", "SetLoop" },
		{ "Category", "Control" },
		{ "Comment", "/** If set then loop when we reach the end. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If set then loop when we reach the end." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibleMipsTilesCalculations_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EXR Tiles & Mips" },
		{ "Comment", "/** Visible mips and tiles calculation mode for the supported mesh types in MediaPlate. (Player restart on change.) */" },
		{ "DisplayName", "Visible Tiles & Mips Logic" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Visible mips and tiles calculation mode for the supported mesh types in MediaPlate. (Player restart on change.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipMapBias_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EXR Tiles & Mips" },
		{ "Comment", "/** Media texture mip map bias shared between the (image sequence) loader and the media texture sampler. */" },
		{ "DisplayName", "Mips Bias" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Media texture mip map bias shared between the (image sequence) loader and the media texture sampler." },
		{ "UIMax", "15.99" },
		{ "UIMin", "-16.0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAspectRatioAuto_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "BlueprintGetter", "GetIsAspectRatioAuto" },
		{ "BlueprintSetter", "SetIsAspectRatioAuto" },
		{ "Category", "MediaPlate" },
		{ "Comment", "/** If true then set the aspect ratio automatically based on the media. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then set the aspect ratio automatically based on the media." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMipMapUpscaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EXR Tiles & Mips" },
		{ "Comment", "/** If true then enable the use of MipLevelToUpscale as defined below. */" },
		{ "DisplayName", "Enable Mip Upscaling" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then enable the use of MipLevelToUpscale as defined below." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MipLevelToUpscale_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EXR Tiles & Mips" },
		{ "Comment", "/* With exr playback, upscale into lower quality mips from this specified level. All levels including and above the specified value will be fully read. */" },
		{ "DisplayName", "Upscale Mip Level" },
		{ "EditCondition", "bEnableMipMapUpscaling" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "With exr playback, upscale into lower quality mips from this specified level. All levels including and above the specified value will be fully read." },
		{ "UIMax", "16" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAdaptivePoleMipUpscaling_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "EXR Tiles & Mips" },
		{ "Comment", "/** If true then Media Plate will attempt to load and upscale lower quality mips and display those at the poles (Sphere object only). */" },
		{ "DisplayName", "Adaptive Pole Mip Upscale" },
		{ "EditCondition", "VisibleMipsTilesCalculations == EMediaTextureVisibleMipsTiles::Sphere" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If true then Media Plate will attempt to load and upscale lower quality mips and display those at the poles (Sphere object only)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LetterboxAspectRatio_MetaData[] = {
		{ "Comment", "/** If > 0, then this is the aspect ratio of our screen and\n\x09 * letterboxes will be added if the media is smaller than the screen. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "If > 0, then this is the aspect ratio of our screen and\nletterboxes will be added if the media is smaller than the screen." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[] = {
		{ "Comment", "/** Superseded by MediaTextures. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Superseded by MediaTextures." },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTextures_Inner_MetaData[] = {
		{ "Comment", "/** Holds the media textures. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the media textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTextures_MetaData[] = {
		{ "Comment", "/** Holds the media textures. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "Holds the media textures." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaTextureSettings_MetaData[] = {
		{ "Category", "MediaTexture" },
		{ "Comment", "/** Exposes Media Texture settings via Media Plate component. */" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Exposes Media Texture settings via Media Plate component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[] = {
		{ "Comment", "/** This component's media player */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaPlateComponent.h" },
		{ "ToolTip", "This component's media player" },
	};
#endif // WITH_METADATA
	static void NewProp_bPlayOnOpen_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnOpen;
	static void NewProp_bAutoPlay_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoPlay;
	static void NewProp_bEnableAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableAudio;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StaticMeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Letterboxes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Letterboxes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlaylist;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlaylistIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CacheSettings;
	static void NewProp_bIsMediaPlatePlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMediaPlatePlaying;
	static void NewProp_bPlayOnlyWhenVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayOnlyWhenVisible;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VisibleMipsTilesCalculations_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VisibleMipsTilesCalculations;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MipMapBias;
	static void NewProp_bIsAspectRatioAuto_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAspectRatioAuto;
	static void NewProp_bEnableMipMapUpscaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMipMapUpscaling;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MipLevelToUpscale;
	static void NewProp_bAdaptivePoleMipUpscaling_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdaptivePoleMipUpscaling;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LetterboxAspectRatio;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MeshRange;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTexture;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaTextures_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MediaTextures;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MediaTextureSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MediaPlayer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaPlateComponent_Close, "Close" }, // 748793109
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetIsAspectRatioAuto, "GetIsAspectRatioAuto" }, // 3471891934
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetLetterboxAspectRatio, "GetLetterboxAspectRatio" }, // 2509709758
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetLoop, "GetLoop" }, // 878646504
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetMediaPlayer, "GetMediaPlayer" }, // 3784676649
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetMediaTexture, "GetMediaTexture" }, // 1487293852
		{ &Z_Construct_UFunction_UMediaPlateComponent_GetMeshRange, "GetMeshRange" }, // 2254716411
		{ &Z_Construct_UFunction_UMediaPlateComponent_IsMediaPlatePlaying, "IsMediaPlatePlaying" }, // 2467524024
		{ &Z_Construct_UFunction_UMediaPlateComponent_OnMediaEnd, "OnMediaEnd" }, // 532680837
		{ &Z_Construct_UFunction_UMediaPlateComponent_OnMediaOpened, "OnMediaOpened" }, // 1960893483
		{ &Z_Construct_UFunction_UMediaPlateComponent_OnMediaResumed, "OnMediaResumed" }, // 2959152496
		{ &Z_Construct_UFunction_UMediaPlateComponent_OnMediaSuspended, "OnMediaSuspended" }, // 3849070883
		{ &Z_Construct_UFunction_UMediaPlateComponent_Open, "Open" }, // 1631401117
		{ &Z_Construct_UFunction_UMediaPlateComponent_Pause, "Pause" }, // 678862141
		{ &Z_Construct_UFunction_UMediaPlateComponent_Play, "Play" }, // 948027847
		{ &Z_Construct_UFunction_UMediaPlateComponent_Rewind, "Rewind" }, // 451842786
		{ &Z_Construct_UFunction_UMediaPlateComponent_Seek, "Seek" }, // 1903704573
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetIsAspectRatioAuto, "SetIsAspectRatioAuto" }, // 2865685563
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetLetterboxAspectRatio, "SetLetterboxAspectRatio" }, // 2332169008
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetLoop, "SetLoop" }, // 1575871283
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetMeshRange, "SetMeshRange" }, // 1679191973
		{ &Z_Construct_UFunction_UMediaPlateComponent_SetPlayOnlyWhenVisible, "SetPlayOnlyWhenVisible" }, // 1666343121
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaPlateComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bPlayOnOpen = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen = { "bPlayOnOpen", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayOnOpen_MetaData), NewProp_bPlayOnOpen_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bAutoPlay = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay = { "bAutoPlay", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoPlay_MetaData), NewProp_bAutoPlay_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bEnableAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio = { "bEnableAudio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableAudio_MetaData), NewProp_bEnableAudio_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, StartTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartTime_MetaData), NewProp_StartTime_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent = { "SoundComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, SoundComponent), Z_Construct_UClass_UMediaSoundComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SoundComponent_MetaData), NewProp_SoundComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x0114000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StaticMeshComponent_MetaData), NewProp_StaticMeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_Inner = { "Letterboxes", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes = { "Letterboxes", nullptr, (EPropertyFlags)0x0114008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, Letterboxes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Letterboxes_MetaData), NewProp_Letterboxes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist = { "MediaPlaylist", nullptr, (EPropertyFlags)0x0114000000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MediaPlaylist), Z_Construct_UClass_UMediaPlaylist_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlaylist_MetaData), NewProp_MediaPlaylist_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex = { "PlaylistIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, PlaylistIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaylistIndex_MetaData), NewProp_PlaylistIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings = { "CacheSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, CacheSettings), Z_Construct_UScriptStruct_FMediaSourceCacheSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CacheSettings_MetaData), NewProp_CacheSettings_MetaData) }; // 290552820
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bIsMediaPlatePlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying = { "bIsMediaPlatePlaying", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMediaPlatePlaying_MetaData), NewProp_bIsMediaPlatePlaying_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bPlayOnlyWhenVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible = { "bPlayOnlyWhenVisible", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayOnlyWhenVisible_MetaData), NewProp_bPlayOnlyWhenVisible_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLoop_MetaData), NewProp_bLoop_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations = { "VisibleMipsTilesCalculations", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, VisibleMipsTilesCalculations), Z_Construct_UEnum_MediaAssets_EMediaTextureVisibleMipsTiles, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibleMipsTilesCalculations_MetaData), NewProp_VisibleMipsTilesCalculations_MetaData) }; // 3464178668
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias = { "MipMapBias", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MipMapBias), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipMapBias_MetaData), NewProp_MipMapBias_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bIsAspectRatioAuto = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto = { "bIsAspectRatioAuto", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAspectRatioAuto_MetaData), NewProp_bIsAspectRatioAuto_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bEnableMipMapUpscaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling = { "bEnableMipMapUpscaling", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMipMapUpscaling_MetaData), NewProp_bEnableMipMapUpscaling_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale = { "MipLevelToUpscale", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MipLevelToUpscale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MipLevelToUpscale_MetaData), NewProp_MipLevelToUpscale_MetaData) };
void Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAdaptivePoleMipUpscaling_SetBit(void* Obj)
{
	((UMediaPlateComponent*)Obj)->bAdaptivePoleMipUpscaling = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAdaptivePoleMipUpscaling = { "bAdaptivePoleMipUpscaling", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMediaPlateComponent), &Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAdaptivePoleMipUpscaling_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAdaptivePoleMipUpscaling_MetaData), NewProp_bAdaptivePoleMipUpscaling_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio = { "LetterboxAspectRatio", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, LetterboxAspectRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LetterboxAspectRatio_MetaData), NewProp_LetterboxAspectRatio_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange = { "MeshRange", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MeshRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshRange_MetaData), NewProp_MeshRange_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x0146000820080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MediaTexture_DEPRECATED), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTexture_MetaData), NewProp_MediaTexture_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner = { "MediaTextures", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTextures_Inner_MetaData), NewProp_MediaTextures_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures = { "MediaTextures", nullptr, (EPropertyFlags)0x0144008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MediaTextures), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTextures_MetaData), NewProp_MediaTextures_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextureSettings = { "MediaTextureSettings", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MediaTextureSettings), Z_Construct_UScriptStruct_FMediaTextureResourceSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaTextureSettings_MetaData), NewProp_MediaTextureSettings_MetaData) }; // 2161054788
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x0146000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMediaPlateComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MediaPlayer_MetaData), NewProp_MediaPlayer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnOpen,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAutoPlay,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StartTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_SoundComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_StaticMeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_Letterboxes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlaylist,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_PlaylistIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_CacheSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsMediaPlatePlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bPlayOnlyWhenVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bLoop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_VisibleMipsTilesCalculations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipMapBias,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bIsAspectRatioAuto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bEnableMipMapUpscaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MipLevelToUpscale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_bAdaptivePoleMipUpscaling,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_LetterboxAspectRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MeshRange,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTexture,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextures,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaTextureSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaPlateComponent_Statics::NewProp_MediaPlayer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMediaPlateComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MediaPlate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMediaPlateComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMediaPlayerProxyInterface_NoRegister, (int32)VTABLE_OFFSET(UMediaPlateComponent, IMediaPlayerProxyInterface), false },  // 984407898
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaPlateComponent_Statics::ClassParams = {
	&UMediaPlateComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMediaPlateComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UMediaPlateComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMediaPlateComponent()
{
	if (!Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton, Z_Construct_UClass_UMediaPlateComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMediaPlateComponent.OuterSingleton;
}
template<> MEDIAPLATE_API UClass* StaticClass<UMediaPlateComponent>()
{
	return UMediaPlateComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaPlateComponent);
UMediaPlateComponent::~UMediaPlateComponent() {}
// End Class UMediaPlateComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMediaPlateEventState_StaticEnum, TEXT("EMediaPlateEventState"), &Z_Registration_Info_UEnum_EMediaPlateEventState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4073796694U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMediaTextureResourceSettings::StaticStruct, Z_Construct_UScriptStruct_FMediaTextureResourceSettings_Statics::NewStructOps, TEXT("MediaTextureResourceSettings"), &Z_Registration_Info_UScriptStruct_MediaTextureResourceSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMediaTextureResourceSettings), 2161054788U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMediaPlateComponent, UMediaPlateComponent::StaticClass, TEXT("UMediaPlateComponent"), &Z_Registration_Info_UClass_UMediaPlateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaPlateComponent), 579272076U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_2501692723(TEXT("/Script/MediaPlate"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaPlate_Source_MediaPlate_Public_MediaPlateComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
