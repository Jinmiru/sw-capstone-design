// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Paper2D/Classes/PaperFlipbook.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperFlipbook() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UEnum* Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode();
PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame();
UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References

// Begin ScriptStruct FPaperFlipbookKeyFrame
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame;
class UScriptStruct* FPaperFlipbookKeyFrame::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("PaperFlipbookKeyFrame"));
	}
	return Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FPaperFlipbookKeyFrame>()
{
	return FPaperFlipbookKeyFrame::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrameRun_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameRun;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPaperFlipbookKeyFrame>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0114000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperFlipbookKeyFrame, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Sprite_MetaData), NewProp_Sprite_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun = { "FrameRun", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPaperFlipbookKeyFrame, FrameRun), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrameRun_MetaData), NewProp_FrameRun_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_Sprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewProp_FrameRun,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	&NewStructOps,
	"PaperFlipbookKeyFrame",
	Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::PropPointers),
	sizeof(FPaperFlipbookKeyFrame),
	alignof(FPaperFlipbookKeyFrame),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame()
{
	if (!Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame.InnerSingleton, Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame.InnerSingleton;
}
// End ScriptStruct FPaperFlipbookKeyFrame

// Begin Enum EFlipbookCollisionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFlipbookCollisionMode;
static UEnum* EFlipbookCollisionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("EFlipbookCollisionMode"));
	}
	return Z_Registration_Info_UEnum_EFlipbookCollisionMode.OuterSingleton;
}
template<> PAPER2D_API UEnum* StaticEnum<EFlipbookCollisionMode::Type>()
{
	return EFlipbookCollisionMode_StaticEnum();
}
struct Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "EachFrameCollision.Comment", "/** The flipbook changes collision each frame based on the animation (Note: This setting is not recommended and is very expensive, recreating the physics state every frame) */" },
		{ "EachFrameCollision.Name", "EFlipbookCollisionMode::EachFrameCollision" },
		{ "EachFrameCollision.ToolTip", "The flipbook changes collision each frame based on the animation (Note: This setting is not recommended and is very expensive, recreating the physics state every frame)" },
		{ "FirstFrameCollision.Comment", "/** The flipbook has non-animated collision based on the first frame of the animation */" },
		{ "FirstFrameCollision.Name", "EFlipbookCollisionMode::FirstFrameCollision" },
		{ "FirstFrameCollision.ToolTip", "The flipbook has non-animated collision based on the first frame of the animation" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "NoCollision.Comment", "/** The flipbook has no collision */" },
		{ "NoCollision.Name", "EFlipbookCollisionMode::NoCollision" },
		{ "NoCollision.ToolTip", "The flipbook has no collision" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EFlipbookCollisionMode::NoCollision", (int64)EFlipbookCollisionMode::NoCollision },
		{ "EFlipbookCollisionMode::FirstFrameCollision", (int64)EFlipbookCollisionMode::FirstFrameCollision },
		{ "EFlipbookCollisionMode::EachFrameCollision", (int64)EFlipbookCollisionMode::EachFrameCollision },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Paper2D,
	nullptr,
	"EFlipbookCollisionMode",
	"EFlipbookCollisionMode::Type",
	Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode()
{
	if (!Z_Registration_Info_UEnum_EFlipbookCollisionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFlipbookCollisionMode.InnerSingleton, Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EFlipbookCollisionMode.InnerSingleton;
}
// End Enum EFlipbookCollisionMode

// Begin Class UPaperFlipbook Function GetKeyFrameIndexAtTime
struct Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics
{
	struct PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms
	{
		float Time;
		bool bClampToEnds;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the keyframe index that covers the specified time (in seconds), or INDEX_NONE if none exists.\n// When bClampToEnds is true, it will choose the first or last keyframe if the time is out of range.\n" },
		{ "CPP_Default_bClampToEnds", "false" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the keyframe index that covers the specified time (in seconds), or INDEX_NONE if none exists.\nWhen bClampToEnds is true, it will choose the first or last keyframe if the time is out of range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bClampToEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToEnds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds_SetBit(void* Obj)
{
	((PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms*)Obj)->bClampToEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds = { "bClampToEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms), &Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_bClampToEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetKeyFrameIndexAtTime", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::PaperFlipbook_eventGetKeyFrameIndexAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execGetKeyFrameIndexAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_UBOOL(Z_Param_bClampToEnds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetKeyFrameIndexAtTime(Z_Param_Time,Z_Param_bClampToEnds);
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function GetKeyFrameIndexAtTime

// Begin Class UPaperFlipbook Function GetNumFrames
struct Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics
{
	struct PaperFlipbook_eventGetNumFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the total number of frames\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the total number of frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetNumFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetNumFrames", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PaperFlipbook_eventGetNumFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::PaperFlipbook_eventGetNumFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_GetNumFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetNumFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execGetNumFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumFrames();
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function GetNumFrames

// Begin Class UPaperFlipbook Function GetNumKeyFrames
struct Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics
{
	struct PaperFlipbook_eventGetNumKeyFrames_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the number of key frames\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the number of key frames" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetNumKeyFrames_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetNumKeyFrames", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PaperFlipbook_eventGetNumKeyFrames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::PaperFlipbook_eventGetNumKeyFrames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execGetNumKeyFrames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNumKeyFrames();
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function GetNumKeyFrames

// Begin Class UPaperFlipbook Function GetSpriteAtFrame
struct Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics
{
	struct PaperFlipbook_eventGetSpriteAtFrame_Parms
	{
		int32 FrameIndex;
		UPaperSprite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the sprite at the specified keyframe index, or nullptr if none exists\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the sprite at the specified keyframe index, or nullptr if none exists" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_FrameIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_FrameIndex = { "FrameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtFrame_Parms, FrameIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtFrame_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_FrameIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetSpriteAtFrame", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PaperFlipbook_eventGetSpriteAtFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::PaperFlipbook_eventGetSpriteAtFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execGetSpriteAtFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_FrameIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperSprite**)Z_Param__Result=P_THIS->GetSpriteAtFrame(Z_Param_FrameIndex);
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function GetSpriteAtFrame

// Begin Class UPaperFlipbook Function GetSpriteAtTime
struct Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics
{
	struct PaperFlipbook_eventGetSpriteAtTime_Parms
	{
		float Time;
		bool bClampToEnds;
		UPaperSprite* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the sprite at the specified time (in seconds), or nullptr if none exists.\n// When bClampToEnds is true, it will choose the first or last sprite if the time is out of range.\n" },
		{ "CPP_Default_bClampToEnds", "false" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the sprite at the specified time (in seconds), or nullptr if none exists.\nWhen bClampToEnds is true, it will choose the first or last sprite if the time is out of range." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static void NewProp_bClampToEnds_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClampToEnds;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtTime_Parms, Time), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds_SetBit(void* Obj)
{
	((PaperFlipbook_eventGetSpriteAtTime_Parms*)Obj)->bClampToEnds = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds = { "bClampToEnds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbook_eventGetSpriteAtTime_Parms), &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetSpriteAtTime_Parms, ReturnValue), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_bClampToEnds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetSpriteAtTime", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PaperFlipbook_eventGetSpriteAtTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::PaperFlipbook_eventGetSpriteAtTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execGetSpriteAtTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_UBOOL(Z_Param_bClampToEnds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPaperSprite**)Z_Param__Result=P_THIS->GetSpriteAtTime(Z_Param_Time,Z_Param_bClampToEnds);
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function GetSpriteAtTime

// Begin Class UPaperFlipbook Function GetTotalDuration
struct Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics
{
	struct PaperFlipbook_eventGetTotalDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Returns the total duration in seconds\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Returns the total duration in seconds" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventGetTotalDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "GetTotalDuration", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PaperFlipbook_eventGetTotalDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::PaperFlipbook_eventGetTotalDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execGetTotalDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTotalDuration();
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function GetTotalDuration

// Begin Class UPaperFlipbook Function IsValidKeyFrameIndex
struct Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics
{
	struct PaperFlipbook_eventIsValidKeyFrameIndex_Parms
	{
		int32 Index;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Is the specified Index within the valid range of key frames?\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Is the specified Index within the valid range of key frames?" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PaperFlipbook_eventIsValidKeyFrameIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PaperFlipbook_eventIsValidKeyFrameIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PaperFlipbook_eventIsValidKeyFrameIndex_Parms), &Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperFlipbook, nullptr, "IsValidKeyFrameIndex", nullptr, nullptr, Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PaperFlipbook_eventIsValidKeyFrameIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::PaperFlipbook_eventIsValidKeyFrameIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPaperFlipbook::execIsValidKeyFrameIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValidKeyFrameIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class UPaperFlipbook Function IsValidKeyFrameIndex

// Begin Class UPaperFlipbook
void UPaperFlipbook::StaticRegisterNativesUPaperFlipbook()
{
	UClass* Class = UPaperFlipbook::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetKeyFrameIndexAtTime", &UPaperFlipbook::execGetKeyFrameIndexAtTime },
		{ "GetNumFrames", &UPaperFlipbook::execGetNumFrames },
		{ "GetNumKeyFrames", &UPaperFlipbook::execGetNumKeyFrames },
		{ "GetSpriteAtFrame", &UPaperFlipbook::execGetSpriteAtFrame },
		{ "GetSpriteAtTime", &UPaperFlipbook::execGetSpriteAtTime },
		{ "GetTotalDuration", &UPaperFlipbook::execGetTotalDuration },
		{ "IsValidKeyFrameIndex", &UPaperFlipbook::execIsValidKeyFrameIndex },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperFlipbook);
UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister()
{
	return UPaperFlipbook::StaticClass();
}
struct Z_Construct_UClass_UPaperFlipbook_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Contains an animation sequence of sprite frames\n */" },
		{ "DisplayThumbnail", "true" },
		{ "IncludePath", "PaperFlipbook.h" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Contains an animation sequence of sprite frames" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FramesPerSecond_MetaData[] = {
		{ "Category", "Sprite" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "0" },
		{ "Comment", "// The nominal frame rate to play this flipbook animation back at\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "The nominal frame rate to play this flipbook animation back at" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyFrames_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The set of key frames for this flipbook animation (each one has a duration and a sprite to display)\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "The set of key frames for this flipbook animation (each one has a duration and a sprite to display)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMaterial_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// The material to use on a flipbook player instance if not overridden\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "The material to use on a flipbook player instance if not overridden" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionSource_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "// Collision source\n" },
		{ "ModuleRelativePath", "Classes/PaperFlipbook.h" },
		{ "ToolTip", "Collision source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FramesPerSecond;
	static const UECodeGen_Private::FStructPropertyParams NewProp_KeyFrames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyFrames;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionSource;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperFlipbook_GetKeyFrameIndexAtTime, "GetKeyFrameIndexAtTime" }, // 2688525826
		{ &Z_Construct_UFunction_UPaperFlipbook_GetNumFrames, "GetNumFrames" }, // 2257742826
		{ &Z_Construct_UFunction_UPaperFlipbook_GetNumKeyFrames, "GetNumKeyFrames" }, // 4072478915
		{ &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtFrame, "GetSpriteAtFrame" }, // 2930696964
		{ &Z_Construct_UFunction_UPaperFlipbook_GetSpriteAtTime, "GetSpriteAtTime" }, // 3078082722
		{ &Z_Construct_UFunction_UPaperFlipbook_GetTotalDuration, "GetTotalDuration" }, // 3982483692
		{ &Z_Construct_UFunction_UPaperFlipbook_IsValidKeyFrameIndex, "IsValidKeyFrameIndex" }, // 3147671385
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperFlipbook>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond = { "FramesPerSecond", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbook, FramesPerSecond), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FramesPerSecond_MetaData), NewProp_FramesPerSecond_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_Inner = { "KeyFrames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame, METADATA_PARAMS(0, nullptr) }; // 3078717736
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames = { "KeyFrames", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbook, KeyFrames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyFrames_MetaData), NewProp_KeyFrames_MetaData) }; // 3078717736
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial = { "DefaultMaterial", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbook, DefaultMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMaterial_MetaData), NewProp_DefaultMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource = { "CollisionSource", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPaperFlipbook, CollisionSource), Z_Construct_UEnum_Paper2D_EFlipbookCollisionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionSource_MetaData), NewProp_CollisionSource_MetaData) }; // 1752152474
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_FramesPerSecond,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_KeyFrames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_DefaultMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperFlipbook_Statics::NewProp_CollisionSource,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPaperFlipbook_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperFlipbook_Statics::ClassParams = {
	&UPaperFlipbook::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPaperFlipbook_Statics::Class_MetaDataParams), Z_Construct_UClass_UPaperFlipbook_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPaperFlipbook()
{
	if (!Z_Registration_Info_UClass_UPaperFlipbook.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperFlipbook.OuterSingleton, Z_Construct_UClass_UPaperFlipbook_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPaperFlipbook.OuterSingleton;
}
template<> PAPER2D_API UClass* StaticClass<UPaperFlipbook>()
{
	return UPaperFlipbook::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperFlipbook);
UPaperFlipbook::~UPaperFlipbook() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UPaperFlipbook)
// End Class UPaperFlipbook

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EFlipbookCollisionMode_StaticEnum, TEXT("EFlipbookCollisionMode"), &Z_Registration_Info_UEnum_EFlipbookCollisionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1752152474U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPaperFlipbookKeyFrame::StaticStruct, Z_Construct_UScriptStruct_FPaperFlipbookKeyFrame_Statics::NewStructOps, TEXT("PaperFlipbookKeyFrame"), &Z_Registration_Info_UScriptStruct_PaperFlipbookKeyFrame, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPaperFlipbookKeyFrame), 3078717736U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPaperFlipbook, UPaperFlipbook::StaticClass, TEXT("UPaperFlipbook"), &Z_Registration_Info_UClass_UPaperFlipbook, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperFlipbook), 3130307126U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_2135286363(TEXT("/Script/Paper2D"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperFlipbook_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
