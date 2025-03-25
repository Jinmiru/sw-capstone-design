// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackboardComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardKeyType_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBlackboardComponent Function ClearValue
struct Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics
{
	struct BlackboardComponent_eventClearValue_Parms
	{
		FName KeyName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventClearValue_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::NewProp_KeyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "ClearValue", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::BlackboardComponent_eventClearValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::BlackboardComponent_eventClearValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_ClearValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_ClearValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execClearValue)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearValue(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function ClearValue

// Begin Class UBlackboardComponent Function GetLocationFromEntry
struct Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics
{
	struct BlackboardComponent_eventGetLocationFromEntry_Parms
	{
		FName KeyName;
		FVector ResultLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "Comment", "/** return false if call failed (most probably no such entry in BB) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ResultLocation = { "ResultLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetLocationFromEntry_Parms, ResultLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlackboardComponent_eventGetLocationFromEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackboardComponent_eventGetLocationFromEntry_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ResultLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetLocationFromEntry", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::BlackboardComponent_eventGetLocationFromEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::BlackboardComponent_eventGetLocationFromEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetLocationFromEntry)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_ResultLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetLocationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultLocation);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetLocationFromEntry

// Begin Class UBlackboardComponent Function GetRotationFromEntry
struct Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics
{
	struct BlackboardComponent_eventGetRotationFromEntry_Parms
	{
		FName KeyName;
		FRotator ResultRotation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "Comment", "/** return false if call failed (most probably no such entry in BB) */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "return false if call failed (most probably no such entry in BB)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultRotation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ResultRotation = { "ResultRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetRotationFromEntry_Parms, ResultRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlackboardComponent_eventGetRotationFromEntry_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackboardComponent_eventGetRotationFromEntry_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ResultRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetRotationFromEntry", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::BlackboardComponent_eventGetRotationFromEntry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::BlackboardComponent_eventGetRotationFromEntry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetRotationFromEntry)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_ResultRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetRotationFromEntry(Z_Param_Out_KeyName,Z_Param_Out_ResultRotation);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetRotationFromEntry

// Begin Class UBlackboardComponent Function GetValueAsBool
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics
{
	struct BlackboardComponent_eventGetValueAsBool_Parms
	{
		FName KeyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsBool_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
void Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlackboardComponent_eventGetValueAsBool_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackboardComponent_eventGetValueAsBool_Parms), &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::BlackboardComponent_eventGetValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::BlackboardComponent_eventGetValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetValueAsBool(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsBool

// Begin Class UBlackboardComponent Function GetValueAsClass
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics
{
	struct BlackboardComponent_eventGetValueAsClass_Parms
	{
		FName KeyName;
		UClass* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsClass", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::BlackboardComponent_eventGetValueAsClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::BlackboardComponent_eventGetValueAsClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsClass)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UClass**)Z_Param__Result=P_THIS->GetValueAsClass(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsClass

// Begin Class UBlackboardComponent Function GetValueAsEnum
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics
{
	struct BlackboardComponent_eventGetValueAsEnum_Parms
	{
		FName KeyName;
		uint8 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsEnum_Parms, ReturnValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsEnum", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::BlackboardComponent_eventGetValueAsEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::BlackboardComponent_eventGetValueAsEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsEnum)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(uint8*)Z_Param__Result=P_THIS->GetValueAsEnum(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsEnum

// Begin Class UBlackboardComponent Function GetValueAsFloat
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics
{
	struct BlackboardComponent_eventGetValueAsFloat_Parms
	{
		FName KeyName;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsFloat_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::BlackboardComponent_eventGetValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::BlackboardComponent_eventGetValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetValueAsFloat(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsFloat

// Begin Class UBlackboardComponent Function GetValueAsInt
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics
{
	struct BlackboardComponent_eventGetValueAsInt_Parms
	{
		FName KeyName;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsInt_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::BlackboardComponent_eventGetValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::BlackboardComponent_eventGetValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsInt)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetValueAsInt(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsInt

// Begin Class UBlackboardComponent Function GetValueAsName
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics
{
	struct BlackboardComponent_eventGetValueAsName_Parms
	{
		FName KeyName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsName", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::BlackboardComponent_eventGetValueAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::BlackboardComponent_eventGetValueAsName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetValueAsName(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsName

// Begin Class UBlackboardComponent Function GetValueAsObject
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics
{
	struct BlackboardComponent_eventGetValueAsObject_Parms
	{
		FName KeyName;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsObject", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::BlackboardComponent_eventGetValueAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::BlackboardComponent_eventGetValueAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsObject)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetValueAsObject(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsObject

// Begin Class UBlackboardComponent Function GetValueAsRotator
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics
{
	struct BlackboardComponent_eventGetValueAsRotator_Parms
	{
		FName KeyName;
		FRotator ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsRotator", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::BlackboardComponent_eventGetValueAsRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::BlackboardComponent_eventGetValueAsRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRotator*)Z_Param__Result=P_THIS->GetValueAsRotator(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsRotator

// Begin Class UBlackboardComponent Function GetValueAsString
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics
{
	struct BlackboardComponent_eventGetValueAsString_Parms
	{
		FName KeyName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsString", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::BlackboardComponent_eventGetValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::BlackboardComponent_eventGetValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetValueAsString(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsString

// Begin Class UBlackboardComponent Function GetValueAsVector
struct Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics
{
	struct BlackboardComponent_eventGetValueAsVector_Parms
	{
		FName KeyName;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventGetValueAsVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "GetValueAsVector", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::BlackboardComponent_eventGetValueAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::BlackboardComponent_eventGetValueAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execGetValueAsVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetValueAsVector(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function GetValueAsVector

// Begin Class UBlackboardComponent Function IsVectorValueSet
struct Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics
{
	struct BlackboardComponent_eventIsVectorValueSet_Parms
	{
		FName KeyName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "Tooltip", "If the vector value has been set (and not cleared), this function returns true (indicating that the value should be valid).  If it's not set, the vector value is invalid and this function will return false.  (Also returns false if the key specified does not hold a vector.)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventIsVectorValueSet_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
void Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BlackboardComponent_eventIsVectorValueSet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackboardComponent_eventIsVectorValueSet_Parms), &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "IsVectorValueSet", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::BlackboardComponent_eventIsVectorValueSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::BlackboardComponent_eventIsVectorValueSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execIsVectorValueSet)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVectorValueSet(Z_Param_Out_KeyName);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function IsVectorValueSet

// Begin Class UBlackboardComponent Function SetValueAsBool
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics
{
	struct BlackboardComponent_eventSetValueAsBool_Parms
	{
		FName KeyName;
		bool BoolValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static void NewProp_BoolValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsBool_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
void Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue_SetBit(void* Obj)
{
	((BlackboardComponent_eventSetValueAsBool_Parms*)Obj)->BoolValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackboardComponent_eventSetValueAsBool_Parms), &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::NewProp_BoolValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsBool", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::BlackboardComponent_eventSetValueAsBool_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::BlackboardComponent_eventSetValueAsBool_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsBool)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_UBOOL(Z_Param_BoolValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsBool(Z_Param_Out_KeyName,Z_Param_BoolValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsBool

// Begin Class UBlackboardComponent Function SetValueAsClass
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics
{
	struct BlackboardComponent_eventSetValueAsClass_Parms
	{
		FName KeyName;
		UClass* ClassValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_ClassValue = { "ClassValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsClass_Parms, ClassValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::NewProp_ClassValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsClass", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::BlackboardComponent_eventSetValueAsClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::BlackboardComponent_eventSetValueAsClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsClass)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_OBJECT(UClass,Z_Param_ClassValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsClass(Z_Param_Out_KeyName,Z_Param_ClassValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsClass

// Begin Class UBlackboardComponent Function SetValueAsEnum
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics
{
	struct BlackboardComponent_eventSetValueAsEnum_Parms
	{
		FName KeyName;
		uint8 EnumValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EnumValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_EnumValue = { "EnumValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsEnum_Parms, EnumValue), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::NewProp_EnumValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsEnum", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::BlackboardComponent_eventSetValueAsEnum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::BlackboardComponent_eventSetValueAsEnum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsEnum)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_PROPERTY(FByteProperty,Z_Param_EnumValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsEnum(Z_Param_Out_KeyName,Z_Param_EnumValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsEnum

// Begin Class UBlackboardComponent Function SetValueAsFloat
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics
{
	struct BlackboardComponent_eventSetValueAsFloat_Parms
	{
		FName KeyName;
		float FloatValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsFloat_Parms, FloatValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::NewProp_FloatValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsFloat", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::BlackboardComponent_eventSetValueAsFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::BlackboardComponent_eventSetValueAsFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsFloat)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FloatValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsFloat(Z_Param_Out_KeyName,Z_Param_FloatValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsFloat

// Begin Class UBlackboardComponent Function SetValueAsInt
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics
{
	struct BlackboardComponent_eventSetValueAsInt_Parms
	{
		FName KeyName;
		int32 IntValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_IntValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_IntValue = { "IntValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsInt_Parms, IntValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::NewProp_IntValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsInt", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::BlackboardComponent_eventSetValueAsInt_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::BlackboardComponent_eventSetValueAsInt_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsInt)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_PROPERTY(FIntProperty,Z_Param_IntValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsInt(Z_Param_Out_KeyName,Z_Param_IntValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsInt

// Begin Class UBlackboardComponent Function SetValueAsName
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics
{
	struct BlackboardComponent_eventSetValueAsName_Parms
	{
		FName KeyName;
		FName NameValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_NameValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_NameValue = { "NameValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsName_Parms, NameValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::NewProp_NameValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsName", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::BlackboardComponent_eventSetValueAsName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::BlackboardComponent_eventSetValueAsName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_PROPERTY(FNameProperty,Z_Param_NameValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsName(Z_Param_Out_KeyName,Z_Param_NameValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsName

// Begin Class UBlackboardComponent Function SetValueAsObject
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics
{
	struct BlackboardComponent_eventSetValueAsObject_Parms
	{
		FName KeyName;
		UObject* ObjectValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_ObjectValue = { "ObjectValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsObject_Parms, ObjectValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::NewProp_ObjectValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsObject", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::BlackboardComponent_eventSetValueAsObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::BlackboardComponent_eventSetValueAsObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsObject)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_OBJECT(UObject,Z_Param_ObjectValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsObject(Z_Param_Out_KeyName,Z_Param_ObjectValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsObject

// Begin Class UBlackboardComponent Function SetValueAsRotator
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics
{
	struct BlackboardComponent_eventSetValueAsRotator_Parms
	{
		FName KeyName;
		FRotator VectorValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsRotator_Parms, VectorValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::NewProp_VectorValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsRotator", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::BlackboardComponent_eventSetValueAsRotator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::BlackboardComponent_eventSetValueAsRotator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsRotator)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_STRUCT(FRotator,Z_Param_VectorValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsRotator(Z_Param_Out_KeyName,Z_Param_VectorValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsRotator

// Begin Class UBlackboardComponent Function SetValueAsString
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics
{
	struct BlackboardComponent_eventSetValueAsString_Parms
	{
		FName KeyName;
		FString StringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsString_Parms, StringValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::NewProp_StringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsString", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::BlackboardComponent_eventSetValueAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::BlackboardComponent_eventSetValueAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_PROPERTY(FStrProperty,Z_Param_StringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsString(Z_Param_Out_KeyName,Z_Param_StringValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsString

// Begin Class UBlackboardComponent Function SetValueAsVector
struct Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics
{
	struct BlackboardComponent_eventSetValueAsVector_Parms
	{
		FName KeyName;
		FVector VectorValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|Blackboard" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, KeyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyName_MetaData), NewProp_KeyName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackboardComponent_eventSetValueAsVector_Parms, VectorValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_KeyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::NewProp_VectorValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackboardComponent, nullptr, "SetValueAsVector", nullptr, nullptr, Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::BlackboardComponent_eventSetValueAsVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::BlackboardComponent_eventSetValueAsVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackboardComponent::execSetValueAsVector)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
	P_GET_STRUCT(FVector,Z_Param_VectorValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetValueAsVector(Z_Param_Out_KeyName,Z_Param_VectorValue);
	P_NATIVE_END;
}
// End Class UBlackboardComponent Function SetValueAsVector

// Begin Class UBlackboardComponent
void UBlackboardComponent::StaticRegisterNativesUBlackboardComponent()
{
	UClass* Class = UBlackboardComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearValue", &UBlackboardComponent::execClearValue },
		{ "GetLocationFromEntry", &UBlackboardComponent::execGetLocationFromEntry },
		{ "GetRotationFromEntry", &UBlackboardComponent::execGetRotationFromEntry },
		{ "GetValueAsBool", &UBlackboardComponent::execGetValueAsBool },
		{ "GetValueAsClass", &UBlackboardComponent::execGetValueAsClass },
		{ "GetValueAsEnum", &UBlackboardComponent::execGetValueAsEnum },
		{ "GetValueAsFloat", &UBlackboardComponent::execGetValueAsFloat },
		{ "GetValueAsInt", &UBlackboardComponent::execGetValueAsInt },
		{ "GetValueAsName", &UBlackboardComponent::execGetValueAsName },
		{ "GetValueAsObject", &UBlackboardComponent::execGetValueAsObject },
		{ "GetValueAsRotator", &UBlackboardComponent::execGetValueAsRotator },
		{ "GetValueAsString", &UBlackboardComponent::execGetValueAsString },
		{ "GetValueAsVector", &UBlackboardComponent::execGetValueAsVector },
		{ "IsVectorValueSet", &UBlackboardComponent::execIsVectorValueSet },
		{ "SetValueAsBool", &UBlackboardComponent::execSetValueAsBool },
		{ "SetValueAsClass", &UBlackboardComponent::execSetValueAsClass },
		{ "SetValueAsEnum", &UBlackboardComponent::execSetValueAsEnum },
		{ "SetValueAsFloat", &UBlackboardComponent::execSetValueAsFloat },
		{ "SetValueAsInt", &UBlackboardComponent::execSetValueAsInt },
		{ "SetValueAsName", &UBlackboardComponent::execSetValueAsName },
		{ "SetValueAsObject", &UBlackboardComponent::execSetValueAsObject },
		{ "SetValueAsRotator", &UBlackboardComponent::execSetValueAsRotator },
		{ "SetValueAsString", &UBlackboardComponent::execSetValueAsString },
		{ "SetValueAsVector", &UBlackboardComponent::execSetValueAsVector },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackboardComponent);
UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister()
{
	return UBlackboardComponent::StaticClass();
}
struct Z_Construct_UClass_UBlackboardComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BehaviorTree/BlackboardComponent.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[] = {
		{ "Comment", "/** cached behavior tree component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "cached behavior tree component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBlackboardAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** data asset defining entries. Will be used as part of InitializeComponent \n\x09 *\x09""call provided BlackboardAsset hasn't been already set (via a InitializeBlackboard \n\x09 *\x09""call). */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "data asset defining entries. Will be used as part of InitializeComponent\n    call provided BlackboardAsset hasn't been already set (via a InitializeBlackboard\n    call)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardAsset_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KeyInstances_MetaData[] = {
		{ "Comment", "/** instanced keys with custom data allocations */" },
		{ "ModuleRelativePath", "Classes/BehaviorTree/BlackboardComponent.h" },
		{ "ToolTip", "instanced keys with custom data allocations" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrainComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBlackboardAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyInstances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyInstances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackboardComponent_ClearValue, "ClearValue" }, // 2459300051
		{ &Z_Construct_UFunction_UBlackboardComponent_GetLocationFromEntry, "GetLocationFromEntry" }, // 3642362706
		{ &Z_Construct_UFunction_UBlackboardComponent_GetRotationFromEntry, "GetRotationFromEntry" }, // 3767307702
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsBool, "GetValueAsBool" }, // 2405927875
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsClass, "GetValueAsClass" }, // 3302300971
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsEnum, "GetValueAsEnum" }, // 107275450
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsFloat, "GetValueAsFloat" }, // 3788830356
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsInt, "GetValueAsInt" }, // 1357230235
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsName, "GetValueAsName" }, // 2090491663
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsObject, "GetValueAsObject" }, // 2873895591
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsRotator, "GetValueAsRotator" }, // 3210249355
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsString, "GetValueAsString" }, // 297568379
		{ &Z_Construct_UFunction_UBlackboardComponent_GetValueAsVector, "GetValueAsVector" }, // 38868464
		{ &Z_Construct_UFunction_UBlackboardComponent_IsVectorValueSet, "IsVectorValueSet" }, // 3734588174
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsBool, "SetValueAsBool" }, // 1496910505
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsClass, "SetValueAsClass" }, // 2062881207
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsEnum, "SetValueAsEnum" }, // 1086009743
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsFloat, "SetValueAsFloat" }, // 387403726
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsInt, "SetValueAsInt" }, // 791040198
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsName, "SetValueAsName" }, // 4077311687
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsObject, "SetValueAsObject" }, // 301985003
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsRotator, "SetValueAsRotator" }, // 91062068
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsString, "SetValueAsString" }, // 893361809
		{ &Z_Construct_UFunction_UBlackboardComponent_SetValueAsVector, "SetValueAsVector" }, // 2853619018
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackboardComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp = { "BrainComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardComponent, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrainComp_MetaData), NewProp_BrainComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset = { "DefaultBlackboardAsset", nullptr, (EPropertyFlags)0x0124080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardComponent, DefaultBlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBlackboardAsset_MetaData), NewProp_DefaultBlackboardAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardComponent, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardAsset_MetaData), NewProp_BlackboardAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_Inner = { "KeyInstances", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UBlackboardKeyType_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances = { "KeyInstances", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackboardComponent, KeyInstances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KeyInstances_MetaData), NewProp_KeyInstances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BrainComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_DefaultBlackboardAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_BlackboardAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackboardComponent_Statics::NewProp_KeyInstances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlackboardComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackboardComponent_Statics::ClassParams = {
	&UBlackboardComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackboardComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackboardComponent()
{
	if (!Z_Registration_Info_UClass_UBlackboardComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackboardComponent.OuterSingleton, Z_Construct_UClass_UBlackboardComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackboardComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBlackboardComponent>()
{
	return UBlackboardComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackboardComponent);
UBlackboardComponent::~UBlackboardComponent() {}
// End Class UBlackboardComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackboardComponent, UBlackboardComponent::StaticClass, TEXT("UBlackboardComponent"), &Z_Registration_Info_UClass_UBlackboardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackboardComponent), 93177062U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_944462660(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BehaviorTree_BlackboardComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
