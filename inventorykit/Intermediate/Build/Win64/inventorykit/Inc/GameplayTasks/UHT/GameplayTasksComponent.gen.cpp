// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTasksComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskResource_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister();
GAMEPLAYTASKS_API UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult();
GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature();
GAMEPLAYTASKS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayResourceSet();
UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References

// Begin Enum EGameplayTaskRunResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameplayTaskRunResult;
static UEnum* EGameplayTaskRunResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, (UObject*)Z_Construct_UPackage__Script_GameplayTasks(), TEXT("EGameplayTaskRunResult"));
	}
	return Z_Registration_Info_UEnum_EGameplayTaskRunResult.OuterSingleton;
}
template<> GAMEPLAYTASKS_API UEnum* StaticEnum<EGameplayTaskRunResult>()
{
	return EGameplayTaskRunResult_StaticEnum();
}
struct Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Error.Comment", "/** When tried running a null-task*/" },
		{ "Error.Name", "EGameplayTaskRunResult::Error" },
		{ "Error.ToolTip", "When tried running a null-task" },
		{ "Failed.Name", "EGameplayTaskRunResult::Failed" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "Success_Active.Comment", "/** Successfully activated */" },
		{ "Success_Active.Name", "EGameplayTaskRunResult::Success_Active" },
		{ "Success_Active.ToolTip", "Successfully activated" },
		{ "Success_Finished.Comment", "/** Successfully activated, but finished instantly */" },
		{ "Success_Finished.Name", "EGameplayTaskRunResult::Success_Finished" },
		{ "Success_Finished.ToolTip", "Successfully activated, but finished instantly" },
		{ "Success_Paused.Comment", "/** Successfully registered for running, but currently paused due to higher priority tasks running */" },
		{ "Success_Paused.Name", "EGameplayTaskRunResult::Success_Paused" },
		{ "Success_Paused.ToolTip", "Successfully registered for running, but currently paused due to higher priority tasks running" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameplayTaskRunResult::Error", (int64)EGameplayTaskRunResult::Error },
		{ "EGameplayTaskRunResult::Failed", (int64)EGameplayTaskRunResult::Failed },
		{ "EGameplayTaskRunResult::Success_Paused", (int64)EGameplayTaskRunResult::Success_Paused },
		{ "EGameplayTaskRunResult::Success_Active", (int64)EGameplayTaskRunResult::Success_Active },
		{ "EGameplayTaskRunResult::Success_Finished", (int64)EGameplayTaskRunResult::Success_Finished },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks,
	nullptr,
	"EGameplayTaskRunResult",
	"EGameplayTaskRunResult",
	Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult()
{
	if (!Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton, Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameplayTaskRunResult.InnerSingleton;
}
// End Enum EGameplayTaskRunResult

// Begin Delegate FOnClaimedResourcesChangeSignature
struct Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics
{
	struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms
	{
		FGameplayResourceSet NewlyClaimed;
		FGameplayResourceSet FreshlyReleased;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewlyClaimed;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FreshlyReleased;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_NewlyClaimed = { "NewlyClaimed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, NewlyClaimed), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(0, nullptr) }; // 3524138422
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_FreshlyReleased = { "FreshlyReleased", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms, FreshlyReleased), Z_Construct_UScriptStruct_FGameplayResourceSet, METADATA_PARAMS(0, nullptr) }; // 3524138422
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_NewlyClaimed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::NewProp_FreshlyReleased,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GameplayTasks, nullptr, "OnClaimedResourcesChangeSignature__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnClaimedResourcesChangeSignature_DelegateWrapper(const FMulticastScriptDelegate& OnClaimedResourcesChangeSignature, FGameplayResourceSet NewlyClaimed, FGameplayResourceSet FreshlyReleased)
{
	struct _Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms
	{
		FGameplayResourceSet NewlyClaimed;
		FGameplayResourceSet FreshlyReleased;
	};
	_Script_GameplayTasks_eventOnClaimedResourcesChangeSignature_Parms Parms;
	Parms.NewlyClaimed=NewlyClaimed;
	Parms.FreshlyReleased=FreshlyReleased;
	OnClaimedResourcesChangeSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnClaimedResourcesChangeSignature

// Begin Class UGameplayTasksComponent Function K2_RunGameplayTask
struct Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics
{
	struct GameplayTasksComponent_eventK2_RunGameplayTask_Parms
	{
		TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
		UGameplayTask* Task;
		uint8 Priority;
		TArray<TSubclassOf<UGameplayTaskResource> > AdditionalRequiredResources;
		TArray<TSubclassOf<UGameplayTaskResource> > AdditionalClaimedResources;
		EGameplayTaskRunResult ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "AdditionalRequiredResources, AdditionalClaimedResources" },
		{ "AutoCreateRefTerm", "AdditionalRequiredResources, AdditionalClaimedResources" },
		{ "Category", "Gameplay Tasks" },
		{ "DisplayName", "Run Gameplay Task" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ScriptName", "RunGameplayTask" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Task;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalRequiredResources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalRequiredResources;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AdditionalClaimedResources_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalClaimedResources;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Task = { "Task", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Task), Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, Priority), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources_Inner = { "AdditionalRequiredResources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources = { "AdditionalRequiredResources", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalRequiredResources), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources_Inner = { "AdditionalClaimedResources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayTaskResource_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources = { "AdditionalClaimedResources", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, AdditionalClaimedResources), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventK2_RunGameplayTask_Parms, ReturnValue), Z_Construct_UEnum_GameplayTasks_EGameplayTaskRunResult, METADATA_PARAMS(0, nullptr) }; // 947254131
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_TaskOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Task,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalRequiredResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_AdditionalClaimedResources,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, nullptr, "K2_RunGameplayTask", nullptr, nullptr, Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::GameplayTasksComponent_eventK2_RunGameplayTask_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::GameplayTasksComponent_eventK2_RunGameplayTask_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTasksComponent::execK2_RunGameplayTask)
{
	P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
	P_GET_OBJECT(UGameplayTask,Z_Param_Task);
	P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
	P_GET_TARRAY(TSubclassOf<UGameplayTaskResource>,Z_Param_AdditionalRequiredResources);
	P_GET_TARRAY(TSubclassOf<UGameplayTaskResource>,Z_Param_AdditionalClaimedResources);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EGameplayTaskRunResult*)Z_Param__Result=UGameplayTasksComponent::K2_RunGameplayTask(Z_Param_TaskOwner,Z_Param_Task,Z_Param_Priority,Z_Param_AdditionalRequiredResources,Z_Param_AdditionalClaimedResources);
	P_NATIVE_END;
}
// End Class UGameplayTasksComponent Function K2_RunGameplayTask

// Begin Class UGameplayTasksComponent Function OnRep_SimulatedTasks
struct Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics
{
	struct GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms
	{
		TArray<UGameplayTask*> PreviousSimulatedTasks;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousSimulatedTasks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PreviousSimulatedTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviousSimulatedTasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_Inner = { "PreviousSimulatedTasks", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks = { "PreviousSimulatedTasks", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms, PreviousSimulatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousSimulatedTasks_MetaData), NewProp_PreviousSimulatedTasks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::NewProp_PreviousSimulatedTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTasksComponent, nullptr, "OnRep_SimulatedTasks", nullptr, nullptr, Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::GameplayTasksComponent_eventOnRep_SimulatedTasks_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTasksComponent::execOnRep_SimulatedTasks)
{
	P_GET_TARRAY_REF(UGameplayTask*,Z_Param_Out_PreviousSimulatedTasks);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_SimulatedTasks(Z_Param_Out_PreviousSimulatedTasks);
	P_NATIVE_END;
}
// End Class UGameplayTasksComponent Function OnRep_SimulatedTasks

// Begin Class UGameplayTasksComponent
void UGameplayTasksComponent::StaticRegisterNativesUGameplayTasksComponent()
{
	UClass* Class = UGameplayTasksComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "K2_RunGameplayTask", &UGameplayTasksComponent::execK2_RunGameplayTask },
		{ "OnRep_SimulatedTasks", &UGameplayTasksComponent::execOnRep_SimulatedTasks },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTasksComponent);
UClass* Z_Construct_UClass_UGameplayTasksComponent_NoRegister()
{
	return UGameplayTasksComponent::StaticClass();
}
struct Z_Construct_UClass_UGameplayTasksComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "GameplayTasks" },
		{ "Comment", "/**\n*\x09The core ActorComponent for interfacing with the GameplayAbilities System\n*/" },
		{ "HideCategories", "Object LOD Lighting Transform Sockets TextureStreaming" },
		{ "IncludePath", "GameplayTasksComponent.h" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "The core ActorComponent for interfacing with the GameplayAbilities System" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TaskPriorityQueue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TickingTasks_MetaData[] = {
		{ "Comment", "/** Array of currently active UGameplayTask that require ticking */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Array of currently active UGameplayTask that require ticking" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KnownTasks_MetaData[] = {
		{ "Comment", "/** All known tasks (processed by this component) referenced for GC */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "All known tasks (processed by this component) referenced for GC" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClaimedResourcesChange_MetaData[] = {
		{ "Category", "Gameplay Tasks" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimulatedTasks_MetaData[] = {
		{ "Comment", "/** Tasks that run on simulated proxies */" },
		{ "ModuleRelativePath", "Classes/GameplayTasksComponent.h" },
		{ "ToolTip", "Tasks that run on simulated proxies" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TaskPriorityQueue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TaskPriorityQueue;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TickingTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TickingTasks;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_KnownTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_KnownTasks;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClaimedResourcesChange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimulatedTasks_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulatedTasks;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayTasksComponent_K2_RunGameplayTask, "K2_RunGameplayTask" }, // 1777224675
		{ &Z_Construct_UFunction_UGameplayTasksComponent_OnRep_SimulatedTasks, "OnRep_SimulatedTasks" }, // 3448915690
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTasksComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_Inner = { "TaskPriorityQueue", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue = { "TaskPriorityQueue", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTasksComponent, TaskPriorityQueue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TaskPriorityQueue_MetaData), NewProp_TaskPriorityQueue_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_Inner = { "TickingTasks", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks = { "TickingTasks", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTasksComponent, TickingTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TickingTasks_MetaData), NewProp_TickingTasks_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_Inner = { "KnownTasks", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks = { "KnownTasks", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTasksComponent, KnownTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KnownTasks_MetaData), NewProp_KnownTasks_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange = { "OnClaimedResourcesChange", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTasksComponent, OnClaimedResourcesChange), Z_Construct_UDelegateFunction_GameplayTasks_OnClaimedResourcesChangeSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClaimedResourcesChange_MetaData), NewProp_OnClaimedResourcesChange_MetaData) }; // 1586867622
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_Inner = { "SimulatedTasks", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UGameplayTask_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks = { "SimulatedTasks", "OnRep_SimulatedTasks", (EPropertyFlags)0x0144000100000020, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTasksComponent, SimulatedTasks), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimulatedTasks_MetaData), NewProp_SimulatedTasks_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TaskPriorityQueue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_TickingTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_KnownTasks,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_OnClaimedResourcesChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTasksComponent_Statics::NewProp_SimulatedTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTasksComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UGameplayTasksComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTasksComponent, IGameplayTaskOwnerInterface), false },  // 1243777696
	{ Z_Construct_UClass_UVisualLoggerDebugSnapshotInterface_NoRegister, (int32)VTABLE_OFFSET(UGameplayTasksComponent, IVisualLoggerDebugSnapshotInterface), false },  // 1118534434
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams = {
	&UGameplayTasksComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A810A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTasksComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTasksComponent()
{
	if (!Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton, Z_Construct_UClass_UGameplayTasksComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTasksComponent.OuterSingleton;
}
template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTasksComponent>()
{
	return UGameplayTasksComponent::StaticClass();
}
void UGameplayTasksComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_SimulatedTasks(TEXT("SimulatedTasks"));
	const bool bIsValid = true
		&& Name_SimulatedTasks == ClassReps[(int32)ENetFields_Private::SimulatedTasks].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameplayTasksComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTasksComponent);
UGameplayTasksComponent::~UGameplayTasksComponent() {}
// End Class UGameplayTasksComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameplayTaskRunResult_StaticEnum, TEXT("EGameplayTaskRunResult"), &Z_Registration_Info_UEnum_EGameplayTaskRunResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 947254131U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTasksComponent, UGameplayTasksComponent::StaticClass, TEXT("UGameplayTasksComponent"), &Z_Registration_Info_UClass_UGameplayTasksComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTasksComponent), 2539947876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_3975267284(TEXT("/Script/GameplayTasks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_GameplayTasksComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
