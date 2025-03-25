// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineSubsystemUtils/Classes/FindSessionsCallbackProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFindSessionsCallbackProxy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UOnlineBlueprintCallProxyBase();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxy();
ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister();
ONLINESUBSYSTEMUTILS_API UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature();
ONLINESUBSYSTEMUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult();
UPackage* Z_Construct_UPackage__Script_OnlineSubsystemUtils();
// End Cross Module References

// Begin ScriptStruct FBlueprintSessionResult
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintSessionResult;
class UScriptStruct* FBlueprintSessionResult::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintSessionResult.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintSessionResult.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintSessionResult, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystemUtils(), TEXT("BlueprintSessionResult"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintSessionResult.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UScriptStruct* StaticStruct<FBlueprintSessionResult>()
{
	return FBlueprintSessionResult::StaticStruct();
}
struct Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintSessionResult>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
	nullptr,
	&NewStructOps,
	"BlueprintSessionResult",
	nullptr,
	0,
	sizeof(FBlueprintSessionResult),
	alignof(FBlueprintSessionResult),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FBlueprintSessionResult()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintSessionResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintSessionResult.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_BlueprintSessionResult.InnerSingleton;
}
// End ScriptStruct FBlueprintSessionResult

// Begin Delegate FBlueprintFindSessionsResultDelegate
struct Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics
{
	struct _Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms
	{
		TArray<FBlueprintSessionResult> Results;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Results_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Results_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Results;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner = { "Results", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(0, nullptr) }; // 1307808723
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results = { "Results", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms, Results), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Results_MetaData), NewProp_Results_MetaData) }; // 1307808723
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::NewProp_Results,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils, nullptr, "BlueprintFindSessionsResultDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FBlueprintFindSessionsResultDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintFindSessionsResultDelegate, TArray<FBlueprintSessionResult> const& Results)
{
	struct _Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms
	{
		TArray<FBlueprintSessionResult> Results;
	};
	_Script_OnlineSubsystemUtils_eventBlueprintFindSessionsResultDelegate_Parms Parms;
	Parms.Results=Results;
	BlueprintFindSessionsResultDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FBlueprintFindSessionsResultDelegate

// Begin Class UFindSessionsCallbackProxy Function FindSessions
struct Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics
{
	struct FindSessionsCallbackProxy_eventFindSessions_Parms
	{
		UObject* WorldContextObject;
		APlayerController* PlayerController;
		int32 MaxResults;
		bool bUseLAN;
		UFindSessionsCallbackProxy* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Online|Session" },
		{ "Comment", "// Searches for advertised sessions with the default online subsystem\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
		{ "ToolTip", "Searches for advertised sessions with the default online subsystem" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxResults;
	static void NewProp_bUseLAN_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseLAN;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_MaxResults = { "MaxResults", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, MaxResults), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN_SetBit(void* Obj)
{
	((FindSessionsCallbackProxy_eventFindSessions_Parms*)Obj)->bUseLAN = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN = { "bUseLAN", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FindSessionsCallbackProxy_eventFindSessions_Parms), &Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventFindSessions_Parms, ReturnValue), Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_PlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_MaxResults,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_bUseLAN,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "FindSessions", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FindSessionsCallbackProxy_eventFindSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FindSessionsCallbackProxy_eventFindSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxy::execFindSessions)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxResults);
	P_GET_UBOOL(Z_Param_bUseLAN);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UFindSessionsCallbackProxy**)Z_Param__Result=UFindSessionsCallbackProxy::FindSessions(Z_Param_WorldContextObject,Z_Param_PlayerController,Z_Param_MaxResults,Z_Param_bUseLAN);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxy Function FindSessions

// Begin Class UFindSessionsCallbackProxy Function GetCurrentPlayers
struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics
{
	struct FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms
	{
		FBlueprintSessionResult Result;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1307808723
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetCurrentPlayers", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FindSessionsCallbackProxy_eventGetCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetCurrentPlayers)
{
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetCurrentPlayers(Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxy Function GetCurrentPlayers

// Begin Class UFindSessionsCallbackProxy Function GetMaxPlayers
struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics
{
	struct FindSessionsCallbackProxy_eventGetMaxPlayers_Parms
	{
		FBlueprintSessionResult Result;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetMaxPlayers_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1307808723
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetMaxPlayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetMaxPlayers", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FindSessionsCallbackProxy_eventGetMaxPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FindSessionsCallbackProxy_eventGetMaxPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetMaxPlayers)
{
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetMaxPlayers(Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxy Function GetMaxPlayers

// Begin Class UFindSessionsCallbackProxy Function GetPingInMs
struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics
{
	struct FindSessionsCallbackProxy_eventGetPingInMs_Parms
	{
		FBlueprintSessionResult Result;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetPingInMs_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1307808723
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetPingInMs_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetPingInMs", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FindSessionsCallbackProxy_eventGetPingInMs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FindSessionsCallbackProxy_eventGetPingInMs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetPingInMs)
{
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UFindSessionsCallbackProxy::GetPingInMs(Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxy Function GetPingInMs

// Begin Class UFindSessionsCallbackProxy Function GetServerName
struct Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics
{
	struct FindSessionsCallbackProxy_eventGetServerName_Parms
	{
		FBlueprintSessionResult Result;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Online|Session" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetServerName_Parms, Result), Z_Construct_UScriptStruct_FBlueprintSessionResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 1307808723
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FindSessionsCallbackProxy_eventGetServerName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFindSessionsCallbackProxy, nullptr, "GetServerName", nullptr, nullptr, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FindSessionsCallbackProxy_eventGetServerName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FindSessionsCallbackProxy_eventGetServerName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFindSessionsCallbackProxy::execGetServerName)
{
	P_GET_STRUCT_REF(FBlueprintSessionResult,Z_Param_Out_Result);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=UFindSessionsCallbackProxy::GetServerName(Z_Param_Out_Result);
	P_NATIVE_END;
}
// End Class UFindSessionsCallbackProxy Function GetServerName

// Begin Class UFindSessionsCallbackProxy
void UFindSessionsCallbackProxy::StaticRegisterNativesUFindSessionsCallbackProxy()
{
	UClass* Class = UFindSessionsCallbackProxy::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindSessions", &UFindSessionsCallbackProxy::execFindSessions },
		{ "GetCurrentPlayers", &UFindSessionsCallbackProxy::execGetCurrentPlayers },
		{ "GetMaxPlayers", &UFindSessionsCallbackProxy::execGetMaxPlayers },
		{ "GetPingInMs", &UFindSessionsCallbackProxy::execGetPingInMs },
		{ "GetServerName", &UFindSessionsCallbackProxy::execGetServerName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFindSessionsCallbackProxy);
UClass* Z_Construct_UClass_UFindSessionsCallbackProxy_NoRegister()
{
	return UFindSessionsCallbackProxy::StaticClass();
}
struct Z_Construct_UClass_UFindSessionsCallbackProxy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FindSessionsCallbackProxy.h" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Comment", "// Called when there is a successful query\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is a successful query" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Comment", "// Called when there is an unsuccessful query\n" },
		{ "ModuleRelativePath", "Classes/FindSessionsCallbackProxy.h" },
		{ "ToolTip", "Called when there is an unsuccessful query" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_FindSessions, "FindSessions" }, // 339845678
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetCurrentPlayers, "GetCurrentPlayers" }, // 3286788538
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetMaxPlayers, "GetMaxPlayers" }, // 3020008565
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetPingInMs, "GetPingInMs" }, // 513395910
		{ &Z_Construct_UFunction_UFindSessionsCallbackProxy_GetServerName, "GetServerName" }, // 461864793
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFindSessionsCallbackProxy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindSessionsCallbackProxy, OnSuccess), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 367169487
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFindSessionsCallbackProxy, OnFailure), Z_Construct_UDelegateFunction_OnlineSubsystemUtils_BlueprintFindSessionsResultDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 367169487
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UOnlineBlueprintCallProxyBase,
	(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystemUtils,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::ClassParams = {
	&UFindSessionsCallbackProxy::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::Class_MetaDataParams), Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UFindSessionsCallbackProxy()
{
	if (!Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton, Z_Construct_UClass_UFindSessionsCallbackProxy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFindSessionsCallbackProxy.OuterSingleton;
}
template<> ONLINESUBSYSTEMUTILS_API UClass* StaticClass<UFindSessionsCallbackProxy>()
{
	return UFindSessionsCallbackProxy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UFindSessionsCallbackProxy);
UFindSessionsCallbackProxy::~UFindSessionsCallbackProxy() {}
// End Class UFindSessionsCallbackProxy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FBlueprintSessionResult::StaticStruct, Z_Construct_UScriptStruct_FBlueprintSessionResult_Statics::NewStructOps, TEXT("BlueprintSessionResult"), &Z_Registration_Info_UScriptStruct_BlueprintSessionResult, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintSessionResult), 1307808723U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFindSessionsCallbackProxy, UFindSessionsCallbackProxy::StaticClass, TEXT("UFindSessionsCallbackProxy"), &Z_Registration_Info_UClass_UFindSessionsCallbackProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFindSessionsCallbackProxy), 465703393U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_49619576(TEXT("/Script/OnlineSubsystemUtils"),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystemUtils_Source_OnlineSubsystemUtils_Classes_FindSessionsCallbackProxy_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
