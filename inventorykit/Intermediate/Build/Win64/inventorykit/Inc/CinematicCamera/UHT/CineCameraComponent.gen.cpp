// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/CinematicCamera/Public/CineCameraComponent.h"
#include "Runtime/CinematicCamera/Public/CineCameraSettings.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCineCameraComponent() {}

// Begin Cross Module References
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFocusSettings();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraLensSettings();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedFilmbackPreset();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FNamedLensPreset();
CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FPlateCropSettings();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CinematicCamera();
// End Cross Module References

// Begin Class UCineCameraComponent Function GetCropPresetName
struct Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics
{
	struct CineCameraComponent_eventGetCropPresetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the lens name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the lens name of the camera with the current settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetCropPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetCropPresetName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::CineCameraComponent_eventGetCropPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::CineCameraComponent_eventGetCropPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetCropPresetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetCropPresetName();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetCropPresetName

// Begin Class UCineCameraComponent Function GetDefaultFilmbackPresetName
struct Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics
{
	struct CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetDefaultFilmbackPresetName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::CineCameraComponent_eventGetDefaultFilmbackPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetDefaultFilmbackPresetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDefaultFilmbackPresetName();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetDefaultFilmbackPresetName

// Begin Class UCineCameraComponent Function GetFilmbackPresetName
struct Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics
{
	struct CineCameraComponent_eventGetFilmbackPresetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the filmback name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the filmback name of the camera with the current settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetFilmbackPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetFilmbackPresetName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::CineCameraComponent_eventGetFilmbackPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::CineCameraComponent_eventGetFilmbackPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetFilmbackPresetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetFilmbackPresetName();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetFilmbackPresetName

// Begin Class UCineCameraComponent Function GetFilmbackPresetsCopy
struct Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics
{
	struct CineCameraComponent_eventGetFilmbackPresetsCopy_Parms
	{
		TArray<FNamedFilmbackPreset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(0, nullptr) }; // 4053010513
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetFilmbackPresetsCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4053010513
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetFilmbackPresetsCopy", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::CineCameraComponent_eventGetFilmbackPresetsCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::CineCameraComponent_eventGetFilmbackPresetsCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetFilmbackPresetsCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNamedFilmbackPreset>*)Z_Param__Result=UCineCameraComponent::GetFilmbackPresetsCopy();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetFilmbackPresetsCopy

// Begin Class UCineCameraComponent Function GetHorizontalFieldOfView
struct Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics
{
	struct CineCameraComponent_eventGetHorizontalFieldOfView_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the horizonal FOV of the camera with current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the horizonal FOV of the camera with current settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetHorizontalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetHorizontalFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::CineCameraComponent_eventGetHorizontalFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::CineCameraComponent_eventGetHorizontalFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetHorizontalFieldOfView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetHorizontalFieldOfView();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetHorizontalFieldOfView

// Begin Class UCineCameraComponent Function GetLensPresetName
struct Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics
{
	struct CineCameraComponent_eventGetLensPresetName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the lens name of the camera with the current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the lens name of the camera with the current settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetLensPresetName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::CineCameraComponent_eventGetLensPresetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::CineCameraComponent_eventGetLensPresetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetLensPresetName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetLensPresetName();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetLensPresetName

// Begin Class UCineCameraComponent Function GetLensPresetsCopy
struct Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics
{
	struct CineCameraComponent_eventGetLensPresetsCopy_Parms
	{
		TArray<FNamedLensPreset> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(0, nullptr) }; // 1272989276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetLensPresetsCopy_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1272989276
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetLensPresetsCopy", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::CineCameraComponent_eventGetLensPresetsCopy_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::CineCameraComponent_eventGetLensPresetsCopy_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetLensPresetsCopy)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FNamedLensPreset>*)Z_Param__Result=UCineCameraComponent::GetLensPresetsCopy();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetLensPresetsCopy

// Begin Class UCineCameraComponent Function GetVerticalFieldOfView
struct Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics
{
	struct CineCameraComponent_eventGetVerticalFieldOfView_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Returns the vertical FOV of the camera with current settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Returns the vertical FOV of the camera with current settings." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventGetVerticalFieldOfView_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "GetVerticalFieldOfView", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::CineCameraComponent_eventGetVerticalFieldOfView_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::CineCameraComponent_eventGetVerticalFieldOfView_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execGetVerticalFieldOfView)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetVerticalFieldOfView();
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function GetVerticalFieldOfView

// Begin Class UCineCameraComponent Function SetCropPresetByName
struct Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics
{
	struct CineCameraComponent_eventSetCropPresetByName_Parms
	{
		FString InPresetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current lens settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current lens settings by preset name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPresetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCropPresetByName_Parms, InPresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPresetName_MetaData), NewProp_InPresetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::NewProp_InPresetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCropPresetByName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::CineCameraComponent_eventSetCropPresetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::CineCameraComponent_eventSetCropPresetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetCropPresetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCropPresetByName(Z_Param_InPresetName);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetCropPresetByName

// Begin Class UCineCameraComponent Function SetCropSettings
struct Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics
{
	struct CineCameraComponent_eventSetCropSettings_Parms
	{
		FPlateCropSettings NewCropSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCropSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCropSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::NewProp_NewCropSettings = { "NewCropSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCropSettings_Parms, NewCropSettings), Z_Construct_UScriptStruct_FPlateCropSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCropSettings_MetaData), NewProp_NewCropSettings_MetaData) }; // 3980497676
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::NewProp_NewCropSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCropSettings", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::CineCameraComponent_eventSetCropSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::CineCameraComponent_eventSetCropSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCropSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCropSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetCropSettings)
{
	P_GET_STRUCT_REF(FPlateCropSettings,Z_Param_Out_NewCropSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCropSettings(Z_Param_Out_NewCropSettings);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetCropSettings

// Begin Class UCineCameraComponent Function SetCurrentAperture
struct Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics
{
	struct CineCameraComponent_eventSetCurrentAperture_Parms
	{
		float NewCurrentAperture;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCurrentAperture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCurrentAperture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::NewProp_NewCurrentAperture = { "NewCurrentAperture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCurrentAperture_Parms, NewCurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCurrentAperture_MetaData), NewProp_NewCurrentAperture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::NewProp_NewCurrentAperture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCurrentAperture", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::CineCameraComponent_eventSetCurrentAperture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::CineCameraComponent_eventSetCurrentAperture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetCurrentAperture)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewCurrentAperture);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentAperture(Z_Param_NewCurrentAperture);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetCurrentAperture

// Begin Class UCineCameraComponent Function SetCurrentFocalLength
struct Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics
{
	struct CineCameraComponent_eventSetCurrentFocalLength_Parms
	{
		float InFocalLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Cine Camera" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFocalLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength = { "InFocalLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCurrentFocalLength_Parms, InFocalLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::NewProp_InFocalLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCurrentFocalLength", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::CineCameraComponent_eventSetCurrentFocalLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::CineCameraComponent_eventSetCurrentFocalLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetCurrentFocalLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFocalLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCurrentFocalLength(Z_Param_InFocalLength);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetCurrentFocalLength

// Begin Class UCineCameraComponent Function SetCustomNearClippingPlane
struct Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics
{
	struct CineCameraComponent_eventSetCustomNearClippingPlane_Parms
	{
		float NewCustomNearClippingPlane;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Sets near clipping plane of the cine camera. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Sets near clipping plane of the cine camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCustomNearClippingPlane_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewCustomNearClippingPlane;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::NewProp_NewCustomNearClippingPlane = { "NewCustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetCustomNearClippingPlane_Parms, NewCustomNearClippingPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCustomNearClippingPlane_MetaData), NewProp_NewCustomNearClippingPlane_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::NewProp_NewCustomNearClippingPlane,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetCustomNearClippingPlane", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::CineCameraComponent_eventSetCustomNearClippingPlane_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::CineCameraComponent_eventSetCustomNearClippingPlane_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetCustomNearClippingPlane)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewCustomNearClippingPlane);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCustomNearClippingPlane(Z_Param_NewCustomNearClippingPlane);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetCustomNearClippingPlane

// Begin Class UCineCameraComponent Function SetFilmback
struct Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics
{
	struct CineCameraComponent_eventSetFilmback_Parms
	{
		FCameraFilmbackSettings NewFilmback;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFilmback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewFilmback;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::NewProp_NewFilmback = { "NewFilmback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetFilmback_Parms, NewFilmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFilmback_MetaData), NewProp_NewFilmback_MetaData) }; // 2566076393
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::NewProp_NewFilmback,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetFilmback", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::CineCameraComponent_eventSetFilmback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::CineCameraComponent_eventSetFilmback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFilmback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetFilmback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetFilmback)
{
	P_GET_STRUCT_REF(FCameraFilmbackSettings,Z_Param_Out_NewFilmback);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilmback(Z_Param_Out_NewFilmback);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetFilmback

// Begin Class UCineCameraComponent Function SetFilmbackPresetByName
struct Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics
{
	struct CineCameraComponent_eventSetFilmbackPresetByName_Parms
	{
		FString InPresetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current preset settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current preset settings by preset name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPresetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetFilmbackPresetByName_Parms, InPresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPresetName_MetaData), NewProp_InPresetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::NewProp_InPresetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetFilmbackPresetByName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::CineCameraComponent_eventSetFilmbackPresetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::CineCameraComponent_eventSetFilmbackPresetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetFilmbackPresetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFilmbackPresetByName(Z_Param_InPresetName);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetFilmbackPresetByName

// Begin Class UCineCameraComponent Function SetFocusSettings
struct Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics
{
	struct CineCameraComponent_eventSetFocusSettings_Parms
	{
		FCameraFocusSettings NewFocusSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewFocusSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::NewProp_NewFocusSettings = { "NewFocusSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetFocusSettings_Parms, NewFocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFocusSettings_MetaData), NewProp_NewFocusSettings_MetaData) }; // 1798919099
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::NewProp_NewFocusSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetFocusSettings", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::CineCameraComponent_eventSetFocusSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::CineCameraComponent_eventSetFocusSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetFocusSettings)
{
	P_GET_STRUCT_REF(FCameraFocusSettings,Z_Param_Out_NewFocusSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocusSettings(Z_Param_Out_NewFocusSettings);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetFocusSettings

// Begin Class UCineCameraComponent Function SetLensPresetByName
struct Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics
{
	struct CineCameraComponent_eventSetLensPresetByName_Parms
	{
		FString InPresetName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cine Camera" },
		{ "Comment", "/** Set the current lens settings by preset name. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set the current lens settings by preset name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPresetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_InPresetName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName = { "InPresetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetLensPresetByName_Parms, InPresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPresetName_MetaData), NewProp_InPresetName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::NewProp_InPresetName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetLensPresetByName", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::CineCameraComponent_eventSetLensPresetByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::CineCameraComponent_eventSetLensPresetByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetLensPresetByName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_InPresetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLensPresetByName(Z_Param_InPresetName);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetLensPresetByName

// Begin Class UCineCameraComponent Function SetLensSettings
struct Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics
{
	struct CineCameraComponent_eventSetLensSettings_Parms
	{
		FCameraLensSettings NewLensSettings;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLensSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLensSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::NewProp_NewLensSettings = { "NewLensSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CineCameraComponent_eventSetLensSettings_Parms, NewLensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLensSettings_MetaData), NewProp_NewLensSettings_MetaData) }; // 2172479636
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::NewProp_NewLensSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCineCameraComponent, nullptr, "SetLensSettings", nullptr, nullptr, Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::CineCameraComponent_eventSetLensSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::CineCameraComponent_eventSetLensSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCineCameraComponent_SetLensSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCineCameraComponent_SetLensSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCineCameraComponent::execSetLensSettings)
{
	P_GET_STRUCT_REF(FCameraLensSettings,Z_Param_Out_NewLensSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLensSettings(Z_Param_Out_NewLensSettings);
	P_NATIVE_END;
}
// End Class UCineCameraComponent Function SetLensSettings

// Begin Class UCineCameraComponent
void UCineCameraComponent::StaticRegisterNativesUCineCameraComponent()
{
	UClass* Class = UCineCameraComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCropPresetName", &UCineCameraComponent::execGetCropPresetName },
		{ "GetDefaultFilmbackPresetName", &UCineCameraComponent::execGetDefaultFilmbackPresetName },
		{ "GetFilmbackPresetName", &UCineCameraComponent::execGetFilmbackPresetName },
		{ "GetFilmbackPresetsCopy", &UCineCameraComponent::execGetFilmbackPresetsCopy },
		{ "GetHorizontalFieldOfView", &UCineCameraComponent::execGetHorizontalFieldOfView },
		{ "GetLensPresetName", &UCineCameraComponent::execGetLensPresetName },
		{ "GetLensPresetsCopy", &UCineCameraComponent::execGetLensPresetsCopy },
		{ "GetVerticalFieldOfView", &UCineCameraComponent::execGetVerticalFieldOfView },
		{ "SetCropPresetByName", &UCineCameraComponent::execSetCropPresetByName },
		{ "SetCropSettings", &UCineCameraComponent::execSetCropSettings },
		{ "SetCurrentAperture", &UCineCameraComponent::execSetCurrentAperture },
		{ "SetCurrentFocalLength", &UCineCameraComponent::execSetCurrentFocalLength },
		{ "SetCustomNearClippingPlane", &UCineCameraComponent::execSetCustomNearClippingPlane },
		{ "SetFilmback", &UCineCameraComponent::execSetFilmback },
		{ "SetFilmbackPresetByName", &UCineCameraComponent::execSetFilmbackPresetByName },
		{ "SetFocusSettings", &UCineCameraComponent::execSetFocusSettings },
		{ "SetLensPresetByName", &UCineCameraComponent::execSetLensPresetByName },
		{ "SetLensSettings", &UCineCameraComponent::execSetLensSettings },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCineCameraComponent);
UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister()
{
	return UCineCameraComponent::StaticClass();
}
struct Z_Construct_UClass_UCineCameraComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "Comment", "/**\n * A specialized version of a camera component, geared toward cinematic usage.\n */" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "CineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "A specialized version of a camera component, geared toward cinematic usage." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Filmback_MetaData[] = {
		{ "BlueprintSetter", "SetFilmback" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the filmback of the camera. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the filmback of the camera." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensSettings_MetaData[] = {
		{ "BlueprintSetter", "SetLensSettings" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the camera's lens. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the camera's lens." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusSettings_MetaData[] = {
		{ "BlueprintSetter", "SetFocusSettings" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the camera's focus. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the camera's focus." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CropSettings_MetaData[] = {
		{ "BlueprintSetter", "SetCropSettings" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Controls the crop settings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Controls the crop settings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocalLength_MetaData[] = {
		{ "BlueprintSetter", "SetCurrentFocalLength" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Current focal length of the camera (i.e. controls FoV, zoom) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Current focal length of the camera (i.e. controls FoV, zoom)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAperture_MetaData[] = {
		{ "BlueprintSetter", "SetCurrentAperture" },
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8) */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Current aperture, in terms of f-stop (e.g. 2.8 for f/2.8)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFocusDistance_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Read-only. Control this value via FocusSettings. */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Control this value via FocusSettings." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_CustomNearClippingPlane_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CustomNearClippingPlane_MetaData[] = {
		{ "BlueprintSetter", "SetCustomNearClippingPlane" },
		{ "Category", "Current Camera Settings" },
		{ "ClampMin", "0.00001" },
		{ "Comment", "/** Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane. */" },
		{ "editcondition", "bOverride_CustomNearClippingPlane" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Set bOverride_CustomNearClippingPlane to true if you want to use a custom clipping plane instead of GNearClippingPlane." },
		{ "UIMin", "0.00001" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHorizontalFOV_MetaData[] = {
		{ "Category", "Current Camera Settings" },
		{ "Comment", "/** Read-only. Control this value with CurrentFocalLength (and filmback settings). */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Read-only. Control this value with CurrentFocalLength (and filmback settings)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusPlaneVisualizationMesh_MetaData[] = {
		{ "Comment", "/** Mesh used for debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Mesh used for debug focus plane visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusPlaneVisualizationMaterial_MetaData[] = {
		{ "Comment", "/** Material used for debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Material used for debug focus plane visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneComponent_MetaData[] = {
		{ "Comment", "/** Component for the debug focus plane visualization */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Component for the debug focus plane visualization" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugFocusPlaneMID_MetaData[] = {
		{ "Comment", "/** Dynamic material instance for the debug focus plane visualization */" },
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
		{ "ToolTip", "Dynamic material instance for the debug focus plane visualization" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FilmbackPresets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensPresets_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPresetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFilmbackPreset_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensPresetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFocalLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLensFStop_MetaData[] = {
		{ "ModuleRelativePath", "Public/CineCameraComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Filmback;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FocusSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CropSettings;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentAperture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentFocusDistance;
	static void NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_CustomNearClippingPlane;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CustomNearClippingPlane;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHorizontalFOV;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusPlaneVisualizationMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusPlaneVisualizationMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DebugFocusPlaneMID;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FilmbackPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_FilmbackPresets;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LensPresets_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LensPresets;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPresetName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultFilmbackPreset;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultLensPresetName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFocalLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultLensFStop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCineCameraComponent_GetCropPresetName, "GetCropPresetName" }, // 3356952705
		{ &Z_Construct_UFunction_UCineCameraComponent_GetDefaultFilmbackPresetName, "GetDefaultFilmbackPresetName" }, // 315755462
		{ &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetName, "GetFilmbackPresetName" }, // 3909603418
		{ &Z_Construct_UFunction_UCineCameraComponent_GetFilmbackPresetsCopy, "GetFilmbackPresetsCopy" }, // 3721845414
		{ &Z_Construct_UFunction_UCineCameraComponent_GetHorizontalFieldOfView, "GetHorizontalFieldOfView" }, // 3378137039
		{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetName, "GetLensPresetName" }, // 3453031534
		{ &Z_Construct_UFunction_UCineCameraComponent_GetLensPresetsCopy, "GetLensPresetsCopy" }, // 2476466449
		{ &Z_Construct_UFunction_UCineCameraComponent_GetVerticalFieldOfView, "GetVerticalFieldOfView" }, // 122477189
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCropPresetByName, "SetCropPresetByName" }, // 3023860228
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCropSettings, "SetCropSettings" }, // 1100036760
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCurrentAperture, "SetCurrentAperture" }, // 2233343140
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCurrentFocalLength, "SetCurrentFocalLength" }, // 3796376036
		{ &Z_Construct_UFunction_UCineCameraComponent_SetCustomNearClippingPlane, "SetCustomNearClippingPlane" }, // 842033061
		{ &Z_Construct_UFunction_UCineCameraComponent_SetFilmback, "SetFilmback" }, // 2703995679
		{ &Z_Construct_UFunction_UCineCameraComponent_SetFilmbackPresetByName, "SetFilmbackPresetByName" }, // 3771290835
		{ &Z_Construct_UFunction_UCineCameraComponent_SetFocusSettings, "SetFocusSettings" }, // 324696739
		{ &Z_Construct_UFunction_UCineCameraComponent_SetLensPresetByName, "SetLensPresetByName" }, // 3333114573
		{ &Z_Construct_UFunction_UCineCameraComponent_SetLensSettings, "SetLensSettings" }, // 4041316452
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCineCameraComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings = { "FilmbackSettings", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, FilmbackSettings_DEPRECATED), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmbackSettings_MetaData), NewProp_FilmbackSettings_MetaData) }; // 2566076393
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback = { "Filmback", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, Filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Filmback_MetaData), NewProp_Filmback_MetaData) }; // 2566076393
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings = { "LensSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, LensSettings), Z_Construct_UScriptStruct_FCameraLensSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensSettings_MetaData), NewProp_LensSettings_MetaData) }; // 2172479636
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings = { "FocusSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, FocusSettings), Z_Construct_UScriptStruct_FCameraFocusSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusSettings_MetaData), NewProp_FocusSettings_MetaData) }; // 1798919099
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CropSettings = { "CropSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, CropSettings), Z_Construct_UScriptStruct_FPlateCropSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CropSettings_MetaData), NewProp_CropSettings_MetaData) }; // 3980497676
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength = { "CurrentFocalLength", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFocalLength_MetaData), NewProp_CurrentFocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture = { "CurrentAperture", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentAperture), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAperture_MetaData), NewProp_CurrentAperture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance = { "CurrentFocusDistance", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentFocusDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentFocusDistance_MetaData), NewProp_CurrentFocusDistance_MetaData) };
void Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit(void* Obj)
{
	((UCineCameraComponent*)Obj)->bOverride_CustomNearClippingPlane = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_bOverride_CustomNearClippingPlane = { "bOverride_CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UCineCameraComponent), &Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_bOverride_CustomNearClippingPlane_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverride_CustomNearClippingPlane_MetaData), NewProp_bOverride_CustomNearClippingPlane_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CustomNearClippingPlane = { "CustomNearClippingPlane", nullptr, (EPropertyFlags)0x0010040200000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, CustomNearClippingPlane), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CustomNearClippingPlane_MetaData), NewProp_CustomNearClippingPlane_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV = { "CurrentHorizontalFOV", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, CurrentHorizontalFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHorizontalFOV_MetaData), NewProp_CurrentHorizontalFOV_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh = { "FocusPlaneVisualizationMesh", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, FocusPlaneVisualizationMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusPlaneVisualizationMesh_MetaData), NewProp_FocusPlaneVisualizationMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial = { "FocusPlaneVisualizationMaterial", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, FocusPlaneVisualizationMaterial), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusPlaneVisualizationMaterial_MetaData), NewProp_FocusPlaneVisualizationMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent = { "DebugFocusPlaneComponent", nullptr, (EPropertyFlags)0x0124080800082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugFocusPlaneComponent_MetaData), NewProp_DebugFocusPlaneComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID = { "DebugFocusPlaneMID", nullptr, (EPropertyFlags)0x0124080800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DebugFocusPlaneMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugFocusPlaneMID_MetaData), NewProp_DebugFocusPlaneMID_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_Inner = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedFilmbackPreset, METADATA_PARAMS(0, nullptr) }; // 4053010513
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets = { "FilmbackPresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, FilmbackPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FilmbackPresets_MetaData), NewProp_FilmbackPresets_MetaData) }; // 4053010513
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_Inner = { "LensPresets", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FNamedLensPreset, METADATA_PARAMS(0, nullptr) }; // 1272989276
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets = { "LensPresets", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, LensPresets), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensPresets_MetaData), NewProp_LensPresets_MetaData) }; // 1272989276
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName = { "DefaultFilmbackPresetName", nullptr, (EPropertyFlags)0x0020080020004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPresetName_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFilmbackPresetName_MetaData), NewProp_DefaultFilmbackPresetName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset = { "DefaultFilmbackPreset", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultFilmbackPreset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFilmbackPreset_MetaData), NewProp_DefaultFilmbackPreset_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName = { "DefaultLensPresetName", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensPresetName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLensPresetName_MetaData), NewProp_DefaultLensPresetName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength = { "DefaultLensFocalLength", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFocalLength), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLensFocalLength_MetaData), NewProp_DefaultLensFocalLength_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop = { "DefaultLensFStop", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCineCameraComponent, DefaultLensFStop), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLensFStop_MetaData), NewProp_DefaultLensFStop_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_Filmback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CropSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentAperture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentFocusDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_bOverride_CustomNearClippingPlane,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CustomNearClippingPlane,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_CurrentHorizontalFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FocusPlaneVisualizationMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DebugFocusPlaneMID,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_FilmbackPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_LensPresets,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultFilmbackPreset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensPresetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFocalLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCineCameraComponent_Statics::NewProp_DefaultLensFStop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCineCameraComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCameraComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_CinematicCamera,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams = {
	&UCineCameraComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCineCameraComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCineCameraComponent()
{
	if (!Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton, Z_Construct_UClass_UCineCameraComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCineCameraComponent.OuterSingleton;
}
template<> CINEMATICCAMERA_API UClass* StaticClass<UCineCameraComponent>()
{
	return UCineCameraComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCineCameraComponent);
UCineCameraComponent::~UCineCameraComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCineCameraComponent)
// End Class UCineCameraComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCineCameraComponent, UCineCameraComponent::StaticClass, TEXT("UCineCameraComponent"), &Z_Registration_Info_UClass_UCineCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCineCameraComponent), 137400276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_868386519(TEXT("/Script/CinematicCamera"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CinematicCamera_Public_CineCameraComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
