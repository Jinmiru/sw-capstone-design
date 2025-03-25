// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/CancellableAsyncAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCancellableAsyncAction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction();
ENGINE_API UClass* Z_Construct_UClass_UCancellableAsyncAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UCancellableAsyncAction Function Cancel
struct Z_Construct_UFunction_UCancellableAsyncAction_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Action" },
		{ "Comment", "/** Cancel an asynchronous action, this attempts to cancel any lower level processes and also prevents delegates from being fired */" },
		{ "ModuleRelativePath", "Classes/Engine/CancellableAsyncAction.h" },
		{ "ToolTip", "Cancel an asynchronous action, this attempts to cancel any lower level processes and also prevents delegates from being fired" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCancellableAsyncAction_Cancel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCancellableAsyncAction, nullptr, "Cancel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCancellableAsyncAction_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCancellableAsyncAction_Cancel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UCancellableAsyncAction_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCancellableAsyncAction_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCancellableAsyncAction::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// End Class UCancellableAsyncAction Function Cancel

// Begin Class UCancellableAsyncAction Function IsActive
struct Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics
{
	struct CancellableAsyncAction_eventIsActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Async Action" },
		{ "Comment", "/** Returns true if this action is still active and has not completed or been cancelled */" },
		{ "ModuleRelativePath", "Classes/Engine/CancellableAsyncAction.h" },
		{ "ToolTip", "Returns true if this action is still active and has not completed or been cancelled" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((CancellableAsyncAction_eventIsActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CancellableAsyncAction_eventIsActive_Parms), &Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCancellableAsyncAction, nullptr, "IsActive", nullptr, nullptr, Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::CancellableAsyncAction_eventIsActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::CancellableAsyncAction_eventIsActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCancellableAsyncAction_IsActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCancellableAsyncAction_IsActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCancellableAsyncAction::execIsActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsActive();
	P_NATIVE_END;
}
// End Class UCancellableAsyncAction Function IsActive

// Begin Class UCancellableAsyncAction
void UCancellableAsyncAction::StaticRegisterNativesUCancellableAsyncAction()
{
	UClass* Class = UCancellableAsyncAction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cancel", &UCancellableAsyncAction::execCancel },
		{ "IsActive", &UCancellableAsyncAction::execIsActive },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCancellableAsyncAction);
UClass* Z_Construct_UClass_UCancellableAsyncAction_NoRegister()
{
	return UCancellableAsyncAction::StaticClass();
}
struct Z_Construct_UClass_UCancellableAsyncAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * base class for asynchronous actions that can be spawned from UK2Node_AsyncAction or C++ code.\n * These actions register themselves with the game instance and need to be explicitly canceled or ended normally to go away.\n * The ExposedAsyncProxy metadata specifies the blueprint node will return this object for later canceling.\n */" },
		{ "ExposedAsyncProxy", "AsyncAction" },
		{ "IncludePath", "Engine/CancellableAsyncAction.h" },
		{ "ModuleRelativePath", "Classes/Engine/CancellableAsyncAction.h" },
		{ "ToolTip", "base class for asynchronous actions that can be spawned from UK2Node_AsyncAction or C++ code.\nThese actions register themselves with the game instance and need to be explicitly canceled or ended normally to go away.\nThe ExposedAsyncProxy metadata specifies the blueprint node will return this object for later canceling." },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCancellableAsyncAction_Cancel, "Cancel" }, // 1777863175
		{ &Z_Construct_UFunction_UCancellableAsyncAction_IsActive, "IsActive" }, // 3392286564
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCancellableAsyncAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCancellableAsyncAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCancellableAsyncAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCancellableAsyncAction_Statics::ClassParams = {
	&UCancellableAsyncAction::StaticClass,
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
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCancellableAsyncAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UCancellableAsyncAction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCancellableAsyncAction()
{
	if (!Z_Registration_Info_UClass_UCancellableAsyncAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCancellableAsyncAction.OuterSingleton, Z_Construct_UClass_UCancellableAsyncAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCancellableAsyncAction.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UCancellableAsyncAction>()
{
	return UCancellableAsyncAction::StaticClass();
}
UCancellableAsyncAction::UCancellableAsyncAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCancellableAsyncAction);
UCancellableAsyncAction::~UCancellableAsyncAction() {}
// End Class UCancellableAsyncAction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCancellableAsyncAction, UCancellableAsyncAction::StaticClass, TEXT("UCancellableAsyncAction"), &Z_Registration_Info_UClass_UCancellableAsyncAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCancellableAsyncAction), 2919917740U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_1315367019(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CancellableAsyncAction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
