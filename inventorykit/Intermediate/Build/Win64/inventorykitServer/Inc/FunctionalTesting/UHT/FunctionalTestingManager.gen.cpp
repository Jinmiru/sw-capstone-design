// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Developer/FunctionalTesting/Classes/FunctionalTestingManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFunctionalTestingManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_AFunctionalTest_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager();
FUNCTIONALTESTING_API UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister();
FUNCTIONALTESTING_API UFunction* Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_FunctionalTesting();
// End Cross Module References

// Begin Class UFunctionalTestingManager Function RunAllFunctionalTests
struct Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics
{
	struct FunctionalTestingManager_eventRunAllFunctionalTests_Parms
	{
		UObject* WorldContextObject;
		bool bNewLog;
		bool bRunLooped;
		FString FailedTestsReproString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "CallableWithoutWorldContext", "" },
		{ "Category", "FunctionalTesting" },
		{ "Comment", "/**\n\x09 * Triggers in sequence all functional tests found on the level.\n\x09 * @return true if any tests have been triggered\n\x09 */" },
		{ "CPP_Default_bNewLog", "true" },
		{ "CPP_Default_bRunLooped", "false" },
		{ "CPP_Default_FailedTestsReproString", "" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
		{ "ToolTip", "Triggers in sequence all functional tests found on the level.\n@return true if any tests have been triggered" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static void NewProp_bNewLog_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLog;
	static void NewProp_bRunLooped_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRunLooped;
	static const UECodeGen_Private::FStrPropertyParams NewProp_FailedTestsReproString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit(void* Obj)
{
	((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bNewLog = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog = { "bNewLog", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit(void* Obj)
{
	((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->bRunLooped = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped = { "bRunLooped", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString = { "FailedTestsReproString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FunctionalTestingManager_eventRunAllFunctionalTests_Parms, FailedTestsReproString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FunctionalTestingManager_eventRunAllFunctionalTests_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FunctionalTestingManager_eventRunAllFunctionalTests_Parms), &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bNewLog,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_bRunLooped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_FailedTestsReproString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFunctionalTestingManager, nullptr, "RunAllFunctionalTests", nullptr, nullptr, Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FunctionalTestingManager_eventRunAllFunctionalTests_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FunctionalTestingManager_eventRunAllFunctionalTests_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFunctionalTestingManager::execRunAllFunctionalTests)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_UBOOL(Z_Param_bNewLog);
	P_GET_UBOOL(Z_Param_bRunLooped);
	P_GET_PROPERTY(FStrProperty,Z_Param_FailedTestsReproString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UFunctionalTestingManager::RunAllFunctionalTests(Z_Param_WorldContextObject,Z_Param_bNewLog,Z_Param_bRunLooped,Z_Param_FailedTestsReproString);
	P_NATIVE_END;
}
// End Class UFunctionalTestingManager Function RunAllFunctionalTests

// Begin Class UFunctionalTestingManager
void UFunctionalTestingManager::StaticRegisterNativesUFunctionalTestingManager()
{
	UClass* Class = UFunctionalTestingManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RunAllFunctionalTests", &UFunctionalTestingManager::execRunAllFunctionalTests },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFunctionalTestingManager);
UClass* Z_Construct_UClass_UFunctionalTestingManager_NoRegister()
{
	return UFunctionalTestingManager::StaticClass();
}
struct Z_Construct_UClass_UFunctionalTestingManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestsLeft_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSetupTests_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTestsComplete_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTestsBegin_MetaData[] = {
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TestsLeft_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TestsLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllTests_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllTests;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetupTests;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsComplete;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTestsBegin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFunctionalTestingManager_RunAllFunctionalTests, "RunAllFunctionalTests" }, // 908902817
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFunctionalTestingManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner = { "TestsLeft", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft = { "TestsLeft", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFunctionalTestingManager, TestsLeft), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestsLeft_MetaData), NewProp_TestsLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner = { "AllTests", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AFunctionalTest_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests = { "AllTests", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFunctionalTestingManager, AllTests), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllTests_MetaData), NewProp_AllTests_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests = { "OnSetupTests", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFunctionalTestingManager, OnSetupTests), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSetupTests_MetaData), NewProp_OnSetupTests_MetaData) }; // 2981851264
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete = { "OnTestsComplete", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsComplete), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTestsComplete_MetaData), NewProp_OnTestsComplete_MetaData) }; // 2981851264
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin = { "OnTestsBegin", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFunctionalTestingManager, OnTestsBegin), Z_Construct_UDelegateFunction_FunctionalTesting_FunctionalTestEventSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTestsBegin_MetaData), NewProp_OnTestsBegin_MetaData) }; // 2981851264
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_TestsLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_AllTests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnSetupTests,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsComplete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFunctionalTestingManager_Statics::NewProp_OnTestsBegin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFunctionalTestingManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams = {
	&UFunctionalTestingManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UFunctionalTestingManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFunctionalTestingManager()
{
	if (!Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton, Z_Construct_UClass_UFunctionalTestingManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFunctionalTestingManager.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<UFunctionalTestingManager>()
{
	return UFunctionalTestingManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFunctionalTestingManager);
UFunctionalTestingManager::~UFunctionalTestingManager() {}
// End Class UFunctionalTestingManager

// Begin Class APhasedAutomationActorBase Function OnFunctionalTestingBegin
static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin = FName(TEXT("OnFunctionalTestingBegin"));
void APhasedAutomationActorBase::OnFunctionalTestingBegin()
{
	ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingBegin),NULL);
}
struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, nullptr, "OnFunctionalTestingBegin", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APhasedAutomationActorBase Function OnFunctionalTestingBegin

// Begin Class APhasedAutomationActorBase Function OnFunctionalTestingComplete
static FName NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete = FName(TEXT("OnFunctionalTestingComplete"));
void APhasedAutomationActorBase::OnFunctionalTestingComplete()
{
	ProcessEvent(FindFunctionChecked(NAME_APhasedAutomationActorBase_OnFunctionalTestingComplete),NULL);
}
struct Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Automation" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APhasedAutomationActorBase, nullptr, "OnFunctionalTestingComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class APhasedAutomationActorBase Function OnFunctionalTestingComplete

// Begin Class APhasedAutomationActorBase
void APhasedAutomationActorBase::StaticRegisterNativesAPhasedAutomationActorBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APhasedAutomationActorBase);
UClass* Z_Construct_UClass_APhasedAutomationActorBase_NoRegister()
{
	return APhasedAutomationActorBase::StaticClass();
}
struct Z_Construct_UClass_APhasedAutomationActorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "FunctionalTestingManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/FunctionalTestingManager.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingBegin, "OnFunctionalTestingBegin" }, // 2969167955
		{ &Z_Construct_UFunction_APhasedAutomationActorBase_OnFunctionalTestingComplete, "OnFunctionalTestingComplete" }, // 2432407146
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APhasedAutomationActorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APhasedAutomationActorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_FunctionalTesting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APhasedAutomationActorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams = {
	&APhasedAutomationActorBase::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x008800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APhasedAutomationActorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APhasedAutomationActorBase()
{
	if (!Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton, Z_Construct_UClass_APhasedAutomationActorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APhasedAutomationActorBase.OuterSingleton;
}
template<> FUNCTIONALTESTING_API UClass* StaticClass<APhasedAutomationActorBase>()
{
	return APhasedAutomationActorBase::StaticClass();
}
APhasedAutomationActorBase::APhasedAutomationActorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(APhasedAutomationActorBase);
APhasedAutomationActorBase::~APhasedAutomationActorBase() {}
// End Class APhasedAutomationActorBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFunctionalTestingManager, UFunctionalTestingManager::StaticClass, TEXT("UFunctionalTestingManager"), &Z_Registration_Info_UClass_UFunctionalTestingManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFunctionalTestingManager), 2320803953U) },
		{ Z_Construct_UClass_APhasedAutomationActorBase, APhasedAutomationActorBase::StaticClass, TEXT("APhasedAutomationActorBase"), &Z_Registration_Info_UClass_APhasedAutomationActorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APhasedAutomationActorBase), 2818106230U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_888978302(TEXT("/Script/FunctionalTesting"),
	Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_FunctionalTesting_Classes_FunctionalTestingManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
