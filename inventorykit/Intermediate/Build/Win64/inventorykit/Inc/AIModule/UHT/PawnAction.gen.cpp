// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EAIRequestPriority();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionResult();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EPawnSubActionTriggeringPolicy
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy;
static UEnum* EPawnSubActionTriggeringPolicy_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnSubActionTriggeringPolicy"));
	}
	return Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPawnSubActionTriggeringPolicy::Type>()
{
	return EPawnSubActionTriggeringPolicy_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "CopyBeforeTriggering.Name", "EPawnSubActionTriggeringPolicy::CopyBeforeTriggering" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ReuseInstances.Name", "EPawnSubActionTriggeringPolicy::ReuseInstances" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPawnSubActionTriggeringPolicy::CopyBeforeTriggering", (int64)EPawnSubActionTriggeringPolicy::CopyBeforeTriggering },
		{ "EPawnSubActionTriggeringPolicy::ReuseInstances", (int64)EPawnSubActionTriggeringPolicy::ReuseInstances },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPawnSubActionTriggeringPolicy",
	"EPawnSubActionTriggeringPolicy::Type",
	Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy()
{
	if (!Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnSubActionTriggeringPolicy_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy.InnerSingleton;
}
// End Enum EPawnSubActionTriggeringPolicy

// Begin Enum EPawnActionFailHandling
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPawnActionFailHandling;
static UEnum* EPawnActionFailHandling_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPawnActionFailHandling.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPawnActionFailHandling.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPawnActionFailHandling, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPawnActionFailHandling"));
	}
	return Z_Registration_Info_UEnum_EPawnActionFailHandling.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPawnActionFailHandling::Type>()
{
	return EPawnActionFailHandling_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "IgnoreFailure.Name", "EPawnActionFailHandling::IgnoreFailure" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "RequireSuccess.Name", "EPawnActionFailHandling::RequireSuccess" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPawnActionFailHandling::RequireSuccess", (int64)EPawnActionFailHandling::RequireSuccess },
		{ "EPawnActionFailHandling::IgnoreFailure", (int64)EPawnActionFailHandling::IgnoreFailure },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPawnActionFailHandling",
	"EPawnActionFailHandling::Type",
	Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling()
{
	if (!Z_Registration_Info_UEnum_EPawnActionFailHandling.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPawnActionFailHandling.InnerSingleton, Z_Construct_UEnum_AIModule_EPawnActionFailHandling_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPawnActionFailHandling.InnerSingleton;
}
// End Enum EPawnActionFailHandling

// Begin Class UDEPRECATED_PawnAction Function CreateActionInstance
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics
{
	struct PawnAction_eventCreateActionInstance_Parms
	{
		UObject* WorldContextObject;
		TSubclassOf<UDEPRECATED_PawnAction> ActionClass;
		UDEPRECATED_PawnAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActionClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::NewProp_ActionClass = { "ActionClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, ActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_eventCreateActionInstance_Parms, ReturnValue), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::NewProp_ActionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction, nullptr, "CreateActionInstance", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::PawnAction_eventCreateActionInstance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::PawnAction_eventCreateActionInstance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnAction::execCreateActionInstance)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(UClass,Z_Param_ActionClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDEPRECATED_PawnAction**)Z_Param__Result=UDEPRECATED_PawnAction::CreateActionInstance(Z_Param_WorldContextObject,Z_Param_ActionClass);
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnAction Function CreateActionInstance

// Begin Class UDEPRECATED_PawnAction Function Finish
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics
{
	struct PawnAction_eventFinish_Parms
	{
		TEnumAsByte<EPawnActionResult::Type> WithResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WithResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::NewProp_WithResult = { "WithResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_eventFinish_Parms, WithResult), Z_Construct_UEnum_AIModule_EPawnActionResult, METADATA_PARAMS(0, nullptr) }; // 3429844247
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::NewProp_WithResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction, nullptr, "Finish", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::PawnAction_eventFinish_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::PawnAction_eventFinish_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnAction::execFinish)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_WithResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Finish(EPawnActionResult::Type(Z_Param_WithResult));
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnAction Function Finish

// Begin Class UDEPRECATED_PawnAction Function GetActionPriority
struct Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics
{
	struct PawnAction_eventGetActionPriority_Parms
	{
		TEnumAsByte<EAIRequestPriority::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|PawnActions" },
		{ "Comment", "//----------------------------------------------------------------------//\n// Blueprint interface\n//----------------------------------------------------------------------//\n" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Blueprint interface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnAction_eventGetActionPriority_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EAIRequestPriority, METADATA_PARAMS(0, nullptr) }; // 3621236737
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_PawnAction, nullptr, "GetActionPriority", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::PawnAction_eventGetActionPriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::PawnAction_eventGetActionPriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_PawnAction::execGetActionPriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EAIRequestPriority::Type>*)Z_Param__Result=P_THIS->GetActionPriority();
	P_NATIVE_END;
}
// End Class UDEPRECATED_PawnAction Function GetActionPriority

// Begin Class UDEPRECATED_PawnAction
void UDEPRECATED_PawnAction::StaticRegisterNativesUDEPRECATED_PawnAction()
{
	UClass* Class = UDEPRECATED_PawnAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateActionInstance", &UDEPRECATED_PawnAction::execCreateActionInstance },
		{ "Finish", &UDEPRECATED_PawnAction::execFinish },
		{ "GetActionPriority", &UDEPRECATED_PawnAction::execGetActionPriority },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction);
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister()
{
	return UDEPRECATED_PawnAction::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_PawnAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09Things to remember:\n *\x09* Actions are created paused\n */" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "IncludePath", "Actions/PawnAction.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Things to remember:\n* Actions are created paused" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildAction_MetaData[] = {
		{ "Comment", "/** Current child node executing on top of this Action */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Current child node executing on top of this Action" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentAction_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerComponent_MetaData[] = {
		{ "Comment", "/** Extra reference to the component this action is being governed by */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "Extra reference to the component this action is being governed by" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Comment", "/** indicates an object that caused this action. Used for mass removal of actions \n\x09 *\x09""by specific object */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "indicates an object that caused this action. Used for mass removal of actions\n    by specific object" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrainComp_MetaData[] = {
		{ "Comment", "/** @Note: THIS IS HERE _ONLY_ BECAUSE OF THE WAY AI MESSAGING IS CURRENTLY IMPLEMENTED. WILL GO AWAY! */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "@Note: THIS IS HERE _ONLY_ BECAUSE OF THE WAY AI MESSAGING IS CURRENTLY IMPLEMENTED. WILL GO AWAY!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNewSameClassInstance_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** if this is FALSE and we're trying to push a new instance of a given class,\n\x09 *\x09""but the top of the stack is already an instance of that class ignore the attempted push */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "if this is FALSE and we're trying to push a new instance of a given class,\n    but the top of the stack is already an instance of that class ignore the attempted push" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReplaceActiveSameClassInstance_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** if this is TRUE, when we try to push a new instance of an action who has the\n\x09 *\x09same class as the action on the top of the stack, pop the one on the stack, and push the new one\n\x09 *\x09NOTE: This trumps bAllowNewClassInstance (e.g. if this is true and bAllowNewClassInstance\n\x09 *\x09is false the active instance will still be replaced) */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "if this is TRUE, when we try to push a new instance of an action who has the\n    same class as the action on the top of the stack, pop the one on the stack, and push the new one\n    NOTE: This trumps bAllowNewClassInstance (e.g. if this is true and bAllowNewClassInstance\n    is false the active instance will still be replaced)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPauseMovement_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** this is a temporary solution to allow having movement action running in background while there's \n\x09 *\x09""another action on top doing its thing\n\x09 *\x09@note should go away once AI resource locking comes on-line */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "this is a temporary solution to allow having movement action running in background while there's\n    another action on top doing its thing\n    @note should go away once AI resource locking comes on-line" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysNotifyOnFinished_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "Comment", "/** if set, action will call OnFinished notify even when ending as FailedToStart */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction.h" },
		{ "ToolTip", "if set, action will call OnFinished notify even when ending as FailedToStart" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrainComp;
	static void NewProp_bAllowNewSameClassInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNewSameClassInstance;
	static void NewProp_bReplaceActiveSameClassInstance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceActiveSameClassInstance;
	static void NewProp_bShouldPauseMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPauseMovement;
	static void NewProp_bAlwaysNotifyOnFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysNotifyOnFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_CreateActionInstance, "CreateActionInstance" }, // 1912019289
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_Finish, "Finish" }, // 3733904064
		{ &Z_Construct_UFunction_UDEPRECATED_PawnAction_GetActionPriority, "GetActionPriority" }, // 3532566514
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_ChildAction = { "ChildAction", nullptr, (EPropertyFlags)0x0144000020002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction, ChildAction_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildAction_MetaData), NewProp_ChildAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_ParentAction = { "ParentAction", nullptr, (EPropertyFlags)0x0144000020002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction, ParentAction_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentAction_MetaData), NewProp_ParentAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_OwnerComponent = { "OwnerComponent", nullptr, (EPropertyFlags)0x0144000020082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction, OwnerComponent_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerComponent_MetaData), NewProp_OwnerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0144000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction, Instigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_BrainComp = { "BrainComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_PawnAction, BrainComp), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrainComp_MetaData), NewProp_BrainComp_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAllowNewSameClassInstance_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction*)Obj)->bAllowNewSameClassInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAllowNewSameClassInstance = { "bAllowNewSameClassInstance", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction), &Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAllowNewSameClassInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNewSameClassInstance_MetaData), NewProp_bAllowNewSameClassInstance_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction*)Obj)->bReplaceActiveSameClassInstance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bReplaceActiveSameClassInstance = { "bReplaceActiveSameClassInstance", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction), &Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bReplaceActiveSameClassInstance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReplaceActiveSameClassInstance_MetaData), NewProp_bReplaceActiveSameClassInstance_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bShouldPauseMovement_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction*)Obj)->bShouldPauseMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bShouldPauseMovement = { "bShouldPauseMovement", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction), &Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bShouldPauseMovement_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldPauseMovement_MetaData), NewProp_bShouldPauseMovement_MetaData) };
void Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_SetBit(void* Obj)
{
	((UDEPRECATED_PawnAction*)Obj)->bAlwaysNotifyOnFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAlwaysNotifyOnFinished = { "bAlwaysNotifyOnFinished", nullptr, (EPropertyFlags)0x00200c0000010005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_PawnAction), &Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAlwaysNotifyOnFinished_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAlwaysNotifyOnFinished_MetaData), NewProp_bAlwaysNotifyOnFinished_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_ChildAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_ParentAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_OwnerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_BrainComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAllowNewSameClassInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bReplaceActiveSameClassInstance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bShouldPauseMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::NewProp_bAlwaysNotifyOnFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::ClassParams = {
	&UDEPRECATED_PawnAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::PropPointers),
	0,
	0x028812A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_PawnAction()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_PawnAction.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction>()
{
	return UDEPRECATED_PawnAction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction);
UDEPRECATED_PawnAction::~UDEPRECATED_PawnAction() {}
// End Class UDEPRECATED_PawnAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPawnSubActionTriggeringPolicy_StaticEnum, TEXT("EPawnSubActionTriggeringPolicy"), &Z_Registration_Info_UEnum_EPawnSubActionTriggeringPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 580875830U) },
		{ EPawnActionFailHandling_StaticEnum, TEXT("EPawnActionFailHandling"), &Z_Registration_Info_UEnum_EPawnActionFailHandling, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3306492818U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction, UDEPRECATED_PawnAction::StaticClass, TEXT("UDEPRECATED_PawnAction"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction), 3159515500U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_3398342681(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
