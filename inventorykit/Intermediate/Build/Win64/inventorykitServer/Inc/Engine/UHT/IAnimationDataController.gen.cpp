// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimData/IAnimationDataController.h"
#include "Runtime/Engine/Classes/Animation/AnimData/AttributeIdentifier.h"
#include "Runtime/Engine/Classes/Animation/AnimData/CurveIdentifier.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAnimationDataController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimationDataController();
ENGINE_API UClass* Z_Construct_UClass_UAnimationDataController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAnimAssetCurveFlags();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ERawCurveTrackTypes();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationAttributeIdentifier();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationCurveIdentifier();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurveKey();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Interface UAnimationDataController Function AddAttribute
struct Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics
{
	struct AnimationDataController_eventAddAttribute_Parms
	{
		FAnimationAttributeIdentifier AttributeIdentifier;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeData" },
		{ "Comment", "/**\n\x09* Adds a new attribute with the provided information. Broadcasts a EAnimDataModelNotifyType::AttributeAdded notify if successful.\n\x09*\n\x09* @param\x09""AttributeIdentifier\x09\x09Identifier for the to-be-added attribute\n\x09* @param\x09""bShouldTransact\x09\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the attribute was successfully added\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Adds a new attribute with the provided information. Broadcasts a EAnimDataModelNotifyType::AttributeAdded notify if successful.\n\n@param        AttributeIdentifier             Identifier for the to-be-added attribute\n@param        bShouldTransact                 Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the attribute was successfully added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventAddAttribute_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeIdentifier_MetaData), NewProp_AttributeIdentifier_MetaData) }; // 4035253764
void Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventAddAttribute_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddAttribute_Parms), &Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventAddAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddAttribute_Parms), &Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_AttributeIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "AddAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::AnimationDataController_eventAddAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::AnimationDataController_eventAddAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_AddAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_AddAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execAddAttribute)
{
	P_GET_STRUCT_REF(FAnimationAttributeIdentifier,Z_Param_Out_AttributeIdentifier);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddAttribute(Z_Param_Out_AttributeIdentifier,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function AddAttribute

// Begin Interface UAnimationDataController Function AddBoneCurve
struct Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics
{
	struct AnimationDataController_eventAddBoneCurve_Parms
	{
		FName BoneName;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventAddBoneCurve_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventAddBoneCurve_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddBoneCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventAddBoneCurve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddBoneCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "AddBoneCurve", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::AnimationDataController_eventAddBoneCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::AnimationDataController_eventAddBoneCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_AddBoneCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_AddBoneCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execAddBoneCurve)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddBoneCurve(Z_Param_BoneName,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function AddBoneCurve

// Begin Interface UAnimationDataController Function AddBoneTrack
struct Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics
{
	struct AnimationDataController_eventAddBoneTrack_Parms
	{
		FName BoneName;
		bool bShouldTransact;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "AddBoneTrack returning index is deprecated use AddBoneCurve returning bool instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventAddBoneTrack_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventAddBoneTrack_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddBoneTrack_Parms), &Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventAddBoneTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "AddBoneTrack", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::AnimationDataController_eventAddBoneTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::AnimationDataController_eventAddBoneTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_AddBoneTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_AddBoneTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execAddBoneTrack)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->AddBoneTrack(Z_Param_BoneName,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function AddBoneTrack

// Begin Interface UAnimationDataController Function AddCurve
struct Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics
{
	struct AnimationDataController_eventAddCurve_Parms
	{
		FAnimationCurveIdentifier CurveId;
		int32 CurveFlags;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Adds a new curve with the provided information. Broadcasts a EAnimDataModelNotifyType::CurveAdded notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09\x09Identifier for the to-be-added curve\n\x09* @param\x09""CurveFlags\x09\x09\x09""Flags to be set for the curve\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve was successfully added\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "CPP_Default_CurveFlags", "4" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Adds a new curve with the provided information. Broadcasts a EAnimDataModelNotifyType::CurveAdded notify if successful.\n\n@param        CurveId                         Identifier for the to-be-added curve\n@param        CurveFlags                      Flags to be set for the curve\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve was successfully added" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurveFlags;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventAddCurve_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_CurveFlags = { "CurveFlags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventAddCurve_Parms, CurveFlags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventAddCurve_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventAddCurve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventAddCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_CurveFlags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "AddCurve", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::AnimationDataController_eventAddCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::AnimationDataController_eventAddCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_AddCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_AddCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execAddCurve)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurveFlags);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddCurve(Z_Param_Out_CurveId,Z_Param_CurveFlags,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function AddCurve

// Begin Interface UAnimationDataController Function CloseBracket
struct Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics
{
	struct AnimationDataController_eventCloseBracket_Parms
	{
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Closes a previously opened interaction bracket, used for combining a set of controller actions. Broadcasts a EAnimDataModelNotifyType::BracketClosed notify.\n\x09*\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Closes a previously opened interaction bracket, used for combining a set of controller actions. Broadcasts a EAnimDataModelNotifyType::BracketClosed notify.\n\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventCloseBracket_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventCloseBracket_Parms), &Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "CloseBracket", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::AnimationDataController_eventCloseBracket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::AnimationDataController_eventCloseBracket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_CloseBracket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_CloseBracket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execCloseBracket)
{
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseBracket(Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function CloseBracket

// Begin Interface UAnimationDataController Function DuplicateAttribute
struct Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics
{
	struct AnimationDataController_eventDuplicateAttribute_Parms
	{
		FAnimationAttributeIdentifier AttributeIdentifier;
		FAnimationAttributeIdentifier NewAttributeIdentifier;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeData" },
		{ "Comment", "/**\n\x09* Duplicated the attribute (curve) with the identifier. Broadcasts a EAnimDataModelNotifyType::AttributeAdded notify if successful.\n\x09*\n\x09* @param\x09""AttributeIdentifier\x09\x09\x09Identifier for the to-be-duplicated attribute\n\x09* @param\x09NewAttributeIdentifier\x09\x09Identifier for the to-be-added attribute\n\x09* @param\x09""bShouldTransact\x09\x09\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the attribute was successfully duplicated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Duplicated the attribute (curve) with the identifier. Broadcasts a EAnimDataModelNotifyType::AttributeAdded notify if successful.\n\n@param        AttributeIdentifier                     Identifier for the to-be-duplicated attribute\n@param        NewAttributeIdentifier          Identifier for the to-be-added attribute\n@param        bShouldTransact                         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the attribute was successfully duplicated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewAttributeIdentifier;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventDuplicateAttribute_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeIdentifier_MetaData), NewProp_AttributeIdentifier_MetaData) }; // 4035253764
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_NewAttributeIdentifier = { "NewAttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventDuplicateAttribute_Parms, NewAttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAttributeIdentifier_MetaData), NewProp_NewAttributeIdentifier_MetaData) }; // 4035253764
void Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventDuplicateAttribute_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventDuplicateAttribute_Parms), &Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventDuplicateAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventDuplicateAttribute_Parms), &Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_AttributeIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_NewAttributeIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "DuplicateAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::AnimationDataController_eventDuplicateAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::AnimationDataController_eventDuplicateAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execDuplicateAttribute)
{
	P_GET_STRUCT_REF(FAnimationAttributeIdentifier,Z_Param_Out_AttributeIdentifier);
	P_GET_STRUCT_REF(FAnimationAttributeIdentifier,Z_Param_Out_NewAttributeIdentifier);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DuplicateAttribute(Z_Param_Out_AttributeIdentifier,Z_Param_Out_NewAttributeIdentifier,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function DuplicateAttribute

// Begin Interface UAnimationDataController Function DuplicateCurve
struct Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics
{
	struct AnimationDataController_eventDuplicateCurve_Parms
	{
		FAnimationCurveIdentifier CopyCurveId;
		FAnimationCurveIdentifier NewCurveId;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Duplicated the curve with the identifier. Broadcasts a EAnimDataModelNotifyType::CurveAdded notify if successful.\n\x09*\n\x09* @param\x09""CopyCurveId\x09\x09\x09Identifier for the to-be-duplicated curve\n\x09* @param\x09NewCurveId\x09\x09\x09Identifier for the to-be-added curve\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve was successfully duplicated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Duplicated the curve with the identifier. Broadcasts a EAnimDataModelNotifyType::CurveAdded notify if successful.\n\n@param        CopyCurveId                     Identifier for the to-be-duplicated curve\n@param        NewCurveId                      Identifier for the to-be-added curve\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve was successfully duplicated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CopyCurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CopyCurveId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCurveId;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_CopyCurveId = { "CopyCurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventDuplicateCurve_Parms, CopyCurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CopyCurveId_MetaData), NewProp_CopyCurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_NewCurveId = { "NewCurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventDuplicateCurve_Parms, NewCurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCurveId_MetaData), NewProp_NewCurveId_MetaData) }; // 2532483074
void Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventDuplicateCurve_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventDuplicateCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventDuplicateCurve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventDuplicateCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_CopyCurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_NewCurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "DuplicateCurve", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::AnimationDataController_eventDuplicateCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::AnimationDataController_eventDuplicateCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_DuplicateCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_DuplicateCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execDuplicateCurve)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CopyCurveId);
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_NewCurveId);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DuplicateCurve(Z_Param_Out_CopyCurveId,Z_Param_Out_NewCurveId,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function DuplicateCurve

// Begin Interface UAnimationDataController Function FindOrAddCurveNamesOnSkeleton
struct Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics
{
	struct AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms
	{
		USkeleton* Skeleton;
		ERawCurveTrackTypes SupportedCurveType;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is no longer used." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedCurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedCurveType;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_SupportedCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_SupportedCurveType = { "SupportedCurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms, SupportedCurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(0, nullptr) }; // 2083403897
void Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms), &Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_SupportedCurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_SupportedCurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "FindOrAddCurveNamesOnSkeleton", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::AnimationDataController_eventFindOrAddCurveNamesOnSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execFindOrAddCurveNamesOnSkeleton)
{
	P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
	P_GET_ENUM(ERawCurveTrackTypes,Z_Param_SupportedCurveType);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FindOrAddCurveNamesOnSkeleton(Z_Param_Skeleton,ERawCurveTrackTypes(Z_Param_SupportedCurveType),Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function FindOrAddCurveNamesOnSkeleton

// Begin Interface UAnimationDataController Function GetModelInterface
struct Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics
{
	struct AnimationDataController_eventGetModelInterface_Parms
	{
		TScriptInterface<IAnimationDataModel> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* @return\x09\x09The IAnimationDataModel instance this controller is currently targeting\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "@return               The IAnimationDataModel instance this controller is currently targeting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventGetModelInterface_Parms, ReturnValue), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "GetModelInterface", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::AnimationDataController_eventGetModelInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::AnimationDataController_eventGetModelInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_GetModelInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_GetModelInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execGetModelInterface)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IAnimationDataModel>*)Z_Param__Result=P_THIS->GetModelInterface();
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function GetModelInterface

// Begin Interface UAnimationDataController Function InsertBoneTrack
struct Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics
{
	struct AnimationDataController_eventInsertBoneTrack_Parms
	{
		FName BoneName;
		int32 DesiredIndex;
		bool bShouldTransact;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "InsertBoneTrack is deprecated use AddBoneTrack instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DesiredIndex;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventInsertBoneTrack_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_DesiredIndex = { "DesiredIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventInsertBoneTrack_Parms, DesiredIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventInsertBoneTrack_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventInsertBoneTrack_Parms), &Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventInsertBoneTrack_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_DesiredIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "InsertBoneTrack", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::AnimationDataController_eventInsertBoneTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::AnimationDataController_eventInsertBoneTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execInsertBoneTrack)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_PROPERTY(FIntProperty,Z_Param_DesiredIndex);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->InsertBoneTrack(Z_Param_BoneName,Z_Param_DesiredIndex,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function InsertBoneTrack

// Begin Interface UAnimationDataController Function OpenBracket
struct Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics
{
	struct AnimationDataController_eventOpenBracket_Parms
	{
		FText InTitle;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Opens an interaction bracket, used for combining a set of controller actions. Broadcasts a EAnimDataModelNotifyType::BracketOpened notify,\n\x09* this can be used by any Views or dependent systems to halt any unnecessary or invalid operations until the (last) bracket is closed.\n\x09*\n\x09* @param\x09InTitle\x09\x09\x09\x09""Description of the bracket, e.g. \"Generating Curve Data\"\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Opens an interaction bracket, used for combining a set of controller actions. Broadcasts a EAnimDataModelNotifyType::BracketOpened notify,\nthis can be used by any Views or dependent systems to halt any unnecessary or invalid operations until the (last) bracket is closed.\n\n@param        InTitle                         Description of the bracket, e.g. \"Generating Curve Data\"\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InTitle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InTitle;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_InTitle = { "InTitle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventOpenBracket_Parms, InTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InTitle_MetaData), NewProp_InTitle_MetaData) };
void Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventOpenBracket_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventOpenBracket_Parms), &Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_InTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "OpenBracket", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::AnimationDataController_eventOpenBracket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::AnimationDataController_eventOpenBracket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_OpenBracket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_OpenBracket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execOpenBracket)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InTitle);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OpenBracket(Z_Param_Out_InTitle,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function OpenBracket

// Begin Interface UAnimationDataController Function RemoveAllAttributes
struct Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics
{
	struct AnimationDataController_eventRemoveAllAttributes_Parms
	{
		bool bShouldTransact;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeData" },
		{ "Comment", "/**\n\x09* Removes all stored attributes. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify for each removed attribute.\n\x09*\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Total number of removes attributes\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes all stored attributes. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify for each removed attribute.\n\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Total number of removes attributes" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAllAttributes_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAllAttributes_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAllAttributes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveAllAttributes", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::AnimationDataController_eventRemoveAllAttributes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::AnimationDataController_eventRemoveAllAttributes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveAllAttributes)
{
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveAllAttributes(Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveAllAttributes

// Begin Interface UAnimationDataController Function RemoveAllAttributesForBone
struct Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics
{
	struct AnimationDataController_eventRemoveAllAttributesForBone_Parms
	{
		FName BoneName;
		bool bShouldTransact;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeData" },
		{ "Comment", "/**\n\x09* Removes all attributes for the specified bone name, if any. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify for each removed attribute.\n\x09*\n\x09* @param\x09""BoneName\x09\x09\x09Name of the bone to remove attributes for\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Total number of removes attributes\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes all attributes for the specified bone name, if any. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify for each removed attribute.\n\n@param        BoneName                        Name of the bone to remove attributes for\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Total number of removes attributes" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAllAttributesForBone_Parms, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
void Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAllAttributesForBone_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAllAttributesForBone_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAllAttributesForBone_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveAllAttributesForBone", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::AnimationDataController_eventRemoveAllAttributesForBone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::AnimationDataController_eventRemoveAllAttributesForBone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveAllAttributesForBone)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_BoneName);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->RemoveAllAttributesForBone(Z_Param_Out_BoneName,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveAllAttributesForBone

// Begin Interface UAnimationDataController Function RemoveAllBoneTracks
struct Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics
{
	struct AnimationDataController_eventRemoveAllBoneTracks_Parms
	{
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Removes all existing Bone Animation tracks. Broadcasts a EAnimDataModelNotifyType::TrackRemoved for each removed track, wrapped within BracketOpened/BracketClosed notifies.\n\x09*\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes all existing Bone Animation tracks. Broadcasts a EAnimDataModelNotifyType::TrackRemoved for each removed track, wrapped within BracketOpened/BracketClosed notifies.\n\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAllBoneTracks_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAllBoneTracks_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveAllBoneTracks", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::AnimationDataController_eventRemoveAllBoneTracks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::AnimationDataController_eventRemoveAllBoneTracks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveAllBoneTracks)
{
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllBoneTracks(Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveAllBoneTracks

// Begin Interface UAnimationDataController Function RemoveAllCurvesOfType
struct Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics
{
	struct AnimationDataController_eventRemoveAllCurvesOfType_Parms
	{
		ERawCurveTrackTypes SupportedCurveType;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Removes all the curves of the provided type. Broadcasts a EAnimDataModelNotifyType::CurveRemoved for each removed curve, wrapped within BracketOpened/BracketClosed notifies.\n\x09*\n\x09* @param\x09SupportedCurveType\x09Type for which all curves are to be removed\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes all the curves of the provided type. Broadcasts a EAnimDataModelNotifyType::CurveRemoved for each removed curve, wrapped within BracketOpened/BracketClosed notifies.\n\n@param        SupportedCurveType      Type for which all curves are to be removed\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedCurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedCurveType;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_SupportedCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_SupportedCurveType = { "SupportedCurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAllCurvesOfType_Parms, SupportedCurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(0, nullptr) }; // 2083403897
void Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAllCurvesOfType_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAllCurvesOfType_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_SupportedCurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_SupportedCurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveAllCurvesOfType", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::AnimationDataController_eventRemoveAllCurvesOfType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::AnimationDataController_eventRemoveAllCurvesOfType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveAllCurvesOfType)
{
	P_GET_ENUM(ERawCurveTrackTypes,Z_Param_SupportedCurveType);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveAllCurvesOfType(ERawCurveTrackTypes(Z_Param_SupportedCurveType),Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveAllCurvesOfType

// Begin Interface UAnimationDataController Function RemoveAttribute
struct Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics
{
	struct AnimationDataController_eventRemoveAttribute_Parms
	{
		FAnimationAttributeIdentifier AttributeIdentifier;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeData" },
		{ "Comment", "/**\n\x09* Removes an attribute, if found, with the provided information. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify if successful.\n\x09*\n\x09* @param\x09""AttributeIdentifier\x09\x09Identifier for the to-be-removed attribute\n\x09* @param\x09""bShouldTransact\x09\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the attribute was successfully removed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes an attribute, if found, with the provided information. Broadcasts a EAnimDataModelNotifyType::AttributeRemoved notify if successful.\n\n@param        AttributeIdentifier             Identifier for the to-be-removed attribute\n@param        bShouldTransact                 Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the attribute was successfully removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAttribute_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeIdentifier_MetaData), NewProp_AttributeIdentifier_MetaData) }; // 4035253764
void Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAttribute_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAttribute_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAttribute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAttribute_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_AttributeIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveAttribute", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::AnimationDataController_eventRemoveAttribute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::AnimationDataController_eventRemoveAttribute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveAttribute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveAttribute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveAttribute)
{
	P_GET_STRUCT_REF(FAnimationAttributeIdentifier,Z_Param_Out_AttributeIdentifier);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAttribute(Z_Param_Out_AttributeIdentifier,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveAttribute

// Begin Interface UAnimationDataController Function RemoveAttributeKey
struct Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics
{
	struct AnimationDataController_eventRemoveAttributeKey_Parms
	{
		FAnimationAttributeIdentifier AttributeIdentifier;
		float Time;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AttributeData" },
		{ "Comment", "/**\n\x09* Remove a single key from the attribute with provided identifier. Broadcasts a EAnimDataModelNotifyType::AttributeChanged notify if successful.\n\x09*\n\x09* @param\x09""AttributeIdentifier\x09\x09Identifier for the attribute from which the key is to be removed\n\x09* @param\x09Time\x09\x09\x09\x09\x09Time of the key to be removed\n\x09* @param\x09""bShouldTransact\x09\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the attribute key was successfully removed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Remove a single key from the attribute with provided identifier. Broadcasts a EAnimDataModelNotifyType::AttributeChanged notify if successful.\n\n@param        AttributeIdentifier             Identifier for the attribute from which the key is to be removed\n@param        Time                                    Time of the key to be removed\n@param        bShouldTransact                 Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the attribute key was successfully removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttributeIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeIdentifier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_AttributeIdentifier = { "AttributeIdentifier", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAttributeKey_Parms, AttributeIdentifier), Z_Construct_UScriptStruct_FAnimationAttributeIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttributeIdentifier_MetaData), NewProp_AttributeIdentifier_MetaData) }; // 4035253764
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveAttributeKey_Parms, Time), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAttributeKey_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAttributeKey_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveAttributeKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveAttributeKey_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_AttributeIdentifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveAttributeKey", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::AnimationDataController_eventRemoveAttributeKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::AnimationDataController_eventRemoveAttributeKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveAttributeKey)
{
	P_GET_STRUCT_REF(FAnimationAttributeIdentifier,Z_Param_Out_AttributeIdentifier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAttributeKey(Z_Param_Out_AttributeIdentifier,Z_Param_Time,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveAttributeKey

// Begin Interface UAnimationDataController Function RemoveBoneTrack
struct Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics
{
	struct AnimationDataController_eventRemoveBoneTrack_Parms
	{
		FName BoneName;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Removes an existing bone animation track with the provided name. Broadcasts a EAnimDataModelNotifyType::TrackRemoved notify if successful.\n\x09*\n\x09* @param\x09""BoneName\x09\x09\x09""Bone name of the track which should be removed\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the removal was successful\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes an existing bone animation track with the provided name. Broadcasts a EAnimDataModelNotifyType::TrackRemoved notify if successful.\n\n@param        BoneName                        Bone name of the track which should be removed\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the removal was successful" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveBoneTrack_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveBoneTrack_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveBoneTrack_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveBoneTrack_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveBoneTrack_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveBoneTrack", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::AnimationDataController_eventRemoveBoneTrack_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::AnimationDataController_eventRemoveBoneTrack_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveBoneTrack)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveBoneTrack(Z_Param_BoneName,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveBoneTrack

// Begin Interface UAnimationDataController Function RemoveCurve
struct Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics
{
	struct AnimationDataController_eventRemoveCurve_Parms
	{
		FAnimationCurveIdentifier CurveId;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Remove the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveRemoved notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09\x09Identifier for the to-be-removed curve\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve was successfully removed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Remove the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveRemoved notify if successful.\n\n@param        CurveId                         Identifier for the to-be-removed curve\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve was successfully removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveCurve_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
void Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveCurve_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveCurve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveCurve", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::AnimationDataController_eventRemoveCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::AnimationDataController_eventRemoveCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveCurve)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCurve(Z_Param_Out_CurveId,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveCurve

// Begin Interface UAnimationDataController Function RemoveCurveKey
struct Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics
{
	struct AnimationDataController_eventRemoveCurveKey_Parms
	{
		FAnimationCurveIdentifier CurveId;
		float Time;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Remove a single key from the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the curve for which the key is to be removed\n\x09* @param\x09Time\x09\x09\x09\x09Time of the key to be removed\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve key was successfully removed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Remove a single key from the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\n@param        CurveId                     Identifier for the curve for which the key is to be removed\n@param        Time                            Time of the key to be removed\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve key was successfully removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveCurveKey_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveCurveKey_Parms, Time), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveCurveKey_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveCurveKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveCurveKey", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::AnimationDataController_eventRemoveCurveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::AnimationDataController_eventRemoveCurveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveCurveKey)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveCurveKey(Z_Param_Out_CurveId,Z_Param_Time,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveCurveKey

// Begin Interface UAnimationDataController Function RemoveTransformCurveKey
struct Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics
{
	struct AnimationDataController_eventRemoveTransformCurveKey_Parms
	{
		FAnimationCurveIdentifier CurveId;
		float Time;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Removes a single key for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the transform curve for which the key is to be removed\n\x09* @param\x09Time\x09\x09\x09\x09Time of the key to be removed\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the transform curve key was successfully removed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes a single key for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\n@param        CurveId                     Identifier for the transform curve for which the key is to be removed\n@param        Time                            Time of the key to be removed\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the transform curve key was successfully removed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveTransformCurveKey_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRemoveTransformCurveKey_Parms, Time), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveTransformCurveKey_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveTransformCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRemoveTransformCurveKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRemoveTransformCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RemoveTransformCurveKey", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::AnimationDataController_eventRemoveTransformCurveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::AnimationDataController_eventRemoveTransformCurveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRemoveTransformCurveKey)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveTransformCurveKey(Z_Param_Out_CurveId,Z_Param_Time,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RemoveTransformCurveKey

// Begin Interface UAnimationDataController Function RenameCurve
struct Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics
{
	struct AnimationDataController_eventRenameCurve_Parms
	{
		FAnimationCurveIdentifier CurveToRenameId;
		FAnimationCurveIdentifier NewCurveId;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Renames the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveRenamed notify if successful.\n\x09*\n\x09* @param\x09""CurveToRenameId\x09\x09Identifier for the curve to be renamed\n\x09* @param\x09NewCurveId\x09\x09\x09Time of the key to be removed\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve was successfully renamed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Renames the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveRenamed notify if successful.\n\n@param        CurveToRenameId         Identifier for the curve to be renamed\n@param        NewCurveId                      Time of the key to be removed\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve was successfully renamed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveToRenameId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewCurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveToRenameId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewCurveId;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_CurveToRenameId = { "CurveToRenameId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRenameCurve_Parms, CurveToRenameId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveToRenameId_MetaData), NewProp_CurveToRenameId_MetaData) }; // 2532483074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_NewCurveId = { "NewCurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventRenameCurve_Parms, NewCurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewCurveId_MetaData), NewProp_NewCurveId_MetaData) }; // 2532483074
void Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventRenameCurve_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRenameCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventRenameCurve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventRenameCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_CurveToRenameId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_NewCurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "RenameCurve", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::AnimationDataController_eventRenameCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::AnimationDataController_eventRenameCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_RenameCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_RenameCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execRenameCurve)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveToRenameId);
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_NewCurveId);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RenameCurve(Z_Param_Out_CurveToRenameId,Z_Param_Out_NewCurveId,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function RenameCurve

// Begin Interface UAnimationDataController Function Resize
struct Z_Construct_UFunction_UAnimationDataController_Resize_Statics
{
	struct AnimationDataController_eventResize_Parms
	{
		float Length;
		float T0;
		float T1;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Resize is deprecated use ResizeInFrames instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T1;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResize_Parms, Length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_T0 = { "T0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResize_Parms, T0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResize_Parms, T1), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventResize_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventResize_Parms), &Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_Resize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_T0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_T1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_Resize_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_Resize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_Resize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "Resize", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_Resize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_Resize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_Resize_Statics::AnimationDataController_eventResize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_Resize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_Resize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_Resize_Statics::AnimationDataController_eventResize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_Resize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_Resize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execResize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
	P_GET_PROPERTY(FFloatProperty,Z_Param_T0);
	P_GET_PROPERTY(FFloatProperty,Z_Param_T1);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Resize(Z_Param_Length,Z_Param_T0,Z_Param_T1,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function Resize

// Begin Interface UAnimationDataController Function ResizeInFrames
struct Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics
{
	struct AnimationDataController_eventResizeInFrames_Parms
	{
		FFrameNumber NewLengthInFrames;
		FFrameNumber T0;
		FFrameNumber T1;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Sets the total play-able length in seconds and resizes curves. Broadcasts EAnimDataModelNotifyType::SequenceLengthChanged\n\x09* and EAnimDataModelNotifyType::CurveChanged notifies if successful.\n\x09* T0 and T1 are expected to represent the window of time that was either added or removed. E.g. for insertion T0 indicates the time\n\x09* at which additional time starts and T1 were it ends. For removal T0 indicates the time at which time should be started to remove, and T1 indicates the end. Giving a total of T1 - T0 added or removed length.\n\x09* The number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.\n\x09*\n\x09* @param\x09NewLengthInFrames\x09Total new play-able number of frames value (according to frame rate), has to be positive and non-zero\n\x09* @param\x09T0\x09\x09\x09\x09\x09Point between 0 and NewLengthInFrames at which the change in length starts\n\x09* @param\x09T1\x09\x09\x09\x09\x09Point between 0 and NewLengthInFrames at which the change in length ends\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets the total play-able length in seconds and resizes curves. Broadcasts EAnimDataModelNotifyType::SequenceLengthChanged\nand EAnimDataModelNotifyType::CurveChanged notifies if successful.\nT0 and T1 are expected to represent the window of time that was either added or removed. E.g. for insertion T0 indicates the time\nat which additional time starts and T1 were it ends. For removal T0 indicates the time at which time should be started to remove, and T1 indicates the end. Giving a total of T1 - T0 added or removed length.\nThe number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.\n\n@param        NewLengthInFrames       Total new play-able number of frames value (according to frame rate), has to be positive and non-zero\n@param        T0                                      Point between 0 and NewLengthInFrames at which the change in length starts\n@param        T1                                      Point between 0 and NewLengthInFrames at which the change in length ends\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLengthInFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_T0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_T1;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_NewLengthInFrames = { "NewLengthInFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizeInFrames_Parms, NewLengthInFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_T0 = { "T0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizeInFrames_Parms, T0), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizeInFrames_Parms, T1), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventResizeInFrames_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventResizeInFrames_Parms), &Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_NewLengthInFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_T0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_T1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "ResizeInFrames", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::AnimationDataController_eventResizeInFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::AnimationDataController_eventResizeInFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_ResizeInFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_ResizeInFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execResizeInFrames)
{
	P_GET_STRUCT(FFrameNumber,Z_Param_NewLengthInFrames);
	P_GET_STRUCT(FFrameNumber,Z_Param_T0);
	P_GET_STRUCT(FFrameNumber,Z_Param_T1);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeInFrames(Z_Param_NewLengthInFrames,Z_Param_T0,Z_Param_T1,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function ResizeInFrames

// Begin Interface UAnimationDataController Function ResizeNumberOfFrames
struct Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics
{
	struct AnimationDataController_eventResizeNumberOfFrames_Parms
	{
		FFrameNumber NewLengthInFrames;
		FFrameNumber T0;
		FFrameNumber T1;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/*** Sets the total play-able length in seconds. Broadcasts a EAnimDataModelNotifyType::SequenceLengthChanged notify if successful.\n\x09* T0 and T1 are expected to represent the window of time that was either added or removed. E.g. for insertion T0 indicates the time\n\x09* at which additional time starts and T1 were it ends. For removal T0 indicates the time at which time should be started to remove, and T1 indicates the end. Giving a total of T1 - T0 added or removed length.\n\x09* The number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.\n\x09* @param\x09NewLengthInFrames\x09Total new play-able number of frames value (according to frame rate), has to be positive and non-zero\n\x09* @param\x09T0\x09\x09\x09\x09\x09Point between 0 and NewLengthInFrames at which the change in length starts\n\x09* @param\x09T1\x09\x09\x09\x09\x09Point between 0 and NewLengthInFrames at which the change in length ends\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets the total play-able length in seconds. Broadcasts a EAnimDataModelNotifyType::SequenceLengthChanged notify if successful.\nT0 and T1 are expected to represent the window of time that was either added or removed. E.g. for insertion T0 indicates the time\nat which additional time starts and T1 were it ends. For removal T0 indicates the time at which time should be started to remove, and T1 indicates the end. Giving a total of T1 - T0 added or removed length.\nThe number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.\n@param        NewLengthInFrames       Total new play-able number of frames value (according to frame rate), has to be positive and non-zero\n@param        T0                                      Point between 0 and NewLengthInFrames at which the change in length starts\n@param        T1                                      Point between 0 and NewLengthInFrames at which the change in length ends\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLengthInFrames;
	static const UECodeGen_Private::FStructPropertyParams NewProp_T0;
	static const UECodeGen_Private::FStructPropertyParams NewProp_T1;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_NewLengthInFrames = { "NewLengthInFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizeNumberOfFrames_Parms, NewLengthInFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_T0 = { "T0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizeNumberOfFrames_Parms, T0), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizeNumberOfFrames_Parms, T1), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventResizeNumberOfFrames_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventResizeNumberOfFrames_Parms), &Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_NewLengthInFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_T0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_T1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "ResizeNumberOfFrames", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::AnimationDataController_eventResizeNumberOfFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::AnimationDataController_eventResizeNumberOfFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execResizeNumberOfFrames)
{
	P_GET_STRUCT(FFrameNumber,Z_Param_NewLengthInFrames);
	P_GET_STRUCT(FFrameNumber,Z_Param_T0);
	P_GET_STRUCT(FFrameNumber,Z_Param_T1);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizeNumberOfFrames(Z_Param_NewLengthInFrames,Z_Param_T0,Z_Param_T1,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function ResizeNumberOfFrames

// Begin Interface UAnimationDataController Function ResizePlayLength
struct Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics
{
	struct AnimationDataController_eventResizePlayLength_Parms
	{
		float NewLength;
		float T0;
		float T1;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "ResizePlayLength is deprecated use ResizeNumberOfFrames instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T0;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_T1;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizePlayLength_Parms, NewLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_T0 = { "T0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizePlayLength_Parms, T0), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_T1 = { "T1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventResizePlayLength_Parms, T1), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventResizePlayLength_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventResizePlayLength_Parms), &Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_NewLength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_T0,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_T1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "ResizePlayLength", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::AnimationDataController_eventResizePlayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::AnimationDataController_eventResizePlayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_ResizePlayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_ResizePlayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execResizePlayLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
	P_GET_PROPERTY(FFloatProperty,Z_Param_T0);
	P_GET_PROPERTY(FFloatProperty,Z_Param_T1);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResizePlayLength(Z_Param_NewLength,Z_Param_T0,Z_Param_T1,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function ResizePlayLength

// Begin Interface UAnimationDataController Function ScaleCurve
struct Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics
{
	struct AnimationDataController_eventScaleCurve_Parms
	{
		FAnimationCurveIdentifier CurveId;
		float Origin;
		float Factor;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Scales the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveScaled notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09\x09Identifier of the curve to scale\n\x09* @param\x09Origin\x09\x09\x09\x09Time to use as the origin when scaling the curve\n\x09* @param\x09""Factor\x09\x09\x09\x09""Factor with which the curve is supposed to be scaled\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not scaling the curve was successful\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Scales the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveScaled notify if successful.\n\n@param        CurveId                         Identifier of the curve to scale\n@param        Origin                          Time to use as the origin when scaling the curve\n@param        Factor                          Factor with which the curve is supposed to be scaled\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not scaling the curve was successful" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Factor;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventScaleCurve_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventScaleCurve_Parms, Origin), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_Factor = { "Factor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventScaleCurve_Parms, Factor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventScaleCurve_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventScaleCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventScaleCurve_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventScaleCurve_Parms), &Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_Factor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "ScaleCurve", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::AnimationDataController_eventScaleCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::AnimationDataController_eventScaleCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_ScaleCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_ScaleCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execScaleCurve)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Factor);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ScaleCurve(Z_Param_Out_CurveId,Z_Param_Origin,Z_Param_Factor,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function ScaleCurve

// Begin Interface UAnimationDataController Function SetBoneTrackKeys
struct Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics
{
	struct AnimationDataController_eventSetBoneTrackKeys_Parms
	{
		FName BoneName;
		TArray<FVector> PositionalKeys;
		TArray<FQuat> RotationalKeys;
		TArray<FVector> ScalingKeys;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Removes an existing bone animation track with the provided name. Broadcasts a EAnimDataModelNotifyType::TrackChanged notify if successful.\n\x09* The provided number of keys provided is expected to match for each component, and be non-zero.\n\x09*\n\x09* @param\x09""BoneName\x09\x09\x09""Bone name of the track for which the keys should be set\n\x09* @param\x09PositionalKeys\x09\x09""Array of keys for the translation component\n\x09* @param\x09RotationalKeys\x09\x09""Array of keys for the rotation component\n\x09* @param\x09ScalingKeys\x09\x09\x09""Array of keys for the scale component\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the keys were successfully set\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Removes an existing bone animation track with the provided name. Broadcasts a EAnimDataModelNotifyType::TrackChanged notify if successful.\nThe provided number of keys provided is expected to match for each component, and be non-zero.\n\n@param        BoneName                        Bone name of the track for which the keys should be set\n@param        PositionalKeys          Array of keys for the translation component\n@param        RotationalKeys          Array of keys for the rotation component\n@param        ScalingKeys                     Array of keys for the scale component\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the keys were successfully set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationalKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScalingKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionalKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PositionalKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationalKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RotationalKeys;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScalingKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalingKeys;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetBoneTrackKeys_Parms, BoneName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_PositionalKeys_Inner = { "PositionalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_PositionalKeys = { "PositionalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetBoneTrackKeys_Parms, PositionalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionalKeys_MetaData), NewProp_PositionalKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_RotationalKeys_Inner = { "RotationalKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_RotationalKeys = { "RotationalKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetBoneTrackKeys_Parms, RotationalKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationalKeys_MetaData), NewProp_RotationalKeys_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ScalingKeys_Inner = { "ScalingKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ScalingKeys = { "ScalingKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetBoneTrackKeys_Parms, ScalingKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScalingKeys_MetaData), NewProp_ScalingKeys_MetaData) };
void Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetBoneTrackKeys_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetBoneTrackKeys_Parms), &Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetBoneTrackKeys_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetBoneTrackKeys_Parms), &Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_PositionalKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_PositionalKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_RotationalKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_RotationalKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ScalingKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ScalingKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetBoneTrackKeys", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::AnimationDataController_eventSetBoneTrackKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::AnimationDataController_eventSetBoneTrackKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetBoneTrackKeys)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_PositionalKeys);
	P_GET_TARRAY_REF(FQuat,Z_Param_Out_RotationalKeys);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_ScalingKeys);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBoneTrackKeys(Z_Param_BoneName,Z_Param_Out_PositionalKeys,Z_Param_Out_RotationalKeys,Z_Param_Out_ScalingKeys,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetBoneTrackKeys

// Begin Interface UAnimationDataController Function SetCurveColor
struct Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics
{
	struct AnimationDataController_eventSetCurveColor_Parms
	{
		FAnimationCurveIdentifier CurveId;
		FLinearColor Color;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Changes the color of the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveColorChanged notify if successful.\n\x09* Currently changing curve colors is only supported for float curves.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09\x09Identifier of the curve to change the color for\n\x09* @param\x09""Color\x09\x09\x09\x09""Color to which the curve is to be set\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve color was successfully changed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Changes the color of the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveColorChanged notify if successful.\nCurrently changing curve colors is only supported for float curves.\n\n@param        CurveId                         Identifier of the curve to change the color for\n@param        Color                           Color to which the curve is to be set\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve color was successfully changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveColor_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveColor_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveColor_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveColor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveColor_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetCurveColor", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::AnimationDataController_eventSetCurveColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::AnimationDataController_eventSetCurveColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetCurveColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetCurveColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetCurveColor)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveColor(Z_Param_Out_CurveId,Z_Param_Color,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetCurveColor

// Begin Interface UAnimationDataController Function SetCurveComment
struct Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics
{
	struct AnimationDataController_eventSetCurveComment_Parms
	{
		FAnimationCurveIdentifier CurveId;
		FString Comment;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Changes the comment of the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveCommentChanged notify if successful.\n\x09* Currently changing curve comments is only supported for float curves.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09\x09Identifier of the curve to change the comment for\n\x09* @param\x09""Comment\x09\x09\x09\x09""Comment to which the curve is to be set\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve comment was successfully changed\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Changes the comment of the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveCommentChanged notify if successful.\nCurrently changing curve comments is only supported for float curves.\n\n@param        CurveId                         Identifier of the curve to change the comment for\n@param        Comment                         Comment to which the curve is to be set\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve comment was successfully changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Comment_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Comment;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveComment_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_Comment = { "Comment", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveComment_Parms, Comment), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Comment_MetaData), NewProp_Comment_MetaData) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveComment_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveComment_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveComment_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveComment_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_Comment,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetCurveComment", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::AnimationDataController_eventSetCurveComment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::AnimationDataController_eventSetCurveComment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetCurveComment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetCurveComment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetCurveComment)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Comment);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveComment(Z_Param_Out_CurveId,Z_Param_Comment,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetCurveComment

// Begin Interface UAnimationDataController Function SetCurveFlag
struct Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics
{
	struct AnimationDataController_eventSetCurveFlag_Parms
	{
		FAnimationCurveIdentifier CurveId;
		TEnumAsByte<EAnimAssetCurveFlags> Flag;
		bool bState;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Set an individual flag for the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveFlagsChanged notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the curve for which the flag state is to be set\n\x09* @param\x09""Flag\x09\x09\x09\x09""Flag for which the state is supposed to be set\n\x09* @param\x09""bState\x09\x09\x09\x09State of the flag to be, true=set/false=not set\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the flag state was successfully set\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "CPP_Default_bState", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Set an individual flag for the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveFlagsChanged notify if successful.\n\n@param        CurveId                     Identifier for the curve for which the flag state is to be set\n@param        Flag                            Flag for which the state is supposed to be set\n@param        bState                          State of the flag to be, true=set/false=not set\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the flag state was successfully set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flag;
	static void NewProp_bState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bState;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveFlag_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveFlag_Parms, Flag), Z_Construct_UEnum_Engine_EAnimAssetCurveFlags, METADATA_PARAMS(0, nullptr) }; // 1515167533
void Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bState_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveFlag_Parms*)Obj)->bState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bState = { "bState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveFlag_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bState_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveFlag_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveFlag_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveFlag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveFlag_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_Flag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetCurveFlag", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::AnimationDataController_eventSetCurveFlag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::AnimationDataController_eventSetCurveFlag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetCurveFlag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetCurveFlag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetCurveFlag)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flag);
	P_GET_UBOOL(Z_Param_bState);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveFlag(Z_Param_Out_CurveId,EAnimAssetCurveFlags(Z_Param_Flag),Z_Param_bState,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetCurveFlag

// Begin Interface UAnimationDataController Function SetCurveFlags
struct Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics
{
	struct AnimationDataController_eventSetCurveFlags_Parms
	{
		FAnimationCurveIdentifier CurveId;
		int32 Flags;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Replace the flags for the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveFlagsChanged notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the curve for which the flag state is to be set\n\x09* @param\x09""Flags\x09\x09\x09\x09""Flag mask with which the existing flags are to be replaced\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the flag mask was successfully set\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Replace the flags for the curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveFlagsChanged notify if successful.\n\n@param        CurveId                     Identifier for the curve for which the flag state is to be set\n@param        Flags                           Flag mask with which the existing flags are to be replaced\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the flag mask was successfully set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Flags;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveFlags_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveFlags_Parms, Flags), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveFlags_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveFlags_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveFlags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveFlags_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_Flags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetCurveFlags", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::AnimationDataController_eventSetCurveFlags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::AnimationDataController_eventSetCurveFlags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetCurveFlags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetCurveFlags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetCurveFlags)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FIntProperty,Z_Param_Flags);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveFlags(Z_Param_Out_CurveId,Z_Param_Flags,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetCurveFlags

// Begin Interface UAnimationDataController Function SetCurveKey
struct Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics
{
	struct AnimationDataController_eventSetCurveKey_Parms
	{
		FAnimationCurveIdentifier CurveId;
		FRichCurveKey Key;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Sets a single key for the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\x09* In case a key for the provided key time already exists the key is replaced.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the curve for which the key is to be set\n\x09* @param\x09Key\x09\x09\x09\x09\x09Key to be set\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the curve key was successfully set\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets a single key for the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\nIn case a key for the provided key time already exists the key is replaced.\n\n@param        CurveId                     Identifier for the curve for which the key is to be set\n@param        Key                                     Key to be set\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the curve key was successfully set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveKey_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveKey_Parms, Key), Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) }; // 283868055
void Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveKey_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetCurveKey", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::AnimationDataController_eventSetCurveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::AnimationDataController_eventSetCurveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetCurveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetCurveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetCurveKey)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_STRUCT_REF(FRichCurveKey,Z_Param_Out_Key);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveKey(Z_Param_Out_CurveId,Z_Param_Out_Key,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetCurveKey

// Begin Interface UAnimationDataController Function SetCurveKeys
struct Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics
{
	struct AnimationDataController_eventSetCurveKeys_Parms
	{
		FAnimationCurveIdentifier CurveId;
		TArray<FRichCurveKey> CurveKeys;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Replace the keys for the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the curve for which the keys are to be replaced\n\x09* @param\x09""CurveKeys\x09\x09\x09Keys with which the existing keys are to be replaced\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not replacing curve keys was successful\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Replace the keys for the curve with provided identifier and name. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\n@param        CurveId                     Identifier for the curve for which the keys are to be replaced\n@param        CurveKeys                       Keys with which the existing keys are to be replaced\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not replacing curve keys was successful" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CurveKeys;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveKeys_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_CurveKeys_Inner = { "CurveKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FRichCurveKey, METADATA_PARAMS(0, nullptr) }; // 283868055
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_CurveKeys = { "CurveKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetCurveKeys_Parms, CurveKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveKeys_MetaData), NewProp_CurveKeys_MetaData) }; // 283868055
void Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveKeys_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveKeys_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetCurveKeys_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetCurveKeys_Parms), &Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_CurveKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_CurveKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetCurveKeys", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::AnimationDataController_eventSetCurveKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::AnimationDataController_eventSetCurveKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetCurveKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetCurveKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetCurveKeys)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_TARRAY_REF(FRichCurveKey,Z_Param_Out_CurveKeys);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetCurveKeys(Z_Param_Out_CurveId,Z_Param_Out_CurveKeys,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetCurveKeys

// Begin Interface UAnimationDataController Function SetFrameRate
struct Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics
{
	struct FFrameRate
	{
		int32 Numerator;
		int32 Denominator;
	};

	struct AnimationDataController_eventSetFrameRate_Parms
	{
		FFrameRate FrameRate;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Sets the frame rate according to which the bone animation is expected to be sampled. Broadcasts a EAnimDataModelNotifyType::FrameRateChanged notify if successful.\n\x09* The number of frames and keys for the provided frame rate is recalculated according to the current value of UAnimDataModel::PlayLength.\n\x09*\n\x09* @param\x09""FrameRate\x09\x09\x09The new sampling frame rate, has to be positive and non-zero\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets the frame rate according to which the bone animation is expected to be sampled. Broadcasts a EAnimDataModelNotifyType::FrameRateChanged notify if successful.\nThe number of frames and keys for the provided frame rate is recalculated according to the current value of UAnimDataModel::PlayLength.\n\n@param        FrameRate                       The new sampling frame rate, has to be positive and non-zero\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetFrameRate_Parms, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetFrameRate_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetFrameRate_Parms), &Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_FrameRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetFrameRate", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::AnimationDataController_eventSetFrameRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::AnimationDataController_eventSetFrameRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetFrameRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetFrameRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetFrameRate)
{
	P_GET_STRUCT(FFrameRate,Z_Param_FrameRate);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFrameRate(Z_Param_FrameRate,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetFrameRate

// Begin Interface UAnimationDataController Function SetModel
struct Z_Construct_UFunction_UAnimationDataController_SetModel_Statics
{
	struct AnimationDataController_eventSetModel_Parms
	{
		TScriptInterface<IAnimationDataModel> InModel;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Sets the AnimDataModel instance this controller is supposed to be targeting\n\x09*\n\x09* @param\x09InModel\x09\x09IAnimationDataModel instance to target\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets the AnimDataModel instance this controller is supposed to be targeting\n\n@param        InModel         IAnimationDataModel instance to target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_InModel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::NewProp_InModel = { "InModel", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetModel_Parms, InModel), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::NewProp_InModel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetModel", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::AnimationDataController_eventSetModel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::AnimationDataController_eventSetModel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetModel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetModel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetModel)
{
	P_GET_TINTERFACE(IAnimationDataModel,Z_Param_InModel);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetModel(Z_Param_InModel);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetModel

// Begin Interface UAnimationDataController Function SetNumberOfFrames
struct Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics
{
	struct AnimationDataController_eventSetNumberOfFrames_Parms
	{
		FFrameNumber NewLengthInFrames;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "Comment", "/**\n\x09* Sets the total play-able length in seconds. Broadcasts a EAnimDataModelNotifyType::SequenceLengthChanged notify if successful.\n\x09* The number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.\n\x09*\n\x09* @param\x09NewLengthInFrames\x09Total new play-able number of frames value (according to frame rate), has to be positive and non-zero\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets the total play-able length in seconds. Broadcasts a EAnimDataModelNotifyType::SequenceLengthChanged notify if successful.\nThe number of frames and keys for the provided length is recalculated according to the current value of UAnimDataModel::FrameRate.\n\n@param        NewLengthInFrames       Total new play-able number of frames value (according to frame rate), has to be positive and non-zero\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLengthInFrames;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::NewProp_NewLengthInFrames = { "NewLengthInFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetNumberOfFrames_Parms, NewLengthInFrames), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetNumberOfFrames_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetNumberOfFrames_Parms), &Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::NewProp_NewLengthInFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetNumberOfFrames", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::AnimationDataController_eventSetNumberOfFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::AnimationDataController_eventSetNumberOfFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetNumberOfFrames)
{
	P_GET_STRUCT(FFrameNumber,Z_Param_NewLengthInFrames);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNumberOfFrames(Z_Param_NewLengthInFrames,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetNumberOfFrames

// Begin Interface UAnimationDataController Function SetPlayLength
struct Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics
{
	struct AnimationDataController_eventSetPlayLength_Parms
	{
		float Length;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AnimationData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "SetPlayLength is deprecated use SetNumberOfFrames instead." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetPlayLength_Parms, Length), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetPlayLength_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetPlayLength_Parms), &Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetPlayLength", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::AnimationDataController_eventSetPlayLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::AnimationDataController_eventSetPlayLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetPlayLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetPlayLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetPlayLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayLength(Z_Param_Length,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetPlayLength

// Begin Interface UAnimationDataController Function SetTransformCurveKey
struct Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics
{
	struct AnimationDataController_eventSetTransformCurveKey_Parms
	{
		FAnimationCurveIdentifier CurveId;
		float Time;
		FTransform Value;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Sets a single key for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\x09* In case a key for any of the individual transform channel curves already exists the value is replaced.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the transform curve for which the key is to be set\n\x09* @param\x09Time\x09\x09\x09\x09Time of the key to be set\n\x09* @param\x09Value\x09\x09\x09\x09Value of the key to be set\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the transform curve key was successfully set\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Sets a single key for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\nIn case a key for any of the individual transform channel curves already exists the value is replaced.\n\n@param        CurveId                     Identifier for the transform curve for which the key is to be set\n@param        Time                            Time of the key to be set\n@param        Value                           Value of the key to be set\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the transform curve key was successfully set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetTransformCurveKey_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetTransformCurveKey_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetTransformCurveKey_Parms, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetTransformCurveKey_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetTransformCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetTransformCurveKey_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetTransformCurveKey_Parms), &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetTransformCurveKey", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::AnimationDataController_eventSetTransformCurveKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::AnimationDataController_eventSetTransformCurveKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetTransformCurveKey)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Value);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTransformCurveKey(Z_Param_Out_CurveId,Z_Param_Time,Z_Param_Out_Value,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetTransformCurveKey

// Begin Interface UAnimationDataController Function SetTransformCurveKeys
struct Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics
{
	struct AnimationDataController_eventSetTransformCurveKeys_Parms
	{
		FAnimationCurveIdentifier CurveId;
		TArray<FTransform> TransformValues;
		TArray<float> TimeKeys;
		bool bShouldTransact;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "Comment", "/**\n\x09* Replace the keys for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\x09*\n\x09* @param\x09""CurveId\x09\x09\x09    Identifier for the transform curve for which the keys are to be set\n\x09* @param\x09TransformValues\x09\x09Transform Values with which the existing values are to be replaced\n\x09* @param\x09TimeKeys\x09\x09\x09Time Keys with which the existing keys are to be replaced\n\x09* @param\x09""bShouldTransact\x09\x09Whether or not any undo-redo changes should be generated\n\x09*\n\x09* @return\x09Whether or not the transform curve keys were successfully set\n\x09*/" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
		{ "ToolTip", "Replace the keys for the transform curve with provided identifier. Broadcasts a EAnimDataModelNotifyType::CurveChanged notify if successful.\n\n@param        CurveId                     Identifier for the transform curve for which the keys are to be set\n@param        TransformValues         Transform Values with which the existing values are to be replaced\n@param        TimeKeys                        Time Keys with which the existing keys are to be replaced\n@param        bShouldTransact         Whether or not any undo-redo changes should be generated\n\n@return       Whether or not the transform curve keys were successfully set" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurveId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformValues_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeKeys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurveId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransformValues_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformValues;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TimeKeys;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_CurveId = { "CurveId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetTransformCurveKeys_Parms, CurveId), Z_Construct_UScriptStruct_FAnimationCurveIdentifier, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurveId_MetaData), NewProp_CurveId_MetaData) }; // 2532483074
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TransformValues_Inner = { "TransformValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TransformValues = { "TransformValues", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetTransformCurveKeys_Parms, TransformValues), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformValues_MetaData), NewProp_TransformValues_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TimeKeys_Inner = { "TimeKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TimeKeys = { "TimeKeys", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventSetTransformCurveKeys_Parms, TimeKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeKeys_MetaData), NewProp_TimeKeys_MetaData) };
void Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventSetTransformCurveKeys_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetTransformCurveKeys_Parms), &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimationDataController_eventSetTransformCurveKeys_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventSetTransformCurveKeys_Parms), &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_CurveId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TransformValues_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TransformValues,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TimeKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_TimeKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_bShouldTransact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "SetTransformCurveKeys", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::AnimationDataController_eventSetTransformCurveKeys_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::AnimationDataController_eventSetTransformCurveKeys_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execSetTransformCurveKeys)
{
	P_GET_STRUCT_REF(FAnimationCurveIdentifier,Z_Param_Out_CurveId);
	P_GET_TARRAY_REF(FTransform,Z_Param_Out_TransformValues);
	P_GET_TARRAY_REF(float,Z_Param_Out_TimeKeys);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetTransformCurveKeys(Z_Param_Out_CurveId,Z_Param_Out_TransformValues,Z_Param_Out_TimeKeys,Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function SetTransformCurveKeys

// Begin Interface UAnimationDataController Function UpdateCurveNamesFromSkeleton
struct Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics
{
	struct AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms
	{
		const USkeleton* Skeleton;
		ERawCurveTrackTypes SupportedCurveType;
		bool bShouldTransact;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "CurveData" },
		{ "CPP_Default_bShouldTransact", "true" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is no longer used." },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SupportedCurveType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SupportedCurveType;
	static void NewProp_bShouldTransact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldTransact;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Skeleton_MetaData), NewProp_Skeleton_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_SupportedCurveType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_SupportedCurveType = { "SupportedCurveType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms, SupportedCurveType), Z_Construct_UEnum_Engine_ERawCurveTrackTypes, METADATA_PARAMS(0, nullptr) }; // 2083403897
void Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_bShouldTransact_SetBit(void* Obj)
{
	((AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms*)Obj)->bShouldTransact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_bShouldTransact = { "bShouldTransact", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms), &Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_bShouldTransact_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_Skeleton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_SupportedCurveType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_SupportedCurveType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::NewProp_bShouldTransact,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationDataController, nullptr, "UpdateCurveNamesFromSkeleton", nullptr, nullptr, Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::AnimationDataController_eventUpdateCurveNamesFromSkeleton_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IAnimationDataController::execUpdateCurveNamesFromSkeleton)
{
	P_GET_OBJECT(USkeleton,Z_Param_Skeleton);
	P_GET_ENUM(ERawCurveTrackTypes,Z_Param_SupportedCurveType);
	P_GET_UBOOL(Z_Param_bShouldTransact);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCurveNamesFromSkeleton(Z_Param_Skeleton,ERawCurveTrackTypes(Z_Param_SupportedCurveType),Z_Param_bShouldTransact);
	P_NATIVE_END;
}
// End Interface UAnimationDataController Function UpdateCurveNamesFromSkeleton

// Begin Interface UAnimationDataController
void UAnimationDataController::StaticRegisterNativesUAnimationDataController()
{
	UClass* Class = UAnimationDataController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddAttribute", &IAnimationDataController::execAddAttribute },
		{ "AddBoneCurve", &IAnimationDataController::execAddBoneCurve },
		{ "AddBoneTrack", &IAnimationDataController::execAddBoneTrack },
		{ "AddCurve", &IAnimationDataController::execAddCurve },
		{ "CloseBracket", &IAnimationDataController::execCloseBracket },
		{ "DuplicateAttribute", &IAnimationDataController::execDuplicateAttribute },
		{ "DuplicateCurve", &IAnimationDataController::execDuplicateCurve },
		{ "FindOrAddCurveNamesOnSkeleton", &IAnimationDataController::execFindOrAddCurveNamesOnSkeleton },
		{ "GetModelInterface", &IAnimationDataController::execGetModelInterface },
		{ "InsertBoneTrack", &IAnimationDataController::execInsertBoneTrack },
		{ "OpenBracket", &IAnimationDataController::execOpenBracket },
		{ "RemoveAllAttributes", &IAnimationDataController::execRemoveAllAttributes },
		{ "RemoveAllAttributesForBone", &IAnimationDataController::execRemoveAllAttributesForBone },
		{ "RemoveAllBoneTracks", &IAnimationDataController::execRemoveAllBoneTracks },
		{ "RemoveAllCurvesOfType", &IAnimationDataController::execRemoveAllCurvesOfType },
		{ "RemoveAttribute", &IAnimationDataController::execRemoveAttribute },
		{ "RemoveAttributeKey", &IAnimationDataController::execRemoveAttributeKey },
		{ "RemoveBoneTrack", &IAnimationDataController::execRemoveBoneTrack },
		{ "RemoveCurve", &IAnimationDataController::execRemoveCurve },
		{ "RemoveCurveKey", &IAnimationDataController::execRemoveCurveKey },
		{ "RemoveTransformCurveKey", &IAnimationDataController::execRemoveTransformCurveKey },
		{ "RenameCurve", &IAnimationDataController::execRenameCurve },
		{ "Resize", &IAnimationDataController::execResize },
		{ "ResizeInFrames", &IAnimationDataController::execResizeInFrames },
		{ "ResizeNumberOfFrames", &IAnimationDataController::execResizeNumberOfFrames },
		{ "ResizePlayLength", &IAnimationDataController::execResizePlayLength },
		{ "ScaleCurve", &IAnimationDataController::execScaleCurve },
		{ "SetBoneTrackKeys", &IAnimationDataController::execSetBoneTrackKeys },
		{ "SetCurveColor", &IAnimationDataController::execSetCurveColor },
		{ "SetCurveComment", &IAnimationDataController::execSetCurveComment },
		{ "SetCurveFlag", &IAnimationDataController::execSetCurveFlag },
		{ "SetCurveFlags", &IAnimationDataController::execSetCurveFlags },
		{ "SetCurveKey", &IAnimationDataController::execSetCurveKey },
		{ "SetCurveKeys", &IAnimationDataController::execSetCurveKeys },
		{ "SetFrameRate", &IAnimationDataController::execSetFrameRate },
		{ "SetModel", &IAnimationDataController::execSetModel },
		{ "SetNumberOfFrames", &IAnimationDataController::execSetNumberOfFrames },
		{ "SetPlayLength", &IAnimationDataController::execSetPlayLength },
		{ "SetTransformCurveKey", &IAnimationDataController::execSetTransformCurveKey },
		{ "SetTransformCurveKeys", &IAnimationDataController::execSetTransformCurveKeys },
		{ "UpdateCurveNamesFromSkeleton", &IAnimationDataController::execUpdateCurveNamesFromSkeleton },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationDataController);
UClass* Z_Construct_UClass_UAnimationDataController_NoRegister()
{
	return UAnimationDataController::StaticClass();
}
struct Z_Construct_UClass_UAnimationDataController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimData/IAnimationDataController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationDataController_AddAttribute, "AddAttribute" }, // 3911928007
		{ &Z_Construct_UFunction_UAnimationDataController_AddBoneCurve, "AddBoneCurve" }, // 1255689677
		{ &Z_Construct_UFunction_UAnimationDataController_AddBoneTrack, "AddBoneTrack" }, // 1615543409
		{ &Z_Construct_UFunction_UAnimationDataController_AddCurve, "AddCurve" }, // 188951653
		{ &Z_Construct_UFunction_UAnimationDataController_CloseBracket, "CloseBracket" }, // 3780048435
		{ &Z_Construct_UFunction_UAnimationDataController_DuplicateAttribute, "DuplicateAttribute" }, // 2015989511
		{ &Z_Construct_UFunction_UAnimationDataController_DuplicateCurve, "DuplicateCurve" }, // 3447293813
		{ &Z_Construct_UFunction_UAnimationDataController_FindOrAddCurveNamesOnSkeleton, "FindOrAddCurveNamesOnSkeleton" }, // 2981331524
		{ &Z_Construct_UFunction_UAnimationDataController_GetModelInterface, "GetModelInterface" }, // 1846529639
		{ &Z_Construct_UFunction_UAnimationDataController_InsertBoneTrack, "InsertBoneTrack" }, // 2866858524
		{ &Z_Construct_UFunction_UAnimationDataController_OpenBracket, "OpenBracket" }, // 3035988259
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributes, "RemoveAllAttributes" }, // 190821617
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveAllAttributesForBone, "RemoveAllAttributesForBone" }, // 4075727254
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveAllBoneTracks, "RemoveAllBoneTracks" }, // 1730858835
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveAllCurvesOfType, "RemoveAllCurvesOfType" }, // 2232573165
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveAttribute, "RemoveAttribute" }, // 4128447555
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveAttributeKey, "RemoveAttributeKey" }, // 2625132287
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveBoneTrack, "RemoveBoneTrack" }, // 2564430956
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveCurve, "RemoveCurve" }, // 2957456820
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveCurveKey, "RemoveCurveKey" }, // 3207784635
		{ &Z_Construct_UFunction_UAnimationDataController_RemoveTransformCurveKey, "RemoveTransformCurveKey" }, // 671281223
		{ &Z_Construct_UFunction_UAnimationDataController_RenameCurve, "RenameCurve" }, // 1910086844
		{ &Z_Construct_UFunction_UAnimationDataController_Resize, "Resize" }, // 1015192178
		{ &Z_Construct_UFunction_UAnimationDataController_ResizeInFrames, "ResizeInFrames" }, // 2109040255
		{ &Z_Construct_UFunction_UAnimationDataController_ResizeNumberOfFrames, "ResizeNumberOfFrames" }, // 195993726
		{ &Z_Construct_UFunction_UAnimationDataController_ResizePlayLength, "ResizePlayLength" }, // 2810985775
		{ &Z_Construct_UFunction_UAnimationDataController_ScaleCurve, "ScaleCurve" }, // 3951830059
		{ &Z_Construct_UFunction_UAnimationDataController_SetBoneTrackKeys, "SetBoneTrackKeys" }, // 551527128
		{ &Z_Construct_UFunction_UAnimationDataController_SetCurveColor, "SetCurveColor" }, // 2399973136
		{ &Z_Construct_UFunction_UAnimationDataController_SetCurveComment, "SetCurveComment" }, // 775179663
		{ &Z_Construct_UFunction_UAnimationDataController_SetCurveFlag, "SetCurveFlag" }, // 2994764462
		{ &Z_Construct_UFunction_UAnimationDataController_SetCurveFlags, "SetCurveFlags" }, // 522913348
		{ &Z_Construct_UFunction_UAnimationDataController_SetCurveKey, "SetCurveKey" }, // 4171152126
		{ &Z_Construct_UFunction_UAnimationDataController_SetCurveKeys, "SetCurveKeys" }, // 858593744
		{ &Z_Construct_UFunction_UAnimationDataController_SetFrameRate, "SetFrameRate" }, // 2996237870
		{ &Z_Construct_UFunction_UAnimationDataController_SetModel, "SetModel" }, // 1417156163
		{ &Z_Construct_UFunction_UAnimationDataController_SetNumberOfFrames, "SetNumberOfFrames" }, // 102895261
		{ &Z_Construct_UFunction_UAnimationDataController_SetPlayLength, "SetPlayLength" }, // 527442112
		{ &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKey, "SetTransformCurveKey" }, // 1232088997
		{ &Z_Construct_UFunction_UAnimationDataController_SetTransformCurveKeys, "SetTransformCurveKeys" }, // 1319198573
		{ &Z_Construct_UFunction_UAnimationDataController_UpdateCurveNamesFromSkeleton, "UpdateCurveNamesFromSkeleton" }, // 3710999382
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimationDataController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimationDataController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationDataController_Statics::ClassParams = {
	&UAnimationDataController::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationDataController_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimationDataController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimationDataController()
{
	if (!Z_Registration_Info_UClass_UAnimationDataController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationDataController.OuterSingleton, Z_Construct_UClass_UAnimationDataController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimationDataController.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimationDataController>()
{
	return UAnimationDataController::StaticClass();
}
UAnimationDataController::UAnimationDataController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationDataController);
UAnimationDataController::~UAnimationDataController() {}
// End Interface UAnimationDataController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationDataController, UAnimationDataController::StaticClass, TEXT("UAnimationDataController"), &Z_Registration_Info_UClass_UAnimationDataController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationDataController), 1906966015U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_2740145900(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimData_IAnimationDataController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
