// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/NavigationSystem/Public/NavigationPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationPath() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationOptionFlag();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavPathEvent();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationPath_NoRegister();
NAVIGATIONSYSTEM_API UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References

// Begin Delegate FOnNavigationPathUpdated
struct Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics
{
	struct _Script_NavigationSystem_eventOnNavigationPathUpdated_Parms
	{
		UNavigationPath* AffectedPath;
		TEnumAsByte<ENavPathEvent::Type> PathEvent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AffectedPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PathEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_AffectedPath = { "AffectedPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms, AffectedPath), Z_Construct_UClass_UNavigationPath_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_PathEvent = { "PathEvent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms, PathEvent), Z_Construct_UEnum_Engine_ENavPathEvent, METADATA_PARAMS(0, nullptr) }; // 4200685195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_AffectedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::NewProp_PathEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem, nullptr, "OnNavigationPathUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNavigationPathUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnNavigationPathUpdated, UNavigationPath* AffectedPath, ENavPathEvent::Type PathEvent)
{
	struct _Script_NavigationSystem_eventOnNavigationPathUpdated_Parms
	{
		UNavigationPath* AffectedPath;
		TEnumAsByte<ENavPathEvent::Type> PathEvent;
	};
	_Script_NavigationSystem_eventOnNavigationPathUpdated_Parms Parms;
	Parms.AffectedPath=AffectedPath;
	Parms.PathEvent=PathEvent;
	OnNavigationPathUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNavigationPathUpdated

// Begin Class UNavigationPath Function EnableDebugDrawing
struct Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics
{
	struct NavigationPath_eventEnableDebugDrawing_Parms
	{
		bool bShouldDrawDebugData;
		FLinearColor PathColor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Debug" },
		{ "CPP_Default_PathColor", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bShouldDrawDebugData_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDrawDebugData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathColor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData_SetBit(void* Obj)
{
	((NavigationPath_eventEnableDebugDrawing_Parms*)Obj)->bShouldDrawDebugData = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData = { "bShouldDrawDebugData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationPath_eventEnableDebugDrawing_Parms), &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_PathColor = { "PathColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationPath_eventEnableDebugDrawing_Parms, PathColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_bShouldDrawDebugData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NewProp_PathColor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "EnableDebugDrawing", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NavigationPath_eventEnableDebugDrawing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::NavigationPath_eventEnableDebugDrawing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execEnableDebugDrawing)
{
	P_GET_UBOOL(Z_Param_bShouldDrawDebugData);
	P_GET_STRUCT(FLinearColor,Z_Param_PathColor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableDebugDrawing(Z_Param_bShouldDrawDebugData,Z_Param_PathColor);
	P_NATIVE_END;
}
// End Class UNavigationPath Function EnableDebugDrawing

// Begin Class UNavigationPath Function EnableRecalculationOnInvalidation
struct Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics
{
	struct NavigationPath_eventEnableRecalculationOnInvalidation_Parms
	{
		TEnumAsByte<ENavigationOptionFlag::Type> DoRecalculation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation */" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "if enabled path will request recalculation if it gets invalidated due to a change to underlying navigation" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DoRecalculation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NewProp_DoRecalculation = { "DoRecalculation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationPath_eventEnableRecalculationOnInvalidation_Parms, DoRecalculation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(0, nullptr) }; // 364394336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NewProp_DoRecalculation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "EnableRecalculationOnInvalidation", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NavigationPath_eventEnableRecalculationOnInvalidation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::NavigationPath_eventEnableRecalculationOnInvalidation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execEnableRecalculationOnInvalidation)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_DoRecalculation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableRecalculationOnInvalidation(ENavigationOptionFlag::Type(Z_Param_DoRecalculation));
	P_NATIVE_END;
}
// End Class UNavigationPath Function EnableRecalculationOnInvalidation

// Begin Class UNavigationPath Function GetDebugString
struct Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics
{
	struct NavigationPath_eventGetDebugString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Debug" },
		{ "Comment", "// UObject end\n" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "UObject end" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationPath_eventGetDebugString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "GetDebugString", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NavigationPath_eventGetDebugString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::NavigationPath_eventGetDebugString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_GetDebugString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetDebugString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execGetDebugString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDebugString();
	P_NATIVE_END;
}
// End Class UNavigationPath Function GetDebugString

// Begin Class UNavigationPath Function GetPathCost
struct Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics
{
	struct NavigationPath_eventGetPathCost_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationPath_eventGetPathCost_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "GetPathCost", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NavigationPath_eventGetPathCost_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::NavigationPath_eventGetPathCost_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_GetPathCost()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetPathCost_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execGetPathCost)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetPathCost();
	P_NATIVE_END;
}
// End Class UNavigationPath Function GetPathCost

// Begin Class UNavigationPath Function GetPathLength
struct Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics
{
	struct NavigationPath_eventGetPathLength_Parms
	{
		double ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(NavigationPath_eventGetPathLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "GetPathLength", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NavigationPath_eventGetPathLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::NavigationPath_eventGetPathLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_GetPathLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_GetPathLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execGetPathLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(double*)Z_Param__Result=P_THIS->GetPathLength();
	P_NATIVE_END;
}
// End Class UNavigationPath Function GetPathLength

// Begin Class UNavigationPath Function IsPartial
struct Z_Construct_UFunction_UNavigationPath_IsPartial_Statics
{
	struct NavigationPath_eventIsPartial_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationPath_eventIsPartial_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationPath_eventIsPartial_Parms), &Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "IsPartial", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NavigationPath_eventIsPartial_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::NavigationPath_eventIsPartial_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_IsPartial()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsPartial_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execIsPartial)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPartial();
	P_NATIVE_END;
}
// End Class UNavigationPath Function IsPartial

// Begin Class UNavigationPath Function IsStringPulled
struct Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics
{
	struct NavigationPath_eventIsStringPulled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationPath_eventIsStringPulled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationPath_eventIsStringPulled_Parms), &Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "IsStringPulled", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NavigationPath_eventIsStringPulled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::NavigationPath_eventIsStringPulled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_IsStringPulled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsStringPulled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execIsStringPulled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStringPulled();
	P_NATIVE_END;
}
// End Class UNavigationPath Function IsStringPulled

// Begin Class UNavigationPath Function IsValid
struct Z_Construct_UFunction_UNavigationPath_IsValid_Statics
{
	struct NavigationPath_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((NavigationPath_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(NavigationPath_eventIsValid_Parms), &Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationPath, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NavigationPath_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UNavigationPath_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UNavigationPath_IsValid_Statics::NavigationPath_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UNavigationPath_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNavigationPath_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UNavigationPath::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// End Class UNavigationPath Function IsValid

// Begin Class UNavigationPath
void UNavigationPath::StaticRegisterNativesUNavigationPath()
{
	UClass* Class = UNavigationPath::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableDebugDrawing", &UNavigationPath::execEnableDebugDrawing },
		{ "EnableRecalculationOnInvalidation", &UNavigationPath::execEnableRecalculationOnInvalidation },
		{ "GetDebugString", &UNavigationPath::execGetDebugString },
		{ "GetPathCost", &UNavigationPath::execGetPathCost },
		{ "GetPathLength", &UNavigationPath::execGetPathLength },
		{ "IsPartial", &UNavigationPath::execIsPartial },
		{ "IsStringPulled", &UNavigationPath::execIsStringPulled },
		{ "IsValid", &UNavigationPath::execIsValid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNavigationPath);
UClass* Z_Construct_UClass_UNavigationPath_NoRegister()
{
	return UNavigationPath::StaticClass();
}
struct Z_Construct_UClass_UNavigationPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09UObject wrapper for FNavigationPath\n */" },
		{ "IncludePath", "NavigationPath.h" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
		{ "ToolTip", "UObject wrapper for FNavigationPath" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathUpdatedNotifier_MetaData[] = {
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathPoints_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecalculateOnInvalidation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavigationPath.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PathUpdatedNotifier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PathPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PathPoints;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RecalculateOnInvalidation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationPath_EnableDebugDrawing, "EnableDebugDrawing" }, // 1506501029
		{ &Z_Construct_UFunction_UNavigationPath_EnableRecalculationOnInvalidation, "EnableRecalculationOnInvalidation" }, // 2096476182
		{ &Z_Construct_UFunction_UNavigationPath_GetDebugString, "GetDebugString" }, // 3010340811
		{ &Z_Construct_UFunction_UNavigationPath_GetPathCost, "GetPathCost" }, // 2941965084
		{ &Z_Construct_UFunction_UNavigationPath_GetPathLength, "GetPathLength" }, // 805724833
		{ &Z_Construct_UFunction_UNavigationPath_IsPartial, "IsPartial" }, // 963805472
		{ &Z_Construct_UFunction_UNavigationPath_IsStringPulled, "IsStringPulled" }, // 4057522884
		{ &Z_Construct_UFunction_UNavigationPath_IsValid, "IsValid" }, // 3257792338
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationPath>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier = { "PathUpdatedNotifier", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationPath, PathUpdatedNotifier), Z_Construct_UDelegateFunction_NavigationSystem_OnNavigationPathUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathUpdatedNotifier_MetaData), NewProp_PathUpdatedNotifier_MetaData) }; // 2419657291
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_Inner = { "PathPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints = { "PathPoints", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationPath, PathPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathPoints_MetaData), NewProp_PathPoints_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation = { "RecalculateOnInvalidation", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UNavigationPath, RecalculateOnInvalidation), Z_Construct_UEnum_Engine_ENavigationOptionFlag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecalculateOnInvalidation_MetaData), NewProp_RecalculateOnInvalidation_MetaData) }; // 364394336
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNavigationPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathUpdatedNotifier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_PathPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNavigationPath_Statics::NewProp_RecalculateOnInvalidation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UNavigationPath_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UNavigationPath_Statics::ClassParams = {
	&UNavigationPath::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UNavigationPath_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams), Z_Construct_UClass_UNavigationPath_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UNavigationPath()
{
	if (!Z_Registration_Info_UClass_UNavigationPath.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNavigationPath.OuterSingleton, Z_Construct_UClass_UNavigationPath_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UNavigationPath.OuterSingleton;
}
template<> NAVIGATIONSYSTEM_API UClass* StaticClass<UNavigationPath>()
{
	return UNavigationPath::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationPath);
UNavigationPath::~UNavigationPath() {}
// End Class UNavigationPath

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UNavigationPath, UNavigationPath::StaticClass, TEXT("UNavigationPath"), &Z_Registration_Info_UClass_UNavigationPath, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNavigationPath), 2025946428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_3537256696(TEXT("/Script/NavigationSystem"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavigationPath_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
