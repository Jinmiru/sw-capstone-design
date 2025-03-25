// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/EyeTracker/Public/EyeTrackerFunctionLibrary.h"
#include "Runtime/EyeTracker/Public/EyeTrackerTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEyeTrackerFunctionLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
EYETRACKER_API UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary();
EYETRACKER_API UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister();
EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerGazeData();
EYETRACKER_API UScriptStruct* Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData();
UPackage* Z_Construct_UPackage__Script_EyeTracker();
// End Cross Module References

// Begin Class UEyeTrackerFunctionLibrary Function GetGazeData
struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics
{
	struct EyeTrackerFunctionLibrary_eventGetGazeData_Parms
	{
		FEyeTrackerGazeData OutGazeData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "Comment", "/**\n\x09 * Returns unfied gaze data from the eye tracker. This is a single gaze ray, representing the fusion of both eyes.\n\x09 * @param PlayerController\x09\x09The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n \x09 * @return\x09\x09\x09\x09\x09\x09True if the returned gaze data is valid, false otherwise. A false return is likely to be common (e.g. the when user blinks).\n\x09 */" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns unfied gaze data from the eye tracker. This is a single gaze ray, representing the fusion of both eyes.\n@param PlayerController              The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n@return                                              True if the returned gaze data is valid, false otherwise. A false return is likely to be common (e.g. the when user blinks)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGazeData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_OutGazeData = { "OutGazeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EyeTrackerFunctionLibrary_eventGetGazeData_Parms, OutGazeData), Z_Construct_UScriptStruct_FEyeTrackerGazeData, METADATA_PARAMS(0, nullptr) }; // 7247854
void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EyeTrackerFunctionLibrary_eventGetGazeData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventGetGazeData_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_OutGazeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "GetGazeData", nullptr, nullptr, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::EyeTrackerFunctionLibrary_eventGetGazeData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::EyeTrackerFunctionLibrary_eventGetGazeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEyeTrackerFunctionLibrary::execGetGazeData)
{
	P_GET_STRUCT_REF(FEyeTrackerGazeData,Z_Param_Out_OutGazeData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::GetGazeData(Z_Param_Out_OutGazeData);
	P_NATIVE_END;
}
// End Class UEyeTrackerFunctionLibrary Function GetGazeData

// Begin Class UEyeTrackerFunctionLibrary Function GetStereoGazeData
struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics
{
	struct EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms
	{
		FEyeTrackerStereoGazeData OutGazeData;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "Comment", "/**\n\x09 * Returns stereo gaze data from the eye tracker. This includes a gaze ray per eye, as well as a fixation point.\n\x09 * @param PlayerController\x09\x09The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n \x09 * @return\x09\x09\x09\x09\x09\x09True if the returned gaze data is valid, false otherwise. A false return is likely to be common (e.g. the when user blinks).\n\x09 */" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns stereo gaze data from the eye tracker. This includes a gaze ray per eye, as well as a fixation point.\n@param PlayerController              The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n@return                                              True if the returned gaze data is valid, false otherwise. A false return is likely to be common (e.g. the when user blinks)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutGazeData;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_OutGazeData = { "OutGazeData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms, OutGazeData), Z_Construct_UScriptStruct_FEyeTrackerStereoGazeData, METADATA_PARAMS(0, nullptr) }; // 183739526
void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_OutGazeData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "GetStereoGazeData", nullptr, nullptr, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::EyeTrackerFunctionLibrary_eventGetStereoGazeData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEyeTrackerFunctionLibrary::execGetStereoGazeData)
{
	P_GET_STRUCT_REF(FEyeTrackerStereoGazeData,Z_Param_Out_OutGazeData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::GetStereoGazeData(Z_Param_Out_OutGazeData);
	P_NATIVE_END;
}
// End Class UEyeTrackerFunctionLibrary Function GetStereoGazeData

// Begin Class UEyeTrackerFunctionLibrary Function IsEyeTrackerConnected
struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics
{
	struct EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "Comment", "/**\n\x09 * Returns whether or not the eye-tracking hardware is connected and ready to use. It may or may not actually be in use.\n \x09 * @return (Boolean)  true if eye tracker is connected and ready to use, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the eye-tracking hardware is connected and ready to use. It may or may not actually be in use.\n@return (Boolean)  true if eye tracker is connected and ready to use, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "IsEyeTrackerConnected", nullptr, nullptr, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::EyeTrackerFunctionLibrary_eventIsEyeTrackerConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEyeTrackerFunctionLibrary::execIsEyeTrackerConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::IsEyeTrackerConnected();
	P_NATIVE_END;
}
// End Class UEyeTrackerFunctionLibrary Function IsEyeTrackerConnected

// Begin Class UEyeTrackerFunctionLibrary Function IsStereoGazeDataAvailable
struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics
{
	struct EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "Comment", "/**\n\x09 * Returns whether or not the eye-tracking hardware is connected and ready to use. It may or may not actually be in use.\n \x09 * @return true if the connected eye tracker supports per-eye gaze data, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Returns whether or not the eye-tracking hardware is connected and ready to use. It may or may not actually be in use.\n@return true if the connected eye tracker supports per-eye gaze data, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms), &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "IsStereoGazeDataAvailable", nullptr, nullptr, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::EyeTrackerFunctionLibrary_eventIsStereoGazeDataAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEyeTrackerFunctionLibrary::execIsStereoGazeDataAvailable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UEyeTrackerFunctionLibrary::IsStereoGazeDataAvailable();
	P_NATIVE_END;
}
// End Class UEyeTrackerFunctionLibrary Function IsStereoGazeDataAvailable

// Begin Class UEyeTrackerFunctionLibrary Function SetEyeTrackedPlayer
struct Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics
{
	struct EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms
	{
		APlayerController* PlayerController;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Eye Tracking" },
		{ "Comment", "/**\n\x09 * Specifies player being eye-tracked. This is not necessary for all devices, but is necessary for some to determine viewport properties, etc.\n\x09 * @param PlayerController\x09\x09The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc.\n\x09 */" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
		{ "ToolTip", "Specifies player being eye-tracked. This is not necessary for all devices, but is necessary for some to determine viewport properties, etc.\n@param PlayerController              The player for whom we are tracking. Null can be ok for some devices, but this may be necessary for others to determine viewport properties, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::NewProp_PlayerController,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEyeTrackerFunctionLibrary, nullptr, "SetEyeTrackedPlayer", nullptr, nullptr, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::EyeTrackerFunctionLibrary_eventSetEyeTrackedPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UEyeTrackerFunctionLibrary::execSetEyeTrackedPlayer)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_FINISH;
	P_NATIVE_BEGIN;
	UEyeTrackerFunctionLibrary::SetEyeTrackedPlayer(Z_Param_PlayerController);
	P_NATIVE_END;
}
// End Class UEyeTrackerFunctionLibrary Function SetEyeTrackedPlayer

// Begin Class UEyeTrackerFunctionLibrary
void UEyeTrackerFunctionLibrary::StaticRegisterNativesUEyeTrackerFunctionLibrary()
{
	UClass* Class = UEyeTrackerFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGazeData", &UEyeTrackerFunctionLibrary::execGetGazeData },
		{ "GetStereoGazeData", &UEyeTrackerFunctionLibrary::execGetStereoGazeData },
		{ "IsEyeTrackerConnected", &UEyeTrackerFunctionLibrary::execIsEyeTrackerConnected },
		{ "IsStereoGazeDataAvailable", &UEyeTrackerFunctionLibrary::execIsStereoGazeDataAvailable },
		{ "SetEyeTrackedPlayer", &UEyeTrackerFunctionLibrary::execSetEyeTrackedPlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEyeTrackerFunctionLibrary);
UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary_NoRegister()
{
	return UEyeTrackerFunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EyeTrackerFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/EyeTrackerFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetGazeData, "GetGazeData" }, // 1974828397
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_GetStereoGazeData, "GetStereoGazeData" }, // 1482249288
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsEyeTrackerConnected, "IsEyeTrackerConnected" }, // 1817221389
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_IsStereoGazeDataAvailable, "IsStereoGazeDataAvailable" }, // 684857769
		{ &Z_Construct_UFunction_UEyeTrackerFunctionLibrary_SetEyeTrackedPlayer, "SetEyeTrackedPlayer" }, // 3810208481
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEyeTrackerFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_EyeTracker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::ClassParams = {
	&UEyeTrackerFunctionLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEyeTrackerFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.OuterSingleton, Z_Construct_UClass_UEyeTrackerFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary.OuterSingleton;
}
template<> EYETRACKER_API UClass* StaticClass<UEyeTrackerFunctionLibrary>()
{
	return UEyeTrackerFunctionLibrary::StaticClass();
}
UEyeTrackerFunctionLibrary::UEyeTrackerFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEyeTrackerFunctionLibrary);
UEyeTrackerFunctionLibrary::~UEyeTrackerFunctionLibrary() {}
// End Class UEyeTrackerFunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEyeTrackerFunctionLibrary, UEyeTrackerFunctionLibrary::StaticClass, TEXT("UEyeTrackerFunctionLibrary"), &Z_Registration_Info_UClass_UEyeTrackerFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEyeTrackerFunctionLibrary), 2029502313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_1410753925(TEXT("/Script/EyeTracker"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_EyeTracker_Public_EyeTrackerFunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
