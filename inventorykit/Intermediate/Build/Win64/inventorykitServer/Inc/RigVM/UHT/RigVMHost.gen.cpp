// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVM/Public/RigVMHost.h"
#include "RigVM/Public/RigVMCore/RigVMDrawContainer.h"
#include "RigVM/Public/RigVMCore/RigVMExecuteContext.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMHost() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInterface_AssetUserData_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVM_NoRegister();
RIGVM_API UClass* Z_Construct_UClass_URigVMHost();
RIGVM_API UClass* Z_Construct_UClass_URigVMHost_NoRegister();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMDrawContainer();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext();
RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMRuntimeSettings();
UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

// Begin Class URigVMHost Function CanExecute
struct Z_Construct_UFunction_URigVMHost_CanExecute_Statics
{
	struct RigVMHost_eventCanExecute_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Is valid for execution */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Is valid for execution" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventCanExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventCanExecute_Parms), &Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_CanExecute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_CanExecute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "CanExecute", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::RigVMHost_eventCanExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_CanExecute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_CanExecute_Statics::RigVMHost_eventCanExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_CanExecute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_CanExecute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execCanExecute)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanExecute();
	P_NATIVE_END;
}
// End Class URigVMHost Function CanExecute

// Begin Class URigVMHost Function Execute
struct Z_Construct_UFunction_URigVMHost_Execute_Statics
{
	struct RigVMHost_eventExecute_Parms
	{
		FName InEventName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Execute */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Execute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventExecute_Parms, InEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEventName_MetaData), NewProp_InEventName_MetaData) };
void Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventExecute_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventExecute_Parms), &Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_InEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_Execute_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_Execute_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "Execute", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_Execute_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_Execute_Statics::RigVMHost_eventExecute_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_Execute_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_Execute_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_Execute_Statics::RigVMHost_eventExecute_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_Execute()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_Execute_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execExecute)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Execute(Z_Param_Out_InEventName);
	P_NATIVE_END;
}
// End Class URigVMHost Function Execute

// Begin Class URigVMHost Function ExecuteEvent
struct Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics
{
	struct RigVMHost_eventExecuteEvent_Parms
	{
		FName InEventName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Execute a user defined event */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Execute a user defined event" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventExecuteEvent_Parms, InEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEventName_MetaData), NewProp_InEventName_MetaData) };
void Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventExecuteEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventExecuteEvent_Parms), &Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_InEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "ExecuteEvent", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::RigVMHost_eventExecuteEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::RigVMHost_eventExecuteEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_ExecuteEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_ExecuteEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execExecuteEvent)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ExecuteEvent(Z_Param_Out_InEventName);
	P_NATIVE_END;
}
// End Class URigVMHost Function ExecuteEvent

