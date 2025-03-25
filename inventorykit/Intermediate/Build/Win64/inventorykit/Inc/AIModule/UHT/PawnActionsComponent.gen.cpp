// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnActionsComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionAbortState();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FPawnActionEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnActionEvent;
class UScriptStruct* FPawnActionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnActionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnActionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_PawnActionEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FPawnActionEvent>()
{
	return FPawnActionEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPawnActionEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0114000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnActionEvent, Action_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Action_MetaData), NewProp_Action_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnActionEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"PawnActionEvent",
	Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::PropPointers),
	sizeof(FPawnActionEvent),
	alignof(FPawnActionEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPawnActionEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPawnActionEvent()
{
	if (!Z_Registration_Info_UScriptStruct_PawnActionEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnActionEvent.InnerSingleton, Z_Construct_UScriptStruct_FPawnActionEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PawnActionEvent.InnerSingleton;
}
// End ScriptStruct FPawnActionEvent

// Begin ScriptStruct FPawnActionStack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PawnActionStack;
class UScriptStruct* FPawnActionStack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PawnActionStack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PawnActionStack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPawnActionStack, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("PawnActionStack"));
	}
	return Z_Registration_Info_UScriptStruct_PawnActionStack.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FPawnActionStack>()
{
	return FPawnActionStack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPawnActionStack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TopAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPawnActionStack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction = { "TopAction", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPawnActionStack, TopAction_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopAction_MetaData), NewProp_TopAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewProp_TopAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPawnActionStack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"PawnActionStack",
	Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::PropPointers),
	sizeof(FPawnActionStack),
	alignof(FPawnActionStack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPawnActionStack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPawnActionStack()
{
	if (!Z_Registration_Info_UScriptStruct_PawnActionStack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PawnActionStack.InnerSingleton, Z_Construct_UScriptStruct_FPawnActionStack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PawnActionStack.InnerSingleton;
}
// End ScriptStruct FPawnActionStack

// Begin Class UDEPRECATED_PawnActionsComponent Function K2_AbortAction
struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics
{
	struct PawnActionsComponent_eventK2_AbortAction_Parms
	{
		UDEPRECATED_PawnAction* ActionToAbort;
		TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** Aborts given action instance */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "AbortAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "AbortAction" },
		{ "ToolTip", "Aborts given action instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ActionToAbort = { "ActionToAbort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ActionToAbort), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_AbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(0, nullptr) }; // 1275188045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ActionToAbort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_AbortAction", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PawnActionsComponent_eventK2_AbortAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::PawnActionsComponent_eventK2_AbortAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_AbortAction)
{
	P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_ActionToAbort);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPawnActionAbortState::Type>*)Z_Param__Result=P_THIS->K2_AbortAction(Z_Param_ActionToAbort);
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnActionsComponent Function K2_AbortAction

// Begin Class UDEPRECATED_PawnActionsComponent Function K2_ForceAbortAction
struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics
{
	struct PawnActionsComponent_eventK2_ForceAbortAction_Parms
	{
		UDEPRECATED_PawnAction* ActionToAbort;
		TEnumAsByte<EPawnActionAbortState::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** Aborts given action instance */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "ForceAbortAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "ForceAbortAction" },
		{ "ToolTip", "Aborts given action instance" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionToAbort;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ActionToAbort = { "ActionToAbort", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ActionToAbort), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_ForceAbortAction_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPawnActionAbortState, METADATA_PARAMS(0, nullptr) }; // 1275188045
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ActionToAbort,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_ForceAbortAction", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PawnActionsComponent_eventK2_ForceAbortAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::PawnActionsComponent_eventK2_ForceAbortAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_ForceAbortAction)
{
	P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_ActionToAbort);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPawnActionAbortState::Type>*)Z_Param__Result=P_THIS->K2_ForceAbortAction(Z_Param_ActionToAbort);
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnActionsComponent Function K2_ForceAbortAction

// Begin Class UDEPRECATED_PawnActionsComponent Function K2_PerformAction
struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics
{
	struct PawnActionsComponent_eventK2_PerformAction_Parms
	{
		APawn* Pawn;
		UDEPRECATED_PawnAction* Action;
		TEnumAsByte<EAIRequestPriority::Type> Priority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "Comment", "//----------------------------------------------------------------------//\n// blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "CPP_Default_Priority", "HardScript" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "PerformAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "PerformAction" },
		{ "ToolTip", "blueprint interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Action;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Action), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PerformAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(0, nullptr) }; // 3621236737
void Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PawnActionsComponent_eventK2_PerformAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnActionsComponent_eventK2_PerformAction_Parms), &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_PerformAction", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PawnActionsComponent_eventK2_PerformAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::PawnActionsComponent_eventK2_PerformAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_PerformAction)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_Action);
	P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UDEPRECATED_PawnActionsComponent::K2_PerformAction(Z_Param_Pawn,Z_Param_Action,EAIRequestPriority::Type(Z_Param_Priority));
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnActionsComponent Function K2_PerformAction

// Begin Class UDEPRECATED_PawnActionsComponent Function K2_PushAction
struct Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics
{
	struct PawnActionsComponent_eventK2_PushAction_Parms
	{
		UDEPRECATED_PawnAction* NewAction;
		TEnumAsByte<EAIRequestPriority::Type> Priority;
		UObject* Instigator;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PawnAction" },
		{ "CPP_Default_Instigator", "None" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "DisplayName", "PushAction_DEPRECATED" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
		{ "ScriptName", "PushAction" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAction;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_NewAction = { "NewAction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, NewAction), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Priority), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(0, nullptr) }; // 3621236737
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnActionsComponent_eventK2_PushAction_Parms, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PawnActionsComponent_eventK2_PushAction_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnActionsComponent_eventK2_PushAction_Parms), &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_NewAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, nullptr, "K2_PushAction", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PawnActionsComponent_eventK2_PushAction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::PawnActionsComponent_eventK2_PushAction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnActionsComponent::execK2_PushAction)
{
	P_GET_OBJECT(UDEPRECATED_PawnAction,Z_Param_NewAction);
	P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
	P_GET_OBJECT(UObject,Z_Param_Instigator);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->K2_PushAction(Z_Param_NewAction,EAIRequestPriority::Type(Z_Param_Priority),Z_Param_Instigator);
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnActionsComponent Function K2_PushAction

// Begin Class UDEPRECATED_PawnActionsComponent
void UDEPRECATED_PawnActionsComponent::StaticRegisterNativesUDEPRECATED_PawnActionsComponent()
{
	UClass* Class = UDEPRECATED_PawnActionsComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_AbortAction", &UDEPRECATED_PawnActionsComponent::execK2_AbortAction },
		{ "K2_ForceAbortAction", &UDEPRECATED_PawnActionsComponent::execK2_ForceAbortAction },
		{ "K2_PerformAction", &UDEPRECATED_PawnActionsComponent::execK2_PerformAction },
		{ "K2_PushAction", &UDEPRECATED_PawnActionsComponent::execK2_PushAction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnActionsComponent);
UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister()
{
	return UDEPRECATED_PawnActionsComponent::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "IncludePath", "Actions/PawnActionsComponent.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[] = {
		{ "Category", "PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionStacks_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnActionsComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionStacks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionStacks;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionEvents;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_AbortAction, "K2_AbortAction" }, // 937700542
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_ForceAbortAction, "K2_ForceAbortAction" }, // 1883908040
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PerformAction, "K2_PerformAction" }, // 1016752206
		{ &Z_Construct_UFunction_UDEPRECATED_PawnActionsComponent_K2_PushAction, "K2_PushAction" }, // 1773944455
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnActionsComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0124080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, ControlledPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlledPawn_MetaData), NewProp_ControlledPawn_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_Inner = { "ActionStacks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPawnActionStack, METADATA_PARAMS(0, nullptr) }; // 898248588
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks = { "ActionStacks", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, ActionStacks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionStacks_MetaData), NewProp_ActionStacks_MetaData) }; // 898248588
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_Inner = { "ActionEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPawnActionEvent, METADATA_PARAMS(0, nullptr) }; // 2270108273
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents = { "ActionEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, ActionEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionEvents_MetaData), NewProp_ActionEvents_MetaData) }; // 2270108273
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction = { "CurrentAction", nullptr, (EPropertyFlags)0x0124080020002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnActionsComponent, CurrentAction_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentAction_MetaData), NewProp_CurrentAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ControlledPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionStacks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_ActionEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::NewProp_CurrentAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::ClassParams = {
	&UDEPRECATED_PawnActionsComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::PropPointers),
	0,
	0x02A802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnActionsComponent>()
{
	return UDEPRECATED_PawnActionsComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnActionsComponent);
UDEPRECATED_PawnActionsComponent::~UDEPRECATED_PawnActionsComponent() {}
// End Class UDEPRECATED_PawnActionsComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPawnActionEvent::StaticStruct, Z_Construct_UScriptStruct_FPawnActionEvent_Statics::NewStructOps, TEXT("PawnActionEvent"), &Z_Registration_Info_UScriptStruct_PawnActionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnActionEvent), 2270108273U) },
		{ FPawnActionStack::StaticStruct, Z_Construct_UScriptStruct_FPawnActionStack_Statics::NewStructOps, TEXT("PawnActionStack"), &Z_Registration_Info_UScriptStruct_PawnActionStack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPawnActionStack), 898248588U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnActionsComponent, UDEPRECATED_PawnActionsComponent::StaticClass, TEXT("UDEPRECATED_PawnActionsComponent"), &Z_Registration_Info_UClass_UDEPRECATED_PawnActionsComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnActionsComponent), 2630535436U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_2307561328(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnActionsComponent_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
