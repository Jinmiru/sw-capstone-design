// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInstance() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FInputDeviceId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineSession_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelFailure();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature();
NETCORE_API UEnum* Z_Construct_UEnum_NetCore_ENetworkFailure();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnPawnControllerChanged
struct Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnPawnControllerChanged_Parms
	{
		APawn* Pawn;
		AController* Controller;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnPawnControllerChanged_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnPawnControllerChanged_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Pawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::NewProp_Controller,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnPawnControllerChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::_Script_Engine_eventOnPawnControllerChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::_Script_Engine_eventOnPawnControllerChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPawnControllerChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPawnControllerChanged, APawn* Pawn, AController* Controller)
{
	struct _Script_Engine_eventOnPawnControllerChanged_Parms
	{
		APawn* Pawn;
		AController* Controller;
	};
	_Script_Engine_eventOnPawnControllerChanged_Parms Parms;
	Parms.Pawn=Pawn;
	Parms.Controller=Controller;
	OnPawnControllerChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPawnControllerChanged

// Begin Delegate FOnUserInputDeviceConnectionChange
struct Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics
{
	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct _Script_Engine_eventOnUserInputDeviceConnectionChange_Parms
	{
		EInputDeviceConnectionState NewConnectionState;
		FPlatformUserId PlatformUserId;
		FInputDeviceId InputDeviceId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewConnectionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewConnectionState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlatformUserId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDeviceId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_NewConnectionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_NewConnectionState = { "NewConnectionState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnUserInputDeviceConnectionChange_Parms, NewConnectionState), Z_Construct_UEnum_CoreUObject_EInputDeviceConnectionState, METADATA_PARAMS(0, nullptr) }; // 1587276391
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_PlatformUserId = { "PlatformUserId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnUserInputDeviceConnectionChange_Parms, PlatformUserId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_InputDeviceId = { "InputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnUserInputDeviceConnectionChange_Parms, InputDeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_NewConnectionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_NewConnectionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_PlatformUserId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::NewProp_InputDeviceId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnUserInputDeviceConnectionChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::_Script_Engine_eventOnUserInputDeviceConnectionChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::_Script_Engine_eventOnUserInputDeviceConnectionChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserInputDeviceConnectionChange_DelegateWrapper(const FMulticastScriptDelegate& OnUserInputDeviceConnectionChange, EInputDeviceConnectionState NewConnectionState, FPlatformUserId PlatformUserId, FInputDeviceId InputDeviceId)
{
	struct _Script_Engine_eventOnUserInputDeviceConnectionChange_Parms
	{
		EInputDeviceConnectionState NewConnectionState;
		FPlatformUserId PlatformUserId;
		FInputDeviceId InputDeviceId;
	};
	_Script_Engine_eventOnUserInputDeviceConnectionChange_Parms Parms;
	Parms.NewConnectionState=NewConnectionState;
	Parms.PlatformUserId=PlatformUserId;
	Parms.InputDeviceId=InputDeviceId;
	OnUserInputDeviceConnectionChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserInputDeviceConnectionChange

// Begin Delegate FOnUserInputDevicePairingChange
struct Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct FInputDeviceId
	{
		int32 InternalId;
	};

	struct _Script_Engine_eventOnUserInputDevicePairingChange_Parms
	{
		FInputDeviceId InputDeviceId;
		FPlatformUserId NewUserPlatformId;
		FPlatformUserId OldUserPlatformId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputDeviceId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewUserPlatformId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldUserPlatformId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::NewProp_InputDeviceId = { "InputDeviceId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnUserInputDevicePairingChange_Parms, InputDeviceId), Z_Construct_UScriptStruct_FInputDeviceId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::NewProp_NewUserPlatformId = { "NewUserPlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnUserInputDevicePairingChange_Parms, NewUserPlatformId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::NewProp_OldUserPlatformId = { "OldUserPlatformId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnUserInputDevicePairingChange_Parms, OldUserPlatformId), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::NewProp_InputDeviceId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::NewProp_NewUserPlatformId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::NewProp_OldUserPlatformId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnUserInputDevicePairingChange__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::_Script_Engine_eventOnUserInputDevicePairingChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::_Script_Engine_eventOnUserInputDevicePairingChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnUserInputDevicePairingChange_DelegateWrapper(const FMulticastScriptDelegate& OnUserInputDevicePairingChange, FInputDeviceId InputDeviceId, FPlatformUserId NewUserPlatformId, FPlatformUserId OldUserPlatformId)
{
	struct _Script_Engine_eventOnUserInputDevicePairingChange_Parms
	{
		FInputDeviceId InputDeviceId;
		FPlatformUserId NewUserPlatformId;
		FPlatformUserId OldUserPlatformId;
	};
	_Script_Engine_eventOnUserInputDevicePairingChange_Parms Parms;
	Parms.InputDeviceId=InputDeviceId;
	Parms.NewUserPlatformId=NewUserPlatformId;
	Parms.OldUserPlatformId=OldUserPlatformId;
	OnUserInputDevicePairingChange.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnUserInputDevicePairingChange

// Begin Class UGameInstance Function DebugCreatePlayer
struct Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics
{
	struct GameInstance_eventDebugCreatePlayer_Parms
	{
		int32 ControllerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Debug console command to create a player.\n\x09 * @param ControllerId - The controller ID the player should accept input from.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Debug console command to create a player.\n@param ControllerId - The controller ID the player should accept input from." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_eventDebugCreatePlayer_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::NewProp_ControllerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "DebugCreatePlayer", nullptr, nullptr, Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::GameInstance_eventDebugCreatePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::GameInstance_eventDebugCreatePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_DebugCreatePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_DebugCreatePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance::execDebugCreatePlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugCreatePlayer(Z_Param_ControllerId);
	P_NATIVE_END;
}
// End Class UGameInstance Function DebugCreatePlayer

// Begin Class UGameInstance Function DebugRemovePlayer
struct Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics
{
	struct GameInstance_eventDebugRemovePlayer_Parms
	{
		int32 ControllerId;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Debug console command to remove the player with a given controller ID.\n\x09 * @param ControllerId - The controller ID to search for.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Debug console command to remove the player with a given controller ID.\n@param ControllerId - The controller ID to search for." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ControllerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::NewProp_ControllerId = { "ControllerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_eventDebugRemovePlayer_Parms, ControllerId), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::NewProp_ControllerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "DebugRemovePlayer", nullptr, nullptr, Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::GameInstance_eventDebugRemovePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::GameInstance_eventDebugRemovePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_DebugRemovePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_DebugRemovePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameInstance::execDebugRemovePlayer)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ControllerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DebugRemovePlayer(Z_Param_ControllerId);
	P_NATIVE_END;
}
// End Class UGameInstance Function DebugRemovePlayer

// Begin Class UGameInstance Function HandleNetworkError
struct GameInstance_eventHandleNetworkError_Parms
{
	TEnumAsByte<ENetworkFailure::Type> FailureType;
	bool bIsServer;
};
static FName NAME_UGameInstance_HandleNetworkError = FName(TEXT("HandleNetworkError"));
void UGameInstance::HandleNetworkError(ENetworkFailure::Type FailureType, bool bIsServer)
{
	GameInstance_eventHandleNetworkError_Parms Parms;
	Parms.FailureType=FailureType;
	Parms.bIsServer=bIsServer ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleNetworkError),&Parms);
}
struct Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle network errors. */" },
		{ "DisplayName", "NetworkError" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle network errors." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
	static void NewProp_bIsServer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_eventHandleNetworkError_Parms, FailureType), Z_Construct_UEnum_NetCore_ENetworkFailure, METADATA_PARAMS(0, nullptr) }; // 1270560748
void Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer_SetBit(void* Obj)
{
	((GameInstance_eventHandleNetworkError_Parms*)Obj)->bIsServer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer = { "bIsServer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameInstance_eventHandleNetworkError_Parms), &Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_FailureType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::NewProp_bIsServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "HandleNetworkError", nullptr, nullptr, Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::PropPointers), sizeof(GameInstance_eventHandleNetworkError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameInstance_eventHandleNetworkError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_HandleNetworkError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_HandleNetworkError_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameInstance Function HandleNetworkError

// Begin Class UGameInstance Function HandleTravelError
struct GameInstance_eventHandleTravelError_Parms
{
	TEnumAsByte<ETravelFailure::Type> FailureType;
};
static FName NAME_UGameInstance_HandleTravelError = FName(TEXT("HandleTravelError"));
void UGameInstance::HandleTravelError(ETravelFailure::Type FailureType)
{
	GameInstance_eventHandleTravelError_Parms Parms;
	Parms.FailureType=FailureType;
	ProcessEvent(FindFunctionChecked(NAME_UGameInstance_HandleTravelError),&Parms);
}
struct Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle travel errors. */" },
		{ "DisplayName", "TravelError" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle travel errors." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FailureType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::NewProp_FailureType = { "FailureType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameInstance_eventHandleTravelError_Parms, FailureType), Z_Construct_UEnum_Engine_ETravelFailure, METADATA_PARAMS(0, nullptr) }; // 294913692
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::NewProp_FailureType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "HandleTravelError", nullptr, nullptr, Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::PropPointers), sizeof(GameInstance_eventHandleTravelError_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::Function_MetaDataParams) };
static_assert(sizeof(GameInstance_eventHandleTravelError_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameInstance_HandleTravelError()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_HandleTravelError_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameInstance Function HandleTravelError

// Begin Class UGameInstance Function ReceiveInit
static FName NAME_UGameInstance_ReceiveInit = FName(TEXT("ReceiveInit"));
void UGameInstance::ReceiveInit()
{
	ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveInit),NULL);
}
struct Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle the game instance being initialized. */" },
		{ "DisplayName", "Init" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle the game instance being initialized." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "ReceiveInit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameInstance_ReceiveInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_ReceiveInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameInstance Function ReceiveInit

// Begin Class UGameInstance Function ReceiveShutdown
static FName NAME_UGameInstance_ReceiveShutdown = FName(TEXT("ReceiveShutdown"));
void UGameInstance::ReceiveShutdown()
{
	ProcessEvent(FindFunctionChecked(NAME_UGameInstance_ReceiveShutdown),NULL);
}
struct Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Opportunity for blueprints to handle the game instance being shutdown. */" },
		{ "DisplayName", "Shutdown" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Opportunity for blueprints to handle the game instance being shutdown." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameInstance, nullptr, "ReceiveShutdown", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameInstance_ReceiveShutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameInstance_ReceiveShutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UGameInstance Function ReceiveShutdown

// Begin Class UGameInstance
void UGameInstance::StaticRegisterNativesUGameInstance()
{
	UClass* Class = UGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DebugCreatePlayer", &UGameInstance::execDebugCreatePlayer },
		{ "DebugRemovePlayer", &UGameInstance::execDebugRemovePlayer },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameInstance);
UClass* Z_Construct_UClass_UGameInstance_NoRegister()
{
	return UGameInstance::StaticClass();
}
struct Z_Construct_UClass_UGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * GameInstance: high-level manager object for an instance of the running game.\n * Spawned at game creation and not destroyed until game instance is shut down.\n * Running as a standalone game, there will be one of these.\n * Running in PIE (play-in-editor) will generate one of these per PIE instance.\n */" },
		{ "IncludePath", "Engine/GameInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "GameInstance: high-level manager object for an instance of the running game.\nSpawned at game creation and not destroyed until game instance is shut down.\nRunning as a standalone game, there will be one of these.\nRunning in PIE (play-in-editor) will generate one of these per PIE instance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalPlayers_MetaData[] = {
		{ "Comment", "/** List of locally participating players in this game instance */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "List of locally participating players in this game instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnlineSession_MetaData[] = {
		{ "Comment", "/** Class to manage online services */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Class to manage online services" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[] = {
		{ "Comment", "/** List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame */" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "List of objects that are being kept alive by this game instance. Stored as array for fast iteration, should not be modified every frame" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPawnControllerChangedDelegates_MetaData[] = {
		{ "Comment", "/** gets triggered shortly after a pawn's controller is set. Most of the time \n\x09 *\x09it signals that the Controller has changed but in edge cases (like during \n\x09 *\x09replication) it might end up broadcasting the same pawn-controller pair \n\x09 *\x09more than once */" },
		{ "DisplayName", "OnPawnControllerChanged" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "gets triggered shortly after a pawn's controller is set. Most of the time\n    it signals that the Controller has changed but in edge cases (like during\n    replication) it might end up broadcasting the same pawn-controller pair\n    more than once" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInputDeviceConnectionChange_MetaData[] = {
		{ "Comment", "/** \n\x09 * Callback for when an input device connection state has changed (a new gamepad was connected or disconnected)\n\x09 */" },
		{ "DisplayName", "OnInputDeviceConnectionChange" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Callback for when an input device connection state has changed (a new gamepad was connected or disconnected)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnUserInputDevicePairingChange_MetaData[] = {
		{ "Comment", "/**\n\x09 * Callback when an input device has changed pairings (the owning platform user has changed for that device)\n\x09 */" },
		{ "DisplayName", "OnUserInputDevicePairingChange" },
		{ "ModuleRelativePath", "Classes/Engine/GameInstance.h" },
		{ "ToolTip", "Callback when an input device has changed pairings (the owning platform user has changed for that device)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LocalPlayers_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LocalPlayers;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OnlineSession;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReferencedObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPawnControllerChangedDelegates;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInputDeviceConnectionChange;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUserInputDevicePairingChange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameInstance_DebugCreatePlayer, "DebugCreatePlayer" }, // 4055079278
		{ &Z_Construct_UFunction_UGameInstance_DebugRemovePlayer, "DebugRemovePlayer" }, // 843169343
		{ &Z_Construct_UFunction_UGameInstance_HandleNetworkError, "HandleNetworkError" }, // 2227690188
		{ &Z_Construct_UFunction_UGameInstance_HandleTravelError, "HandleTravelError" }, // 139924534
		{ &Z_Construct_UFunction_UGameInstance_ReceiveInit, "ReceiveInit" }, // 4023867032
		{ &Z_Construct_UFunction_UGameInstance_ReceiveShutdown, "ReceiveShutdown" }, // 935865227
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_Inner = { "LocalPlayers", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ULocalPlayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers = { "LocalPlayers", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance, LocalPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalPlayers_MetaData), NewProp_LocalPlayers_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession = { "OnlineSession", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance, OnlineSession), Z_Construct_UClass_UOnlineSession_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnlineSession_MetaData), NewProp_OnlineSession_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReferencedObjects_MetaData), NewProp_ReferencedObjects_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates = { "OnPawnControllerChangedDelegates", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance, OnPawnControllerChangedDelegates), Z_Construct_UDelegateFunction_Engine_OnPawnControllerChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPawnControllerChangedDelegates_MetaData), NewProp_OnPawnControllerChangedDelegates_MetaData) }; // 2241011123
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnInputDeviceConnectionChange = { "OnInputDeviceConnectionChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance, OnInputDeviceConnectionChange), Z_Construct_UDelegateFunction_Engine_OnUserInputDeviceConnectionChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInputDeviceConnectionChange_MetaData), NewProp_OnInputDeviceConnectionChange_MetaData) }; // 2112929497
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGameInstance_Statics::NewProp_OnUserInputDevicePairingChange = { "OnUserInputDevicePairingChange", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameInstance, OnUserInputDevicePairingChange), Z_Construct_UDelegateFunction_Engine_OnUserInputDevicePairingChange__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnUserInputDevicePairingChange_MetaData), NewProp_OnUserInputDevicePairingChange_MetaData) }; // 3908063175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_LocalPlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnlineSession,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_ReferencedObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnPawnControllerChangedDelegates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnInputDeviceConnectionChange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameInstance_Statics::NewProp_OnUserInputDevicePairingChange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameInstance_Statics::ClassParams = {
	&UGameInstance::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::PropPointers),
	0,
	0x008800A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameInstance()
{
	if (!Z_Registration_Info_UClass_UGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameInstance.OuterSingleton, Z_Construct_UClass_UGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameInstance.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UGameInstance>()
{
	return UGameInstance::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameInstance);
UGameInstance::~UGameInstance() {}
// End Class UGameInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameInstance, UGameInstance::StaticClass, TEXT("UGameInstance"), &Z_Registration_Info_UClass_UGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameInstance), 3474053701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_2909333906(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_GameInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
