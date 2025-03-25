// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperFlipbookComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbookComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBodySetup_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PAPER2D_API UFunction* Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin Delegate FFlipbookFinishedPlaySignature
struct Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "// Event for a non-looping flipbook finishing play\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Event for a non-looping flipbook finishing play" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Paper2D, nullptr, "FlipbookFinishedPlaySignature__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FFlipbookFinishedPlaySignature_DelegateWrapper(const FMulticastScriptDelegate& FlipbookFinishedPlaySignature)
{
	FlipbookFinishedPlaySignature.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FFlipbookFinishedPlaySignature

// Begin Class UPaperFlipbookComponent Function GetFlipbook
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics
{
	struct PaperFlipbookComponent_eventGetFlipbook_Parms
	{
		UPaperFlipbook* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Gets the flipbook used by this instance. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Gets the flipbook used by this instance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbook_Parms, ReturnValue), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbook", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PaperFlipbookComponent_eventGetFlipbook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::PaperFlipbookComponent_eventGetFlipbook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetFlipbook)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperFlipbook**)Z_Param__Result=P_THIS->GetFlipbook();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetFlipbook

// Begin Class UPaperFlipbookComponent Function GetFlipbookFramerate
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics
{
	struct PaperFlipbookComponent_eventGetFlipbookFramerate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the nominal framerate that the flipbook will be played back at (ignoring PlayRate), in frames per second" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbookFramerate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbookFramerate", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PaperFlipbookComponent_eventGetFlipbookFramerate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::PaperFlipbookComponent_eventGetFlipbookFramerate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetFlipbookFramerate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFlipbookFramerate();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetFlipbookFramerate

// Begin Class UPaperFlipbookComponent Function GetFlipbookLength
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics
{
	struct PaperFlipbookComponent_eventGetFlipbookLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get length of the flipbook (in seconds) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get length of the flipbook (in seconds)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbookLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbookLength", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PaperFlipbookComponent_eventGetFlipbookLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::PaperFlipbookComponent_eventGetFlipbookLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetFlipbookLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetFlipbookLength();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetFlipbookLength

// Begin Class UPaperFlipbookComponent Function GetFlipbookLengthInFrames
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics
{
	struct PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get length of the flipbook (in frames) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get length of the flipbook (in frames)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetFlipbookLengthInFrames", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::PaperFlipbookComponent_eventGetFlipbookLengthInFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetFlipbookLengthInFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFlipbookLengthInFrames();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetFlipbookLengthInFrames

// Begin Class UPaperFlipbookComponent Function GetPlaybackPosition
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics
{
	struct PaperFlipbookComponent_eventGetPlaybackPosition_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the current playback position (in seconds) of the flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the current playback position (in seconds) of the flipbook" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetPlaybackPosition", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PaperFlipbookComponent_eventGetPlaybackPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::PaperFlipbookComponent_eventGetPlaybackPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetPlaybackPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetPlaybackPosition

// Begin Class UPaperFlipbookComponent Function GetPlaybackPositionInFrames
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics
{
	struct PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the current playback position (in frames) of the flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the current playback position (in frames) of the flipbook" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetPlaybackPositionInFrames", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::PaperFlipbookComponent_eventGetPlaybackPositionInFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetPlaybackPositionInFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlaybackPositionInFrames();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetPlaybackPositionInFrames

// Begin Class UPaperFlipbookComponent Function GetPlayRate
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics
{
	struct PaperFlipbookComponent_eventGetPlayRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get the current play rate for this flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get the current play rate for this flipbook" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PaperFlipbookComponent_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::PaperFlipbookComponent_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetPlayRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayRate();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetPlayRate

// Begin Class UPaperFlipbookComponent Function GetSpriteColor
struct Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics
{
	struct PaperFlipbookComponent_eventGetSpriteColor_Parms
	{
		FLinearColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Returns the current color of the sprite */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Returns the current color of the sprite" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventGetSpriteColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "GetSpriteColor", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::PaperFlipbookComponent_eventGetSpriteColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::PaperFlipbookComponent_eventGetSpriteColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execGetSpriteColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FLinearColor*)Z_Param__Result=P_THIS->GetSpriteColor();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function GetSpriteColor

// Begin Class UPaperFlipbookComponent Function IsLooping
struct Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics
{
	struct PaperFlipbookComponent_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get whether we are looping or not */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get whether we are looping or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PaperFlipbookComponent_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::PaperFlipbookComponent_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function IsLooping

// Begin Class UPaperFlipbookComponent Function IsPlaying
struct Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics
{
	struct PaperFlipbookComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get whether this flipbook is playing or not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get whether this flipbook is playing or not." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PaperFlipbookComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::PaperFlipbookComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function IsPlaying

// Begin Class UPaperFlipbookComponent Function IsReversing
struct Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics
{
	struct PaperFlipbookComponent_eventIsReversing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Get whether we are reversing or not */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Get whether we are reversing or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventIsReversing_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "IsReversing", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PaperFlipbookComponent_eventIsReversing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::PaperFlipbookComponent_eventIsReversing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execIsReversing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReversing();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function IsReversing

// Begin Class UPaperFlipbookComponent Function OnRep_SourceFlipbook
struct Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics
{
	struct PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms
	{
		UPaperFlipbook* OldFlipbook;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OldFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::NewProp_OldFlipbook = { "OldFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms, OldFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::NewProp_OldFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "OnRep_SourceFlipbook", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::PaperFlipbookComponent_eventOnRep_SourceFlipbook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execOnRep_SourceFlipbook)
{
	P_GET_OBJECT(UPaperFlipbook,Z_Param_OldFlipbook);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SourceFlipbook(Z_Param_OldFlipbook);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function OnRep_SourceFlipbook

// Begin Class UPaperFlipbookComponent Function Play
struct Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function Play

// Begin Class UPaperFlipbookComponent Function PlayFromStart
struct Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook from the start */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook from the start" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "PlayFromStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execPlayFromStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFromStart();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function PlayFromStart

// Begin Class UPaperFlipbookComponent Function Reverse
struct Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook in reverse */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook in reverse" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "Reverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Reverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_Reverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reverse();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function Reverse

// Begin Class UPaperFlipbookComponent Function ReverseFromEnd
struct Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Start playback of flipbook in reverse from the end */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Start playback of flipbook in reverse from the end" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "ReverseFromEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execReverseFromEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReverseFromEnd();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function ReverseFromEnd

// Begin Class UPaperFlipbookComponent Function SetFlipbook
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics
{
	struct PaperFlipbookComponent_eventSetFlipbook_Parms
	{
		UPaperFlipbook* NewFlipbook;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook). */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Change the flipbook used by this instance (will reset the play time to 0 if it is a new flipbook)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFlipbook;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_NewFlipbook = { "NewFlipbook", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetFlipbook_Parms, NewFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventSetFlipbook_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetFlipbook_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_NewFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetFlipbook", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PaperFlipbookComponent_eventSetFlipbook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::PaperFlipbookComponent_eventSetFlipbook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetFlipbook)
{
	P_GET_OBJECT(UPaperFlipbook,Z_Param_NewFlipbook);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFlipbook(Z_Param_NewFlipbook);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetFlipbook

// Begin Class UPaperFlipbookComponent Function SetLooping
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics
{
	struct PaperFlipbookComponent_eventSetLooping_Parms
	{
		bool bNewLooping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** true means we should loop, false means we should not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "true means we should loop, false means we should not." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::NewProp_bNewLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PaperFlipbookComponent_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::PaperFlipbookComponent_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetLooping)
{
	P_GET_UBOOL(Z_Param_bNewLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_bNewLooping);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetLooping

// Begin Class UPaperFlipbookComponent Function SetNewTime
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics
{
	struct PaperFlipbookComponent_eventSetNewTime_Parms
	{
		float NewTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Set the new playback position time to use */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Set the new playback position time to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::NewProp_NewTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetNewTime", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PaperFlipbookComponent_eventSetNewTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::PaperFlipbookComponent_eventSetNewTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetNewTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewTime(Z_Param_NewTime);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetNewTime

// Begin Class UPaperFlipbookComponent Function SetPlaybackPosition
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics
{
	struct PaperFlipbookComponent_eventSetPlaybackPosition_Parms
	{
		float NewPosition;
		bool bFireEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Jump to a position in the flipbook (expressed in seconds). If bFireEvents is true, event functions will fire, otherwise they will not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Jump to a position in the flipbook (expressed in seconds). If bFireEvents is true, event functions will fire, otherwise they will not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
	static void NewProp_bFireEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents = { "bFireEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetPlaybackPosition", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PaperFlipbookComponent_eventSetPlaybackPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::PaperFlipbookComponent_eventSetPlaybackPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetPlaybackPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPosition);
	P_GET_UBOOL(Z_Param_bFireEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetPlaybackPosition

// Begin Class UPaperFlipbookComponent Function SetPlaybackPositionInFrames
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics
{
	struct PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms
	{
		int32 NewFramePosition;
		bool bFireEvents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Jump to a position in the flipbook (expressed in frames). If bFireEvents is true, event functions will fire, otherwise they will not. */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Jump to a position in the flipbook (expressed in frames). If bFireEvents is true, event functions will fire, otherwise they will not." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewFramePosition;
	static void NewProp_bFireEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_NewFramePosition = { "NewFramePosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms, NewFramePosition), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents_SetBit(void* Obj)
{
	((PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms*)Obj)->bFireEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents = { "bFireEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms), &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_NewFramePosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::NewProp_bFireEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetPlaybackPositionInFrames", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::PaperFlipbookComponent_eventSetPlaybackPositionInFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetPlaybackPositionInFrames)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewFramePosition);
	P_GET_UBOOL(Z_Param_bFireEvents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackPositionInFrames(Z_Param_NewFramePosition,Z_Param_bFireEvents);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetPlaybackPositionInFrames

// Begin Class UPaperFlipbookComponent Function SetPlayRate
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics
{
	struct PaperFlipbookComponent_eventSetPlayRate_Parms
	{
		float NewRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Sets the new play rate for this flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Sets the new play rate for this flipbook" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::NewProp_NewRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PaperFlipbookComponent_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::PaperFlipbookComponent_eventSetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetPlayRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayRate(Z_Param_NewRate);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetPlayRate

// Begin Class UPaperFlipbookComponent Function SetSpriteColor
struct Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics
{
	struct PaperFlipbookComponent_eventSetSpriteColor_Parms
	{
		FLinearColor NewColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Set color of the sprite */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Set color of the sprite" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbookComponent_eventSetSpriteColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::NewProp_NewColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "SetSpriteColor", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PaperFlipbookComponent_eventSetSpriteColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::PaperFlipbookComponent_eventSetSpriteColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execSetSpriteColor)
{
	P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSpriteColor(Z_Param_NewColor);
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function SetSpriteColor

// Begin Class UPaperFlipbookComponent Function Stop
struct Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Flipbook" },
		{ "Comment", "/** Stop playback of flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Stop playback of flipbook" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbookComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UPaperFlipbookComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbookComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbookComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UPaperFlipbookComponent Function Stop

// Begin Class UPaperFlipbookComponent
void UPaperFlipbookComponent::StaticRegisterNativesUPaperFlipbookComponent()
{
	UClass* Class = UPaperFlipbookComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFlipbook", &UPaperFlipbookComponent::execGetFlipbook },
		{ "GetFlipbookFramerate", &UPaperFlipbookComponent::execGetFlipbookFramerate },
		{ "GetFlipbookLength", &UPaperFlipbookComponent::execGetFlipbookLength },
		{ "GetFlipbookLengthInFrames", &UPaperFlipbookComponent::execGetFlipbookLengthInFrames },
		{ "GetPlaybackPosition", &UPaperFlipbookComponent::execGetPlaybackPosition },
		{ "GetPlaybackPositionInFrames", &UPaperFlipbookComponent::execGetPlaybackPositionInFrames },
		{ "GetPlayRate", &UPaperFlipbookComponent::execGetPlayRate },
		{ "GetSpriteColor", &UPaperFlipbookComponent::execGetSpriteColor },
		{ "IsLooping", &UPaperFlipbookComponent::execIsLooping },
		{ "IsPlaying", &UPaperFlipbookComponent::execIsPlaying },
		{ "IsReversing", &UPaperFlipbookComponent::execIsReversing },
		{ "OnRep_SourceFlipbook", &UPaperFlipbookComponent::execOnRep_SourceFlipbook },
		{ "Play", &UPaperFlipbookComponent::execPlay },
		{ "PlayFromStart", &UPaperFlipbookComponent::execPlayFromStart },
		{ "Reverse", &UPaperFlipbookComponent::execReverse },
		{ "ReverseFromEnd", &UPaperFlipbookComponent::execReverseFromEnd },
		{ "SetFlipbook", &UPaperFlipbookComponent::execSetFlipbook },
		{ "SetLooping", &UPaperFlipbookComponent::execSetLooping },
		{ "SetNewTime", &UPaperFlipbookComponent::execSetNewTime },
		{ "SetPlaybackPosition", &UPaperFlipbookComponent::execSetPlaybackPosition },
		{ "SetPlaybackPositionInFrames", &UPaperFlipbookComponent::execSetPlaybackPositionInFrames },
		{ "SetPlayRate", &UPaperFlipbookComponent::execSetPlayRate },
		{ "SetSpriteColor", &UPaperFlipbookComponent::execSetSpriteColor },
		{ "Stop", &UPaperFlipbookComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperFlipbookComponent);
UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister()
{
	return UPaperFlipbookComponent::StaticClass();
}
struct Z_Construct_UClass_UPaperFlipbookComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperFlipbookComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFlipbook_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Flipbook currently being played */" },
		{ "DisplayThumbnail", "true" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Flipbook currently being played" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[] = {
		{ "Comment", "// DEPRECATED in 4.5: The material override for this flipbook component (if any); replaced by the Materials array inherited from UMeshComponent\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "DEPRECATED in 4.5: The material override for this flipbook component (if any); replaced by the Materials array inherited from UMeshComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Current play rate of the flipbook */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Current play rate of the flipbook" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Comment", "/** Whether the flipbook should loop when it reaches the end, or stop */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Whether the flipbook should loop when it reaches the end, or stop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** If playback should move the current position backwards instead of forwards */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "If playback should move the current position backwards instead of forwards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[] = {
		{ "Comment", "/** Are we currently playing (moving Position) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Are we currently playing (moving Position)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AccumulatedTime_MetaData[] = {
		{ "Comment", "/** Current position in the timeline */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Current position in the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedFrameIndex_MetaData[] = {
		{ "Comment", "/** Last frame index calculated */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Last frame index calculated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteColor_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Vertex color to apply to the frames */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Vertex color to apply to the frames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedBodySetup_MetaData[] = {
		{ "Comment", "/** The cached body setup */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "The cached body setup" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishedPlaying_MetaData[] = {
		{ "Comment", "/** Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction) */" },
		{ "ModuleRelativePath", "Classes/PaperFlipbookComponent.h" },
		{ "ToolTip", "Event called whenever a non-looping flipbook finishes playing (either reaching the beginning or the end, depending on the play direction)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bReversePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
	static void NewProp_bPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccumulatedTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CachedFrameIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpriteColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedBodySetup;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishedPlaying;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbook, "GetFlipbook" }, // 82436018
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookFramerate, "GetFlipbookFramerate" }, // 2209266671
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLength, "GetFlipbookLength" }, // 2544259884
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetFlipbookLengthInFrames, "GetFlipbookLengthInFrames" }, // 3052555757
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPosition, "GetPlaybackPosition" }, // 483965404
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlaybackPositionInFrames, "GetPlaybackPositionInFrames" }, // 3782576053
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetPlayRate, "GetPlayRate" }, // 3729665253
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_GetSpriteColor, "GetSpriteColor" }, // 463495102
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_IsLooping, "IsLooping" }, // 448195298
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_IsPlaying, "IsPlaying" }, // 842404231
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_IsReversing, "IsReversing" }, // 3074734185
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_OnRep_SourceFlipbook, "OnRep_SourceFlipbook" }, // 4013897351
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_Play, "Play" }, // 1888592222
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_PlayFromStart, "PlayFromStart" }, // 3689411962
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_Reverse, "Reverse" }, // 462897857
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_ReverseFromEnd, "ReverseFromEnd" }, // 2743992376
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetFlipbook, "SetFlipbook" }, // 2825683776
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetLooping, "SetLooping" }, // 645369145
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetNewTime, "SetNewTime" }, // 1437187338
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPosition, "SetPlaybackPosition" }, // 1354604172
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlaybackPositionInFrames, "SetPlaybackPositionInFrames" }, // 4256379726
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetPlayRate, "SetPlayRate" }, // 2016955308
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_SetSpriteColor, "SetSpriteColor" }, // 4088112591
		{ &Z_Construct_UFunction_UPaperFlipbookComponent_Stop, "Stop" }, // 3008324196
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbookComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook = { "SourceFlipbook", "OnRep_SourceFlipbook", (EPropertyFlags)0x0124080100000021, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, SourceFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFlipbook_MetaData), NewProp_SourceFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0124080020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, Material_DEPRECATED), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Material_MetaData), NewProp_Material_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
void Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((UPaperFlipbookComponent*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperFlipbookComponent), &Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
{
	((UPaperFlipbookComponent*)Obj)->bReversePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperFlipbookComponent), &Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReversePlayback_MetaData), NewProp_bReversePlayback_MetaData) };
void Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_SetBit(void* Obj)
{
	((UPaperFlipbookComponent*)Obj)->bPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPaperFlipbookComponent), &Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaying_MetaData), NewProp_bPlaying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime = { "AccumulatedTime", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, AccumulatedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AccumulatedTime_MetaData), NewProp_AccumulatedTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex = { "CachedFrameIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, CachedFrameIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedFrameIndex_MetaData), NewProp_CachedFrameIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor = { "SpriteColor", nullptr, (EPropertyFlags)0x0020080200000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, SpriteColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteColor_MetaData), NewProp_SpriteColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup = { "CachedBodySetup", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, CachedBodySetup), Z_Construct_UClass_UBodySetup_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedBodySetup_MetaData), NewProp_CachedBodySetup_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying = { "OnFinishedPlaying", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbookComponent, OnFinishedPlaying), Z_Construct_UDelegateFunction_Paper2D_FlipbookFinishedPlaySignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinishedPlaying_MetaData), NewProp_OnFinishedPlaying_MetaData) }; // 1656595318
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SourceFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bReversePlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_bPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_AccumulatedTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedFrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_SpriteColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_CachedBodySetup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbookComponent_Statics::NewProp_OnFinishedPlaying,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperFlipbookComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMeshComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbookComponent_Statics::ClassParams = {
	&UPaperFlipbookComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbookComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperFlipbookComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperFlipbookComponent()
{
	if (!Z_Registration_Info_UClass_UPaperFlipbookComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperFlipbookComponent.OuterSingleton, Z_Construct_UClass_UPaperFlipbookComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperFlipbookComponent.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperFlipbookComponent>()
{
	return UPaperFlipbookComponent::StaticClass();
}
void UPaperFlipbookComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SourceFlipbook(TEXT("SourceFlipbook"));
	const bool bIsValid = true
		&& Name_SourceFlipbook == ClassReps[(int32)ENetFields_Private::SourceFlipbook].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UPaperFlipbookComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbookComponent);
UPaperFlipbookComponent::~UPaperFlipbookComponent() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbookComponent)
// End Class UPaperFlipbookComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperFlipbookComponent, UPaperFlipbookComponent::StaticClass, TEXT("UPaperFlipbookComponent"), &Z_Registration_Info_UClass_UPaperFlipbookComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperFlipbookComponent), 606115316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_3856305651(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbookComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
