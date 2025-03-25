// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardData_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
AIMODULE_API UFunction* Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIRequestID();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationQueryFilter_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Delegate FAIMoveCompletedSignature
struct Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics
{
	struct _Script_AIModule_eventAIMoveCompletedSignature_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RequestID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_RequestID = { "RequestID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventAIMoveCompletedSignature_Parms, RequestID), Z_Construct_UScriptStruct_FAIRequestID, METADATA_PARAMS(0, nullptr) }; // 2000238872
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_AIModule_eventAIMoveCompletedSignature_Parms, Result), Z_Construct_UEnum_AIModule_EPathFollowingResult, METADATA_PARAMS(0, nullptr) }; // 3125870747
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_RequestID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AIModule, nullptr, "AIMoveCompletedSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::_Script_AIModule_eventAIMoveCompletedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::_Script_AIModule_eventAIMoveCompletedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAIMoveCompletedSignature_DelegateWrapper(const FMulticastScriptDelegate& AIMoveCompletedSignature, FAIRequestID RequestID, EPathFollowingResult::Type Result)
{
	struct _Script_AIModule_eventAIMoveCompletedSignature_Parms
	{
		FAIRequestID RequestID;
		TEnumAsByte<EPathFollowingResult::Type> Result;
	};
	_Script_AIModule_eventAIMoveCompletedSignature_Parms Parms;
	Parms.RequestID=RequestID;
	Parms.Result=Result;
	AIMoveCompletedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAIMoveCompletedSignature

// Begin Class AAIController Function ClaimTaskResource
struct Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics
{
	struct AIController_eventClaimTaskResource_Parms
	{
		TSubclassOf<UGameplayTaskResource> ResourceClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::NewProp_ResourceClass = { "ResourceClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventClaimTaskResource_Parms, ResourceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::NewProp_ResourceClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "ClaimTaskResource", nullptr, nullptr, Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::AIController_eventClaimTaskResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::AIController_eventClaimTaskResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_ClaimTaskResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_ClaimTaskResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execClaimTaskResource)
{
	P_GET_OBJECT(UClass,Z_Param_ResourceClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClaimTaskResource(Z_Param_ResourceClass);
	P_NATIVE_END;
}
// End Class AAIController Function ClaimTaskResource

// Begin Class AAIController Function GetAIPerceptionComponent
struct Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics
{
	struct AIController_eventGetAIPerceptionComponent_Parms
	{
		UAIPerceptionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetAIPerceptionComponent_Parms, ReturnValue), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetAIPerceptionComponent", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::AIController_eventGetAIPerceptionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::AIController_eventGetAIPerceptionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetAIPerceptionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetAIPerceptionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetAIPerceptionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAIPerceptionComponent**)Z_Param__Result=P_THIS->GetAIPerceptionComponent();
	P_NATIVE_END;
}
// End Class AAIController Function GetAIPerceptionComponent

// Begin Class AAIController Function GetDeprecatedActionsComponent
struct Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics
{
	struct AIController_eventGetDeprecatedActionsComponent_Parms
	{
		UDEPRECATED_PawnActionsComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "PawnActions have been deprecated and are no longer being supported. It will get removed in following UE5 releases. Use GameplayTasks or AITasks instead." },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetDeprecatedActionsComponent_Parms, ReturnValue), Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetDeprecatedActionsComponent", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::AIController_eventGetDeprecatedActionsComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::AIController_eventGetDeprecatedActionsComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetDeprecatedActionsComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDEPRECATED_PawnActionsComponent**)Z_Param__Result=P_THIS->GetDeprecatedActionsComponent();
	P_NATIVE_END;
}
// End Class AAIController Function GetDeprecatedActionsComponent

// Begin Class AAIController Function GetFocalPoint
struct Z_Construct_UFunction_AAIController_GetFocalPoint_Statics
{
	struct AIController_eventGetFocalPoint_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Retrieve the final position that controller should be looking at. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Retrieve the final position that controller should be looking at." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetFocalPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetFocalPoint", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::AIController_eventGetFocalPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::AIController_eventGetFocalPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetFocalPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetFocalPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetFocalPoint)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFocalPoint();
	P_NATIVE_END;
}
// End Class AAIController Function GetFocalPoint

// Begin Class AAIController Function GetFocalPointOnActor
struct Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics
{
	struct AIController_eventGetFocalPointOnActor_Parms
	{
		const AActor* Actor;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Retrieve the focal point this controller should focus to on given actor. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Retrieve the focal point this controller should focus to on given actor." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetFocalPointOnActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetFocalPointOnActor_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetFocalPointOnActor", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::AIController_eventGetFocalPointOnActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::AIController_eventGetFocalPointOnActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetFocalPointOnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetFocalPointOnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetFocalPointOnActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFocalPointOnActor(Z_Param_Actor);
	P_NATIVE_END;
}
// End Class AAIController Function GetFocalPointOnActor

// Begin Class AAIController Function GetFocusActor
struct Z_Construct_UFunction_AAIController_GetFocusActor_Statics
{
	struct AIController_eventGetFocusActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Get the focused actor. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Get the focused actor." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetFocusActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetFocusActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetFocusActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetFocusActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetFocusActor", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::AIController_eventGetFocusActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetFocusActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetFocusActor_Statics::AIController_eventGetFocusActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetFocusActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetFocusActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetFocusActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetFocusActor();
	P_NATIVE_END;
}
// End Class AAIController Function GetFocusActor

// Begin Class AAIController Function GetImmediateMoveDestination
struct Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics
{
	struct AIController_eventGetImmediateMoveDestination_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Returns position of current path segment's end. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns position of current path segment's end." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetImmediateMoveDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetImmediateMoveDestination", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::AIController_eventGetImmediateMoveDestination_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::AIController_eventGetImmediateMoveDestination_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetImmediateMoveDestination()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetImmediateMoveDestination_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetImmediateMoveDestination)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetImmediateMoveDestination();
	P_NATIVE_END;
}
// End Class AAIController Function GetImmediateMoveDestination

// Begin Class AAIController Function GetMoveStatus
struct Z_Construct_UFunction_AAIController_GetMoveStatus_Statics
{
	struct AIController_eventGetMoveStatus_Parms
	{
		TEnumAsByte<EPathFollowingStatus::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Returns status of path following */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns status of path following" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetMoveStatus_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingStatus, METADATA_PARAMS(0, nullptr) }; // 1429550023
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetMoveStatus", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::AIController_eventGetMoveStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::AIController_eventGetMoveStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetMoveStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetMoveStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetMoveStatus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPathFollowingStatus::Type>*)Z_Param__Result=P_THIS->GetMoveStatus();
	P_NATIVE_END;
}
// End Class AAIController Function GetMoveStatus

// Begin Class AAIController Function GetPathFollowingComponent
struct Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics
{
	struct AIController_eventGetPathFollowingComponent_Parms
	{
		UPathFollowingComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Returns PathFollowingComponent subobject **/" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns PathFollowingComponent subobject *" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventGetPathFollowingComponent_Parms, ReturnValue), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "GetPathFollowingComponent", nullptr, nullptr, Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::AIController_eventGetPathFollowingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::AIController_eventGetPathFollowingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_GetPathFollowingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_GetPathFollowingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execGetPathFollowingComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UPathFollowingComponent**)Z_Param__Result=P_THIS->GetPathFollowingComponent();
	P_NATIVE_END;
}
// End Class AAIController Function GetPathFollowingComponent

// Begin Class AAIController Function HasPartialPath
struct Z_Construct_UFunction_AAIController_HasPartialPath_Statics
{
	struct AIController_eventHasPartialPath_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination). */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Returns true if the current PathFollowingComponent's path is partial (does not reach desired destination)." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AIController_eventHasPartialPath_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventHasPartialPath_Parms), &Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_HasPartialPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_HasPartialPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "HasPartialPath", nullptr, nullptr, Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::AIController_eventHasPartialPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_HasPartialPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_HasPartialPath_Statics::AIController_eventHasPartialPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_HasPartialPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_HasPartialPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execHasPartialPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasPartialPath();
	P_NATIVE_END;
}
// End Class AAIController Function HasPartialPath

// Begin Class AAIController Function K2_ClearFocus
struct Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Clears Focus, will also clear FocalPoint as a result */" },
		{ "DisplayName", "ClearFocus" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ScriptName", "ClearFocus" },
		{ "ToolTip", "Clears Focus, will also clear FocalPoint as a result" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "K2_ClearFocus", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AAIController_K2_ClearFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_K2_ClearFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execK2_ClearFocus)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_ClearFocus();
	P_NATIVE_END;
}
// End Class AAIController Function K2_ClearFocus

// Begin Class AAIController Function K2_SetFocalPoint
struct Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics
{
	struct AIController_eventK2_SetFocalPoint_Parms
	{
		FVector FP;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Set the position that controller should be looking at. */" },
		{ "DisplayName", "SetFocalPoint" },
		{ "Keywords", "focus" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ScriptName", "SetFocalPoint" },
		{ "ToolTip", "Set the position that controller should be looking at." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FP;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::NewProp_FP = { "FP", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventK2_SetFocalPoint_Parms, FP), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::NewProp_FP,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "K2_SetFocalPoint", nullptr, nullptr, Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::AIController_eventK2_SetFocalPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::AIController_eventK2_SetFocalPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_K2_SetFocalPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_K2_SetFocalPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execK2_SetFocalPoint)
{
	P_GET_STRUCT(FVector,Z_Param_FP);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetFocalPoint(Z_Param_FP);
	P_NATIVE_END;
}
// End Class AAIController Function K2_SetFocalPoint

// Begin Class AAIController Function K2_SetFocus
struct Z_Construct_UFunction_AAIController_K2_SetFocus_Statics
{
	struct AIController_eventK2_SetFocus_Parms
	{
		AActor* NewFocus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Set Focus for actor, will set FocalPoint as a result. */" },
		{ "DisplayName", "SetFocus" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ScriptName", "SetFocus" },
		{ "ToolTip", "Set Focus for actor, will set FocalPoint as a result." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFocus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::NewProp_NewFocus = { "NewFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventK2_SetFocus_Parms, NewFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::NewProp_NewFocus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "K2_SetFocus", nullptr, nullptr, Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::AIController_eventK2_SetFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::AIController_eventK2_SetFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_K2_SetFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_K2_SetFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execK2_SetFocus)
{
	P_GET_OBJECT(AActor,Z_Param_NewFocus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_SetFocus(Z_Param_NewFocus);
	P_NATIVE_END;
}
// End Class AAIController Function K2_SetFocus

// Begin Class AAIController Function MoveToActor
struct Z_Construct_UFunction_AAIController_MoveToActor_Statics
{
	struct AIController_eventMoveToActor_Parms
	{
		AActor* Goal;
		float AcceptanceRadius;
		bool bStopOnOverlap;
		bool bUsePathfinding;
		bool bCanStrafe;
		TSubclassOf<UNavigationQueryFilter> FilterClass;
		bool bAllowPartialPath;
		TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Makes AI go toward specified Goal actor (destination will be continuously updated), aborts any active path following\n\x09 *  @param AcceptanceRadius - finish move if pawn gets close enough\n\x09 *  @param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n\x09 *  @param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n\x09 *  @param bCanStrafe - set focus related flag: bAllowStrafe\n\x09 *  @param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n\x09 *  @param bAllowPartialPath - use incomplete path when goal can't be reached\n\x09 *\x09@note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius\n\x09 */" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_bAllowPartialPath", "true" },
		{ "CPP_Default_bCanStrafe", "true" },
		{ "CPP_Default_bStopOnOverlap", "true" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_FilterClass", "None" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Makes AI go toward specified Goal actor (destination will be continuously updated), aborts any active path following\n@param AcceptanceRadius - finish move if pawn gets close enough\n@param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n@param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n@param bCanStrafe - set focus related flag: bAllowStrafe\n@param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n@param bAllowPartialPath - use incomplete path when goal can't be reached\n    @note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Goal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static void NewProp_bStopOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
	static void NewProp_bUsePathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static void NewProp_bCanStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static void NewProp_bAllowPartialPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_Goal = { "Goal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, Goal), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, AcceptanceRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
{
	((AIController_eventMoveToActor_Parms*)Obj)->bStopOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
{
	((AIController_eventMoveToActor_Parms*)Obj)->bUsePathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
{
	((AIController_eventMoveToActor_Parms*)Obj)->bCanStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
{
	((AIController_eventMoveToActor_Parms*)Obj)->bAllowPartialPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToActor_Parms), &Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToActor_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(0, nullptr) }; // 3122571778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_Goal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bStopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bUsePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bCanStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_bAllowPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_MoveToActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "MoveToActor", nullptr, nullptr, Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_MoveToActor_Statics::AIController_eventMoveToActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_MoveToActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_MoveToActor_Statics::AIController_eventMoveToActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_MoveToActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_MoveToActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execMoveToActor)
{
	P_GET_OBJECT(AActor,Z_Param_Goal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcceptanceRadius);
	P_GET_UBOOL(Z_Param_bStopOnOverlap);
	P_GET_UBOOL(Z_Param_bUsePathfinding);
	P_GET_UBOOL(Z_Param_bCanStrafe);
	P_GET_OBJECT(UClass,Z_Param_FilterClass);
	P_GET_UBOOL(Z_Param_bAllowPartialPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToActor(Z_Param_Goal,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath);
	P_NATIVE_END;
}
// End Class AAIController Function MoveToActor

// Begin Class AAIController Function MoveToLocation
struct Z_Construct_UFunction_AAIController_MoveToLocation_Statics
{
	struct AIController_eventMoveToLocation_Parms
	{
		FVector Dest;
		float AcceptanceRadius;
		bool bStopOnOverlap;
		bool bUsePathfinding;
		bool bProjectDestinationToNavigation;
		bool bCanStrafe;
		TSubclassOf<UNavigationQueryFilter> FilterClass;
		bool bAllowPartialPath;
		TEnumAsByte<EPathFollowingRequestResult::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bStopOnOverlap,bCanStrafe,bAllowPartialPath" },
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Makes AI go toward specified Dest location, aborts any active path following\n\x09 *  @param AcceptanceRadius - finish move if pawn gets close enough\n\x09 *  @param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n\x09 *  @param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n\x09 *  @param bProjectDestinationToNavigation - project location on navigation data before using it\n\x09 *  @param bCanStrafe - set focus related flag: bAllowStrafe\n\x09 *  @param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n\x09 *  @param bAllowPartialPath - use incomplete path when goal can't be reached\n\x09 *\x09@note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius\n\x09 */" },
		{ "CPP_Default_AcceptanceRadius", "-1.000000" },
		{ "CPP_Default_bAllowPartialPath", "true" },
		{ "CPP_Default_bCanStrafe", "true" },
		{ "CPP_Default_bProjectDestinationToNavigation", "false" },
		{ "CPP_Default_bStopOnOverlap", "true" },
		{ "CPP_Default_bUsePathfinding", "true" },
		{ "CPP_Default_FilterClass", "None" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Makes AI go toward specified Dest location, aborts any active path following\n@param AcceptanceRadius - finish move if pawn gets close enough\n@param bStopOnOverlap - add pawn's radius to AcceptanceRadius\n@param bUsePathfinding - use navigation data to calculate path (otherwise it will go in straight line)\n@param bProjectDestinationToNavigation - project location on navigation data before using it\n@param bCanStrafe - set focus related flag: bAllowStrafe\n@param FilterClass - navigation filter for pathfinding adjustments. If none specified DefaultNavigationFilterClass will be used\n@param bAllowPartialPath - use incomplete path when goal can't be reached\n    @note AcceptanceRadius has default value or -1 due to Header Parser not being able to recognize UPathFollowingComponent::DefaultAcceptanceRadius" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dest_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Dest;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AcceptanceRadius;
	static void NewProp_bStopOnOverlap_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopOnOverlap;
	static void NewProp_bUsePathfinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePathfinding;
	static void NewProp_bProjectDestinationToNavigation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bProjectDestinationToNavigation;
	static void NewProp_bCanStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanStrafe;
	static const UECodeGen_Private::FClassPropertyParams NewProp_FilterClass;
	static void NewProp_bAllowPartialPath_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPartialPath;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest = { "Dest", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, Dest), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dest_MetaData), NewProp_Dest_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_AcceptanceRadius = { "AcceptanceRadius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, AcceptanceRadius), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit(void* Obj)
{
	((AIController_eventMoveToLocation_Parms*)Obj)->bStopOnOverlap = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap = { "bStopOnOverlap", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding_SetBit(void* Obj)
{
	((AIController_eventMoveToLocation_Parms*)Obj)->bUsePathfinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding = { "bUsePathfinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation_SetBit(void* Obj)
{
	((AIController_eventMoveToLocation_Parms*)Obj)->bProjectDestinationToNavigation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation = { "bProjectDestinationToNavigation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe_SetBit(void* Obj)
{
	((AIController_eventMoveToLocation_Parms*)Obj)->bCanStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe = { "bCanStrafe", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_FilterClass = { "FilterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, FilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit(void* Obj)
{
	((AIController_eventMoveToLocation_Parms*)Obj)->bAllowPartialPath = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath = { "bAllowPartialPath", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventMoveToLocation_Parms), &Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventMoveToLocation_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, METADATA_PARAMS(0, nullptr) }; // 3122571778
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_Dest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_AcceptanceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bStopOnOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bUsePathfinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bProjectDestinationToNavigation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bCanStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_FilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_bAllowPartialPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_MoveToLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_MoveToLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "MoveToLocation", nullptr, nullptr, Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::AIController_eventMoveToLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_MoveToLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_MoveToLocation_Statics::AIController_eventMoveToLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_MoveToLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_MoveToLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execMoveToLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Dest);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AcceptanceRadius);
	P_GET_UBOOL(Z_Param_bStopOnOverlap);
	P_GET_UBOOL(Z_Param_bUsePathfinding);
	P_GET_UBOOL(Z_Param_bProjectDestinationToNavigation);
	P_GET_UBOOL(Z_Param_bCanStrafe);
	P_GET_OBJECT(UClass,Z_Param_FilterClass);
	P_GET_UBOOL(Z_Param_bAllowPartialPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPathFollowingRequestResult::Type>*)Z_Param__Result=P_THIS->MoveToLocation(Z_Param_Out_Dest,Z_Param_AcceptanceRadius,Z_Param_bStopOnOverlap,Z_Param_bUsePathfinding,Z_Param_bProjectDestinationToNavigation,Z_Param_bCanStrafe,Z_Param_FilterClass,Z_Param_bAllowPartialPath);
	P_NATIVE_END;
}
// End Class AAIController Function MoveToLocation

// Begin Class AAIController Function OnGameplayTaskResourcesClaimed
struct Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics
{
	struct AIController_eventOnGameplayTaskResourcesClaimed_Parms
	{
		FGameplayResourceSet NewlyClaimed;
		FGameplayResourceSet FreshlyReleased;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_NewlyClaimed = { "NewlyClaimed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventOnGameplayTaskResourcesClaimed_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(0, nullptr) }; // 3524138422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_FreshlyReleased = { "FreshlyReleased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventOnGameplayTaskResourcesClaimed_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(0, nullptr) }; // 3524138422
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_NewlyClaimed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::NewProp_FreshlyReleased,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "OnGameplayTaskResourcesClaimed", nullptr, nullptr, Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::AIController_eventOnGameplayTaskResourcesClaimed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::AIController_eventOnGameplayTaskResourcesClaimed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execOnGameplayTaskResourcesClaimed)
{
	P_GET_STRUCT(FGameplayResourceSet,Z_Param_NewlyClaimed);
	P_GET_STRUCT(FGameplayResourceSet,Z_Param_FreshlyReleased);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnGameplayTaskResourcesClaimed(Z_Param_NewlyClaimed,Z_Param_FreshlyReleased);
	P_NATIVE_END;
}
// End Class AAIController Function OnGameplayTaskResourcesClaimed

// Begin Class AAIController Function OnUsingBlackBoard
struct AIController_eventOnUsingBlackBoard_Parms
{
	UBlackboardComponent* BlackboardComp;
	UBlackboardData* BlackboardAsset;
};
static FName NAME_AAIController_OnUsingBlackBoard = FName(TEXT("OnUsingBlackBoard"));
void AAIController::OnUsingBlackBoard(UBlackboardComponent* BlackboardComp, UBlackboardData* BlackboardAsset)
{
	AIController_eventOnUsingBlackBoard_Parms Parms;
	Parms.BlackboardComp=BlackboardComp;
	Parms.BlackboardAsset=BlackboardAsset;
	ProcessEvent(FindFunctionChecked(NAME_AAIController_OnUsingBlackBoard),&Parms);
}
struct Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventOnUsingBlackBoard_Parms, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventOnUsingBlackBoard_Parms, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::NewProp_BlackboardAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "OnUsingBlackBoard", nullptr, nullptr, Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::PropPointers), sizeof(AIController_eventOnUsingBlackBoard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::Function_MetaDataParams) };
static_assert(sizeof(AIController_eventOnUsingBlackBoard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_OnUsingBlackBoard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_OnUsingBlackBoard_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class AAIController Function OnUsingBlackBoard

// Begin Class AAIController Function RunBehaviorTree
struct Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics
{
	struct AIController_eventRunBehaviorTree_Parms
	{
		UBehaviorTree* BTAsset;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Starts executing behavior tree. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Starts executing behavior tree." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTAsset;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_BTAsset = { "BTAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventRunBehaviorTree_Parms, BTAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AIController_eventRunBehaviorTree_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventRunBehaviorTree_Parms), &Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_BTAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "RunBehaviorTree", nullptr, nullptr, Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::AIController_eventRunBehaviorTree_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::AIController_eventRunBehaviorTree_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_RunBehaviorTree()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_RunBehaviorTree_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execRunBehaviorTree)
{
	P_GET_OBJECT(UBehaviorTree,Z_Param_BTAsset);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RunBehaviorTree(Z_Param_BTAsset);
	P_NATIVE_END;
}
// End Class AAIController Function RunBehaviorTree

// Begin Class AAIController Function SetMoveBlockDetection
struct Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics
{
	struct AIController_eventSetMoveBlockDetection_Parms
	{
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Updates state of movement block detection. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Updates state of movement block detection." },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((AIController_eventSetMoveBlockDetection_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventSetMoveBlockDetection_Parms), &Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "SetMoveBlockDetection", nullptr, nullptr, Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::AIController_eventSetMoveBlockDetection_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::AIController_eventSetMoveBlockDetection_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_SetMoveBlockDetection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_SetMoveBlockDetection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execSetMoveBlockDetection)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMoveBlockDetection(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class AAIController Function SetMoveBlockDetection

// Begin Class AAIController Function SetPathFollowingComponent
struct Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics
{
	struct AIController_eventSetPathFollowingComponent_Parms
	{
		UPathFollowingComponent* NewPFComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "Comment", "/** Note that this function does not do any pathfollowing state transfer. \n\x09 *\x09Intended to be called as part of initialization/setup process */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Note that this function does not do any pathfollowing state transfer.\n    Intended to be called as part of initialization/setup process" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPFComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPFComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent = { "NewPFComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventSetPathFollowingComponent_Parms, NewPFComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPFComponent_MetaData), NewProp_NewPFComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::NewProp_NewPFComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "SetPathFollowingComponent", nullptr, nullptr, Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::AIController_eventSetPathFollowingComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::AIController_eventSetPathFollowingComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_SetPathFollowingComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_SetPathFollowingComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execSetPathFollowingComponent)
{
	P_GET_OBJECT(UPathFollowingComponent,Z_Param_NewPFComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPathFollowingComponent(Z_Param_NewPFComponent);
	P_NATIVE_END;
}
// End Class AAIController Function SetPathFollowingComponent

// Begin Class AAIController Function UnclaimTaskResource
struct Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics
{
	struct AIController_eventUnclaimTaskResource_Parms
	{
		TSubclassOf<UGameplayTaskResource> ResourceClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Tasks" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ResourceClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::NewProp_ResourceClass = { "ResourceClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventUnclaimTaskResource_Parms, ResourceClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::NewProp_ResourceClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "UnclaimTaskResource", nullptr, nullptr, Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::AIController_eventUnclaimTaskResource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::AIController_eventUnclaimTaskResource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_UnclaimTaskResource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_UnclaimTaskResource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execUnclaimTaskResource)
{
	P_GET_OBJECT(UClass,Z_Param_ResourceClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnclaimTaskResource(Z_Param_ResourceClass);
	P_NATIVE_END;
}
// End Class AAIController Function UnclaimTaskResource

// Begin Class AAIController Function UseBlackboard
struct Z_Construct_UFunction_AAIController_UseBlackboard_Statics
{
	struct AIController_eventUseBlackboard_Parms
	{
		UBlackboardData* BlackboardAsset;
		UBlackboardComponent* BlackboardComponent;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/**\n\x09 * Makes AI use the specified Blackboard asset & creates a Blackboard Component if one does not already exist.\n\x09 * @param\x09""BlackboardAsset\x09\x09\x09The Blackboard asset to use.\n\x09 * @param\x09""BlackboardComponent\x09\x09The Blackboard component that was used or created to work with the passed-in Blackboard Asset.\n\x09 * @return true if we successfully linked the blackboard asset to the blackboard component.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Makes AI use the specified Blackboard asset & creates a Blackboard Component if one does not already exist.\n@param       BlackboardAsset                 The Blackboard asset to use.\n@param       BlackboardComponent             The Blackboard component that was used or created to work with the passed-in Blackboard Asset.\n@return true if we successfully linked the blackboard asset to the blackboard component." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardAsset = { "BlackboardAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventUseBlackboard_Parms, BlackboardAsset), Z_Construct_UClass_UBlackboardData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0010000000080180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AIController_eventUseBlackboard_Parms, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComponent_MetaData), NewProp_BlackboardComponent_MetaData) };
void Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AIController_eventUseBlackboard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AIController_eventUseBlackboard_Parms), &Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_BlackboardComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAIController_UseBlackboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAIController_UseBlackboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAIController, nullptr, "UseBlackboard", nullptr, nullptr, Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::AIController_eventUseBlackboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAIController_UseBlackboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AAIController_UseBlackboard_Statics::AIController_eventUseBlackboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAIController_UseBlackboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAIController_UseBlackboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAIController::execUseBlackboard)
{
	P_GET_OBJECT(UBlackboardData,Z_Param_BlackboardAsset);
	P_GET_OBJECT_REF(UBlackboardComponent,Z_Param_Out_BlackboardComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UseBlackboard(Z_Param_BlackboardAsset,P_ARG_GC_BARRIER(Z_Param_Out_BlackboardComponent));
	P_NATIVE_END;
}
// End Class AAIController Function UseBlackboard

// Begin Class AAIController
void AAIController::StaticRegisterNativesAAIController()
{
	UClass* Class = AAIController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClaimTaskResource", &AAIController::execClaimTaskResource },
		{ "GetAIPerceptionComponent", &AAIController::execGetAIPerceptionComponent },
		{ "GetDeprecatedActionsComponent", &AAIController::execGetDeprecatedActionsComponent },
		{ "GetFocalPoint", &AAIController::execGetFocalPoint },
		{ "GetFocalPointOnActor", &AAIController::execGetFocalPointOnActor },
		{ "GetFocusActor", &AAIController::execGetFocusActor },
		{ "GetImmediateMoveDestination", &AAIController::execGetImmediateMoveDestination },
		{ "GetMoveStatus", &AAIController::execGetMoveStatus },
		{ "GetPathFollowingComponent", &AAIController::execGetPathFollowingComponent },
		{ "HasPartialPath", &AAIController::execHasPartialPath },
		{ "K2_ClearFocus", &AAIController::execK2_ClearFocus },
		{ "K2_SetFocalPoint", &AAIController::execK2_SetFocalPoint },
		{ "K2_SetFocus", &AAIController::execK2_SetFocus },
		{ "MoveToActor", &AAIController::execMoveToActor },
		{ "MoveToLocation", &AAIController::execMoveToLocation },
		{ "OnGameplayTaskResourcesClaimed", &AAIController::execOnGameplayTaskResourcesClaimed },
		{ "RunBehaviorTree", &AAIController::execRunBehaviorTree },
		{ "SetMoveBlockDetection", &AAIController::execSetMoveBlockDetection },
		{ "SetPathFollowingComponent", &AAIController::execSetPathFollowingComponent },
		{ "UnclaimTaskResource", &AAIController::execUnclaimTaskResource },
		{ "UseBlackboard", &AAIController::execUseBlackboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AAIController);
UClass* Z_Construct_UClass_AAIController_NoRegister()
{
	return AAIController::StaticClass();
}
struct Z_Construct_UClass_AAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * AIController is the base class of controllers for AI-controlled Pawns.\n * \n * Controllers are non-physical actors that can be attached to a pawn to control its actions.\n * AIControllers manage the artificial intelligence for the pawns they control.\n * In networked games, they only exist on the server.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AIController is the base class of controllers for AI-controlled Pawns.\n\nControllers are non-physical actors that can be attached to a pawn to control its actions.\nAIControllers manage the artificial intelligence for the pawns they control.\nIn networked games, they only exist on the server.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStartAILogicOnPossess_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** By default AI's logic does not start when controlled Pawn is possessed. Setting this flag to true\n\x09 *\x09will make AI logic start when pawn is possessed */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "By default AI's logic does not start when controlled Pawn is possessed. Setting this flag to true\n    will make AI logic start when pawn is possessed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStopAILogicOnUnposses_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** By default AI's logic gets stopped when controlled Pawn is unpossessed. Setting this flag to false\n\x09 *\x09will make AI logic persist past losing control over a pawn */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "By default AI's logic gets stopped when controlled Pawn is unpossessed. Setting this flag to false\n    will make AI logic persist past losing control over a pawn" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLOSflag_MetaData[] = {
		{ "Comment", "/** used for alternating LineOfSight traces */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "used for alternating LineOfSight traces" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipExtraLOSChecks_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Skip extra line of sight traces to extremities of target being checked. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Skip extra line of sight traces to extremities of target being checked." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowStrafe_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Is strafing allowed during movement? */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Is strafing allowed during movement?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWantsPlayerState_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Specifies if this AI wants its own PlayerState. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Specifies if this AI wants its own PlayerState." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSetControlRotationFromPawnOrientation_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Copy Pawn rotation to ControlRotation, if there is no focus point. */" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Copy Pawn rotation to ControlRotation, if there is no focus point." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PathFollowingComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Component used for moving along a path. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Component used for moving along a path." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrainComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Component responsible for behaviors. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Component responsible for behaviors." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionsComp_MetaData[] = {
		{ "BlueprintGetter", "GetDeprecatedActionsComponent" },
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Blackboard_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "Comment", "/** blackboard */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "blackboard" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CachedGameplayTasksComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultNavigationFilterClass_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReceiveMoveCompleted_MetaData[] = {
		{ "Comment", "/** Blueprint notification that we've completed the current movement request */" },
		{ "DisplayName", "MoveCompleted" },
		{ "ModuleRelativePath", "Classes/AIController.h" },
		{ "ToolTip", "Blueprint notification that we've completed the current movement request" },
	};
#endif // WITH_METADATA
	static void NewProp_bStartAILogicOnPossess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartAILogicOnPossess;
	static void NewProp_bStopAILogicOnUnposses_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStopAILogicOnUnposses;
	static void NewProp_bLOSflag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLOSflag;
	static void NewProp_bSkipExtraLOSChecks_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipExtraLOSChecks;
	static void NewProp_bAllowStrafe_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowStrafe;
	static void NewProp_bWantsPlayerState_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWantsPlayerState;
	static void NewProp_bSetControlRotationFromPawnOrientation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetControlRotationFromPawnOrientation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PathFollowingComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrainComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionsComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Blackboard;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CachedGameplayTasksComponent;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultNavigationFilterClass;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ReceiveMoveCompleted;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAIController_ClaimTaskResource, "ClaimTaskResource" }, // 3081660878
		{ &Z_Construct_UFunction_AAIController_GetAIPerceptionComponent, "GetAIPerceptionComponent" }, // 1947071589
		{ &Z_Construct_UFunction_AAIController_GetDeprecatedActionsComponent, "GetDeprecatedActionsComponent" }, // 1607209072
		{ &Z_Construct_UFunction_AAIController_GetFocalPoint, "GetFocalPoint" }, // 62023490
		{ &Z_Construct_UFunction_AAIController_GetFocalPointOnActor, "GetFocalPointOnActor" }, // 3744807662
		{ &Z_Construct_UFunction_AAIController_GetFocusActor, "GetFocusActor" }, // 311561614
		{ &Z_Construct_UFunction_AAIController_GetImmediateMoveDestination, "GetImmediateMoveDestination" }, // 4046378285
		{ &Z_Construct_UFunction_AAIController_GetMoveStatus, "GetMoveStatus" }, // 2417763184
		{ &Z_Construct_UFunction_AAIController_GetPathFollowingComponent, "GetPathFollowingComponent" }, // 801329663
		{ &Z_Construct_UFunction_AAIController_HasPartialPath, "HasPartialPath" }, // 1905832414
		{ &Z_Construct_UFunction_AAIController_K2_ClearFocus, "K2_ClearFocus" }, // 3206056582
		{ &Z_Construct_UFunction_AAIController_K2_SetFocalPoint, "K2_SetFocalPoint" }, // 948288061
		{ &Z_Construct_UFunction_AAIController_K2_SetFocus, "K2_SetFocus" }, // 112382439
		{ &Z_Construct_UFunction_AAIController_MoveToActor, "MoveToActor" }, // 937026073
		{ &Z_Construct_UFunction_AAIController_MoveToLocation, "MoveToLocation" }, // 1766730456
		{ &Z_Construct_UFunction_AAIController_OnGameplayTaskResourcesClaimed, "OnGameplayTaskResourcesClaimed" }, // 1276553532
		{ &Z_Construct_UFunction_AAIController_OnUsingBlackBoard, "OnUsingBlackBoard" }, // 261642755
		{ &Z_Construct_UFunction_AAIController_RunBehaviorTree, "RunBehaviorTree" }, // 3418784157
		{ &Z_Construct_UFunction_AAIController_SetMoveBlockDetection, "SetMoveBlockDetection" }, // 267919154
		{ &Z_Construct_UFunction_AAIController_SetPathFollowingComponent, "SetPathFollowingComponent" }, // 3409462769
		{ &Z_Construct_UFunction_AAIController_UnclaimTaskResource, "UnclaimTaskResource" }, // 3038204601
		{ &Z_Construct_UFunction_AAIController_UseBlackboard, "UseBlackboard" }, // 1736676019
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_AAIController_Statics::NewProp_bStartAILogicOnPossess_SetBit(void* Obj)
{
	((AAIController*)Obj)->bStartAILogicOnPossess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bStartAILogicOnPossess = { "bStartAILogicOnPossess", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bStartAILogicOnPossess_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStartAILogicOnPossess_MetaData), NewProp_bStartAILogicOnPossess_MetaData) };
void Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_SetBit(void* Obj)
{
	((AAIController*)Obj)->bStopAILogicOnUnposses = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses = { "bStopAILogicOnUnposses", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStopAILogicOnUnposses_MetaData), NewProp_bStopAILogicOnUnposses_MetaData) };
void Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_SetBit(void* Obj)
{
	((AAIController*)Obj)->bLOSflag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag = { "bLOSflag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLOSflag_MetaData), NewProp_bLOSflag_MetaData) };
void Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_SetBit(void* Obj)
{
	((AAIController*)Obj)->bSkipExtraLOSChecks = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks = { "bSkipExtraLOSChecks", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipExtraLOSChecks_MetaData), NewProp_bSkipExtraLOSChecks_MetaData) };
void Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_SetBit(void* Obj)
{
	((AAIController*)Obj)->bAllowStrafe = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe = { "bAllowStrafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowStrafe_MetaData), NewProp_bAllowStrafe_MetaData) };
void Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_SetBit(void* Obj)
{
	((AAIController*)Obj)->bWantsPlayerState = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState = { "bWantsPlayerState", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWantsPlayerState_MetaData), NewProp_bWantsPlayerState_MetaData) };
void Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_SetBit(void* Obj)
{
	((AAIController*)Obj)->bSetControlRotationFromPawnOrientation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation = { "bSetControlRotationFromPawnOrientation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(AAIController), &Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSetControlRotationFromPawnOrientation_MetaData), NewProp_bSetControlRotationFromPawnOrientation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent = { "PathFollowingComponent", nullptr, (EPropertyFlags)0x01440000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, PathFollowingComponent), Z_Construct_UClass_UPathFollowingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PathFollowingComponent_MetaData), NewProp_PathFollowingComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent = { "BrainComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, BrainComponent), Z_Construct_UClass_UBrainComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrainComponent_MetaData), NewProp_BrainComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x01140000000b0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp = { "ActionsComp", nullptr, (EPropertyFlags)0x014400002008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, ActionsComp_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnActionsComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionsComp_MetaData), NewProp_ActionsComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard = { "Blackboard", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, Blackboard), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Blackboard_MetaData), NewProp_Blackboard_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent = { "CachedGameplayTasksComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, CachedGameplayTasksComponent), Z_Construct_UClass_UGameplayTasksComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CachedGameplayTasksComponent_MetaData), NewProp_CachedGameplayTasksComponent_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass = { "DefaultNavigationFilterClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, DefaultNavigationFilterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavigationQueryFilter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultNavigationFilterClass_MetaData), NewProp_DefaultNavigationFilterClass_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted = { "ReceiveMoveCompleted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAIController, ReceiveMoveCompleted), Z_Construct_UDelegateFunction_AIModule_AIMoveCompletedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReceiveMoveCompleted_MetaData), NewProp_ReceiveMoveCompleted_MetaData) }; // 2259524416
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bStartAILogicOnPossess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bStopAILogicOnUnposses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bLOSflag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bSkipExtraLOSChecks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bAllowStrafe,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bWantsPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_bSetControlRotationFromPawnOrientation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_PathFollowingComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_BrainComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_PerceptionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_ActionsComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_Blackboard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_CachedGameplayTasksComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_DefaultNavigationFilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIController_Statics::NewProp_ReceiveMoveCompleted,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AController,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAIController_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAIPerceptionListenerInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IAIPerceptionListenerInterface), false },  // 1147580016
	{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IGameplayTaskOwnerInterface), false },  // 1243777696
	{ Z_Construct_UClass_UGenericTeamAgentInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IGenericTeamAgentInterface), false },  // 1380835789
	{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(AAIController, IVisualLoggerDebugSnapshotInterface), false },  // 1118534434
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAIController_Statics::ClassParams = {
	&AAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAIController_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AAIController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAIController()
{
	if (!Z_Registration_Info_UClass_AAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAIController.OuterSingleton, Z_Construct_UClass_AAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAIController.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<AAIController>()
{
	return AAIController::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController);
AAIController::~AAIController() {}
// End Class AAIController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAIController, AAIController::StaticClass, TEXT("AAIController"), &Z_Registration_Info_UClass_AAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAIController), 1874869069U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_620170266(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_AIController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
