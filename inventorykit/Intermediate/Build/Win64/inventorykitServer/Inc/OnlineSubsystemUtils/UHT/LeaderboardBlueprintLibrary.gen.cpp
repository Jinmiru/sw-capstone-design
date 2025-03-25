// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/LeaderboardBlueprintLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderboardBlueprintLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin Class ULeaderboardBlueprintLibrary Function WriteLeaderboardInteger
struct Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics
{
	struct LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms
	{
		APlayerController* PlayerController;
		FName StatName;
		int32 StatValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Leaderboard" },
		{ "Comment", "/** Writes an integer value to the specified leaderboard */" },
		{ "ModuleRelativePath", "Classes/LeaderboardBlueprintLibrary.h" },
		{ "ToolTip", "Writes an integer value to the specified leaderboard" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FNamePropertyParams NewProp_StatName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_StatValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatName = { "StatName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms, StatName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatValue = { "StatValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms, StatValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms), &Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_StatValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULeaderboardBlueprintLibrary, nullptr, "WriteLeaderboardInteger", nullptr, nullptr, Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::LeaderboardBlueprintLibrary_eventWriteLeaderboardInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULeaderboardBlueprintLibrary::execWriteLeaderboardInteger)
{
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FNameProperty,Z_Param_StatName);
	P_GET_PROPERTY(FIntProperty,Z_Param_StatValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(Z_Param_PlayerController,Z_Param_StatName,Z_Param_StatValue);
	P_NATIVE_END;
}
// End Class ULeaderboardBlueprintLibrary Function WriteLeaderboardInteger

// Begin Class ULeaderboardBlueprintLibrary
void ULeaderboardBlueprintLibrary::StaticRegisterNativesULeaderboardBlueprintLibrary()
{
	UClass* Class = ULeaderboardBlueprintLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "WriteLeaderboardInteger", &ULeaderboardBlueprintLibrary::execWriteLeaderboardInteger },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULeaderboardBlueprintLibrary);
UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary_NoRegister()
{
	return ULeaderboardBlueprintLibrary::StaticClass();
}
struct Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A beacon host used for taking reservations for an existing game session\n */" },
		{ "IncludePath", "LeaderboardBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/LeaderboardBlueprintLibrary.h" },
		{ "ScriptName", "LeaderboardLibrary" },
		{ "ToolTip", "A beacon host used for taking reservations for an existing game session" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULeaderboardBlueprintLibrary_WriteLeaderboardInteger, "WriteLeaderboardInteger" }, // 1179308998
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderboardBlueprintLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::ClassParams = {
	&ULeaderboardBlueprintLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULeaderboardBlueprintLibrary()
{
	if (!Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.OuterSingleton, Z_Construct_UClass_ULeaderboardBlueprintLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<ULeaderboardBlueprintLibrary>()
{
	return ULeaderboardBlueprintLibrary::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderboardBlueprintLibrary);
ULeaderboardBlueprintLibrary::~ULeaderboardBlueprintLibrary() {}
// End Class ULeaderboardBlueprintLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULeaderboardBlueprintLibrary, ULeaderboardBlueprintLibrary::StaticClass, TEXT("ULeaderboardBlueprintLibrary"), &Z_Registration_Info_UClass_ULeaderboardBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULeaderboardBlueprintLibrary), 1953616792U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_4042521129(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_LeaderboardBlueprintLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
