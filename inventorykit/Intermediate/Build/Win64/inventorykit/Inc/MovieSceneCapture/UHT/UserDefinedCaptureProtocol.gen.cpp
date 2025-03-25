// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/MovieSceneCapture/Public/Protocols/UserDefinedCaptureProtocol.h"
#include "Runtime/MovieSceneCapture/Public/MovieSceneCaptureProtocolBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUserDefinedCaptureProtocol() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
IMAGEWRITEQUEUE_API UEnum* Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol();
MOVIESCENECAPTURE_API UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixels();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixelsID();
MOVIESCENECAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FFrameMetrics();
UPackage* Z_Construct_UPackage__Script_MovieSceneCapture();
// End Cross Module References

// Begin ScriptStruct FCapturedPixelsID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapturedPixelsID;
class UScriptStruct* FCapturedPixelsID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedPixelsID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapturedPixelsID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPixelsID, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CapturedPixelsID"));
	}
	return Z_Registration_Info_UScriptStruct_CapturedPixelsID.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCapturedPixelsID>()
{
	return FCapturedPixelsID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCapturedPixelsID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Structure used as an identifier for a particular buffer within a capture. */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Structure used as an identifier for a particular buffer within a capture." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Identifiers_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Map of identifiers to their values for this ID. */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Map of identifiers to their values for this ID." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifiers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Identifiers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Identifiers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPixelsID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_ValueProp = { "Identifiers", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_Key_KeyProp = { "Identifiers_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers = { "Identifiers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCapturedPixelsID, Identifiers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Identifiers_MetaData), NewProp_Identifiers_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewProp_Identifiers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	&NewStructOps,
	"CapturedPixelsID",
	Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::PropPointers),
	sizeof(FCapturedPixelsID),
	alignof(FCapturedPixelsID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixelsID()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedPixelsID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapturedPixelsID.InnerSingleton, Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CapturedPixelsID.InnerSingleton;
}
// End ScriptStruct FCapturedPixelsID

// Begin ScriptStruct FCapturedPixels
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CapturedPixels;
class UScriptStruct* FCapturedPixels::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedPixels.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CapturedPixels.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturedPixels, (UObject*)Z_Construct_UPackage__Script_MovieSceneCapture(), TEXT("CapturedPixels"));
	}
	return Z_Registration_Info_UScriptStruct_CapturedPixels.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UScriptStruct* StaticStruct<FCapturedPixels>()
{
	return FCapturedPixels::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCapturedPixels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturedPixels>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturedPixels_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
	nullptr,
	&NewStructOps,
	"CapturedPixels",
	nullptr,
	0,
	sizeof(FCapturedPixels),
	alignof(FCapturedPixels),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCapturedPixels_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCapturedPixels()
{
	if (!Z_Registration_Info_UScriptStruct_CapturedPixels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CapturedPixels.InnerSingleton, Z_Construct_UScriptStruct_FCapturedPixels_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CapturedPixels.InnerSingleton;
}
// End ScriptStruct FCapturedPixels

// Begin Class UUserDefinedCaptureProtocol Function GenerateFilename
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics
{
	struct UserDefinedCaptureProtocol_eventGenerateFilename_Parms
	{
		FFrameMetrics InFrameMetrics;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Generate a filename for the current frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Generate a filename for the current frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InFrameMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InFrameMetrics;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics = { "InFrameMetrics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGenerateFilename_Parms, InFrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InFrameMetrics_MetaData), NewProp_InFrameMetrics_MetaData) }; // 2407708522
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGenerateFilename_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_InFrameMetrics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "GenerateFilename", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::UserDefinedCaptureProtocol_eventGenerateFilename_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::UserDefinedCaptureProtocol_eventGenerateFilename_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execGenerateFilename)
{
	P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_InFrameMetrics);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GenerateFilename(Z_Param_Out_InFrameMetrics);
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function GenerateFilename

// Begin Class UUserDefinedCaptureProtocol Function GetCurrentFrameMetrics
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics
{
	struct UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms
	{
		FFrameMetrics ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Access this protocol's current frame metrics\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Access this protocol's current frame metrics" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms, ReturnValue), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(0, nullptr) }; // 2407708522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "GetCurrentFrameMetrics", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::UserDefinedCaptureProtocol_eventGetCurrentFrameMetrics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execGetCurrentFrameMetrics)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FFrameMetrics*)Z_Param__Result=P_THIS->GetCurrentFrameMetrics();
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function GetCurrentFrameMetrics

// Begin Class UUserDefinedCaptureProtocol Function OnBeginFinalize
static FName NAME_UUserDefinedCaptureProtocol_OnBeginFinalize = FName(TEXT("OnBeginFinalize"));
void UUserDefinedCaptureProtocol::OnBeginFinalize()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnBeginFinalize),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol is going to be shut down - should not capture any more frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol is going to be shut down - should not capture any more frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnBeginFinalize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnBeginFinalize

// Begin Class UUserDefinedCaptureProtocol Function OnCanFinalize
struct UserDefinedCaptureProtocol_eventOnCanFinalize_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	UserDefinedCaptureProtocol_eventOnCanFinalize_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UUserDefinedCaptureProtocol_OnCanFinalize = FName(TEXT("OnCanFinalize"));
bool UUserDefinedCaptureProtocol::OnCanFinalize() const
{
	UserDefinedCaptureProtocol_eventOnCanFinalize_Parms Parms;
	const_cast<UUserDefinedCaptureProtocol*>(this)->ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnCanFinalize),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called to check whether this protocol has finished any pending tasks, and can now be shut down\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called to check whether this protocol has finished any pending tasks, and can now be shut down" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UserDefinedCaptureProtocol_eventOnCanFinalize_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms), &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnCanFinalize", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::PropPointers), sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::Function_MetaDataParams) };
static_assert(sizeof(UserDefinedCaptureProtocol_eventOnCanFinalize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execOnCanFinalize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnCanFinalize_Implementation();
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function OnCanFinalize

// Begin Class UUserDefinedCaptureProtocol Function OnCaptureFrame
static FName NAME_UUserDefinedCaptureProtocol_OnCaptureFrame = FName(TEXT("OnCaptureFrame"));
void UUserDefinedCaptureProtocol::OnCaptureFrame()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnCaptureFrame),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol should capture the current frame\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should capture the current frame" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnCaptureFrame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnCaptureFrame

// Begin Class UUserDefinedCaptureProtocol Function OnFinalize
static FName NAME_UUserDefinedCaptureProtocol_OnFinalize = FName(TEXT("OnFinalize"));
void UUserDefinedCaptureProtocol::OnFinalize()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnFinalize),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called to complete finalization of this protocol\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called to complete finalization of this protocol" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnFinalize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnFinalize

// Begin Class UUserDefinedCaptureProtocol Function OnPauseCapture
static FName NAME_UUserDefinedCaptureProtocol_OnPauseCapture = FName(TEXT("OnPauseCapture"));
void UUserDefinedCaptureProtocol::OnPauseCapture()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPauseCapture),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol should temporarily stop capturing frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should temporarily stop capturing frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnPauseCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnPauseCapture

// Begin Class UUserDefinedCaptureProtocol Function OnPixelsReceived
struct UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms
{
	FCapturedPixels Pixels;
	FCapturedPixelsID ID;
	FFrameMetrics FrameMetrics;
};
static FName NAME_UUserDefinedCaptureProtocol_OnPixelsReceived = FName(TEXT("OnPixelsReceived"));
void UUserDefinedCaptureProtocol::OnPixelsReceived(FCapturedPixels const& Pixels, FCapturedPixelsID const& ID, FFrameMetrics FrameMetrics)
{
	UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms Parms;
	Parms.Pixels=Pixels;
	Parms.ID=ID;
	Parms.FrameMetrics=FrameMetrics;
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPixelsReceived),&Parms);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when pixels have been received for the specified stream name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when pixels have been received for the specified stream name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pixels_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pixels;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameMetrics;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels = { "Pixels", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms, Pixels), Z_Construct_UScriptStruct_FCapturedPixels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pixels_MetaData), NewProp_Pixels_MetaData) }; // 514291827
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms, ID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) }; // 4179246271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_FrameMetrics = { "FrameMetrics", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms, FrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(0, nullptr) }; // 2407708522
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_Pixels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::NewProp_FrameMetrics,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnPixelsReceived", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::PropPointers), sizeof(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(UserDefinedCaptureProtocol_eventOnPixelsReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnPixelsReceived

