// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveGame() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSaveGame();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayerSaveGame_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USaveGame();
ENGINE_API UClass* Z_Construct_UClass_USaveGame_NoRegister();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class USaveGame
void USaveGame::StaticRegisterNativesUSaveGame()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USaveGame);
UClass* Z_Construct_UClass_USaveGame_NoRegister()
{
	return USaveGame::StaticClass();
}
struct Z_Construct_UClass_USaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \n *\x09This class acts as a base class for a save game object that can be used to save state about the game. \n *\x09When you create your own save game subclass, you would add member variables for the information that you want to save.\n *\x09Then when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.\n *\x09To load the game you then just use LoadGameFromSlot, and read the data from the resulting object.\n *\n *\x09@see https://docs.unrealengine.com/latest/INT/Gameplay/SaveGame\n */" },
		{ "IncludePath", "GameFramework/SaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "This class acts as a base class for a save game object that can be used to save state about the game.\nWhen you create your own save game subclass, you would add member variables for the information that you want to save.\nThen when you want to save a game, create an instance of this object using CreateSaveGameObject, fill in the data, and use SaveGameToSlot, providing a slot name.\nTo load the game you then just use LoadGameFromSlot, and read the data from the resulting object.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/SaveGame" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USaveGame_Statics::ClassParams = {
	&USaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_USaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USaveGame()
{
	if (!Z_Registration_Info_UClass_USaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USaveGame.OuterSingleton, Z_Construct_UClass_USaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USaveGame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<USaveGame>()
{
	return USaveGame::StaticClass();
}
USaveGame::USaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USaveGame);
USaveGame::~USaveGame() {}
// End Class USaveGame

// Begin Delegate FOnLocalPlayerSaveGameLoaded
struct Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnLocalPlayerSaveGameLoaded_Parms
	{
		ULocalPlayerSaveGame* SaveGame;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SaveGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::NewProp_SaveGame = { "SaveGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnLocalPlayerSaveGameLoaded_Parms, SaveGame), Z_Construct_UClass_ULocalPlayerSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::NewProp_SaveGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnLocalPlayerSaveGameLoaded__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::_Script_Engine_eventOnLocalPlayerSaveGameLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::_Script_Engine_eventOnLocalPlayerSaveGameLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnLocalPlayerSaveGameLoaded_DelegateWrapper(const FScriptDelegate& OnLocalPlayerSaveGameLoaded, ULocalPlayerSaveGame* SaveGame)
{
	struct _Script_Engine_eventOnLocalPlayerSaveGameLoaded_Parms
	{
		ULocalPlayerSaveGame* SaveGame;
	};
	_Script_Engine_eventOnLocalPlayerSaveGameLoaded_Parms Parms;
	Parms.SaveGame=SaveGame;
	OnLocalPlayerSaveGameLoaded.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnLocalPlayerSaveGameLoaded

// Begin Class ULocalPlayerSaveGame Function AsyncLoadOrCreateSaveGameForLocalPlayer
struct Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics
{
	struct LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms
	{
		TSubclassOf<ULocalPlayerSaveGame> SaveGameClass;
		APlayerController* LocalPlayerController;
		FString SlotName;
		FScriptDelegate Delegate;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/**\n\x09 * Asynchronously loads a save game object in the specified slot for the local player, if this returns true the delegate will get called later.\n\x09 * False means the load was never scheduled, otherwise it will create and initialize a new instance before calling the delegate if loading failed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Asynchronously loads a save game object in the specified slot for the local player, if this returns true the delegate will get called later.\nFalse means the load was never scheduled, otherwise it will create and initialize a new instance before calling the delegate if loading failed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalPlayerSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_LocalPlayerController = { "LocalPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms, LocalPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms, Delegate), Z_Construct_UDelegateFunction_Engine_OnLocalPlayerSaveGameLoaded__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2656623533
void Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_LocalPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_Delegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "AsyncLoadOrCreateSaveGameForLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::LocalPlayerSaveGame_eventAsyncLoadOrCreateSaveGameForLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execAsyncLoadOrCreateSaveGameForLocalPlayer)
{
	P_GET_OBJECT(UClass,Z_Param_SaveGameClass);
	P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer(Z_Param_SaveGameClass,Z_Param_LocalPlayerController,Z_Param_SlotName,FOnLocalPlayerSaveGameLoaded(Z_Param_Delegate));
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function AsyncLoadOrCreateSaveGameForLocalPlayer

// Begin Class ULocalPlayerSaveGame Function AsyncSaveGameToSlotForLocalPlayer
struct Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics
{
	struct LocalPlayerSaveGame_eventAsyncSaveGameToSlotForLocalPlayer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/**\n\x09 * Asynchronously save to the slot and user index.\n\x09 * This will return true if the save was requested, and errors should be handled by the HandlePostSave function after the save succeeds or fails\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Asynchronously save to the slot and user index.\nThis will return true if the save was requested, and errors should be handled by the HandlePostSave function after the save succeeds or fails" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventAsyncSaveGameToSlotForLocalPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventAsyncSaveGameToSlotForLocalPlayer_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "AsyncSaveGameToSlotForLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::LocalPlayerSaveGame_eventAsyncSaveGameToSlotForLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::LocalPlayerSaveGame_eventAsyncSaveGameToSlotForLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execAsyncSaveGameToSlotForLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AsyncSaveGameToSlotForLocalPlayer();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function AsyncSaveGameToSlotForLocalPlayer

// Begin Class ULocalPlayerSaveGame Function GetInvalidDataVersion
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics
{
	struct LocalPlayerSaveGame_eventGetInvalidDataVersion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the invalid save data version, which means it has never been saved/loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the invalid save data version, which means it has never been saved/loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetInvalidDataVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetInvalidDataVersion", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::LocalPlayerSaveGame_eventGetInvalidDataVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::LocalPlayerSaveGame_eventGetInvalidDataVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetInvalidDataVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetInvalidDataVersion();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetInvalidDataVersion

// Begin Class ULocalPlayerSaveGame Function GetLatestDataVersion
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics
{
	struct LocalPlayerSaveGame_eventGetLatestDataVersion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the latest save data version, this is used when the new data is saved */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the latest save data version, this is used when the new data is saved" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetLatestDataVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetLatestDataVersion", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::LocalPlayerSaveGame_eventGetLatestDataVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::LocalPlayerSaveGame_eventGetLatestDataVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetLatestDataVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetLatestDataVersion();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetLatestDataVersion

// Begin Class ULocalPlayerSaveGame Function GetLocalPlayerController
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics
{
	struct LocalPlayerSaveGame_eventGetLocalPlayerController_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the local player controller this is associated with, this will be valid if it is ready to save */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the local player controller this is associated with, this will be valid if it is ready to save" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetLocalPlayerController_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetLocalPlayerController", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::LocalPlayerSaveGame_eventGetLocalPlayerController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::LocalPlayerSaveGame_eventGetLocalPlayerController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetLocalPlayerController)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetLocalPlayerController();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetLocalPlayerController

// Begin Class ULocalPlayerSaveGame Function GetPlatformUserId
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct LocalPlayerSaveGame_eventGetPlatformUserId_Parms
	{
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the platform user to save to, based on Local Player by default */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the platform user to save to, based on Local Player by default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetPlatformUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetPlatformUserId", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::LocalPlayerSaveGame_eventGetPlatformUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::LocalPlayerSaveGame_eventGetPlatformUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetPlatformUserId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=P_THIS->GetPlatformUserId();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetPlatformUserId

// Begin Class ULocalPlayerSaveGame Function GetPlatformUserIndex
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics
{
	struct LocalPlayerSaveGame_eventGetPlatformUserIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the user index to save to, based on Local Player by default */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the user index to save to, based on Local Player by default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetPlatformUserIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetPlatformUserIndex", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::LocalPlayerSaveGame_eventGetPlatformUserIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::LocalPlayerSaveGame_eventGetPlatformUserIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetPlatformUserIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlatformUserIndex();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetPlatformUserIndex

// Begin Class ULocalPlayerSaveGame Function GetSavedDataVersion
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics
{
	struct LocalPlayerSaveGame_eventGetSavedDataVersion_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the game-specific version number this was last saved/loaded as */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the game-specific version number this was last saved/loaded as" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetSavedDataVersion_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetSavedDataVersion", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::LocalPlayerSaveGame_eventGetSavedDataVersion_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::LocalPlayerSaveGame_eventGetSavedDataVersion_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetSavedDataVersion)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSavedDataVersion();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetSavedDataVersion

// Begin Class ULocalPlayerSaveGame Function GetSaveSlotName
struct Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics
{
	struct LocalPlayerSaveGame_eventGetSaveSlotName_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns the save slot name to use */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns the save slot name to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventGetSaveSlotName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "GetSaveSlotName", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::LocalPlayerSaveGame_eventGetSaveSlotName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::LocalPlayerSaveGame_eventGetSaveSlotName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execGetSaveSlotName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetSaveSlotName();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function GetSaveSlotName

// Begin Class ULocalPlayerSaveGame Function IsSaveInProgress
struct Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics
{
	struct LocalPlayerSaveGame_eventIsSaveInProgress_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns true if a save is in progress */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns true if a save is in progress" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventIsSaveInProgress_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventIsSaveInProgress_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "IsSaveInProgress", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::LocalPlayerSaveGame_eventIsSaveInProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::LocalPlayerSaveGame_eventIsSaveInProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execIsSaveInProgress)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSaveInProgress();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function IsSaveInProgress

// Begin Class ULocalPlayerSaveGame Function LoadOrCreateSaveGameForLocalPlayer
struct Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics
{
	struct LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms
	{
		TSubclassOf<ULocalPlayerSaveGame> SaveGameClass;
		APlayerController* LocalPlayerController;
		FString SlotName;
		ULocalPlayerSaveGame* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/**\n\x09 * Synchronously loads a save game object in the specified slot for the local player, stalling the main thread until it completes.\n\x09 * This will return null for invalid parameters, but will create a new instance if the parameters are valid but loading fails.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Synchronously loads a save game object in the specified slot for the local player, stalling the main thread until it completes.\nThis will return null for invalid parameters, but will create a new instance if the parameters are valid but loading fails." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_SaveGameClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayerController;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SlotName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SaveGameClass = { "SaveGameClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms, SaveGameClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalPlayerSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_LocalPlayerController = { "LocalPlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms, LocalPlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SlotName = { "SlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms, SlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotName_MetaData), NewProp_SlotName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms, ReturnValue), Z_Construct_UClass_ULocalPlayerSaveGame_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SaveGameClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_LocalPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_SlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "LoadOrCreateSaveGameForLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::LocalPlayerSaveGame_eventLoadOrCreateSaveGameForLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execLoadOrCreateSaveGameForLocalPlayer)
{
	P_GET_OBJECT(UClass,Z_Param_SaveGameClass);
	P_GET_OBJECT(APlayerController,Z_Param_LocalPlayerController);
	P_GET_PROPERTY(FStrProperty,Z_Param_SlotName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ULocalPlayerSaveGame**)Z_Param__Result=ULocalPlayerSaveGame::LoadOrCreateSaveGameForLocalPlayer(Z_Param_SaveGameClass,Z_Param_LocalPlayerController,Z_Param_SlotName);
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function LoadOrCreateSaveGameForLocalPlayer

// Begin Class ULocalPlayerSaveGame Function OnPostLoad
static FName NAME_ULocalPlayerSaveGame_OnPostLoad = FName(TEXT("OnPostLoad"));
void ULocalPlayerSaveGame::OnPostLoad()
{
	ProcessEvent(FindFunctionChecked(NAME_ULocalPlayerSaveGame_OnPostLoad),NULL);
}
struct Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Blueprint event called after loading, is not called for newly created saves */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Blueprint event called after loading, is not called for newly created saves" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "OnPostLoad", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULocalPlayerSaveGame Function OnPostLoad

// Begin Class ULocalPlayerSaveGame Function OnPostSave
struct LocalPlayerSaveGame_eventOnPostSave_Parms
{
	bool bSuccess;
};
static FName NAME_ULocalPlayerSaveGame_OnPostSave = FName(TEXT("OnPostSave"));
void ULocalPlayerSaveGame::OnPostSave(bool bSuccess)
{
	LocalPlayerSaveGame_eventOnPostSave_Parms Parms;
	Parms.bSuccess=bSuccess ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_ULocalPlayerSaveGame_OnPostSave),&Parms);
}
struct Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Blueprint event called after saving finishes with success/failure result */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Blueprint event called after saving finishes with success/failure result" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuccess_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::NewProp_bSuccess_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventOnPostSave_Parms*)Obj)->bSuccess = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventOnPostSave_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::NewProp_bSuccess,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "OnPostSave", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::PropPointers), sizeof(LocalPlayerSaveGame_eventOnPostSave_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::Function_MetaDataParams) };
static_assert(sizeof(LocalPlayerSaveGame_eventOnPostSave_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULocalPlayerSaveGame Function OnPostSave

// Begin Class ULocalPlayerSaveGame Function OnPreSave
static FName NAME_ULocalPlayerSaveGame_OnPreSave = FName(TEXT("OnPreSave"));
void ULocalPlayerSaveGame::OnPreSave()
{
	ProcessEvent(FindFunctionChecked(NAME_ULocalPlayerSaveGame_OnPreSave),NULL);
}
struct Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Blueprint event called before saving, do any game-specific fixup here  */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Blueprint event called before saving, do any game-specific fixup here" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "OnPreSave", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULocalPlayerSaveGame Function OnPreSave

// Begin Class ULocalPlayerSaveGame Function OnResetToDefault
static FName NAME_ULocalPlayerSaveGame_OnResetToDefault = FName(TEXT("OnResetToDefault"));
void ULocalPlayerSaveGame::OnResetToDefault()
{
	ProcessEvent(FindFunctionChecked(NAME_ULocalPlayerSaveGame_OnResetToDefault),NULL);
}
struct Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Blueprint event called to reset all saved data to default, called when the load fails or manually */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Blueprint event called to reset all saved data to default, called when the load fails or manually" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "OnResetToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class ULocalPlayerSaveGame Function OnResetToDefault

// Begin Class ULocalPlayerSaveGame Function ResetToDefault
struct Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Resets all saved data to default values, called when the load fails or manually */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Resets all saved data to default values, called when the load fails or manually" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "ResetToDefault", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execResetToDefault)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetToDefault();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function ResetToDefault

// Begin Class ULocalPlayerSaveGame Function SaveGameToSlotForLocalPlayer
struct Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics
{
	struct LocalPlayerSaveGame_eventSaveGameToSlotForLocalPlayer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/**\n\x09 * Synchronously save using the slot and user index, stalling the main thread until it completes. \n\x09 * This will return true if the save was requested, and errors should be handled by the HandlePostSave function that will be called immediately.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Synchronously save using the slot and user index, stalling the main thread until it completes.\nThis will return true if the save was requested, and errors should be handled by the HandlePostSave function that will be called immediately." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventSaveGameToSlotForLocalPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventSaveGameToSlotForLocalPlayer_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "SaveGameToSlotForLocalPlayer", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::LocalPlayerSaveGame_eventSaveGameToSlotForLocalPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::LocalPlayerSaveGame_eventSaveGameToSlotForLocalPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execSaveGameToSlotForLocalPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SaveGameToSlotForLocalPlayer();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function SaveGameToSlotForLocalPlayer

// Begin Class ULocalPlayerSaveGame Function WasLastSaveSuccessful
struct Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics
{
	struct LocalPlayerSaveGame_eventWasLastSaveSuccessful_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns true if it has been saved at least once and the last save was successful */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns true if it has been saved at least once and the last save was successful" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventWasLastSaveSuccessful_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventWasLastSaveSuccessful_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "WasLastSaveSuccessful", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::LocalPlayerSaveGame_eventWasLastSaveSuccessful_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::LocalPlayerSaveGame_eventWasLastSaveSuccessful_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execWasLastSaveSuccessful)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasLastSaveSuccessful();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function WasLastSaveSuccessful

// Begin Class ULocalPlayerSaveGame Function WasLoaded
struct Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics
{
	struct LocalPlayerSaveGame_eventWasLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns true if this was loaded from an existing save */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns true if this was loaded from an existing save" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventWasLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventWasLoaded_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "WasLoaded", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::LocalPlayerSaveGame_eventWasLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::LocalPlayerSaveGame_eventWasLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execWasLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasLoaded();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function WasLoaded

// Begin Class ULocalPlayerSaveGame Function WasSaveRequested
struct Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics
{
	struct LocalPlayerSaveGame_eventWasSaveRequested_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "SaveGame|LocalPlayer" },
		{ "Comment", "/** Returns true if a save was ever requested, may still be in progress */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Returns true if a save was ever requested, may still be in progress" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((LocalPlayerSaveGame_eventWasSaveRequested_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(LocalPlayerSaveGame_eventWasSaveRequested_Parms), &Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULocalPlayerSaveGame, nullptr, "WasSaveRequested", nullptr, nullptr, Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::PropPointers), sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::LocalPlayerSaveGame_eventWasSaveRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::LocalPlayerSaveGame_eventWasSaveRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULocalPlayerSaveGame::execWasSaveRequested)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasSaveRequested();
	P_NATIVE_END;
}
// End Class ULocalPlayerSaveGame Function WasSaveRequested

// Begin Class ULocalPlayerSaveGame
void ULocalPlayerSaveGame::StaticRegisterNativesULocalPlayerSaveGame()
{
	UClass* Class = ULocalPlayerSaveGame::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AsyncLoadOrCreateSaveGameForLocalPlayer", &ULocalPlayerSaveGame::execAsyncLoadOrCreateSaveGameForLocalPlayer },
		{ "AsyncSaveGameToSlotForLocalPlayer", &ULocalPlayerSaveGame::execAsyncSaveGameToSlotForLocalPlayer },
		{ "GetInvalidDataVersion", &ULocalPlayerSaveGame::execGetInvalidDataVersion },
		{ "GetLatestDataVersion", &ULocalPlayerSaveGame::execGetLatestDataVersion },
		{ "GetLocalPlayerController", &ULocalPlayerSaveGame::execGetLocalPlayerController },
		{ "GetPlatformUserId", &ULocalPlayerSaveGame::execGetPlatformUserId },
		{ "GetPlatformUserIndex", &ULocalPlayerSaveGame::execGetPlatformUserIndex },
		{ "GetSavedDataVersion", &ULocalPlayerSaveGame::execGetSavedDataVersion },
		{ "GetSaveSlotName", &ULocalPlayerSaveGame::execGetSaveSlotName },
		{ "IsSaveInProgress", &ULocalPlayerSaveGame::execIsSaveInProgress },
		{ "LoadOrCreateSaveGameForLocalPlayer", &ULocalPlayerSaveGame::execLoadOrCreateSaveGameForLocalPlayer },
		{ "ResetToDefault", &ULocalPlayerSaveGame::execResetToDefault },
		{ "SaveGameToSlotForLocalPlayer", &ULocalPlayerSaveGame::execSaveGameToSlotForLocalPlayer },
		{ "WasLastSaveSuccessful", &ULocalPlayerSaveGame::execWasLastSaveSuccessful },
		{ "WasLoaded", &ULocalPlayerSaveGame::execWasLoaded },
		{ "WasSaveRequested", &ULocalPlayerSaveGame::execWasSaveRequested },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalPlayerSaveGame);
UClass* Z_Construct_UClass_ULocalPlayerSaveGame_NoRegister()
{
	return ULocalPlayerSaveGame::StaticClass();
}
struct Z_Construct_UClass_ULocalPlayerSaveGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Abstract subclass of USaveGame that provides utility functions that let you associate a Save Game object with a specific local player.\n * These objects can also be loaded using the functions on GameplayStatics, but you would need to call functions like InitializeSaveGame manually.\n * For simple games, it is fine to blueprint this class directly and add parameters and override functions in blueprint,\n * but for complicated games you will want to subclass this in native code and set up proper versioning.\n */" },
		{ "IncludePath", "GameFramework/SaveGame.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Abstract subclass of USaveGame that provides utility functions that let you associate a Save Game object with a specific local player.\nThese objects can also be loaded using the functions on GameplayStatics, but you would need to call functions like InitializeSaveGame manually.\nFor simple games, it is fine to blueprint this class directly and add parameters and override functions in blueprint,\nbut for complicated games you will want to subclass this in native code and set up proper versioning." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningPlayer_MetaData[] = {
		{ "Comment", "/** The local player this is connected to, can be null if subclasses override Get/Set Local Player or it hasn't been initialized */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The local player this is connected to, can be null if subclasses override Get/Set Local Player or it hasn't been initialized" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SaveSlotName_MetaData[] = {
		{ "Comment", "/** The slot name this was loaded from and that will be used to save to in the future */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "The slot name this was loaded from and that will be used to save to in the future" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SavedDataVersion_MetaData[] = {
		{ "Comment", "/** \n\x09 * The value of GetLatestDataVersion when this was last saved.\n\x09 * Subclasses can override GetLatestDataVersion and then handle fixups in HandlePostLoad.\n\x09 * This defaults to 0 so old save games that didn't previously subclass ULocalPlayerSaveGame will have 0 instead of the invalid version.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "The value of GetLatestDataVersion when this was last saved.\nSubclasses can override GetLatestDataVersion and then handle fixups in HandlePostLoad.\nThis defaults to 0 so old save games that didn't previously subclass ULocalPlayerSaveGame will have 0 instead of the invalid version." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedDataVersion_MetaData[] = {
		{ "Comment", "/**\n\x09 * The value of SavedDataVersion when a save was last loaded, this will be -1 for newly created saves\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "The value of SavedDataVersion when a save was last loaded, this will be -1 for newly created saves" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSaveRequest_MetaData[] = {
		{ "Comment", "/** Integer that is incremented every time a save has been requested in the current session, can be used to know if one is in progress */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Integer that is incremented every time a save has been requested in the current session, can be used to know if one is in progress" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSuccessfulSaveRequest_MetaData[] = {
		{ "Comment", "/** Integer that is set when a save completes successfully, if this equals RequestedSaveCount then the last save was successful */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Integer that is set when a save completes successfully, if this equals RequestedSaveCount then the last save was successful" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastErrorSaveRequest_MetaData[] = {
		{ "Comment", "/** Integer that is set when a save fails */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SaveGame.h" },
		{ "ToolTip", "Integer that is set when a save fails" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningPlayer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SaveSlotName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SavedDataVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LoadedDataVersion;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSaveRequest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastSuccessfulSaveRequest;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastErrorSaveRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncLoadOrCreateSaveGameForLocalPlayer, "AsyncLoadOrCreateSaveGameForLocalPlayer" }, // 757223266
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_AsyncSaveGameToSlotForLocalPlayer, "AsyncSaveGameToSlotForLocalPlayer" }, // 856245628
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetInvalidDataVersion, "GetInvalidDataVersion" }, // 1979749817
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetLatestDataVersion, "GetLatestDataVersion" }, // 1004849915
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetLocalPlayerController, "GetLocalPlayerController" }, // 2757338464
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserId, "GetPlatformUserId" }, // 4248241868
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetPlatformUserIndex, "GetPlatformUserIndex" }, // 4127478983
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetSavedDataVersion, "GetSavedDataVersion" }, // 1521889292
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_GetSaveSlotName, "GetSaveSlotName" }, // 2344711827
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_IsSaveInProgress, "IsSaveInProgress" }, // 4251941207
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_LoadOrCreateSaveGameForLocalPlayer, "LoadOrCreateSaveGameForLocalPlayer" }, // 294954966
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostLoad, "OnPostLoad" }, // 189342118
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_OnPostSave, "OnPostSave" }, // 1273317177
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_OnPreSave, "OnPreSave" }, // 2948899025
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_OnResetToDefault, "OnResetToDefault" }, // 2955505461
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_ResetToDefault, "ResetToDefault" }, // 622598471
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_SaveGameToSlotForLocalPlayer, "SaveGameToSlotForLocalPlayer" }, // 3882241798
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_WasLastSaveSuccessful, "WasLastSaveSuccessful" }, // 1391692486
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_WasLoaded, "WasLoaded" }, // 4265918557
		{ &Z_Construct_UFunction_ULocalPlayerSaveGame_WasSaveRequested, "WasSaveRequested" }, // 4142390744
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalPlayerSaveGame>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_OwningPlayer = { "OwningPlayer", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, OwningPlayer), Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningPlayer_MetaData), NewProp_OwningPlayer_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_SaveSlotName = { "SaveSlotName", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, SaveSlotName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SaveSlotName_MetaData), NewProp_SaveSlotName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_SavedDataVersion = { "SavedDataVersion", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, SavedDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SavedDataVersion_MetaData), NewProp_SavedDataVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_LoadedDataVersion = { "LoadedDataVersion", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, LoadedDataVersion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedDataVersion_MetaData), NewProp_LoadedDataVersion_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_CurrentSaveRequest = { "CurrentSaveRequest", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, CurrentSaveRequest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentSaveRequest_MetaData), NewProp_CurrentSaveRequest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_LastSuccessfulSaveRequest = { "LastSuccessfulSaveRequest", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, LastSuccessfulSaveRequest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSuccessfulSaveRequest_MetaData), NewProp_LastSuccessfulSaveRequest_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_LastErrorSaveRequest = { "LastErrorSaveRequest", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULocalPlayerSaveGame, LastErrorSaveRequest), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastErrorSaveRequest_MetaData), NewProp_LastErrorSaveRequest_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULocalPlayerSaveGame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_OwningPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_SaveSlotName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_SavedDataVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_LoadedDataVersion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_CurrentSaveRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_LastSuccessfulSaveRequest,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULocalPlayerSaveGame_Statics::NewProp_LastErrorSaveRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerSaveGame_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULocalPlayerSaveGame_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USaveGame,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerSaveGame_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalPlayerSaveGame_Statics::ClassParams = {
	&ULocalPlayerSaveGame::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULocalPlayerSaveGame_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerSaveGame_Statics::PropPointers),
	0,
	0x000800A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULocalPlayerSaveGame_Statics::Class_MetaDataParams), Z_Construct_UClass_ULocalPlayerSaveGame_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULocalPlayerSaveGame()
{
	if (!Z_Registration_Info_UClass_ULocalPlayerSaveGame.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalPlayerSaveGame.OuterSingleton, Z_Construct_UClass_ULocalPlayerSaveGame_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULocalPlayerSaveGame.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<ULocalPlayerSaveGame>()
{
	return ULocalPlayerSaveGame::StaticClass();
}
ULocalPlayerSaveGame::ULocalPlayerSaveGame(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalPlayerSaveGame);
ULocalPlayerSaveGame::~ULocalPlayerSaveGame() {}
// End Class ULocalPlayerSaveGame

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USaveGame, USaveGame::StaticClass, TEXT("USaveGame"), &Z_Registration_Info_UClass_USaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USaveGame), 2636134859U) },
		{ Z_Construct_UClass_ULocalPlayerSaveGame, ULocalPlayerSaveGame::StaticClass, TEXT("ULocalPlayerSaveGame"), &Z_Registration_Info_UClass_ULocalPlayerSaveGame, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalPlayerSaveGame), 3984061808U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_2333646193(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SaveGame_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
