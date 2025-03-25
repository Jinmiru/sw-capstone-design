// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameViewportClient() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UConsole_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UScriptViewportClient();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UGameViewportClient Function SetConsoleTarget
struct Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics
{
	struct GameViewportClient_eventSetConsoleTarget_Parms
	{
		int32 PlayerIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sets the player which console commands will be executed in the context of. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Sets the player which console commands will be executed in the context of." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameViewportClient_eventSetConsoleTarget_Parms, PlayerIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::NewProp_PlayerIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "SetConsoleTarget", nullptr, nullptr, Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::GameViewportClient_eventSetConsoleTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::GameViewportClient_eventSetConsoleTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameViewportClient::execSetConsoleTarget)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetConsoleTarget(Z_Param_PlayerIndex);
	P_NATIVE_END;
}
// End Class UGameViewportClient Function SetConsoleTarget

// Begin Class UGameViewportClient Function ShowTitleSafeArea
struct Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Exec for toggling the display of the title safe area\n\x09  * @deprecated Use the cvar \"r.DebugSafeZone.Mode=1\".\n\x09  */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use the cvar \"r.DebugSafeZone.Mode=1." },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Exec for toggling the display of the title safe area\n@deprecated Use the cvar \"r.DebugSafeZone.Mode=1\"." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "ShowTitleSafeArea", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameViewportClient::execShowTitleSafeArea)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowTitleSafeArea();
	P_NATIVE_END;
}
// End Class UGameViewportClient Function ShowTitleSafeArea

// Begin Class UGameViewportClient Function SSSwapControllers
struct Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller. */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Rotates controller ids among gameplayers, useful for testing splitscreen with only one controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameViewportClient, nullptr, "SSSwapControllers", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameViewportClient_SSSwapControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameViewportClient_SSSwapControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameViewportClient::execSSSwapControllers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SSSwapControllers();
	P_NATIVE_END;
}
// End Class UGameViewportClient Function SSSwapControllers

// Begin Class UGameViewportClient
void UGameViewportClient::StaticRegisterNativesUGameViewportClient()
{
	UClass* Class = UGameViewportClient::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetConsoleTarget", &UGameViewportClient::execSetConsoleTarget },
		{ "ShowTitleSafeArea", &UGameViewportClient::execShowTitleSafeArea },
		{ "SSSwapControllers", &UGameViewportClient::execSSSwapControllers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameViewportClient);
UClass* Z_Construct_UClass_UGameViewportClient_NoRegister()
{
	return UGameViewportClient::StaticClass();
}
struct Z_Construct_UClass_UGameViewportClient_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A game viewport (FViewport) is a high-level abstract interface for the\n * platform specific rendering, audio, and input subsystems.\n * GameViewportClient is the engine's interface to a game viewport.\n * Exactly one GameViewportClient is created for each instance of the game.  The\n * only case (so far) where you might have a single instance of Engine, but\n * multiple instances of the game (and thus multiple GameViewportClients) is when\n * you have more than one PIE window running.\n *\n * Responsibilities:\n * propagating input events to the global interactions list\n *\n * @see UGameViewportClient\n */" },
		{ "IncludePath", "Engine/GameViewportClient.h" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "A game viewport (FViewport) is a high-level abstract interface for the\nplatform specific rendering, audio, and input subsystems.\nGameViewportClient is the engine's interface to a game viewport.\nExactly one GameViewportClient is created for each instance of the game.  The\nonly case (so far) where you might have a single instance of Engine, but\nmultiple instances of the game (and thus multiple GameViewportClients) is when\nyou have more than one PIE window running.\n\nResponsibilities:\npropagating input events to the global interactions list\n\n@see UGameViewportClient" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ViewportConsole_MetaData[] = {
		{ "Comment", "/** The viewport's console.   Might be null on consoles */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "The viewport's console.   Might be null on consoles" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugProperties_MetaData[] = {
		{ "Comment", "/** Debug properties that have been added via one of the \"displayall\" commands */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "Debug properties that have been added via one of the \"displayall\" commands" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSplitscreenPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[] = {
		{ "Comment", "/* The relative world context for this viewport */" },
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
		{ "ToolTip", "The relative world context for this viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameViewportClient.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportConsole;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugProperties_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugProperties;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSplitscreenPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameViewportClient_SetConsoleTarget, "SetConsoleTarget" }, // 3316006910
		{ &Z_Construct_UFunction_UGameViewportClient_ShowTitleSafeArea, "ShowTitleSafeArea" }, // 3951856712
		{ &Z_Construct_UFunction_UGameViewportClient_SSSwapControllers, "SSSwapControllers" }, // 2373230417
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameViewportClient>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole = { "ViewportConsole", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameViewportClient, ViewportConsole), Z_Construct_UClass_UConsole_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ViewportConsole_MetaData), NewProp_ViewportConsole_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_Inner = { "DebugProperties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDebugDisplayProperty, METADATA_PARAMS(0, nullptr) }; // 785509049
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties = { "DebugProperties", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameViewportClient, DebugProperties), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugProperties_MetaData), NewProp_DebugProperties_MetaData) }; // 785509049
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers = { "MaxSplitscreenPlayers", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameViewportClient, MaxSplitscreenPlayers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSplitscreenPlayers_MetaData), NewProp_MaxSplitscreenPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameViewportClient, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_World_MetaData), NewProp_World_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameViewportClient, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameInstance_MetaData), NewProp_GameInstance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameViewportClient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_ViewportConsole,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_DebugProperties,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_MaxSplitscreenPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameViewportClient_Statics::NewProp_GameInstance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameViewportClient_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UScriptViewportClient,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameViewportClient_Statics::ClassParams = {
	&UGameViewportClient::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameViewportClient_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::PropPointers),
	0,
	0x000800ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameViewportClient_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameViewportClient()
{
	if (!Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton, Z_Construct_UClass_UGameViewportClient_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameViewportClient.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGameViewportClient>()
{
	return UGameViewportClient::StaticClass();
}
// End Class UGameViewportClient

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameViewportClient, UGameViewportClient::StaticClass, TEXT("UGameViewportClient"), &Z_Registration_Info_UClass_UGameViewportClient, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameViewportClient), 1519352237U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_1713337306(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameViewportClient_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