// Begin Class URigVMHost Function FindRigVMHosts
struct Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics
{
	struct RigVMHost_eventFindRigVMHosts_Parms
	{
		UObject* Outer;
		TSubclassOf<URigVMHost> OptionalClass;
		TArray<URigVMHost*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OptionalClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventFindRigVMHosts_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_OptionalClass = { "OptionalClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventFindRigVMHosts_Parms, OptionalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_URigVMHost_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_URigVMHost_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventFindRigVMHosts_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_Outer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_OptionalClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "FindRigVMHosts", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::RigVMHost_eventFindRigVMHosts_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::RigVMHost_eventFindRigVMHosts_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_FindRigVMHosts()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_FindRigVMHosts_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execFindRigVMHosts)
{
	P_GET_OBJECT(UObject,Z_Param_Outer);
	P_GET_OBJECT(UClass,Z_Param_OptionalClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<URigVMHost*>*)Z_Param__Result=URigVMHost::FindRigVMHosts(Z_Param_Outer,Z_Param_OptionalClass);
	P_NATIVE_END;
}
// End Class URigVMHost Function FindRigVMHosts

// Begin Class URigVMHost Function GetAbsoluteTime
struct Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics
{
	struct RigVMHost_eventGetAbsoluteTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Gets the current absolute time */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Gets the current absolute time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetAbsoluteTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetAbsoluteTime", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::RigVMHost_eventGetAbsoluteTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::RigVMHost_eventGetAbsoluteTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetAbsoluteTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetAbsoluteTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetAbsoluteTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAbsoluteTime();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetAbsoluteTime

// Begin Class URigVMHost Function GetCurrentFramesPerSecond
struct Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics
{
	struct RigVMHost_eventGetCurrentFramesPerSecond_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the current frames per second (this may change over time) */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the current frames per second (this may change over time)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetCurrentFramesPerSecond_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetCurrentFramesPerSecond", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::RigVMHost_eventGetCurrentFramesPerSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::RigVMHost_eventGetCurrentFramesPerSecond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetCurrentFramesPerSecond)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetCurrentFramesPerSecond();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetCurrentFramesPerSecond

// Begin Class URigVMHost Function GetDeltaTime
struct Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics
{
	struct RigVMHost_eventGetDeltaTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Gets the current delta time */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Gets the current delta time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetDeltaTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetDeltaTime", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::RigVMHost_eventGetDeltaTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::RigVMHost_eventGetDeltaTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetDeltaTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetDeltaTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetDeltaTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeltaTime();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetDeltaTime

// Begin Class URigVMHost Function GetExtendedExecuteContext
struct Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics
{
	struct RigVMHost_eventGetExtendedExecuteContext_Parms
	{
		FRigVMExtendedExecuteContext ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function has been deprecated and it is no longer supported." },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetExtendedExecuteContext_Parms, ReturnValue), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(0, nullptr) }; // 1517476021
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetExtendedExecuteContext", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::RigVMHost_eventGetExtendedExecuteContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::RigVMHost_eventGetExtendedExecuteContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetExtendedExecuteContext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FRigVMExtendedExecuteContext*)Z_Param__Result=P_THIS->GetExtendedExecuteContext();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetExtendedExecuteContext

// Begin Class URigVMHost Function GetScriptAccessibleVariables
struct Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics
{
	struct RigVMHost_eventGetScriptAccessibleVariables_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the names of variables accessible in scripting */" },
		{ "DisplayName", "Get Variables" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the names of variables accessible in scripting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetScriptAccessibleVariables_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetScriptAccessibleVariables", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::RigVMHost_eventGetScriptAccessibleVariables_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::RigVMHost_eventGetScriptAccessibleVariables_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetScriptAccessibleVariables)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetScriptAccessibleVariables();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetScriptAccessibleVariables

// Begin Class URigVMHost Function GetSupportedEvents
struct Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics
{
	struct RigVMHost_eventGetSupportedEvents_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetSupportedEvents_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetSupportedEvents", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::RigVMHost_eventGetSupportedEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::RigVMHost_eventGetSupportedEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetSupportedEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetSupportedEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetSupportedEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetSupportedEvents();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetSupportedEvents

// Begin Class URigVMHost Function GetVariableAsString
struct Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics
{
	struct RigVMHost_eventGetVariableAsString_Parms
	{
		FName InVariableName;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the value of a given variable as a string */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the value of a given variable as a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetVariableAsString_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetVariableAsString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetVariableAsString", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::RigVMHost_eventGetVariableAsString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::RigVMHost_eventGetVariableAsString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetVariableAsString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetVariableAsString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetVariableAsString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetVariableAsString(Z_Param_Out_InVariableName);
	P_NATIVE_END;
}
// End Class URigVMHost Function GetVariableAsString

// Begin Class URigVMHost Function GetVariableType
struct Z_Construct_UFunction_URigVMHost_GetVariableType_Statics
{
	struct RigVMHost_eventGetVariableType_Parms
	{
		FName InVariableName;
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the type of a given variable */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the type of a given variable" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetVariableType_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetVariableType_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetVariableType", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::RigVMHost_eventGetVariableType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::RigVMHost_eventGetVariableType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetVariableType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetVariableType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetVariableType)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetVariableType(Z_Param_Out_InVariableName);
	P_NATIVE_END;
}
// End Class URigVMHost Function GetVariableType

// Begin Class URigVMHost Function GetVM
struct Z_Construct_UFunction_URigVMHost_GetVM_Statics
{
	struct RigVMHost_eventGetVM_Parms
	{
		URigVM* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URigVMHost_GetVM_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventGetVM_Parms, ReturnValue), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_GetVM_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_GetVM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "GetVM", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVM_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_GetVM_Statics::RigVMHost_eventGetVM_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_GetVM_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_GetVM_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_GetVM_Statics::RigVMHost_eventGetVM_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_GetVM()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_GetVM_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execGetVM)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(URigVM**)Z_Param__Result=P_THIS->GetVM();
	P_NATIVE_END;
}
// End Class URigVMHost Function GetVM

// Begin Class URigVMHost Function IsInitRequired
struct Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics
{
	struct RigVMHost_eventIsInitRequired_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns true if this host requires the VM memory to be initialized */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns true if this host requires the VM memory to be initialized" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventIsInitRequired_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventIsInitRequired_Parms), &Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "IsInitRequired", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::RigVMHost_eventIsInitRequired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::RigVMHost_eventIsInitRequired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_IsInitRequired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_IsInitRequired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execIsInitRequired)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitRequired();
	P_NATIVE_END;
}
// End Class URigVMHost Function IsInitRequired

// Begin Class URigVMHost Function RemoveRunOnceEvent
struct Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics
{
	struct RigVMHost_eventRemoveRunOnceEvent_Parms
	{
		FName InEventName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Removes an event running once */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Removes an event running once" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventRemoveRunOnceEvent_Parms, InEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEventName_MetaData), NewProp_InEventName_MetaData) };
void Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventRemoveRunOnceEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventRemoveRunOnceEvent_Parms), &Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_InEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "RemoveRunOnceEvent", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::RigVMHost_eventRemoveRunOnceEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::RigVMHost_eventRemoveRunOnceEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execRemoveRunOnceEvent)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveRunOnceEvent(Z_Param_Out_InEventName);
	P_NATIVE_END;
}
// End Class URigVMHost Function RemoveRunOnceEvent

// Begin Class URigVMHost Function RequestInit
struct Z_Construct_UFunction_URigVMHost_RequestInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Requests to perform an init during the next execution */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Requests to perform an init during the next execution" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_RequestInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "RequestInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_RequestInit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_URigVMHost_RequestInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_RequestInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execRequestInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestInit();
	P_NATIVE_END;
}
// End Class URigVMHost Function RequestInit

// Begin Class URigVMHost Function RequestRunOnceEvent
struct Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics
{
	struct RigVMHost_eventRequestRunOnceEvent_Parms
	{
		FName InEventName;
		int32 InEventIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Requests to run an event once */" },
		{ "CPP_Default_InEventIndex", "-1" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Requests to run an event once" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InEventIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventRequestRunOnceEvent_Parms, InEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEventName_MetaData), NewProp_InEventName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventIndex = { "InEventIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventRequestRunOnceEvent_Parms, InEventIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::NewProp_InEventIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "RequestRunOnceEvent", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::RigVMHost_eventRequestRunOnceEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::RigVMHost_eventRequestRunOnceEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execRequestRunOnceEvent)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
	P_GET_PROPERTY(FIntProperty,Z_Param_InEventIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestRunOnceEvent(Z_Param_Out_InEventName,Z_Param_InEventIndex);
	P_NATIVE_END;
}
// End Class URigVMHost Function RequestRunOnceEvent

// Begin Class URigVMHost Function SetAbsoluteAndDeltaTime
struct Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics
{
	struct RigVMHost_eventSetAbsoluteAndDeltaTime_Parms
	{
		float InAbsoluteTime;
		float InDeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current absolute and delta times */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current absolute and delta times" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAbsoluteTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InAbsoluteTime = { "InAbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetAbsoluteAndDeltaTime_Parms, InAbsoluteTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetAbsoluteAndDeltaTime_Parms, InDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InAbsoluteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::NewProp_InDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetAbsoluteAndDeltaTime", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::RigVMHost_eventSetAbsoluteAndDeltaTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::RigVMHost_eventSetAbsoluteAndDeltaTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execSetAbsoluteAndDeltaTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAbsoluteTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbsoluteAndDeltaTime(Z_Param_InAbsoluteTime,Z_Param_InDeltaTime);
	P_NATIVE_END;
}
// End Class URigVMHost Function SetAbsoluteAndDeltaTime

// Begin Class URigVMHost Function SetAbsoluteTime
struct Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics
{
	struct RigVMHost_eventSetAbsoluteTime_Parms
	{
		float InAbsoluteTime;
		bool InSetDeltaTimeZero;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current absolute time */" },
		{ "CPP_Default_InSetDeltaTimeZero", "false" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current absolute time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InAbsoluteTime;
	static void NewProp_InSetDeltaTimeZero_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InSetDeltaTimeZero;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InAbsoluteTime = { "InAbsoluteTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetAbsoluteTime_Parms, InAbsoluteTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero_SetBit(void* Obj)
{
	((RigVMHost_eventSetAbsoluteTime_Parms*)Obj)->InSetDeltaTimeZero = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero = { "InSetDeltaTimeZero", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventSetAbsoluteTime_Parms), &Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InAbsoluteTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::NewProp_InSetDeltaTimeZero,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetAbsoluteTime", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::RigVMHost_eventSetAbsoluteTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::RigVMHost_eventSetAbsoluteTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_SetAbsoluteTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetAbsoluteTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execSetAbsoluteTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InAbsoluteTime);
	P_GET_UBOOL(Z_Param_InSetDeltaTimeZero);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAbsoluteTime(Z_Param_InAbsoluteTime,Z_Param_InSetDeltaTimeZero);
	P_NATIVE_END;
}
// End Class URigVMHost Function SetAbsoluteTime

// Begin Class URigVMHost Function SetDeltaTime
struct Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics
{
	struct RigVMHost_eventSetDeltaTime_Parms
	{
		float InDeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current delta time */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current delta time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetDeltaTime_Parms, InDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::NewProp_InDeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetDeltaTime", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::RigVMHost_eventSetDeltaTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::RigVMHost_eventSetDeltaTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_SetDeltaTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetDeltaTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execSetDeltaTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InDeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeltaTime(Z_Param_InDeltaTime);
	P_NATIVE_END;
}
// End Class URigVMHost Function SetDeltaTime

// Begin Class URigVMHost Function SetFramesPerSecond
struct Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics
{
	struct RigVMHost_eventSetFramesPerSecond_Parms
	{
		float InFramesPerSecond;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Set the current fps */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Set the current fps" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InFramesPerSecond;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::NewProp_InFramesPerSecond = { "InFramesPerSecond", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetFramesPerSecond_Parms, InFramesPerSecond), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::NewProp_InFramesPerSecond,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetFramesPerSecond", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::RigVMHost_eventSetFramesPerSecond_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::RigVMHost_eventSetFramesPerSecond_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_SetFramesPerSecond()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetFramesPerSecond_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execSetFramesPerSecond)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InFramesPerSecond);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFramesPerSecond(Z_Param_InFramesPerSecond);
	P_NATIVE_END;
}
// End Class URigVMHost Function SetFramesPerSecond

// Begin Class URigVMHost Function SetVariableFromString
struct Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics
{
	struct RigVMHost_eventSetVariableFromString_Parms
	{
		FName InVariableName;
		FString InValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "Comment", "/** Returns the value of a given variable as a string */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Returns the value of a given variable as a string" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InVariableName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InVariableName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName = { "InVariableName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetVariableFromString_Parms, InVariableName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InVariableName_MetaData), NewProp_InVariableName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSetVariableFromString_Parms, InValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InValue_MetaData), NewProp_InValue_MetaData) };
void Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventSetVariableFromString_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventSetVariableFromString_Parms), &Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InVariableName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_InValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SetVariableFromString", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::RigVMHost_eventSetVariableFromString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::RigVMHost_eventSetVariableFromString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_SetVariableFromString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SetVariableFromString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execSetVariableFromString)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InVariableName);
	P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVariableFromString(Z_Param_Out_InVariableName,Z_Param_InValue);
	P_NATIVE_END;
}
// End Class URigVMHost Function SetVariableFromString

// Begin Class URigVMHost Function SupportsEvent
struct Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics
{
	struct RigVMHost_eventSupportsEvent_Parms
	{
		FName InEventName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RigVM" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InEventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_InEventName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName = { "InEventName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RigVMHost_eventSupportsEvent_Parms, InEventName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InEventName_MetaData), NewProp_InEventName_MetaData) };
void Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RigVMHost_eventSupportsEvent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RigVMHost_eventSupportsEvent_Parms), &Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_InEventName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URigVMHost, nullptr, "SupportsEvent", nullptr, nullptr, Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::RigVMHost_eventSupportsEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::RigVMHost_eventSupportsEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URigVMHost_SupportsEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URigVMHost_SupportsEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URigVMHost::execSupportsEvent)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InEventName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SupportsEvent(Z_Param_Out_InEventName);
	P_NATIVE_END;
}
// End Class URigVMHost Function SupportsEvent

// Begin Class URigVMHost
void URigVMHost::StaticRegisterNativesURigVMHost()
{
	UClass* Class = URigVMHost::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanExecute", &URigVMHost::execCanExecute },
		{ "Execute", &URigVMHost::execExecute },
		{ "ExecuteEvent", &URigVMHost::execExecuteEvent },
		{ "FindRigVMHosts", &URigVMHost::execFindRigVMHosts },
		{ "GetAbsoluteTime", &URigVMHost::execGetAbsoluteTime },
		{ "GetCurrentFramesPerSecond", &URigVMHost::execGetCurrentFramesPerSecond },
		{ "GetDeltaTime", &URigVMHost::execGetDeltaTime },
		{ "GetExtendedExecuteContext", &URigVMHost::execGetExtendedExecuteContext },
		{ "GetScriptAccessibleVariables", &URigVMHost::execGetScriptAccessibleVariables },
		{ "GetSupportedEvents", &URigVMHost::execGetSupportedEvents },
		{ "GetVariableAsString", &URigVMHost::execGetVariableAsString },
		{ "GetVariableType", &URigVMHost::execGetVariableType },
		{ "GetVM", &URigVMHost::execGetVM },
		{ "IsInitRequired", &URigVMHost::execIsInitRequired },
		{ "RemoveRunOnceEvent", &URigVMHost::execRemoveRunOnceEvent },
		{ "RequestInit", &URigVMHost::execRequestInit },
		{ "RequestRunOnceEvent", &URigVMHost::execRequestRunOnceEvent },
		{ "SetAbsoluteAndDeltaTime", &URigVMHost::execSetAbsoluteAndDeltaTime },
		{ "SetAbsoluteTime", &URigVMHost::execSetAbsoluteTime },
		{ "SetDeltaTime", &URigVMHost::execSetDeltaTime },
		{ "SetFramesPerSecond", &URigVMHost::execSetFramesPerSecond },
		{ "SetVariableFromString", &URigVMHost::execSetVariableFromString },
		{ "SupportsEvent", &URigVMHost::execSupportsEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URigVMHost);
UClass* Z_Construct_UClass_URigVMHost_NoRegister()
{
	return URigVMHost::StaticClass();
}
struct Z_Construct_UClass_URigVMHost_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "// set this to something larger than 0 to profile N runs\n" },
		{ "IncludePath", "RigVMHost.h" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "set this to something larger than 0 to profile N runs" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VMRuntimeSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VM_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedStructGuidToPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedEnumToPathName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UserDefinedTypesInUse_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExtendedExecuteContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawContainer_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventQueue_MetaData[] = {
		{ "Comment", "/** The event name used during an update */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "The event name used during an update" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_Inner_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserData_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserDataEditorOnly_Inner_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssetUserDataEditorOnly_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Array of user data stored with the asset */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "Array of user data stored with the asset" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VMSnapshotBeforeExecution_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SnapshotContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInDebugMode_MetaData[] = {
		{ "Comment", "/** The current execution mode */" },
		{ "ModuleRelativePath", "Public/RigVMHost.h" },
		{ "ToolTip", "The current execution mode" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VMRuntimeSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VM;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedStructGuidToPathName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedStructGuidToPathName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UserDefinedStructGuidToPathName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserDefinedEnumToPathName_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_UserDefinedEnumToPathName_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_UserDefinedEnumToPathName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UserDefinedTypesInUse_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_UserDefinedTypesInUse;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ExtendedExecuteContext;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DrawContainer;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EventQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserData;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetUserDataEditorOnly_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AssetUserDataEditorOnly;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VMSnapshotBeforeExecution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SnapshotContext;
	static void NewProp_bIsInDebugMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInDebugMode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URigVMHost_CanExecute, "CanExecute" }, // 1898895635
		{ &Z_Construct_UFunction_URigVMHost_Execute, "Execute" }, // 3967296260
		{ &Z_Construct_UFunction_URigVMHost_ExecuteEvent, "ExecuteEvent" }, // 3316107818
		{ &Z_Construct_UFunction_URigVMHost_FindRigVMHosts, "FindRigVMHosts" }, // 23970127
		{ &Z_Construct_UFunction_URigVMHost_GetAbsoluteTime, "GetAbsoluteTime" }, // 857064162
		{ &Z_Construct_UFunction_URigVMHost_GetCurrentFramesPerSecond, "GetCurrentFramesPerSecond" }, // 406431354
		{ &Z_Construct_UFunction_URigVMHost_GetDeltaTime, "GetDeltaTime" }, // 4074227704
		{ &Z_Construct_UFunction_URigVMHost_GetExtendedExecuteContext, "GetExtendedExecuteContext" }, // 123573526
		{ &Z_Construct_UFunction_URigVMHost_GetScriptAccessibleVariables, "GetScriptAccessibleVariables" }, // 3039532475
		{ &Z_Construct_UFunction_URigVMHost_GetSupportedEvents, "GetSupportedEvents" }, // 200052984
		{ &Z_Construct_UFunction_URigVMHost_GetVariableAsString, "GetVariableAsString" }, // 812591330
		{ &Z_Construct_UFunction_URigVMHost_GetVariableType, "GetVariableType" }, // 198081114
		{ &Z_Construct_UFunction_URigVMHost_GetVM, "GetVM" }, // 216641810
		{ &Z_Construct_UFunction_URigVMHost_IsInitRequired, "IsInitRequired" }, // 1666669850
		{ &Z_Construct_UFunction_URigVMHost_RemoveRunOnceEvent, "RemoveRunOnceEvent" }, // 1576722558
		{ &Z_Construct_UFunction_URigVMHost_RequestInit, "RequestInit" }, // 911400770
		{ &Z_Construct_UFunction_URigVMHost_RequestRunOnceEvent, "RequestRunOnceEvent" }, // 2248523772
		{ &Z_Construct_UFunction_URigVMHost_SetAbsoluteAndDeltaTime, "SetAbsoluteAndDeltaTime" }, // 3286582792
		{ &Z_Construct_UFunction_URigVMHost_SetAbsoluteTime, "SetAbsoluteTime" }, // 3288337640
		{ &Z_Construct_UFunction_URigVMHost_SetDeltaTime, "SetDeltaTime" }, // 2157968619
		{ &Z_Construct_UFunction_URigVMHost_SetFramesPerSecond, "SetFramesPerSecond" }, // 771972514
		{ &Z_Construct_UFunction_URigVMHost_SetVariableFromString, "SetVariableFromString" }, // 4134468754
		{ &Z_Construct_UFunction_URigVMHost_SupportsEvent, "SupportsEvent" }, // 862907944
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URigVMHost>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings = { "VMRuntimeSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, VMRuntimeSettings), Z_Construct_UScriptStruct_FRigVMRuntimeSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VMRuntimeSettings_MetaData), NewProp_VMRuntimeSettings_MetaData) }; // 1384363951
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_VM = { "VM", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, VM), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VM_MetaData), NewProp_VM_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedStructGuidToPathName_ValueProp = { "UserDefinedStructGuidToPathName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedStructGuidToPathName_Key_KeyProp = { "UserDefinedStructGuidToPathName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedStructGuidToPathName = { "UserDefinedStructGuidToPathName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, UserDefinedStructGuidToPathName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedStructGuidToPathName_MetaData), NewProp_UserDefinedStructGuidToPathName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedEnumToPathName_ValueProp = { "UserDefinedEnumToPathName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedEnumToPathName_Key_KeyProp = { "UserDefinedEnumToPathName_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedEnumToPathName = { "UserDefinedEnumToPathName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, UserDefinedEnumToPathName), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedEnumToPathName_MetaData), NewProp_UserDefinedEnumToPathName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedTypesInUse_ElementProp = { "UserDefinedTypesInUse", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedTypesInUse = { "UserDefinedTypesInUse", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, UserDefinedTypesInUse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UserDefinedTypesInUse_MetaData), NewProp_UserDefinedTypesInUse_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_ExtendedExecuteContext = { "ExtendedExecuteContext", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, ExtendedExecuteContext_DEPRECATED), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExtendedExecuteContext_MetaData), NewProp_ExtendedExecuteContext_MetaData) }; // 1517476021
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer = { "DrawContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, DrawContainer), Z_Construct_UScriptStruct_FRigVMDrawContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawContainer_MetaData), NewProp_DrawContainer_MetaData) }; // 3941096795
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_Inner = { "EventQueue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue = { "EventQueue", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, EventQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventQueue_MetaData), NewProp_EventQueue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner = { "AssetUserData", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_Inner_MetaData), NewProp_AssetUserData_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData = { "AssetUserData", nullptr, (EPropertyFlags)0x01240c8000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, AssetUserData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserData_MetaData), NewProp_AssetUserData_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserDataEditorOnly_Inner = { "AssetUserDataEditorOnly", nullptr, (EPropertyFlags)0x0106000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAssetUserData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserDataEditorOnly_Inner_MetaData), NewProp_AssetUserDataEditorOnly_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserDataEditorOnly = { "AssetUserDataEditorOnly", nullptr, (EPropertyFlags)0x01240c8800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, AssetUserDataEditorOnly), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssetUserDataEditorOnly_MetaData), NewProp_AssetUserDataEditorOnly_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution = { "VMSnapshotBeforeExecution", nullptr, (EPropertyFlags)0x0144000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, VMSnapshotBeforeExecution), Z_Construct_UClass_URigVM_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VMSnapshotBeforeExecution_MetaData), NewProp_VMSnapshotBeforeExecution_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_SnapshotContext = { "SnapshotContext", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URigVMHost, SnapshotContext), Z_Construct_UScriptStruct_FRigVMExtendedExecuteContext, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SnapshotContext_MetaData), NewProp_SnapshotContext_MetaData) }; // 1517476021
void Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_SetBit(void* Obj)
{
	((URigVMHost*)Obj)->bIsInDebugMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode = { "bIsInDebugMode", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URigVMHost), &Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInDebugMode_MetaData), NewProp_bIsInDebugMode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URigVMHost_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_VMRuntimeSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_VM,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedStructGuidToPathName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedStructGuidToPathName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedStructGuidToPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedEnumToPathName_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedEnumToPathName_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedEnumToPathName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedTypesInUse_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_UserDefinedTypesInUse,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_ExtendedExecuteContext,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_DrawContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_EventQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserData,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserDataEditorOnly_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_AssetUserDataEditorOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_VMSnapshotBeforeExecution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_SnapshotContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URigVMHost_Statics::NewProp_bIsInDebugMode,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URigVMHost_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URigVMHost_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UInterface_AssetUserData_NoRegister, (int32)VTABLE_OFFSET(URigVMHost, IInterface_AssetUserData), false },  // 505316468
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_URigVMHost_Statics::ClassParams = {
	&URigVMHost::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_URigVMHost_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URigVMHost_Statics::Class_MetaDataParams), Z_Construct_UClass_URigVMHost_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URigVMHost()
{
	if (!Z_Registration_Info_UClass_URigVMHost.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URigVMHost.OuterSingleton, Z_Construct_UClass_URigVMHost_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URigVMHost.OuterSingleton;
}
template<> RIGVM_API UClass* StaticClass<URigVMHost>()
{
	return URigVMHost::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URigVMHost);
URigVMHost::~URigVMHost() {}
IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(URigVMHost)
// End Class URigVMHost

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URigVMHost, URigVMHost::StaticClass, TEXT("URigVMHost"), &Z_Registration_Info_UClass_URigVMHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URigVMHost), 2359636735U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_1035188389(TEXT("/Script/RigVM"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_RigVM_Source_RigVM_Public_RigVMHost_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