// Begin Class UUserDefinedCaptureProtocol Function OnPreTick
static FName NAME_UUserDefinedCaptureProtocol_OnPreTick = FName(TEXT("OnPreTick"));
void UUserDefinedCaptureProtocol::OnPreTick()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnPreTick),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called before the capture process itself is ticked, before each frame is set up for capture\n\x09 * Useful for any pre-frame set up or resetting the previous frame's state\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called before the capture process itself is ticked, before each frame is set up for capture\nUseful for any pre-frame set up or resetting the previous frame's state" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnPreTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnPreTick

// Begin Class UUserDefinedCaptureProtocol Function OnSetup
struct UserDefinedCaptureProtocol_eventOnSetup_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	UserDefinedCaptureProtocol_eventOnSetup_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UUserDefinedCaptureProtocol_OnSetup = FName(TEXT("OnSetup"));
bool UUserDefinedCaptureProtocol::OnSetup()
{
	UserDefinedCaptureProtocol_eventOnSetup_Parms Parms;
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnSetup),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called once at the start of the capture process, but before any warmup frames\n\x09 * @return true if this protocol set up successfully, false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called once at the start of the capture process, but before any warmup frames\n@return true if this protocol set up successfully, false otherwise" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((UserDefinedCaptureProtocol_eventOnSetup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms), &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnSetup", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::PropPointers), sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::Function_MetaDataParams) };
static_assert(sizeof(UserDefinedCaptureProtocol_eventOnSetup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execOnSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->OnSetup_Implementation();
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function OnSetup

// Begin Class UUserDefinedCaptureProtocol Function OnStartCapture
static FName NAME_UUserDefinedCaptureProtocol_OnStartCapture = FName(TEXT("OnStartCapture"));
void UUserDefinedCaptureProtocol::OnStartCapture()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnStartCapture),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when this protocol should start capturing frames\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when this protocol should start capturing frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnStartCapture", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnStartCapture

// Begin Class UUserDefinedCaptureProtocol Function OnTick
static FName NAME_UUserDefinedCaptureProtocol_OnTick = FName(TEXT("OnTick"));
void UUserDefinedCaptureProtocol::OnTick()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnTick),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called after the capture process itself is ticked, after the frame is set up for capture, but before most actors have ticked\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called after the capture process itself is ticked, after the frame is set up for capture, but before most actors have ticked" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnTick", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnTick

