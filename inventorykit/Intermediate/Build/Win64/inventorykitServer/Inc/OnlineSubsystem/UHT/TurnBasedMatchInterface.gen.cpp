// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/Interfaces/TurnBasedMatchInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurnBasedMatchInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface();
ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References

// Begin Interface UTurnBasedMatchInterface Function OnMatchEnded
struct TurnBasedMatchInterface_eventOnMatchEnded_Parms
{
	FString Match;
};
void ITurnBasedMatchInterface::OnMatchEnded(const FString& Match)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMatchEnded instead.");
}
static FName NAME_UTurnBasedMatchInterface_OnMatchEnded = FName(TEXT("OnMatchEnded"));
void ITurnBasedMatchInterface::Execute_OnMatchEnded(UObject* O, const FString& Match)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTurnBasedMatchInterface::StaticClass()));
	TurnBasedMatchInterface_eventOnMatchEnded_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTurnBasedMatchInterface_OnMatchEnded);
	if (Func)
	{
		Parms.Match=Match;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "Public/Interfaces/TurnBasedMatchInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Match;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedMatchInterface_eventOnMatchEnded_Parms, Match), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::NewProp_Match,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedMatchInterface, nullptr, "OnMatchEnded", nullptr, nullptr, Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::PropPointers), sizeof(TurnBasedMatchInterface_eventOnMatchEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(TurnBasedMatchInterface_eventOnMatchEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UTurnBasedMatchInterface Function OnMatchEnded

// Begin Interface UTurnBasedMatchInterface Function OnMatchReceivedTurn
struct TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms
{
	FString Match;
	bool bDidBecomeActive;
};
void ITurnBasedMatchInterface::OnMatchReceivedTurn(const FString& Match, bool bDidBecomeActive)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnMatchReceivedTurn instead.");
}
static FName NAME_UTurnBasedMatchInterface_OnMatchReceivedTurn = FName(TEXT("OnMatchReceivedTurn"));
void ITurnBasedMatchInterface::Execute_OnMatchReceivedTurn(UObject* O, const FString& Match, bool bDidBecomeActive)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTurnBasedMatchInterface::StaticClass()));
	TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTurnBasedMatchInterface_OnMatchReceivedTurn);
	if (Func)
	{
		Parms.Match=Match;
		Parms.bDidBecomeActive=bDidBecomeActive;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|TurnBased" },
		{ "ModuleRelativePath", "Public/Interfaces/TurnBasedMatchInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Match_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Match;
	static void NewProp_bDidBecomeActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDidBecomeActive;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match = { "Match", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms, Match), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Match_MetaData), NewProp_Match_MetaData) };
void Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive_SetBit(void* Obj)
{
	((TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms*)Obj)->bDidBecomeActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive = { "bDidBecomeActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms), &Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_Match,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::NewProp_bDidBecomeActive,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTurnBasedMatchInterface, nullptr, "OnMatchReceivedTurn", nullptr, nullptr, Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::PropPointers), sizeof(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::Function_MetaDataParams) };
static_assert(sizeof(TurnBasedMatchInterface_eventOnMatchReceivedTurn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UTurnBasedMatchInterface Function OnMatchReceivedTurn

// Begin Interface UTurnBasedMatchInterface
void UTurnBasedMatchInterface::StaticRegisterNativesUTurnBasedMatchInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTurnBasedMatchInterface);
UClass* Z_Construct_UClass_UTurnBasedMatchInterface_NoRegister()
{
	return UTurnBasedMatchInterface::StaticClass();
}
struct Z_Construct_UClass_UTurnBasedMatchInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/TurnBasedMatchInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchEnded, "OnMatchEnded" }, // 1066078806
		{ &Z_Construct_UFunction_UTurnBasedMatchInterface_OnMatchReceivedTurn, "OnMatchReceivedTurn" }, // 1927335941
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITurnBasedMatchInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTurnBasedMatchInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnBasedMatchInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTurnBasedMatchInterface_Statics::ClassParams = {
	&UTurnBasedMatchInterface::StaticClass,
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
	0x000040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTurnBasedMatchInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTurnBasedMatchInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTurnBasedMatchInterface()
{
	if (!Z_Registration_Info_UClass_UTurnBasedMatchInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTurnBasedMatchInterface.OuterSingleton, Z_Construct_UClass_UTurnBasedMatchInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTurnBasedMatchInterface.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UClass* StaticClass<UTurnBasedMatchInterface>()
{
	return UTurnBasedMatchInterface::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTurnBasedMatchInterface);
UTurnBasedMatchInterface::~UTurnBasedMatchInterface() {}
// End Interface UTurnBasedMatchInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTurnBasedMatchInterface, UTurnBasedMatchInterface::StaticClass, TEXT("UTurnBasedMatchInterface"), &Z_Registration_Info_UClass_UTurnBasedMatchInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTurnBasedMatchInterface), 2808768665U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_2894807913(TEXT("/Script/OnlineSubsystem"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_Interfaces_TurnBasedMatchInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
