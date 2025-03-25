// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrainComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent();
AIMODULE_API UClass* Z_Construct_UClass_UBrainComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UBrainComponent Function IsPaused
struct Z_Construct_UFunction_UBrainComponent_IsPaused_Statics
{
	struct BrainComponent_eventIsPaused_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BrainComponent_eventIsPaused_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BrainComponent_eventIsPaused_Parms), &Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsPaused", nullptr, nullptr, Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::BrainComponent_eventIsPaused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::BrainComponent_eventIsPaused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrainComponent_IsPaused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsPaused_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrainComponent::execIsPaused)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPaused();
	P_NATIVE_END;
}
// End Class UBrainComponent Function IsPaused

// Begin Class UBrainComponent Function IsRunning
struct Z_Construct_UFunction_UBrainComponent_IsRunning_Statics
{
	struct BrainComponent_eventIsRunning_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((BrainComponent_eventIsRunning_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BrainComponent_eventIsRunning_Parms), &Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "IsRunning", nullptr, nullptr, Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::BrainComponent_eventIsRunning_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::BrainComponent_eventIsRunning_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrainComponent_IsRunning()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_IsRunning_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrainComponent::execIsRunning)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRunning();
	P_NATIVE_END;
}
// End Class UBrainComponent Function IsRunning

// Begin Class UBrainComponent Function RestartLogic
struct Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Restarts currently running or previously ran brain logic. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Restarts currently running or previously ran brain logic." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "RestartLogic", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBrainComponent_RestartLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_RestartLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrainComponent::execRestartLogic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartLogic();
	P_NATIVE_END;
}
// End Class UBrainComponent Function RestartLogic

// Begin Class UBrainComponent Function StartLogic
struct Z_Construct_UFunction_UBrainComponent_StartLogic_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Starts brain logic. If brain is already running, will not do anything. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Starts brain logic. If brain is already running, will not do anything." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StartLogic", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBrainComponent_StartLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_StartLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrainComponent::execStartLogic)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartLogic();
	P_NATIVE_END;
}
// End Class UBrainComponent Function StartLogic

// Begin Class UBrainComponent Function StopLogic
struct Z_Construct_UFunction_UBrainComponent_StopLogic_Statics
{
	struct BrainComponent_eventStopLogic_Parms
	{
		FString Reason;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Logic" },
		{ "Comment", "/** Stops currently running brain logic. */" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "Stops currently running brain logic." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BrainComponent_eventStopLogic_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::NewProp_Reason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBrainComponent, nullptr, "StopLogic", nullptr, nullptr, Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::BrainComponent_eventStopLogic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::BrainComponent_eventStopLogic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBrainComponent_StopLogic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBrainComponent_StopLogic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBrainComponent::execStopLogic)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopLogic(Z_Param_Reason);
	P_NATIVE_END;
}
// End Class UBrainComponent Function StopLogic

// Begin Class UBrainComponent
void UBrainComponent::StaticRegisterNativesUBrainComponent()
{
	UClass* Class = UBrainComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsPaused", &UBrainComponent::execIsPaused },
		{ "IsRunning", &UBrainComponent::execIsRunning },
		{ "RestartLogic", &UBrainComponent::execRestartLogic },
		{ "StartLogic", &UBrainComponent::execStartLogic },
		{ "StopLogic", &UBrainComponent::execStopLogic },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrainComponent);
UClass* Z_Construct_UClass_UBrainComponent_NoRegister()
{
	return UBrainComponent::StaticClass();
}
struct Z_Construct_UClass_UBrainComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "HideCategories", "Sockets Collision" },
		{ "IncludePath", "BrainComponent.h" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "Comment", "/** blackboard component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
		{ "ToolTip", "blackboard component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIOwner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BrainComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIOwner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBrainComponent_IsPaused, "IsPaused" }, // 3967550111
		{ &Z_Construct_UFunction_UBrainComponent_IsRunning, "IsRunning" }, // 1004357578
		{ &Z_Construct_UFunction_UBrainComponent_RestartLogic, "RestartLogic" }, // 2373146713
		{ &Z_Construct_UFunction_UBrainComponent_StartLogic, "StartLogic" }, // 187727362
		{ &Z_Construct_UFunction_UBrainComponent_StopLogic, "StopLogic" }, // 1594902369
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrainComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrainComponent, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner = { "AIOwner", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBrainComponent, AIOwner), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIOwner_MetaData), NewProp_AIOwner_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBrainComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_BlackboardComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBrainComponent_Statics::NewProp_AIOwner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBrainComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBrainComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UBrainComponent, IAIResourceInterface), false },  // 1205303296
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrainComponent_Statics::ClassParams = {
	&UBrainComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBrainComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UBrainComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBrainComponent()
{
	if (!Z_Registration_Info_UClass_UBrainComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrainComponent.OuterSingleton, Z_Construct_UClass_UBrainComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBrainComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UBrainComponent>()
{
	return UBrainComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBrainComponent);
UBrainComponent::~UBrainComponent() {}
// End Class UBrainComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBrainComponent, UBrainComponent::StaticClass, TEXT("UBrainComponent"), &Z_Registration_Info_UClass_UBrainComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrainComponent), 3559099819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_4154338315(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_BrainComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
