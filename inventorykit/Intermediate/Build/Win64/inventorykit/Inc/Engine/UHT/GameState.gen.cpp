// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/GameState.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameState() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class AGameState Function OnRep_ElapsedTime
struct Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Gives clients the chance to do something when time gets updates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Gives clients the chance to do something when time gets updates" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState, nullptr, "OnRep_ElapsedTime", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameState_OnRep_ElapsedTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameState_OnRep_ElapsedTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameState::execOnRep_ElapsedTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ElapsedTime();
	P_NATIVE_END;
}
// End Class AGameState Function OnRep_ElapsedTime

// Begin Class AGameState Function OnRep_MatchState
struct Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Match state has changed */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Match state has changed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGameState, nullptr, "OnRep_MatchState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AGameState_OnRep_MatchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameState_OnRep_MatchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameState::execOnRep_MatchState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_MatchState();
	P_NATIVE_END;
}
// End Class AGameState Function OnRep_MatchState

// Begin Class AGameState
void AGameState::StaticRegisterNativesAGameState()
{
	UClass* Class = AGameState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnRep_ElapsedTime", &AGameState::execOnRep_ElapsedTime },
		{ "OnRep_MatchState", &AGameState::execOnRep_MatchState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameState);
UClass* Z_Construct_UClass_AGameState_NoRegister()
{
	return AGameState::StaticClass();
}
struct Z_Construct_UClass_AGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * GameState is a subclass of GameStateBase that behaves like a multiplayer match-based game.\n * It is tied to functionality in GameMode.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/GameState.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "GameState is a subclass of GameStateBase that behaves like a multiplayer match-based game.\nIt is tied to functionality in GameMode." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchState_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** What match state we are currently in */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "What match state we are currently in" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousMatchState_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Previous map state, used to handle if multiple transitions happen per frame */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Previous map state, used to handle if multiple transitions happen per frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[] = {
		{ "Category", "GameState" },
		{ "Comment", "/** Elapsed game time since match has started. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/GameState.h" },
		{ "ToolTip", "Elapsed game time since match has started." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_MatchState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PreviousMatchState;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ElapsedTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameState_OnRep_ElapsedTime, "OnRep_ElapsedTime" }, // 3874107205
		{ &Z_Construct_UFunction_AGameState_OnRep_MatchState, "OnRep_MatchState" }, // 3266527749
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameState_Statics::NewProp_MatchState = { "MatchState", "OnRep_MatchState", (EPropertyFlags)0x0020080100020835, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameState, MatchState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchState_MetaData), NewProp_MatchState_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState = { "PreviousMatchState", nullptr, (EPropertyFlags)0x0020080000020815, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameState, PreviousMatchState), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousMatchState_MetaData), NewProp_PreviousMatchState_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime = { "ElapsedTime", "OnRep_ElapsedTime", (EPropertyFlags)0x0010000100000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameState, ElapsedTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ElapsedTime_MetaData), NewProp_ElapsedTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_Statics::NewProp_MatchState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_Statics::NewProp_PreviousMatchState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameState_Statics::NewProp_ElapsedTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameState_Statics::ClassParams = {
	&AGameState::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameState_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameState_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameState()
{
	if (!Z_Registration_Info_UClass_AGameState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameState.OuterSingleton, Z_Construct_UClass_AGameState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameState.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<AGameState>()
{
	return AGameState::StaticClass();
}
void AGameState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MatchState(TEXT("MatchState"));
	static const FName Name_ElapsedTime(TEXT("ElapsedTime"));
	const bool bIsValid = true
		&& Name_MatchState == ClassReps[(int32)ENetFields_Private::MatchState].Property->GetFName()
		&& Name_ElapsedTime == ClassReps[(int32)ENetFields_Private::ElapsedTime].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AGameState"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameState);
AGameState::~AGameState() {}
// End Class AGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameState, AGameState::StaticClass, TEXT("AGameState"), &Z_Registration_Info_UClass_AGameState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameState), 540192235U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_1082665445(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_GameState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
