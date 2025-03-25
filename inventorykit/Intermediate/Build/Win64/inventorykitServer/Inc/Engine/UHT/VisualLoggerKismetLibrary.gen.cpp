// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/VisualLogger/VisualLoggerKismetLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVisualLoggerKismetLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FBox();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UVisualLoggerKismetLibrary Function EnableRecording
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics
{
	struct VisualLoggerKismetLibrary_eventEnableRecording_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "Enable VisLog Recording" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventEnableRecording_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventEnableRecording_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "EnableRecording", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::VisualLoggerKismetLibrary_eventEnableRecording_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::VisualLoggerKismetLibrary_eventEnableRecording_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execEnableRecording)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::EnableRecording(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function EnableRecording

// Begin Class UVisualLoggerKismetLibrary Function LogArrow
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics
{
	struct VisualLoggerKismetLibrary_eventLogArrow_Parms
	{
		UObject* WorldContextObject;
		FVector SegmentStart;
		FVector SegmentEnd;
		FString Text;
		FLinearColor ObjectColor;
		FName CategoryName;
		bool bAddToMessageLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog, Thickness" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs arrow - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_CategoryName", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Arrow" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs arrow - recording for Visual Logs has to be enabled to record this data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogArrow_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogArrow_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentStart_MetaData), NewProp_SegmentStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogArrow_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEnd_MetaData), NewProp_SegmentEnd_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogArrow_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogArrow_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogArrow_Parms, CategoryName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogArrow_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogArrow_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_SegmentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_SegmentEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::NewProp_bAddToMessageLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogArrow", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::VisualLoggerKismetLibrary_eventLogArrow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::VisualLoggerKismetLibrary_eventLogArrow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogArrow)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_SegmentStart);
	P_GET_STRUCT(FVector,Z_Param_SegmentEnd);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogArrow(Z_Param_WorldContextObject,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Text,Z_Param_ObjectColor,Z_Param_CategoryName,Z_Param_bAddToMessageLog);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogArrow

// Begin Class UVisualLoggerKismetLibrary Function LogBox
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics
{
	struct VisualLoggerKismetLibrary_eventLogBox_Parms
	{
		UObject* WorldContextObject;
		FBox BoxShape;
		FString Text;
		FLinearColor ObjectColor;
		FName LogCategory;
		bool bAddToMessageLog;
		bool bWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs box shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_bWireframe", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Box Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs box shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxShape;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape = { "BoxShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, BoxShape), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogBox_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogBox_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogBox_Parms*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_BoxShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bAddToMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::NewProp_bWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogBox", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::VisualLoggerKismetLibrary_eventLogBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::VisualLoggerKismetLibrary_eventLogBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FBox,Z_Param_BoxShape);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_GET_UBOOL(Z_Param_bWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog,Z_Param_bWireframe);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogBox

// Begin Class UVisualLoggerKismetLibrary Function LogCapsule
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics
{
	struct VisualLoggerKismetLibrary_eventLogCapsule_Parms
	{
		UObject* WorldContextObject;
		FVector Base;
		float HalfHeight;
		float Radius;
		FQuat Rotation;
		FString Text;
		FLinearColor ObjectColor;
		FName LogCategory;
		bool bAddToMessageLog;
		bool bWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs capsule shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_bWireframe", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Capsule Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs capsule shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Base;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Base = { "Base", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, Base), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, HalfHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCapsule_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCapsule_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCapsule_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCapsule_Parms*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCapsule_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Base,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_HalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bAddToMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::NewProp_bWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogCapsule", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::VisualLoggerKismetLibrary_eventLogCapsule_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::VisualLoggerKismetLibrary_eventLogCapsule_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogCapsule)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Base);
	P_GET_PROPERTY(FFloatProperty,Z_Param_HalfHeight);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT(FQuat,Z_Param_Rotation);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_GET_UBOOL(Z_Param_bWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogCapsule(Z_Param_WorldContextObject,Z_Param_Base,Z_Param_HalfHeight,Z_Param_Radius,Z_Param_Rotation,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog,Z_Param_bWireframe);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogCapsule

// Begin Class UVisualLoggerKismetLibrary Function LogCircle
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics
{
	struct VisualLoggerKismetLibrary_eventLogCircle_Parms
	{
		UObject* WorldContextObject;
		FVector Center;
		FVector UpAxis;
		float Radius;
		FString Text;
		FLinearColor ObjectColor;
		float Thickness;
		FName CategoryName;
		bool bAddToMessageLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog, Thickness" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs circle - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_CategoryName", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Circle" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs circle - recording for Visual Logs has to be enabled to record this data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpAxis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, UpAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCircle_Parms, CategoryName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCircle_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCircle_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_UpAxis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::NewProp_bAddToMessageLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogCircle", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::VisualLoggerKismetLibrary_eventLogCircle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::VisualLoggerKismetLibrary_eventLogCircle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogCircle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_STRUCT(FVector,Z_Param_UpAxis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogCircle(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_UpAxis,Z_Param_Radius,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Thickness,Z_Param_CategoryName,Z_Param_bAddToMessageLog);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogCircle

// Begin Class UVisualLoggerKismetLibrary Function LogCone
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics
{
	struct VisualLoggerKismetLibrary_eventLogCone_Parms
	{
		UObject* WorldContextObject;
		FVector Origin;
		FVector Direction;
		float Length;
		float Angle;
		FString Text;
		FLinearColor ObjectColor;
		FName LogCategory;
		bool bAddToMessageLog;
		bool bWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs cone shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_bWireframe", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Cone Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs cone shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Angle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, Length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Angle = { "Angle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, Angle), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCone_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCone_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCone_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCone_Parms*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCone_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Angle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bAddToMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::NewProp_bWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogCone", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::VisualLoggerKismetLibrary_eventLogCone_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::VisualLoggerKismetLibrary_eventLogCone_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogCone)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Origin);
	P_GET_STRUCT(FVector,Z_Param_Direction);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Length);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Angle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_GET_UBOOL(Z_Param_bWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogCone(Z_Param_WorldContextObject,Z_Param_Origin,Z_Param_Direction,Z_Param_Length,Z_Param_Angle,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog,Z_Param_bWireframe);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogCone

// Begin Class UVisualLoggerKismetLibrary Function LogCylinder
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics
{
	struct VisualLoggerKismetLibrary_eventLogCylinder_Parms
	{
		UObject* WorldContextObject;
		FVector Start;
		FVector End;
		float Radius;
		FString Text;
		FLinearColor ObjectColor;
		FName LogCategory;
		bool bAddToMessageLog;
		bool bWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs cylinder shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_bWireframe", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Cylinder Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs cylinder shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogCylinder_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCylinder_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCylinder_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogCylinder_Parms*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogCylinder_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bAddToMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::NewProp_bWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogCylinder", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::VisualLoggerKismetLibrary_eventLogCylinder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::VisualLoggerKismetLibrary_eventLogCylinder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogCylinder)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Start);
	P_GET_STRUCT(FVector,Z_Param_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_GET_UBOOL(Z_Param_bWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogCylinder(Z_Param_WorldContextObject,Z_Param_Start,Z_Param_End,Z_Param_Radius,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog,Z_Param_bWireframe);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogCylinder

// Begin Class UVisualLoggerKismetLibrary Function LogLocation
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics
{
	struct VisualLoggerKismetLibrary_eventLogLocation_Parms
	{
		UObject* WorldContextObject;
		FVector Location;
		FString Text;
		FLinearColor ObjectColor;
		float Radius;
		FName LogCategory;
		bool bAddToMessageLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Radius", "10.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Location" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs location as sphere with given radius - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogLocation_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogLocation_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogLocation_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::NewProp_bAddToMessageLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogLocation", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::VisualLoggerKismetLibrary_eventLogLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::VisualLoggerKismetLibrary_eventLogLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogLocation)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogLocation(Z_Param_WorldContextObject,Z_Param_Location,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Radius,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogLocation

// Begin Class UVisualLoggerKismetLibrary Function LogOrientedBox
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics
{
	struct VisualLoggerKismetLibrary_eventLogOrientedBox_Parms
	{
		UObject* WorldContextObject;
		FBox BoxShape;
		FTransform Transform;
		FString Text;
		FLinearColor ObjectColor;
		FName LogCategory;
		bool bAddToMessageLog;
		bool bWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs oriented box shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_bWireframe", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Oriented Box Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs oriented box shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxShape;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_BoxShape = { "BoxShape", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms, BoxShape), Z_Construct_UScriptStruct_FBox, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogOrientedBox_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogOrientedBox_Parms*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogOrientedBox_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_BoxShape,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_Transform,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bAddToMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::NewProp_bWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogOrientedBox", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::VisualLoggerKismetLibrary_eventLogOrientedBox_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::VisualLoggerKismetLibrary_eventLogOrientedBox_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogOrientedBox)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FBox,Z_Param_BoxShape);
	P_GET_STRUCT(FTransform,Z_Param_Transform);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_GET_UBOOL(Z_Param_bWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogOrientedBox(Z_Param_WorldContextObject,Z_Param_BoxShape,Z_Param_Transform,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog,Z_Param_bWireframe);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogOrientedBox

// Begin Class UVisualLoggerKismetLibrary Function LogSegment
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics
{
	struct VisualLoggerKismetLibrary_eventLogSegment_Parms
	{
		UObject* WorldContextObject;
		FVector SegmentStart;
		FVector SegmentEnd;
		FString Text;
		FLinearColor ObjectColor;
		float Thickness;
		FName CategoryName;
		bool bAddToMessageLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog, Thickness" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs segment - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_CategoryName", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "CPP_Default_Thickness", "0.000000" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Segment" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs segment - recording for Visual Logs has to be enabled to record this data" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentStart;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SegmentEnd;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Thickness;
	static const UECodeGen_Private::FNamePropertyParams NewProp_CategoryName;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart = { "SegmentStart", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentStart_MetaData), NewProp_SegmentStart_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd = { "SegmentEnd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, SegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SegmentEnd_MetaData), NewProp_SegmentEnd_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, Thickness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Thickness_MetaData), NewProp_Thickness_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSegment_Parms, CategoryName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogSegment_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogSegment_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_SegmentEnd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_Thickness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_CategoryName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::NewProp_bAddToMessageLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogSegment", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::VisualLoggerKismetLibrary_eventLogSegment_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::VisualLoggerKismetLibrary_eventLogSegment_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogSegment)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_SegmentStart);
	P_GET_STRUCT(FVector,Z_Param_SegmentEnd);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Thickness);
	P_GET_PROPERTY(FNameProperty,Z_Param_CategoryName);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogSegment(Z_Param_WorldContextObject,Z_Param_SegmentStart,Z_Param_SegmentEnd,Z_Param_Text,Z_Param_ObjectColor,Z_Param_Thickness,Z_Param_CategoryName,Z_Param_bAddToMessageLog);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogSegment

// Begin Class UVisualLoggerKismetLibrary Function LogSphere
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics
{
	struct VisualLoggerKismetLibrary_eventLogSphere_Parms
	{
		UObject* WorldContextObject;
		FVector Center;
		float Radius;
		FString Text;
		FLinearColor ObjectColor;
		FName LogCategory;
		bool bAddToMessageLog;
		bool bWireframe;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs sphere shape - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_bWireframe", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "CPP_Default_ObjectColor", "(R=0.000000,G=0.000000,B=1.000000,A=1.000000)" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Sphere Shape" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs sphere shape - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectColor;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static void NewProp_bWireframe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWireframe;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSphere_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSphere_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSphere_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSphere_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_ObjectColor = { "ObjectColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSphere_Parms, ObjectColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogSphere_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogSphere_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogSphere_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bWireframe_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogSphere_Parms*)Obj)->bWireframe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bWireframe = { "bWireframe", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogSphere_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bWireframe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_ObjectColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bAddToMessageLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::NewProp_bWireframe,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogSphere", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::VisualLoggerKismetLibrary_eventLogSphere_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::VisualLoggerKismetLibrary_eventLogSphere_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogSphere)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_Center);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_STRUCT(FLinearColor,Z_Param_ObjectColor);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_GET_UBOOL(Z_Param_bWireframe);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogSphere(Z_Param_WorldContextObject,Z_Param_Center,Z_Param_Radius,Z_Param_Text,Z_Param_ObjectColor,Z_Param_LogCategory,Z_Param_bAddToMessageLog,Z_Param_bWireframe);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogSphere

// Begin Class UVisualLoggerKismetLibrary Function LogText
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics
{
	struct VisualLoggerKismetLibrary_eventLogText_Parms
	{
		UObject* WorldContextObject;
		FString Text;
		FName LogCategory;
		bool bAddToMessageLog;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "WorldContextObject, bAddToMessageLog" },
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data */" },
		{ "CPP_Default_bAddToMessageLog", "false" },
		{ "CPP_Default_LogCategory", "VisLogBP" },
		{ "DefaultToSelf", "WorldContextObject" },
		{ "DevelopmentOnly", "" },
		{ "DisplayName", "VisLog Text" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Logs simple text string with Visual Logger - recording for Visual Logs has to be enabled to record this data" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Text;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LogCategory;
	static void NewProp_bAddToMessageLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAddToMessageLog;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text = { "Text", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, Text), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory = { "LogCategory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventLogText_Parms, LogCategory), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit(void* Obj)
{
	((VisualLoggerKismetLibrary_eventLogText_Parms*)Obj)->bAddToMessageLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog = { "bAddToMessageLog", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(VisualLoggerKismetLibrary_eventLogText_Parms), &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_LogCategory,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::NewProp_bAddToMessageLog,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "LogText", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::VisualLoggerKismetLibrary_eventLogText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::VisualLoggerKismetLibrary_eventLogText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execLogText)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_PROPERTY(FStrProperty,Z_Param_Text);
	P_GET_PROPERTY(FNameProperty,Z_Param_LogCategory);
	P_GET_UBOOL(Z_Param_bAddToMessageLog);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::LogText(Z_Param_WorldContextObject,Z_Param_Text,Z_Param_LogCategory,Z_Param_bAddToMessageLog);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function LogText

// Begin Class UVisualLoggerKismetLibrary Function RedirectVislog
struct Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics
{
	struct VisualLoggerKismetLibrary_eventRedirectVislog_Parms
	{
		UObject* SourceOwner;
		UObject* DestinationOwner;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "Debug|VisualLogger" },
		{ "Comment", "/** Makes SourceOwner log to DestinationOwner's vislog*/" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ToolTip", "Makes SourceOwner log to DestinationOwner's vislog" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestinationOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner = { "SourceOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, SourceOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner = { "DestinationOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(VisualLoggerKismetLibrary_eventRedirectVislog_Parms, DestinationOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_SourceOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::NewProp_DestinationOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVisualLoggerKismetLibrary, nullptr, "RedirectVislog", nullptr, nullptr, Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::PropPointers), sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::VisualLoggerKismetLibrary_eventRedirectVislog_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams), Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::VisualLoggerKismetLibrary_eventRedirectVislog_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UVisualLoggerKismetLibrary::execRedirectVislog)
{
	P_GET_OBJECT(UObject,Z_Param_SourceOwner);
	P_GET_OBJECT(UObject,Z_Param_DestinationOwner);
	P_FINISH;
	P_NATIVE_BEGIN;
	UVisualLoggerKismetLibrary::RedirectVislog(Z_Param_SourceOwner,Z_Param_DestinationOwner);
	P_NATIVE_END;
}
// End Class UVisualLoggerKismetLibrary Function RedirectVislog

// Begin Class UVisualLoggerKismetLibrary
void UVisualLoggerKismetLibrary::StaticRegisterNativesUVisualLoggerKismetLibrary()
{
	UClass* Class = UVisualLoggerKismetLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableRecording", &UVisualLoggerKismetLibrary::execEnableRecording },
		{ "LogArrow", &UVisualLoggerKismetLibrary::execLogArrow },
		{ "LogBox", &UVisualLoggerKismetLibrary::execLogBox },
		{ "LogCapsule", &UVisualLoggerKismetLibrary::execLogCapsule },
		{ "LogCircle", &UVisualLoggerKismetLibrary::execLogCircle },
		{ "LogCone", &UVisualLoggerKismetLibrary::execLogCone },
		{ "LogCylinder", &UVisualLoggerKismetLibrary::execLogCylinder },
		{ "LogLocation", &UVisualLoggerKismetLibrary::execLogLocation },
		{ "LogOrientedBox", &UVisualLoggerKismetLibrary::execLogOrientedBox },
		{ "LogSegment", &UVisualLoggerKismetLibrary::execLogSegment },
		{ "LogSphere", &UVisualLoggerKismetLibrary::execLogSphere },
		{ "LogText", &UVisualLoggerKismetLibrary::execLogText },
		{ "RedirectVislog", &UVisualLoggerKismetLibrary::execRedirectVislog },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVisualLoggerKismetLibrary);
UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary_NoRegister()
{
	return UVisualLoggerKismetLibrary::StaticClass();
}
struct Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ModuleRelativePath", "Classes/VisualLogger/VisualLoggerKismetLibrary.h" },
		{ "ScriptName", "VisualLoggerLibrary" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_EnableRecording, "EnableRecording" }, // 2384030136
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogArrow, "LogArrow" }, // 258014340
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogBox, "LogBox" }, // 4205592693
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCapsule, "LogCapsule" }, // 2022582690
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCircle, "LogCircle" }, // 870171886
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCone, "LogCone" }, // 3422692654
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogCylinder, "LogCylinder" }, // 2718539243
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogLocation, "LogLocation" }, // 1518872987
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogOrientedBox, "LogOrientedBox" }, // 732097875
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSegment, "LogSegment" }, // 3589419793
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogSphere, "LogSphere" }, // 630596643
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_LogText, "LogText" }, // 3978861059
		{ &Z_Construct_UFunction_UVisualLoggerKismetLibrary_RedirectVislog, "RedirectVislog" }, // 505346357
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVisualLoggerKismetLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams = {
	&UVisualLoggerKismetLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UVisualLoggerKismetLibrary()
{
	if (!Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.OuterSingleton, Z_Construct_UClass_UVisualLoggerKismetLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UVisualLoggerKismetLibrary.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UVisualLoggerKismetLibrary>()
{
	return UVisualLoggerKismetLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UVisualLoggerKismetLibrary);
UVisualLoggerKismetLibrary::~UVisualLoggerKismetLibrary() {}
// End Class UVisualLoggerKismetLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UVisualLoggerKismetLibrary, UVisualLoggerKismetLibrary::StaticClass, TEXT("UVisualLoggerKismetLibrary"), &Z_Registration_Info_UClass_UVisualLoggerKismetLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVisualLoggerKismetLibrary), 2329806383U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_1039114394(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_VisualLogger_VisualLoggerKismetLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