// Begin Class UUserDefinedCaptureProtocol Function OnWarmUp
static FName NAME_UUserDefinedCaptureProtocol_OnWarmUp = FName(TEXT("OnWarmUp"));
void UUserDefinedCaptureProtocol::OnWarmUp()
{
	ProcessEvent(FindFunctionChecked(NAME_UUserDefinedCaptureProtocol_OnWarmUp),NULL);
}
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Called when the capture process is warming up. Protocols may transition from either an initialized, or capturing state to warm-up\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Called when the capture process is warming up. Protocols may transition from either an initialized, or capturing state to warm-up" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "OnWarmUp", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UUserDefinedCaptureProtocol Function OnWarmUp

// Begin Class UUserDefinedCaptureProtocol Function ResolveBuffer
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics
{
	struct UserDefinedCaptureProtocol_eventResolveBuffer_Parms
	{
		UTexture* Buffer;
		FCapturedPixelsID BufferID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)\n\x09 * \n\x09 * @param Buffer          The desired buffer to save\n\x09 * @param BufferID        The ID of this buffer that is passed to the pixel handler (e.g. a composition pass name).\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Resolve the specified buffer and pass it directly to the specified handler when done (does not pass to any bound streams)\n*\n* @param Buffer          The desired buffer to save\n* @param BufferID        The ID of this buffer that is passed to the pixel handler (e.g. a composition pass name)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BufferID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BufferID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID = { "BufferID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventResolveBuffer_Parms, BufferID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BufferID_MetaData), NewProp_BufferID_MetaData) }; // 4179246271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::NewProp_BufferID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "ResolveBuffer", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::UserDefinedCaptureProtocol_eventResolveBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::UserDefinedCaptureProtocol_eventResolveBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execResolveBuffer)
{
	P_GET_OBJECT(UTexture,Z_Param_Buffer);
	P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_BufferID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResolveBuffer(Z_Param_Buffer,Z_Param_Out_BufferID);
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function ResolveBuffer

// Begin Class UUserDefinedCaptureProtocol Function StartCapturingFinalPixels
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics
{
	struct UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms
	{
		FCapturedPixelsID StreamID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)\n\x09 *\n\x09 * @param StreamID        The identifier to use for the final pixels buffer\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Instruct this protocol to start capturing LDR final pixels (including slate widgets and burn-ins)\n\n@param StreamID        The identifier to use for the final pixels buffer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms, StreamID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamID_MetaData), NewProp_StreamID_MetaData) }; // 4179246271
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::NewProp_StreamID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "StartCapturingFinalPixels", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::UserDefinedCaptureProtocol_eventStartCapturingFinalPixels_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execStartCapturingFinalPixels)
{
	P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_StreamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartCapturingFinalPixels(Z_Param_Out_StreamID);
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function StartCapturingFinalPixels

// Begin Class UUserDefinedCaptureProtocol Function StopCapturingFinalPixels
struct Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/**\n\x09 * Instruct this protocol to stop capturing LDR final pixels\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Instruct this protocol to stop capturing LDR final pixels" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedCaptureProtocol, nullptr, "StopCapturingFinalPixels", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedCaptureProtocol::execStopCapturingFinalPixels)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopCapturingFinalPixels();
	P_NATIVE_END;
}
// End Class UUserDefinedCaptureProtocol Function StopCapturingFinalPixels

// Begin Class UUserDefinedCaptureProtocol
void UUserDefinedCaptureProtocol::StaticRegisterNativesUUserDefinedCaptureProtocol()
{
	UClass* Class = UUserDefinedCaptureProtocol::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateFilename", &UUserDefinedCaptureProtocol::execGenerateFilename },
		{ "GetCurrentFrameMetrics", &UUserDefinedCaptureProtocol::execGetCurrentFrameMetrics },
		{ "OnCanFinalize", &UUserDefinedCaptureProtocol::execOnCanFinalize },
		{ "OnSetup", &UUserDefinedCaptureProtocol::execOnSetup },
		{ "ResolveBuffer", &UUserDefinedCaptureProtocol::execResolveBuffer },
		{ "StartCapturingFinalPixels", &UUserDefinedCaptureProtocol::execStartCapturingFinalPixels },
		{ "StopCapturingFinalPixels", &UUserDefinedCaptureProtocol::execStopCapturingFinalPixels },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedCaptureProtocol);
UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol_NoRegister()
{
	return UUserDefinedCaptureProtocol::StaticClass();
}
struct Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A blueprintable capture protocol that defines how to capture frames from the engine\n */" },
		{ "DisplayName", "Capture Protocol" },
		{ "IncludePath", "Protocols/UserDefinedCaptureProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A blueprintable capture protocol that defines how to capture frames from the engine" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** World pointer assigned on Setup */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "World pointer assigned on Setup" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GenerateFilename, "GenerateFilename" }, // 3173450178
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_GetCurrentFrameMetrics, "GetCurrentFrameMetrics" }, // 4017506247
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnBeginFinalize, "OnBeginFinalize" }, // 586476171
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCanFinalize, "OnCanFinalize" }, // 3591335837
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnCaptureFrame, "OnCaptureFrame" }, // 3093086505
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnFinalize, "OnFinalize" }, // 850391702
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPauseCapture, "OnPauseCapture" }, // 1518242684
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPixelsReceived, "OnPixelsReceived" }, // 1811656644
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnPreTick, "OnPreTick" }, // 2869266557
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnSetup, "OnSetup" }, // 1937824908
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnStartCapture, "OnStartCapture" }, // 3162095334
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnTick, "OnTick" }, // 474378715
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_OnWarmUp, "OnWarmUp" }, // 4115016785
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_ResolveBuffer, "ResolveBuffer" }, // 622099221
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StartCapturingFinalPixels, "StartCapturingFinalPixels" }, // 1978136567
		{ &Z_Construct_UFunction_UUserDefinedCaptureProtocol_StopCapturingFinalPixels, "StopCapturingFinalPixels" }, // 2411779428
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedCaptureProtocol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0124080000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedCaptureProtocol, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovieSceneImageCaptureProtocolBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams = {
	&UUserDefinedCaptureProtocol::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::PropPointers),
	0,
	0x000804A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserDefinedCaptureProtocol()
{
	if (!Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.OuterSingleton, Z_Construct_UClass_UUserDefinedCaptureProtocol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserDefinedCaptureProtocol.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UUserDefinedCaptureProtocol>()
{
	return UUserDefinedCaptureProtocol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedCaptureProtocol);
UUserDefinedCaptureProtocol::~UUserDefinedCaptureProtocol() {}
// End Class UUserDefinedCaptureProtocol

// Begin Class UUserDefinedImageCaptureProtocol Function GenerateFilenameForBuffer
struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics
{
	struct UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms
	{
		UTexture* Buffer;
		FCapturedPixelsID StreamID;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Generate a filename for the specified buffer using this protocol's file name formatter\n\x09 * \n\x09 * @param Buffer          The desired buffer to generate a filename for\n\x09 * @param StreamID        The ID of the stream for this buffer (e.g. a composition pass name)\n\x09 * @return A fully qualified file name\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the specified buffer using this protocol's file name formatter\n*\n* @param Buffer          The desired buffer to generate a filename for\n* @param StreamID        The ID of the stream for this buffer (e.g. a composition pass name)\n* @return A fully qualified file name" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Buffer;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_Buffer = { "Buffer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, Buffer), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, StreamID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamID_MetaData), NewProp_StreamID_MetaData) }; // 4179246271
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_Buffer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_StreamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, nullptr, "GenerateFilenameForBuffer", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::UserDefinedImageCaptureProtocol_eventGenerateFilenameForBuffer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedImageCaptureProtocol::execGenerateFilenameForBuffer)
{
	P_GET_OBJECT(UTexture,Z_Param_Buffer);
	P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_StreamID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForBuffer(Z_Param_Buffer,Z_Param_Out_StreamID);
	P_NATIVE_END;
}
// End Class UUserDefinedImageCaptureProtocol Function GenerateFilenameForBuffer

