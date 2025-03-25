// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/GameplayTasks/Classes/Tasks/GameplayTask_WaitDelay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayTask_WaitDelay() {}

// Begin Cross Module References
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister();
GAMEPLAYTASKS_API UClass* Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister();
GAMEPLAYTASKS_API UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameplayTasks();
// End Cross Module References

// Begin Delegate FTaskDelayDelegate
struct Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, nullptr, "TaskDelayDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UGameplayTask_WaitDelay::FTaskDelayDelegate_DelegateWrapper(const FMulticastScriptDelegate& TaskDelayDelegate)
{
	TaskDelayDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FTaskDelayDelegate

// Begin Class UGameplayTask_WaitDelay Function TaskWaitDelay
struct Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics
{
	struct GameplayTask_WaitDelay_eventTaskWaitDelay_Parms
	{
		TScriptInterface<IGameplayTaskOwnerInterface> TaskOwner;
		float Time;
		uint8 Priority;
		UGameplayTask_WaitDelay* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "TaskOwner, Priority" },
		{ "BlueprintInternalUseOnly", "TRUE" },
		{ "Category", "GameplayTasks" },
		{ "Comment", "/** Wait specified time. This is functionally the same as a standard Delay node. */" },
		{ "CPP_Default_Priority", "192" },
		{ "DefaultToSelf", "TaskOwner" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
		{ "ToolTip", "Wait specified time. This is functionally the same as a standard Delay node." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_TaskOwner;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Priority;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_TaskOwner = { "TaskOwner", nullptr, (EPropertyFlags)0x0014040000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, TaskOwner), Z_Construct_UClass_UGameplayTaskOwnerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010040000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, Priority), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameplayTask_WaitDelay_eventTaskWaitDelay_Parms, ReturnValue), Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_TaskOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayTask_WaitDelay, nullptr, "TaskWaitDelay", nullptr, nullptr, Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::GameplayTask_WaitDelay_eventTaskWaitDelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::GameplayTask_WaitDelay_eventTaskWaitDelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameplayTask_WaitDelay::execTaskWaitDelay)
{
	P_GET_TINTERFACE(IGameplayTaskOwnerInterface,Z_Param_TaskOwner);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_PROPERTY(FByteProperty,Z_Param_Priority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGameplayTask_WaitDelay**)Z_Param__Result=UGameplayTask_WaitDelay::TaskWaitDelay(Z_Param_TaskOwner,Z_Param_Time,Z_Param_Priority);
	P_NATIVE_END;
}
// End Class UGameplayTask_WaitDelay Function TaskWaitDelay

// Begin Class UGameplayTask_WaitDelay
void UGameplayTask_WaitDelay::StaticRegisterNativesUGameplayTask_WaitDelay()
{
	UClass* Class = UGameplayTask_WaitDelay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TaskWaitDelay", &UGameplayTask_WaitDelay::execTaskWaitDelay },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameplayTask_WaitDelay);
UClass* Z_Construct_UClass_UGameplayTask_WaitDelay_NoRegister()
{
	return UGameplayTask_WaitDelay::StaticClass();
}
struct Z_Construct_UClass_UGameplayTask_WaitDelay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Tasks/GameplayTask_WaitDelay.h" },
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFinish_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Tasks/GameplayTask_WaitDelay.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, "TaskDelayDelegate__DelegateSignature" }, // 3318904057
		{ &Z_Construct_UFunction_UGameplayTask_WaitDelay_TaskWaitDelay, "TaskWaitDelay" }, // 3356721679
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayTask_WaitDelay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish = { "OnFinish", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameplayTask_WaitDelay, OnFinish), Z_Construct_UDelegateFunction_UGameplayTask_WaitDelay_TaskDelayDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFinish_MetaData), NewProp_OnFinish_MetaData) }; // 3318904057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::NewProp_OnFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayTask,
	(UObject* (*)())Z_Construct_UPackage__Script_GameplayTasks,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams = {
	&UGameplayTask_WaitDelay::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::PropPointers),
	0,
	0x008800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameplayTask_WaitDelay()
{
	if (!Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton, Z_Construct_UClass_UGameplayTask_WaitDelay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameplayTask_WaitDelay.OuterSingleton;
}
template<> GAMEPLAYTASKS_API UClass* StaticClass<UGameplayTask_WaitDelay>()
{
	return UGameplayTask_WaitDelay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayTask_WaitDelay);
UGameplayTask_WaitDelay::~UGameplayTask_WaitDelay() {}
// End Class UGameplayTask_WaitDelay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameplayTask_WaitDelay, UGameplayTask_WaitDelay::StaticClass, TEXT("UGameplayTask_WaitDelay"), &Z_Registration_Info_UClass_UGameplayTask_WaitDelay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameplayTask_WaitDelay), 779418768U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_2255858676(TEXT("/Script/GameplayTasks"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_GameplayTasks_Classes_Tasks_GameplayTask_WaitDelay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