// Begin Class UUserDefinedImageCaptureProtocol Function GenerateFilenameForCurrentFrame
struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics
{
	struct UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Generate a filename for the current frame using this protocol's file name formatter\n\x09 * \n\x09 * @return A fully qualified file name for the current frame number\n\x09 */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the current frame using this protocol's file name formatter\n*\n* @return A fully qualified file name for the current frame number" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, nullptr, "GenerateFilenameForCurrentFrame", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::UserDefinedImageCaptureProtocol_eventGenerateFilenameForCurrentFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedImageCaptureProtocol::execGenerateFilenameForCurrentFrame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GenerateFilenameForCurrentFrame();
	P_NATIVE_END;
}
// End Class UUserDefinedImageCaptureProtocol Function GenerateFilenameForCurrentFrame

// Begin Class UUserDefinedImageCaptureProtocol Function WriteImageToDisk
struct Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics
{
	struct UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms
	{
		FCapturedPixels PixelData;
		FCapturedPixelsID StreamID;
		FFrameMetrics FrameMetrics;
		bool bCopyImageData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Capture" },
		{ "Comment", "/*\n\x09 * Generate a filename for the current frame using this protocol's file name formatter\n\x09 * \n\x09 * @return A fully qualified file name for the current frame number\n\x09 */" },
		{ "CPP_Default_bCopyImageData", "false" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "* Generate a filename for the current frame using this protocol's file name formatter\n*\n* @return A fully qualified file name for the current frame number" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelData_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamID_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameMetrics_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PixelData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameMetrics;
	static void NewProp_bCopyImageData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyImageData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData = { "PixelData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, PixelData), Z_Construct_UScriptStruct_FCapturedPixels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelData_MetaData), NewProp_PixelData_MetaData) }; // 514291827
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID = { "StreamID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, StreamID), Z_Construct_UScriptStruct_FCapturedPixelsID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamID_MetaData), NewProp_StreamID_MetaData) }; // 4179246271
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics = { "FrameMetrics", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms, FrameMetrics), Z_Construct_UScriptStruct_FFrameMetrics, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameMetrics_MetaData), NewProp_FrameMetrics_MetaData) }; // 2407708522
void Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData_SetBit(void* Obj)
{
	((UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms*)Obj)->bCopyImageData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData = { "bCopyImageData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms), &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_PixelData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_StreamID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_FrameMetrics,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::NewProp_bCopyImageData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUserDefinedImageCaptureProtocol, nullptr, "WriteImageToDisk", nullptr, nullptr, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::PropPointers), sizeof(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams), Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::UserDefinedImageCaptureProtocol_eventWriteImageToDisk_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UUserDefinedImageCaptureProtocol::execWriteImageToDisk)
{
	P_GET_STRUCT_REF(FCapturedPixels,Z_Param_Out_PixelData);
	P_GET_STRUCT_REF(FCapturedPixelsID,Z_Param_Out_StreamID);
	P_GET_STRUCT_REF(FFrameMetrics,Z_Param_Out_FrameMetrics);
	P_GET_UBOOL(Z_Param_bCopyImageData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WriteImageToDisk(Z_Param_Out_PixelData,Z_Param_Out_StreamID,Z_Param_Out_FrameMetrics,Z_Param_bCopyImageData);
	P_NATIVE_END;
}
// End Class UUserDefinedImageCaptureProtocol Function WriteImageToDisk

// Begin Class UUserDefinedImageCaptureProtocol
void UUserDefinedImageCaptureProtocol::StaticRegisterNativesUUserDefinedImageCaptureProtocol()
{
	UClass* Class = UUserDefinedImageCaptureProtocol::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GenerateFilenameForBuffer", &UUserDefinedImageCaptureProtocol::execGenerateFilenameForBuffer },
		{ "GenerateFilenameForCurrentFrame", &UUserDefinedImageCaptureProtocol::execGenerateFilenameForCurrentFrame },
		{ "WriteImageToDisk", &UUserDefinedImageCaptureProtocol::execWriteImageToDisk },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUserDefinedImageCaptureProtocol);
UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol_NoRegister()
{
	return UUserDefinedImageCaptureProtocol::StaticClass();
}
struct Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A blueprintable capture protocol tailored to capturing and exporting frames as images\n */" },
		{ "DisplayName", "Capture Protocol" },
		{ "IncludePath", "Protocols/UserDefinedCaptureProtocol.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A blueprintable capture protocol tailored to capturing and exporting frames as images" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The image format to save as */" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "The image format to save as" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableCompression_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** Whether to save images with compression or not. Not supported for bitmaps. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "Whether to save images with compression or not. Not supported for bitmaps." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompressionQuality_MetaData[] = {
		{ "Category", "Capture" },
		{ "Comment", "/** The compression quality for the image type. For EXRs, 0 = Default ZIP compression, 1 = No compression, PNGs and JPEGs expect a value between 0 and 100*/" },
		{ "EditCondition", "bEnableCompression" },
		{ "ModuleRelativePath", "Public/Protocols/UserDefinedCaptureProtocol.h" },
		{ "ToolTip", "The compression quality for the image type. For EXRs, 0 = Default ZIP compression, 1 = No compression, PNGs and JPEGs expect a value between 0 and 100" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static void NewProp_bEnableCompression_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableCompression;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CompressionQuality;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForBuffer, "GenerateFilenameForBuffer" }, // 2886191844
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_GenerateFilenameForCurrentFrame, "GenerateFilenameForCurrentFrame" }, // 132135308
		{ &Z_Construct_UFunction_UUserDefinedImageCaptureProtocol_WriteImageToDisk, "WriteImageToDisk" }, // 221425589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUserDefinedImageCaptureProtocol>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedImageCaptureProtocol, Format), Z_Construct_UEnum_ImageWriteQueue_EDesiredImageFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 3760367723
void Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit(void* Obj)
{
	((UUserDefinedImageCaptureProtocol*)Obj)->bEnableCompression = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression = { "bEnableCompression", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UUserDefinedImageCaptureProtocol), &Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableCompression_MetaData), NewProp_bEnableCompression_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality = { "CompressionQuality", nullptr, (EPropertyFlags)0x0010000000004005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UUserDefinedImageCaptureProtocol, CompressionQuality), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompressionQuality_MetaData), NewProp_CompressionQuality_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_bEnableCompression,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::NewProp_CompressionQuality,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserDefinedCaptureProtocol,
	(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneCapture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams = {
	&UUserDefinedImageCaptureProtocol::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::PropPointers),
	0,
	0x000804A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams), Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UUserDefinedImageCaptureProtocol()
{
	if (!Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.OuterSingleton, Z_Construct_UClass_UUserDefinedImageCaptureProtocol_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol.OuterSingleton;
}
template<> MOVIESCENECAPTURE_API UClass* StaticClass<UUserDefinedImageCaptureProtocol>()
{
	return UUserDefinedImageCaptureProtocol::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UUserDefinedImageCaptureProtocol);
UUserDefinedImageCaptureProtocol::~UUserDefinedImageCaptureProtocol() {}
// End Class UUserDefinedImageCaptureProtocol

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCapturedPixelsID::StaticStruct, Z_Construct_UScriptStruct_FCapturedPixelsID_Statics::NewStructOps, TEXT("CapturedPixelsID"), &Z_Registration_Info_UScriptStruct_CapturedPixelsID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapturedPixelsID), 4179246271U) },
		{ FCapturedPixels::StaticStruct, Z_Construct_UScriptStruct_FCapturedPixels_Statics::NewStructOps, TEXT("CapturedPixels"), &Z_Registration_Info_UScriptStruct_CapturedPixels, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCapturedPixels), 514291827U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UUserDefinedCaptureProtocol, UUserDefinedCaptureProtocol::StaticClass, TEXT("UUserDefinedCaptureProtocol"), &Z_Registration_Info_UClass_UUserDefinedCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedCaptureProtocol), 1259907871U) },
		{ Z_Construct_UClass_UUserDefinedImageCaptureProtocol, UUserDefinedImageCaptureProtocol::StaticClass, TEXT("UUserDefinedImageCaptureProtocol"), &Z_Registration_Info_UClass_UUserDefinedImageCaptureProtocol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUserDefinedImageCaptureProtocol), 2732364605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_3136998120(TEXT("/Script/MovieSceneCapture"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MovieSceneCapture_Public_Protocols_UserDefinedCaptureProtocol_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
