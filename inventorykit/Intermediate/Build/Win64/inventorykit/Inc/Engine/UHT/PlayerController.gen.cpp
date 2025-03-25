// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackParameters.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Public/WorldPartition/WorldPartitionStreamingSource.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "UObject/CoreNet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UEnum* Z_Construct_UEnum_CoreUObject_EMouseCursor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FPlatformUserId();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController();
ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ASpectatorPawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsData_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCheatManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UNetConnection_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayer_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPlayerInput_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTouchInterface_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECameraShakePlaySpace();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EControllerAnalogStick();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EStreamingSourcePriority();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETravelType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EViewTargetBlendFunction();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActiveForceFeedbackEffect();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FForceFeedbackParameters();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamingSourceShape();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUniqueNetIdRepl();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FViewTargetTransitionParams();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDynamicForceFeedbackAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDynamicForceFeedbackAction;
static UEnum* EDynamicForceFeedbackAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDynamicForceFeedbackAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDynamicForceFeedbackAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDynamicForceFeedbackAction"));
	}
	return Z_Registration_Info_UEnum_EDynamicForceFeedbackAction.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDynamicForceFeedbackAction::Type>()
{
	return EDynamicForceFeedbackAction_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "Start.Name", "EDynamicForceFeedbackAction::Start" },
		{ "Stop.Name", "EDynamicForceFeedbackAction::Stop" },
		{ "Update.Name", "EDynamicForceFeedbackAction::Update" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDynamicForceFeedbackAction::Start", (int64)EDynamicForceFeedbackAction::Start },
		{ "EDynamicForceFeedbackAction::Update", (int64)EDynamicForceFeedbackAction::Update },
		{ "EDynamicForceFeedbackAction::Stop", (int64)EDynamicForceFeedbackAction::Stop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDynamicForceFeedbackAction",
	"EDynamicForceFeedbackAction::Type",
	Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction()
{
	if (!Z_Registration_Info_UEnum_EDynamicForceFeedbackAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDynamicForceFeedbackAction.InnerSingleton, Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDynamicForceFeedbackAction.InnerSingleton;
}
// End Enum EDynamicForceFeedbackAction

// Begin ScriptStruct FUpdateLevelStreamingLevelStatus
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus;
class UScriptStruct* FUpdateLevelStreamingLevelStatus::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("UpdateLevelStreamingLevelStatus"));
	}
	return Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FUpdateLevelStreamingLevelStatus>()
{
	return FUpdateLevelStreamingLevelStatus::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** This structure is used to pass arguments to ClientUpdateMultipleLevelsStreamingStatus() client RPC function */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "This structure is used to pass arguments to ClientUpdateMultipleLevelsStreamingStatus() client RPC function" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "Comment", "/** Name of the level package name used for loading. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Name of the level package name used for loading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LODIndex_MetaData[] = {
		{ "Comment", "/** Current LOD index for a streaming level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Current LOD index for a streaming level" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBeLoaded_MetaData[] = {
		{ "Comment", "/** Whether the level should be loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the level should be loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBeVisible_MetaData[] = {
		{ "Comment", "/** Whether the level should be visible if it is loaded */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the level should be visible if it is loaded" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBlockOnLoad_MetaData[] = {
		{ "Comment", "/** Whether we want to force a blocking load */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether we want to force a blocking load" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNewShouldBlockOnUnload_MetaData[] = {
		{ "Comment", "/** Whether we want to force a blocking unload */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether we want to force a blocking unload" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static void NewProp_bNewShouldBeLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeLoaded;
	static void NewProp_bNewShouldBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeVisible;
	static void NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBlockOnLoad;
	static void NewProp_bNewShouldBlockOnUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBlockOnUnload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUpdateLevelStreamingLevelStatus>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateLevelStreamingLevelStatus, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUpdateLevelStreamingLevelStatus, LODIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LODIndex_MetaData), NewProp_LODIndex_MetaData) };
void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit(void* Obj)
{
	((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBeLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded = { "bNewShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewShouldBeLoaded_MetaData), NewProp_bNewShouldBeLoaded_MetaData) };
void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_SetBit(void* Obj)
{
	((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible = { "bNewShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewShouldBeVisible_MetaData), NewProp_bNewShouldBeVisible_MetaData) };
void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj)
{
	((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBlockOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad = { "bNewShouldBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewShouldBlockOnLoad_MetaData), NewProp_bNewShouldBlockOnLoad_MetaData) };
void Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnUnload_SetBit(void* Obj)
{
	((FUpdateLevelStreamingLevelStatus*)Obj)->bNewShouldBlockOnUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnUnload = { "bNewShouldBlockOnUnload", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FUpdateLevelStreamingLevelStatus), &Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnUnload_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNewShouldBlockOnUnload_MetaData), NewProp_bNewShouldBlockOnUnload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewProp_bNewShouldBlockOnUnload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"UpdateLevelStreamingLevelStatus",
	Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::PropPointers),
	sizeof(FUpdateLevelStreamingLevelStatus),
	alignof(FUpdateLevelStreamingLevelStatus),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus()
{
	if (!Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus.InnerSingleton, Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus.InnerSingleton;
}
// End ScriptStruct FUpdateLevelStreamingLevelStatus

// Begin ScriptStruct FAsyncPhysicsTimestamp
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp;
class UScriptStruct* FAsyncPhysicsTimestamp::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AsyncPhysicsTimestamp"));
	}
	return Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAsyncPhysicsTimestamp>()
{
	return FAsyncPhysicsTimestamp::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ServerFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocalFrame_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LocalFrame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAsyncPhysicsTimestamp>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::NewProp_ServerFrame = { "ServerFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncPhysicsTimestamp, ServerFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ServerFrame_MetaData), NewProp_ServerFrame_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::NewProp_LocalFrame = { "LocalFrame", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAsyncPhysicsTimestamp, LocalFrame), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocalFrame_MetaData), NewProp_LocalFrame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::NewProp_ServerFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::NewProp_LocalFrame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"AsyncPhysicsTimestamp",
	Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::PropPointers),
	sizeof(FAsyncPhysicsTimestamp),
	alignof(FAsyncPhysicsTimestamp),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp()
{
	if (!Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp.InnerSingleton, Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp.InnerSingleton;
}
// End ScriptStruct FAsyncPhysicsTimestamp

// Begin Class APlayerController Function ActivateTouchInterface
struct Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics
{
	struct PlayerController_eventActivateTouchInterface_Parms
	{
		UTouchInterface* NewTouchInterface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Activates a new touch interface for this player controller */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Activates a new touch interface for this player controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTouchInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::NewProp_NewTouchInterface = { "NewTouchInterface", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventActivateTouchInterface_Parms, NewTouchInterface), Z_Construct_UClass_UTouchInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::NewProp_NewTouchInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ActivateTouchInterface", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PlayerController_eventActivateTouchInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::PlayerController_eventActivateTouchInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ActivateTouchInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ActivateTouchInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execActivateTouchInterface)
{
	P_GET_OBJECT(UTouchInterface,Z_Param_NewTouchInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ActivateTouchInterface(Z_Param_NewTouchInterface);
	P_NATIVE_END;
}
// End Class APlayerController Function ActivateTouchInterface

// Begin Class APlayerController Function AddPitchInput
struct Z_Construct_UFunction_APlayerController_AddPitchInput_Statics
{
	struct PlayerController_eventAddPitchInput_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Add Pitch (look up) input. This value is multiplied by InputPitchScale.\n\x09 * @param Val Amount to add to Pitch. This value is multiplied by InputPitchScale.\n\x09 */" },
		{ "Keywords", "up down" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Add Pitch (look up) input. This value is multiplied by InputPitchScale.\n@param Val Amount to add to Pitch. This value is multiplied by InputPitchScale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventAddPitchInput_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "AddPitchInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PlayerController_eventAddPitchInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::PlayerController_eventAddPitchInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_AddPitchInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_AddPitchInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execAddPitchInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPitchInput(Z_Param_Val);
	P_NATIVE_END;
}
// End Class APlayerController Function AddPitchInput

// Begin Class APlayerController Function AddRollInput
struct Z_Construct_UFunction_APlayerController_AddRollInput_Statics
{
	struct PlayerController_eventAddRollInput_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Add Roll input. This value is multiplied by InputRollScale.\n\x09 * @param Val Amount to add to Roll. This value is multiplied by InputRollScale.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Add Roll input. This value is multiplied by InputRollScale.\n@param Val Amount to add to Roll. This value is multiplied by InputRollScale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_AddRollInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventAddRollInput_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_AddRollInput_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_AddRollInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "AddRollInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PlayerController_eventAddRollInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_AddRollInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_AddRollInput_Statics::PlayerController_eventAddRollInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_AddRollInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_AddRollInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execAddRollInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddRollInput(Z_Param_Val);
	P_NATIVE_END;
}
// End Class APlayerController Function AddRollInput

// Begin Class APlayerController Function AddYawInput
struct Z_Construct_UFunction_APlayerController_AddYawInput_Statics
{
	struct PlayerController_eventAddYawInput_Parms
	{
		float Val;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Add Yaw (turn) input. This value is multiplied by InputYawScale.\n\x09 * @param Val Amount to add to Yaw. This value is multiplied by InputYawScale.\n\x09 */" },
		{ "Keywords", "left right turn" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Add Yaw (turn) input. This value is multiplied by InputYawScale.\n@param Val Amount to add to Yaw. This value is multiplied by InputYawScale." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Val;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_AddYawInput_Statics::NewProp_Val = { "Val", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventAddYawInput_Parms, Val), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_AddYawInput_Statics::NewProp_Val,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_AddYawInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "AddYawInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PlayerController_eventAddYawInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_AddYawInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_AddYawInput_Statics::PlayerController_eventAddYawInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_AddYawInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_AddYawInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execAddYawInput)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Val);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddYawInput(Z_Param_Val);
	P_NATIVE_END;
}
// End Class APlayerController Function AddYawInput

// Begin Class APlayerController Function Camera
struct Z_Construct_UFunction_APlayerController_Camera_Statics
{
	struct PlayerController_eventCamera_Parms
	{
		FName NewMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Change Camera mode\n\x09 * @param\x09New camera mode to set\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Change Camera mode\n@param       New camera mode to set" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_Camera_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventCamera_Parms, NewMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_Camera_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_Camera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "Camera", nullptr, nullptr, Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Camera_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_Camera_Statics::PlayerController_eventCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Camera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_Camera_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_Camera_Statics::PlayerController_eventCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_Camera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_Camera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execCamera)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Camera(Z_Param_NewMode);
	P_NATIVE_END;
}
// End Class APlayerController Function Camera

// Begin Class APlayerController Function CanRestartPlayer
struct Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics
{
	struct PlayerController_eventCanRestartPlayer_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if this controller thinks it's able to restart. Called from GameModeBase::PlayerCanRestart */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if this controller thinks it's able to restart. Called from GameModeBase::PlayerCanRestart" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventCanRestartPlayer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventCanRestartPlayer_Parms), &Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "CanRestartPlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PlayerController_eventCanRestartPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::PlayerController_eventCanRestartPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_CanRestartPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_CanRestartPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execCanRestartPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanRestartPlayer();
	P_NATIVE_END;
}
// End Class APlayerController Function CanRestartPlayer

// Begin Class APlayerController Function ClearAudioListenerAttenuationOverride
struct Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClearAudioListenerAttenuationOverride", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClearAudioListenerAttenuationOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAudioListenerAttenuationOverride();
	P_NATIVE_END;
}
// End Class APlayerController Function ClearAudioListenerAttenuationOverride

// Begin Class APlayerController Function ClearAudioListenerOverride
struct Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "Comment", "/**\n\x09 * Clear any overrides that have been applied to audio listener\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Clear any overrides that have been applied to audio listener" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClearAudioListenerOverride", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClearAudioListenerOverride)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearAudioListenerOverride();
	P_NATIVE_END;
}
// End Class APlayerController Function ClearAudioListenerOverride

// Begin Class APlayerController Function ClientAckTimeDilation
struct PlayerController_eventClientAckTimeDilation_Parms
{
	float TimeDilation;
	int32 ServerStep;
};
static FName NAME_APlayerController_ClientAckTimeDilation = FName(TEXT("ClientAckTimeDilation"));
void APlayerController::ClientAckTimeDilation(float TimeDilation, int32 ServerStep)
{
	PlayerController_eventClientAckTimeDilation_Parms Parms;
	Parms.TimeDilation=TimeDilation;
	Parms.ServerStep=ServerStep;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientAckTimeDilation),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Client receives the time dilation value it needs to use to keep its ServerFrame to LocalFrame offset in sync */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Client receives the time dilation value it needs to use to keep its ServerFrame to LocalFrame offset in sync" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDilation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ServerStep;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientAckTimeDilation_Parms, TimeDilation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::NewProp_ServerStep = { "ServerStep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientAckTimeDilation_Parms, ServerStep), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::NewProp_TimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::NewProp_ServerStep,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientAckTimeDilation", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::PropPointers), sizeof(PlayerController_eventClientAckTimeDilation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientAckTimeDilation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientAckTimeDilation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientAckTimeDilation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientAckTimeDilation)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_TimeDilation);
	P_GET_PROPERTY(FIntProperty,Z_Param_ServerStep);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientAckTimeDilation_Implementation(Z_Param_TimeDilation,Z_Param_ServerStep);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientAckTimeDilation

// Begin Class APlayerController Function ClientAckUpdateLevelVisibility
struct PlayerController_eventClientAckUpdateLevelVisibility_Parms
{
	FName PackageName;
	FNetLevelVisibilityTransactionId TransactionId;
	bool bClientAckCanMakeVisible;
};
static FName NAME_APlayerController_ClientAckUpdateLevelVisibility = FName(TEXT("ClientAckUpdateLevelVisibility"));
void APlayerController::ClientAckUpdateLevelVisibility(FName PackageName, FNetLevelVisibilityTransactionId TransactionId, bool bClientAckCanMakeVisible)
{
	PlayerController_eventClientAckUpdateLevelVisibility_Parms Parms;
	Parms.PackageName=PackageName;
	Parms.TransactionId=TransactionId;
	Parms.bClientAckCanMakeVisible=bClientAckCanMakeVisible ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientAckUpdateLevelVisibility),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Acknowledge received LevelVisibilityTransactionId\n\x09 * @param PackageName - Identifying the level that we are acknowledging levelvisibility for\n\x09 * @param TransactionId - TransactionId being acknowledged\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Acknowledge received LevelVisibilityTransactionId\n@param PackageName - Identifying the level that we are acknowledging levelvisibility for\n@param TransactionId - TransactionId being acknowledged" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransactionId;
	static void NewProp_bClientAckCanMakeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bClientAckCanMakeVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientAckUpdateLevelVisibility_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientAckUpdateLevelVisibility_Parms, TransactionId), Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId, METADATA_PARAMS(0, nullptr) }; // 1049054583
void Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_bClientAckCanMakeVisible_SetBit(void* Obj)
{
	((PlayerController_eventClientAckUpdateLevelVisibility_Parms*)Obj)->bClientAckCanMakeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_bClientAckCanMakeVisible = { "bClientAckCanMakeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientAckUpdateLevelVisibility_Parms), &Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_bClientAckCanMakeVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_TransactionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::NewProp_bClientAckCanMakeVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientAckUpdateLevelVisibility", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::PropPointers), sizeof(PlayerController_eventClientAckUpdateLevelVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientAckUpdateLevelVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientAckUpdateLevelVisibility)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_GET_STRUCT(FNetLevelVisibilityTransactionId,Z_Param_TransactionId);
	P_GET_UBOOL(Z_Param_bClientAckCanMakeVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientAckUpdateLevelVisibility_Implementation(Z_Param_PackageName,Z_Param_TransactionId,Z_Param_bClientAckCanMakeVisible);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientAckUpdateLevelVisibility

// Begin Class APlayerController Function ClientAddTextureStreamingLoc
struct PlayerController_eventClientAddTextureStreamingLoc_Parms
{
	FVector InLoc;
	float Duration;
	bool bOverrideLocation;
};
static FName NAME_APlayerController_ClientAddTextureStreamingLoc = FName(TEXT("ClientAddTextureStreamingLoc"));
void APlayerController::ClientAddTextureStreamingLoc(FVector InLoc, float Duration, bool bOverrideLocation)
{
	PlayerController_eventClientAddTextureStreamingLoc_Parms Parms;
	Parms.InLoc=InLoc;
	Parms.Duration=Duration;
	Parms.bOverrideLocation=bOverrideLocation ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientAddTextureStreamingLoc),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Adds a location to the texture streaming system for the specified duration. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Adds a location to the texture streaming system for the specified duration." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InLoc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bOverrideLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_InLoc = { "InLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientAddTextureStreamingLoc_Parms, InLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientAddTextureStreamingLoc_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation_SetBit(void* Obj)
{
	((PlayerController_eventClientAddTextureStreamingLoc_Parms*)Obj)->bOverrideLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation = { "bOverrideLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientAddTextureStreamingLoc_Parms), &Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_InLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::NewProp_bOverrideLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientAddTextureStreamingLoc", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::PropPointers), sizeof(PlayerController_eventClientAddTextureStreamingLoc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientAddTextureStreamingLoc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientAddTextureStreamingLoc)
{
	P_GET_STRUCT(FVector,Z_Param_InLoc);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bOverrideLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientAddTextureStreamingLoc_Implementation(Z_Param_InLoc,Z_Param_Duration,Z_Param_bOverrideLocation);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientAddTextureStreamingLoc

// Begin Class APlayerController Function ClientCancelPendingMapChange
static FName NAME_APlayerController_ClientCancelPendingMapChange = FName(TEXT("ClientCancelPendingMapChange"));
void APlayerController::ClientCancelPendingMapChange()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCancelPendingMapChange),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Tells client to cancel any pending map change. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells client to cancel any pending map change." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCancelPendingMapChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientCancelPendingMapChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientCancelPendingMapChange_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientCancelPendingMapChange

// Begin Class APlayerController Function ClientCapBandwidth
struct PlayerController_eventClientCapBandwidth_Parms
{
	int32 Cap;
};
static FName NAME_APlayerController_ClientCapBandwidth = FName(TEXT("ClientCapBandwidth"));
void APlayerController::ClientCapBandwidth(int32 Cap)
{
	PlayerController_eventClientCapBandwidth_Parms Parms;
	Parms.Cap=Cap;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCapBandwidth),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Set CurrentNetSpeed to the lower of its current value and Cap. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set CurrentNetSpeed to the lower of its current value and Cap." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Cap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::NewProp_Cap = { "Cap", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientCapBandwidth_Parms, Cap), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::NewProp_Cap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCapBandwidth", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::PropPointers), sizeof(PlayerController_eventClientCapBandwidth_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientCapBandwidth_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientCapBandwidth()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCapBandwidth_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientCapBandwidth)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Cap);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientCapBandwidth_Implementation(Z_Param_Cap);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientCapBandwidth

// Begin Class APlayerController Function ClientClearCameraLensEffects
static FName NAME_APlayerController_ClientClearCameraLensEffects = FName(TEXT("ClientClearCameraLensEffects"));
void APlayerController::ClientClearCameraLensEffects()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientClearCameraLensEffects),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Removes all Camera Lens Effects. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Removes all Camera Lens Effects." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientClearCameraLensEffects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientClearCameraLensEffects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientClearCameraLensEffects_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientClearCameraLensEffects

// Begin Class APlayerController Function ClientCommitMapChange
static FName NAME_APlayerController_ClientCommitMapChange = FName(TEXT("ClientCommitMapChange"));
void APlayerController::ClientCommitMapChange()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCommitMapChange),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Actually performs the level transition prepared by PrepareMapChange(). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Actually performs the level transition prepared by PrepareMapChange()." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCommitMapChange", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientCommitMapChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCommitMapChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientCommitMapChange)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientCommitMapChange_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientCommitMapChange

// Begin Class APlayerController Function ClientCorrectionAsyncPhysicsTimestamp
struct PlayerController_eventClientCorrectionAsyncPhysicsTimestamp_Parms
{
	FAsyncPhysicsTimestamp Timestamp;
};
static FName NAME_APlayerController_ClientCorrectionAsyncPhysicsTimestamp = FName(TEXT("ClientCorrectionAsyncPhysicsTimestamp"));
void APlayerController::ClientCorrectionAsyncPhysicsTimestamp(FAsyncPhysicsTimestamp Timestamp)
{
	PlayerController_eventClientCorrectionAsyncPhysicsTimestamp_Parms Parms;
	Parms.Timestamp=Timestamp;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientCorrectionAsyncPhysicsTimestamp),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientCorrectionAsyncPhysicsTimestamp_Parms, Timestamp), Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp, METADATA_PARAMS(0, nullptr) }; // 312180022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientCorrectionAsyncPhysicsTimestamp", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::PropPointers), sizeof(PlayerController_eventClientCorrectionAsyncPhysicsTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C43, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientCorrectionAsyncPhysicsTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientCorrectionAsyncPhysicsTimestamp)
{
	P_GET_STRUCT(FAsyncPhysicsTimestamp,Z_Param_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientCorrectionAsyncPhysicsTimestamp_Implementation(Z_Param_Timestamp);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientCorrectionAsyncPhysicsTimestamp

// Begin Class APlayerController Function ClientEnableNetworkVoice
struct PlayerController_eventClientEnableNetworkVoice_Parms
{
	bool bEnable;
};
static FName NAME_APlayerController_ClientEnableNetworkVoice = FName(TEXT("ClientEnableNetworkVoice"));
void APlayerController::ClientEnableNetworkVoice(bool bEnable)
{
	PlayerController_eventClientEnableNetworkVoice_Parms Parms;
	Parms.bEnable=bEnable ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientEnableNetworkVoice),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Tell the client to enable or disable voice chat (not muting)\n\x09 * @param bEnable enable or disable voice chat\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to enable or disable voice chat (not muting)\n@param bEnable enable or disable voice chat" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((PlayerController_eventClientEnableNetworkVoice_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientEnableNetworkVoice_Parms), &Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientEnableNetworkVoice", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::PropPointers), sizeof(PlayerController_eventClientEnableNetworkVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientEnableNetworkVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientEnableNetworkVoice)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientEnableNetworkVoice_Implementation(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientEnableNetworkVoice

// Begin Class APlayerController Function ClientEndOnlineSession
static FName NAME_APlayerController_ClientEndOnlineSession = FName(TEXT("ClientEndOnlineSession"));
void APlayerController::ClientEndOnlineSession()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientEndOnlineSession),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client that the session is about to start */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify client that the session is about to start" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientEndOnlineSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientEndOnlineSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientEndOnlineSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientEndOnlineSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientEndOnlineSession_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientEndOnlineSession

// Begin Class APlayerController Function ClientFlushLevelStreaming
static FName NAME_APlayerController_ClientFlushLevelStreaming = FName(TEXT("ClientFlushLevelStreaming"));
void APlayerController::ClientFlushLevelStreaming()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientFlushLevelStreaming),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tells the client to block until all pending level streaming actions are complete\n\x09 * happens at the end of the tick\n\x09 * primarily used to force update the client ASAP at join time\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the client to block until all pending level streaming actions are complete\nhappens at the end of the tick\nprimarily used to force update the client ASAP at join time" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientFlushLevelStreaming", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientFlushLevelStreaming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientFlushLevelStreaming_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientFlushLevelStreaming

// Begin Class APlayerController Function ClientForceGarbageCollection
static FName NAME_APlayerController_ClientForceGarbageCollection = FName(TEXT("ClientForceGarbageCollection"));
void APlayerController::ClientForceGarbageCollection()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientForceGarbageCollection),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Forces GC at the end of the tick on the client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Forces GC at the end of the tick on the client" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientForceGarbageCollection", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientForceGarbageCollection)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientForceGarbageCollection_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientForceGarbageCollection

// Begin Class APlayerController Function ClientGameEnded
struct PlayerController_eventClientGameEnded_Parms
{
	AActor* EndGameFocus;
	bool bIsWinner;
};
static FName NAME_APlayerController_ClientGameEnded = FName(TEXT("ClientGameEnded"));
void APlayerController::ClientGameEnded(AActor* EndGameFocus, bool bIsWinner)
{
	PlayerController_eventClientGameEnded_Parms Parms;
	Parms.EndGameFocus=EndGameFocus;
	Parms.bIsWinner=bIsWinner ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientGameEnded),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Replicated function called by GameHasEnded().\n\x09 * @param\x09""EndGameFocus - actor to view with camera\n\x09 * @param\x09""bIsWinner - true if this controller is on winning team\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated function called by GameHasEnded().\n@param       EndGameFocus - actor to view with camera\n@param       bIsWinner - true if this controller is on winning team" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndGameFocus;
	static void NewProp_bIsWinner_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsWinner;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_EndGameFocus = { "EndGameFocus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientGameEnded_Parms, EndGameFocus), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner_SetBit(void* Obj)
{
	((PlayerController_eventClientGameEnded_Parms*)Obj)->bIsWinner = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner = { "bIsWinner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientGameEnded_Parms), &Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_EndGameFocus,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::NewProp_bIsWinner,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientGameEnded", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::PropPointers), sizeof(PlayerController_eventClientGameEnded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientGameEnded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientGameEnded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientGameEnded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientGameEnded)
{
	P_GET_OBJECT(AActor,Z_Param_EndGameFocus);
	P_GET_UBOOL(Z_Param_bIsWinner);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientGameEnded_Implementation(Z_Param_EndGameFocus,Z_Param_bIsWinner);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientGameEnded

// Begin Class APlayerController Function ClientGotoState
struct PlayerController_eventClientGotoState_Parms
{
	FName NewState;
};
static FName NAME_APlayerController_ClientGotoState = FName(TEXT("ClientGotoState"));
void APlayerController::ClientGotoState(FName NewState)
{
	PlayerController_eventClientGotoState_Parms Parms;
	Parms.NewState=NewState;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientGotoState),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientGotoState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Server uses this to force client into NewState .\n\x09 * @Note ALL STATE NAMES NEED TO BE DEFINED IN name table in UnrealNames.h to be correctly replicated (so they are mapped to the same thing on client and server).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Server uses this to force client into NewState .\n@Note ALL STATE NAMES NEED TO BE DEFINED IN name table in UnrealNames.h to be correctly replicated (so they are mapped to the same thing on client and server)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientGotoState_Parms, NewState), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientGotoState", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::PropPointers), sizeof(PlayerController_eventClientGotoState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientGotoState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientGotoState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientGotoState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientGotoState)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientGotoState_Implementation(Z_Param_NewState);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientGotoState

// Begin Class APlayerController Function ClientIgnoreLookInput
struct PlayerController_eventClientIgnoreLookInput_Parms
{
	bool bIgnore;
};
static FName NAME_APlayerController_ClientIgnoreLookInput = FName(TEXT("ClientIgnoreLookInput"));
void APlayerController::ClientIgnoreLookInput(bool bIgnore)
{
	PlayerController_eventClientIgnoreLookInput_Parms Parms;
	Parms.bIgnore=bIgnore ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientIgnoreLookInput),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Calls IgnoreLookInput on client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Calls IgnoreLookInput on client" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore_SetBit(void* Obj)
{
	((PlayerController_eventClientIgnoreLookInput_Parms*)Obj)->bIgnore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore = { "bIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientIgnoreLookInput_Parms), &Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::NewProp_bIgnore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientIgnoreLookInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::PropPointers), sizeof(PlayerController_eventClientIgnoreLookInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientIgnoreLookInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientIgnoreLookInput)
{
	P_GET_UBOOL(Z_Param_bIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientIgnoreLookInput_Implementation(Z_Param_bIgnore);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientIgnoreLookInput

// Begin Class APlayerController Function ClientIgnoreMoveInput
struct PlayerController_eventClientIgnoreMoveInput_Parms
{
	bool bIgnore;
};
static FName NAME_APlayerController_ClientIgnoreMoveInput = FName(TEXT("ClientIgnoreMoveInput"));
void APlayerController::ClientIgnoreMoveInput(bool bIgnore)
{
	PlayerController_eventClientIgnoreMoveInput_Parms Parms;
	Parms.bIgnore=bIgnore ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientIgnoreMoveInput),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Calls IgnoreMoveInput on client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Calls IgnoreMoveInput on client" },
	};
#endif // WITH_METADATA
	static void NewProp_bIgnore_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore_SetBit(void* Obj)
{
	((PlayerController_eventClientIgnoreMoveInput_Parms*)Obj)->bIgnore = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore = { "bIgnore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientIgnoreMoveInput_Parms), &Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::NewProp_bIgnore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientIgnoreMoveInput", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::PropPointers), sizeof(PlayerController_eventClientIgnoreMoveInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientIgnoreMoveInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientIgnoreMoveInput)
{
	P_GET_UBOOL(Z_Param_bIgnore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientIgnoreMoveInput_Implementation(Z_Param_bIgnore);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientIgnoreMoveInput

// Begin Class APlayerController Function ClientMessage
struct PlayerController_eventClientMessage_Parms
{
	FString S;
	FName Type;
	float MsgLifeTime;
};
static FName NAME_APlayerController_ClientMessage = FName(TEXT("ClientMessage"));
void APlayerController::ClientMessage(const FString& S, FName Type, float MsgLifeTime)
{
	PlayerController_eventClientMessage_Parms Parms;
	Parms.S=S;
	Parms.Type=Type;
	Parms.MsgLifeTime=MsgLifeTime;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientMessage),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Outputs a message to HUD\n\x09 * @param S - message to display\n\x09 * @param Type - @todo document\n\x09 * @param MsgLifeTime - Optional length of time to display 0 = default time\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Outputs a message to HUD\n@param S - message to display\n@param Type - @todo document\n@param MsgLifeTime - Optional length of time to display 0 = default time" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_S;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MsgLifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientMessage_Parms, S), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_MetaData), NewProp_S_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientMessage_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_MsgLifeTime = { "MsgLifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientMessage_Parms, MsgLifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMessage_Statics::NewProp_MsgLifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientMessage", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::PropPointers), sizeof(PlayerController_eventClientMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientMessage)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_S);
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MsgLifeTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientMessage_Implementation(Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientMessage

// Begin Class APlayerController Function ClientMutePlayer
struct PlayerController_eventClientMutePlayer_Parms
{
	FUniqueNetIdRepl PlayerId;
};
static FName NAME_APlayerController_ClientMutePlayer = FName(TEXT("ClientMutePlayer"));
void APlayerController::ClientMutePlayer(FUniqueNetIdRepl PlayerId)
{
	PlayerController_eventClientMutePlayer_Parms Parms;
	Parms.PlayerId=PlayerId;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientMutePlayer),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to mute a player for this controller\n\x09 * @param PlayerId player id to mute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to mute a player for this controller\n@param PlayerId player id to mute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientMutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::NewProp_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientMutePlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::PropPointers), sizeof(PlayerController_eventClientMutePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientMutePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientMutePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientMutePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientMutePlayer)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientMutePlayer_Implementation(Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientMutePlayer

// Begin Class APlayerController Function ClientPlayForceFeedback_Internal
struct PlayerController_eventClientPlayForceFeedback_Internal_Parms
{
	UForceFeedbackEffect* ForceFeedbackEffect;
	FForceFeedbackParameters Params;
};
static FName NAME_APlayerController_ClientPlayForceFeedback_Internal = FName(TEXT("ClientPlayForceFeedback_Internal"));
void APlayerController::ClientPlayForceFeedback_Internal(UForceFeedbackEffect* ForceFeedbackEffect, FForceFeedbackParameters Params)
{
	PlayerController_eventClientPlayForceFeedback_Internal_Parms Parms;
	Parms.ForceFeedbackEffect=ForceFeedbackEffect;
	Parms.Params=Params;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlayForceFeedback_Internal),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Internal replicated version of client play force feedback event. \n\x09 * Cannot be named ClientPlayForceFeedback as redirector for blueprint function version to K2_... does not work in that case\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Internal replicated version of client play force feedback event.\nCannot be named ClientPlayForceFeedback as redirector for blueprint function version to K2_... does not work in that case" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Params;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlayForceFeedback_Internal_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlayForceFeedback_Internal_Parms, Params), Z_Construct_UScriptStruct_FForceFeedbackParameters, METADATA_PARAMS(0, nullptr) }; // 2186828434
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_ForceFeedbackEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::NewProp_Params,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlayForceFeedback_Internal", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::PropPointers), sizeof(PlayerController_eventClientPlayForceFeedback_Internal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040C43, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientPlayForceFeedback_Internal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientPlayForceFeedback_Internal)
{
	P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
	P_GET_STRUCT(FForceFeedbackParameters,Z_Param_Params);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPlayForceFeedback_Internal_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_Params);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientPlayForceFeedback_Internal

// Begin Class APlayerController Function ClientPlaySound
struct PlayerController_eventClientPlaySound_Parms
{
	USoundBase* Sound;
	float VolumeMultiplier;
	float PitchMultiplier;
};
static FName NAME_APlayerController_ClientPlaySound = FName(TEXT("ClientPlaySound"));
void APlayerController::ClientPlaySound(USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier)
{
	PlayerController_eventClientPlaySound_Parms Parms;
	Parms.Sound=Sound;
	Parms.VolumeMultiplier=VolumeMultiplier;
	Parms.PitchMultiplier=PitchMultiplier;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlaySound),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Play sound client-side (so only the client will hear it)\n\x09 * @param Sound\x09- Sound to play\n\x09 * @param VolumeMultiplier - Volume multiplier to apply to the sound\n\x09 * @param PitchMultiplier - Pitch multiplier to apply to the sound\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play sound client-side (so only the client will hear it)\n@param Sound - Sound to play\n@param VolumeMultiplier - Volume multiplier to apply to the sound\n@param PitchMultiplier - Pitch multiplier to apply to the sound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySound_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySound_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySound_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::NewProp_PitchMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlaySound", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::PropPointers), sizeof(PlayerController_eventClientPlaySound_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientPlaySound_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientPlaySound()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlaySound_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientPlaySound)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPlaySound_Implementation(Z_Param_Sound,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientPlaySound

// Begin Class APlayerController Function ClientPlaySoundAtLocation
struct PlayerController_eventClientPlaySoundAtLocation_Parms
{
	USoundBase* Sound;
	FVector Location;
	float VolumeMultiplier;
	float PitchMultiplier;
};
static FName NAME_APlayerController_ClientPlaySoundAtLocation = FName(TEXT("ClientPlaySoundAtLocation"));
void APlayerController::ClientPlaySoundAtLocation(USoundBase* Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier)
{
	PlayerController_eventClientPlaySoundAtLocation_Parms Parms;
	Parms.Sound=Sound;
	Parms.Location=Location;
	Parms.VolumeMultiplier=VolumeMultiplier;
	Parms.PitchMultiplier=PitchMultiplier;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPlaySoundAtLocation),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Play sound client-side at the specified location\n\x09 * @param Sound\x09- Sound to play\n\x09 * @param Location - Location to play the sound at\n\x09 * @param VolumeMultiplier - Volume multiplier to apply to the sound\n\x09 * @param PitchMultiplier - Pitch multiplier to apply to the sound\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play sound client-side at the specified location\n@param Sound - Sound to play\n@param Location - Location to play the sound at\n@param VolumeMultiplier - Volume multiplier to apply to the sound\n@param PitchMultiplier - Pitch multiplier to apply to the sound" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Sound;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VolumeMultiplier;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMultiplier;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Sound = { "Sound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, Sound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_VolumeMultiplier = { "VolumeMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, VolumeMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_PitchMultiplier = { "PitchMultiplier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPlaySoundAtLocation_Parms, PitchMultiplier), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Sound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_VolumeMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::NewProp_PitchMultiplier,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPlaySoundAtLocation", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::PropPointers), sizeof(PlayerController_eventClientPlaySoundAtLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientPlaySoundAtLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientPlaySoundAtLocation)
{
	P_GET_OBJECT(USoundBase,Z_Param_Sound);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_VolumeMultiplier);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchMultiplier);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPlaySoundAtLocation_Implementation(Z_Param_Sound,Z_Param_Location,Z_Param_VolumeMultiplier,Z_Param_PitchMultiplier);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientPlaySoundAtLocation

// Begin Class APlayerController Function ClientPrepareMapChange
struct PlayerController_eventClientPrepareMapChange_Parms
{
	FName LevelName;
	bool bFirst;
	bool bLast;
};
static FName NAME_APlayerController_ClientPrepareMapChange = FName(TEXT("ClientPrepareMapChange"));
void APlayerController::ClientPrepareMapChange(FName LevelName, bool bFirst, bool bLast)
{
	PlayerController_eventClientPrepareMapChange_Parms Parms;
	Parms.LevelName=LevelName;
	Parms.bFirst=bFirst ? true : false;
	Parms.bLast=bLast ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPrepareMapChange),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Asynchronously loads the given level in preparation for a streaming map transition.\n\x09 * the server sends one function per level name since dynamic arrays can't be replicated\n\x09 * @param LevelNames - the names of the level packages to load. LevelNames[0] will be the new persistent (primary) level\n\x09 * @param bFirst - whether this is the first item in the list (so clear the list first)\n\x09 * @param bLast - whether this is the last item in the list (so start preparing the change after receiving it)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Asynchronously loads the given level in preparation for a streaming map transition.\nthe server sends one function per level name since dynamic arrays can't be replicated\n@param LevelNames - the names of the level packages to load. LevelNames[0] will be the new persistent (primary) level\n@param bFirst - whether this is the first item in the list (so clear the list first)\n@param bLast - whether this is the last item in the list (so start preparing the change after receiving it)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_LevelName;
	static void NewProp_bFirst_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirst;
	static void NewProp_bLast_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLast;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_LevelName = { "LevelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPrepareMapChange_Parms, LevelName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst_SetBit(void* Obj)
{
	((PlayerController_eventClientPrepareMapChange_Parms*)Obj)->bFirst = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst = { "bFirst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientPrepareMapChange_Parms), &Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast_SetBit(void* Obj)
{
	((PlayerController_eventClientPrepareMapChange_Parms*)Obj)->bLast = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast = { "bLast", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientPrepareMapChange_Parms), &Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_LevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bFirst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::NewProp_bLast,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPrepareMapChange", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::PropPointers), sizeof(PlayerController_eventClientPrepareMapChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientPrepareMapChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientPrepareMapChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPrepareMapChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientPrepareMapChange)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_LevelName);
	P_GET_UBOOL(Z_Param_bFirst);
	P_GET_UBOOL(Z_Param_bLast);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPrepareMapChange_Implementation(Z_Param_LevelName,Z_Param_bFirst,Z_Param_bLast);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientPrepareMapChange

// Begin Class APlayerController Function ClientPrestreamTextures
struct PlayerController_eventClientPrestreamTextures_Parms
{
	AActor* ForcedActor;
	float ForceDuration;
	bool bEnableStreaming;
	int32 CinematicTextureGroups;
};
static FName NAME_APlayerController_ClientPrestreamTextures = FName(TEXT("ClientPrestreamTextures"));
void APlayerController::ClientPrestreamTextures(AActor* ForcedActor, float ForceDuration, bool bEnableStreaming, int32 CinematicTextureGroups)
{
	PlayerController_eventClientPrestreamTextures_Parms Parms;
	Parms.ForcedActor=ForcedActor;
	Parms.ForceDuration=ForceDuration;
	Parms.bEnableStreaming=bEnableStreaming ? true : false;
	Parms.CinematicTextureGroups=CinematicTextureGroups;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientPrestreamTextures),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Forces the streaming system to disregard the normal logic for the specified duration and\n\x09 * instead always load all mip-levels for all textures used by the specified actor.\n\x09 * @param ForcedActor\x09\x09- The actor whose textures should be forced into memory.\n\x09 * @param ForceDuration\x09\x09- Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n\x09 * @param bEnableStreaming\x09- Whether to start (true) or stop (false) streaming\n\x09 * @param CinematicTextureGroups\x09- Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Forces the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by the specified actor.\n@param ForcedActor           - The actor whose textures should be forced into memory.\n@param ForceDuration         - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n@param bEnableStreaming      - Whether to start (true) or stop (false) streaming\n@param CinematicTextureGroups        - Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForcedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceDuration;
	static void NewProp_bEnableStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreaming;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForcedActor = { "ForcedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPrestreamTextures_Parms, ForcedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForceDuration = { "ForceDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPrestreamTextures_Parms, ForceDuration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit(void* Obj)
{
	((PlayerController_eventClientPrestreamTextures_Parms*)Obj)->bEnableStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming = { "bEnableStreaming", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientPrestreamTextures_Parms), &Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForcedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_ForceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_bEnableStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::NewProp_CinematicTextureGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientPrestreamTextures", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::PropPointers), sizeof(PlayerController_eventClientPrestreamTextures_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientPrestreamTextures_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientPrestreamTextures()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientPrestreamTextures_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientPrestreamTextures)
{
	P_GET_OBJECT(AActor,Z_Param_ForcedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForceDuration);
	P_GET_UBOOL(Z_Param_bEnableStreaming);
	P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientPrestreamTextures_Implementation(Z_Param_ForcedActor,Z_Param_ForceDuration,Z_Param_bEnableStreaming,Z_Param_CinematicTextureGroups);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientPrestreamTextures

// Begin Class APlayerController Function ClientReceiveLocalizedMessage
struct PlayerController_eventClientReceiveLocalizedMessage_Parms
{
	TSubclassOf<ULocalMessage> Message;
	int32 Switch;
	APlayerState* RelatedPlayerState_1;
	APlayerState* RelatedPlayerState_2;
	UObject* OptionalObject;
};
static FName NAME_APlayerController_ClientReceiveLocalizedMessage = FName(TEXT("ClientReceiveLocalizedMessage"));
void APlayerController::ClientReceiveLocalizedMessage(TSubclassOf<ULocalMessage> Message, int32 Switch, APlayerState* RelatedPlayerState_1, APlayerState* RelatedPlayerState_2, UObject* OptionalObject)
{
	PlayerController_eventClientReceiveLocalizedMessage_Parms Parms;
	Parms.Message=Message;
	Parms.Switch=Switch;
	Parms.RelatedPlayerState_1=RelatedPlayerState_1;
	Parms.RelatedPlayerState_2=RelatedPlayerState_2;
	Parms.OptionalObject=OptionalObject;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReceiveLocalizedMessage),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** send client localized message id */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "send client localized message id" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Message;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Switch;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RelatedPlayerState_2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, Message), Z_Construct_UClass_UClass, Z_Construct_UClass_ULocalMessage_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Switch = { "Switch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, Switch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_1 = { "RelatedPlayerState_1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, RelatedPlayerState_1), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_2 = { "RelatedPlayerState_2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, RelatedPlayerState_2), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientReceiveLocalizedMessage_Parms, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_Switch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_RelatedPlayerState_2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::NewProp_OptionalObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReceiveLocalizedMessage", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::PropPointers), sizeof(PlayerController_eventClientReceiveLocalizedMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientReceiveLocalizedMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientReceiveLocalizedMessage)
{
	P_GET_OBJECT(UClass,Z_Param_Message);
	P_GET_PROPERTY(FIntProperty,Z_Param_Switch);
	P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_1);
	P_GET_OBJECT(APlayerState,Z_Param_RelatedPlayerState_2);
	P_GET_OBJECT(UObject,Z_Param_OptionalObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReceiveLocalizedMessage_Implementation(Z_Param_Message,Z_Param_Switch,Z_Param_RelatedPlayerState_1,Z_Param_RelatedPlayerState_2,Z_Param_OptionalObject);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientReceiveLocalizedMessage

// Begin Class APlayerController Function ClientRecvServerAckFrame
struct PlayerController_eventClientRecvServerAckFrame_Parms
{
	int32 LastProcessedInputFrame;
	int32 RecvServerFrameNumber;
	int8 TimeDilation;
};
static FName NAME_APlayerController_ClientRecvServerAckFrame = FName(TEXT("ClientRecvServerAckFrame"));
void APlayerController::ClientRecvServerAckFrame(int32 LastProcessedInputFrame, int32 RecvServerFrameNumber, int8 TimeDilation)
{
	PlayerController_eventClientRecvServerAckFrame_Parms Parms;
	Parms.LastProcessedInputFrame=LastProcessedInputFrame;
	Parms.RecvServerFrameNumber=RecvServerFrameNumber;
	Parms.TimeDilation=TimeDilation;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRecvServerAckFrame),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastProcessedInputFrame;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecvServerFrameNumber;
	static const UECodeGen_Private::FInt8PropertyParams NewProp_TimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::NewProp_LastProcessedInputFrame = { "LastProcessedInputFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRecvServerAckFrame_Parms, LastProcessedInputFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::NewProp_RecvServerFrameNumber = { "RecvServerFrameNumber", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRecvServerAckFrame_Parms, RecvServerFrameNumber), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt8PropertyParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::NewProp_TimeDilation = { "TimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRecvServerAckFrame_Parms, TimeDilation), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::NewProp_LastProcessedInputFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::NewProp_RecvServerFrameNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::NewProp_TimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRecvServerAckFrame", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::PropPointers), sizeof(PlayerController_eventClientRecvServerAckFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientRecvServerAckFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientRecvServerAckFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_LastProcessedInputFrame);
	P_GET_PROPERTY(FIntProperty,Z_Param_RecvServerFrameNumber);
	P_GET_PROPERTY(FInt8Property,Z_Param_TimeDilation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRecvServerAckFrame_Implementation(Z_Param_LastProcessedInputFrame,Z_Param_RecvServerFrameNumber,Z_Param_TimeDilation);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientRecvServerAckFrame

// Begin Class APlayerController Function ClientRecvServerAckFrameDebug
struct PlayerController_eventClientRecvServerAckFrameDebug_Parms
{
	uint8 NumBuffered;
	float TargetNumBufferedCmds;
};
static FName NAME_APlayerController_ClientRecvServerAckFrameDebug = FName(TEXT("ClientRecvServerAckFrameDebug"));
void APlayerController::ClientRecvServerAckFrameDebug(uint8 NumBuffered, float TargetNumBufferedCmds)
{
	PlayerController_eventClientRecvServerAckFrameDebug_Parms Parms;
	Parms.NumBuffered=NumBuffered;
	Parms.TargetNumBufferedCmds=TargetNumBufferedCmds;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRecvServerAckFrameDebug),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NumBuffered;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetNumBufferedCmds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::NewProp_NumBuffered = { "NumBuffered", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRecvServerAckFrameDebug_Parms, NumBuffered), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::NewProp_TargetNumBufferedCmds = { "TargetNumBufferedCmds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRecvServerAckFrameDebug_Parms, TargetNumBufferedCmds), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::NewProp_NumBuffered,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::NewProp_TargetNumBufferedCmds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRecvServerAckFrameDebug", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::PropPointers), sizeof(PlayerController_eventClientRecvServerAckFrameDebug_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientRecvServerAckFrameDebug_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientRecvServerAckFrameDebug)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NumBuffered);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TargetNumBufferedCmds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRecvServerAckFrameDebug_Implementation(Z_Param_NumBuffered,Z_Param_TargetNumBufferedCmds);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientRecvServerAckFrameDebug

// Begin Class APlayerController Function ClientRepObjRef
struct PlayerController_eventClientRepObjRef_Parms
{
	UObject* Object;
};
static FName NAME_APlayerController_ClientRepObjRef = FName(TEXT("ClientRepObjRef"));
void APlayerController::ClientRepObjRef(UObject* Object)
{
	PlayerController_eventClientRepObjRef_Parms Parms;
	Parms.Object=Object;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRepObjRef),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Development RPC for testing object reference replication */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Development RPC for testing object reference replication" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRepObjRef_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::NewProp_Object,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRepObjRef", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::PropPointers), sizeof(PlayerController_eventClientRepObjRef_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientRepObjRef_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientRepObjRef()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRepObjRef_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientRepObjRef)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRepObjRef_Implementation(Z_Param_Object);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientRepObjRef

// Begin Class APlayerController Function ClientReset
static FName NAME_APlayerController_ClientReset = FName(TEXT("ClientReset"));
void APlayerController::ClientReset()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReset),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientReset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Tell client to reset the PlayerController */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell client to reset the PlayerController" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReset", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReset_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientReset_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientReset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientReset)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReset_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientReset

// Begin Class APlayerController Function ClientRestart
struct PlayerController_eventClientRestart_Parms
{
	APawn* NewPawn;
};
static FName NAME_APlayerController_ClientRestart = FName(TEXT("ClientRestart"));
void APlayerController::ClientRestart(APawn* NewPawn)
{
	PlayerController_eventClientRestart_Parms Parms;
	Parms.NewPawn=NewPawn;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRestart),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientRestart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Tell client to restart the level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell client to restart the level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientRestart_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRestart_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRestart_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRestart", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRestart_Statics::PropPointers), sizeof(PlayerController_eventClientRestart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRestart_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientRestart_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientRestart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientRestart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRestart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientRestart)
{
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRestart_Implementation(Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientRestart

// Begin Class APlayerController Function ClientRetryClientRestart
struct PlayerController_eventClientRetryClientRestart_Parms
{
	APawn* NewPawn;
};
static FName NAME_APlayerController_ClientRetryClientRestart = FName(TEXT("ClientRetryClientRestart"));
void APlayerController::ClientRetryClientRestart(APawn* NewPawn)
{
	PlayerController_eventClientRetryClientRestart_Parms Parms;
	Parms.NewPawn=NewPawn;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientRetryClientRestart),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Assign Pawn to player, but avoid calling ClientRestart if we have already accepted this pawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Assign Pawn to player, but avoid calling ClientRestart if we have already accepted this pawn" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientRetryClientRestart_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientRetryClientRestart", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::PropPointers), sizeof(PlayerController_eventClientRetryClientRestart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientRetryClientRestart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientRetryClientRestart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientRetryClientRestart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientRetryClientRestart)
{
	P_GET_OBJECT(APawn,Z_Param_NewPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientRetryClientRestart_Implementation(Z_Param_NewPawn);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientRetryClientRestart

// Begin Class APlayerController Function ClientReturnToMainMenuWithTextReason
struct PlayerController_eventClientReturnToMainMenuWithTextReason_Parms
{
	FText ReturnReason;
};
static FName NAME_APlayerController_ClientReturnToMainMenuWithTextReason = FName(TEXT("ClientReturnToMainMenuWithTextReason"));
void APlayerController::ClientReturnToMainMenuWithTextReason(FText const& ReturnReason)
{
	PlayerController_eventClientReturnToMainMenuWithTextReason_Parms Parms;
	Parms.ReturnReason=ReturnReason;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientReturnToMainMenuWithTextReason),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Return the client to the main menu gracefully */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Return the client to the main menu gracefully" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason = { "ReturnReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientReturnToMainMenuWithTextReason_Parms, ReturnReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnReason_MetaData), NewProp_ReturnReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::NewProp_ReturnReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientReturnToMainMenuWithTextReason", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::PropPointers), sizeof(PlayerController_eventClientReturnToMainMenuWithTextReason_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientReturnToMainMenuWithTextReason_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientReturnToMainMenuWithTextReason)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_ReturnReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientReturnToMainMenuWithTextReason_Implementation(Z_Param_ReturnReason);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientReturnToMainMenuWithTextReason

// Begin Class APlayerController Function ClientSetBlockOnAsyncLoading
static FName NAME_APlayerController_ClientSetBlockOnAsyncLoading = FName(TEXT("ClientSetBlockOnAsyncLoading"));
void APlayerController::ClientSetBlockOnAsyncLoading()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetBlockOnAsyncLoading),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Tells the client to block until all pending level streaming actions are complete.\n\x09 * Happens at the end of the tick primarily used to force update the client ASAP at join time.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the client to block until all pending level streaming actions are complete.\nHappens at the end of the tick primarily used to force update the client ASAP at join time." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetBlockOnAsyncLoading", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetBlockOnAsyncLoading)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetBlockOnAsyncLoading_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetBlockOnAsyncLoading

// Begin Class APlayerController Function ClientSetCameraFade
struct PlayerController_eventClientSetCameraFade_Parms
{
	bool bEnableFading;
	FColor FadeColor;
	FVector2D FadeAlpha;
	float FadeTime;
	bool bFadeAudio;
	bool bHoldWhenFinished;
};
static FName NAME_APlayerController_ClientSetCameraFade = FName(TEXT("ClientSetCameraFade"));
void APlayerController::ClientSetCameraFade(bool bEnableFading, FColor FadeColor, FVector2D FadeAlpha, float FadeTime, bool bFadeAudio, bool bHoldWhenFinished)
{
	PlayerController_eventClientSetCameraFade_Parms Parms;
	Parms.bEnableFading=bEnableFading ? true : false;
	Parms.FadeColor=FadeColor;
	Parms.FadeAlpha=FadeAlpha;
	Parms.FadeTime=FadeTime;
	Parms.bFadeAudio=bFadeAudio ? true : false;
	Parms.bHoldWhenFinished=bHoldWhenFinished ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetCameraFade),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell client to fade camera\n\x09 * @Param bEnableFading - true if we should apply FadeColor/FadeAmount to the screen\n\x09 * @Param FadeColor - Color to fade to\n\x09 * @Param FadeAlpha - Contains the start fade (X) and end fade (Y) values to apply. A start fade of less than 0 will use the screen's current fade value\n\x09 * @Param FadeTime - length of time for fade to occur over\n\x09 * @Param bFadeAudio - true to apply fading of audio alongside the video\n\x09 * @param bHoldWhenFinished - True for fade to hold at the ToAlpha until fade is disabled\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell client to fade camera\n@Param bEnableFading - true if we should apply FadeColor/FadeAmount to the screen\n@Param FadeColor - Color to fade to\n@Param FadeAlpha - Contains the start fade (X) and end fade (Y) values to apply. A start fade of less than 0 will use the screen's current fade value\n@Param FadeTime - length of time for fade to occur over\n@Param bFadeAudio - true to apply fading of audio alongside the video\n@param bHoldWhenFinished - True for fade to hold at the ToAlpha until fade is disabled" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnableFading_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFading;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeAlpha;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FadeTime;
	static void NewProp_bFadeAudio_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFadeAudio;
	static void NewProp_bHoldWhenFinished_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldWhenFinished;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCameraFade_Parms*)Obj)->bEnableFading = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading = { "bEnableFading", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCameraFade_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeColor = { "FadeColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraFade_Parms, FadeColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeAlpha = { "FadeAlpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraFade_Parms, FadeAlpha), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeTime = { "FadeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraFade_Parms, FadeTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCameraFade_Parms*)Obj)->bFadeAudio = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio = { "bFadeAudio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCameraFade_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bHoldWhenFinished_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCameraFade_Parms*)Obj)->bHoldWhenFinished = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bHoldWhenFinished = { "bHoldWhenFinished", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCameraFade_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bHoldWhenFinished_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bEnableFading,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeAlpha,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_FadeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bFadeAudio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::NewProp_bHoldWhenFinished,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetCameraFade", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::PropPointers), sizeof(PlayerController_eventClientSetCameraFade_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetCameraFade_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetCameraFade()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetCameraFade_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetCameraFade)
{
	P_GET_UBOOL(Z_Param_bEnableFading);
	P_GET_STRUCT(FColor,Z_Param_FadeColor);
	P_GET_STRUCT(FVector2D,Z_Param_FadeAlpha);
	P_GET_PROPERTY(FFloatProperty,Z_Param_FadeTime);
	P_GET_UBOOL(Z_Param_bFadeAudio);
	P_GET_UBOOL(Z_Param_bHoldWhenFinished);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetCameraFade_Implementation(Z_Param_bEnableFading,Z_Param_FadeColor,Z_Param_FadeAlpha,Z_Param_FadeTime,Z_Param_bFadeAudio,Z_Param_bHoldWhenFinished);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetCameraFade

// Begin Class APlayerController Function ClientSetCameraMode
struct PlayerController_eventClientSetCameraMode_Parms
{
	FName NewCamMode;
};
static FName NAME_APlayerController_ClientSetCameraMode = FName(TEXT("ClientSetCameraMode"));
void APlayerController::ClientSetCameraMode(FName NewCamMode)
{
	PlayerController_eventClientSetCameraMode_Parms Parms;
	Parms.NewCamMode=NewCamMode;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetCameraMode),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicated function to set camera style on client\n\x09 * @param\x09NewCamMode, name defining the new camera mode\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated function to set camera style on client\n@param       NewCamMode, name defining the new camera mode" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewCamMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::NewProp_NewCamMode = { "NewCamMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetCameraMode_Parms, NewCamMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::NewProp_NewCamMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetCameraMode", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::PropPointers), sizeof(PlayerController_eventClientSetCameraMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetCameraMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetCameraMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetCameraMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetCameraMode)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewCamMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetCameraMode_Implementation(Z_Param_NewCamMode);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetCameraMode

// Begin Class APlayerController Function ClientSetCinematicMode
struct PlayerController_eventClientSetCinematicMode_Parms
{
	bool bInCinematicMode;
	bool bAffectsMovement;
	bool bAffectsTurning;
	bool bAffectsHUD;
};
static FName NAME_APlayerController_ClientSetCinematicMode = FName(TEXT("ClientSetCinematicMode"));
void APlayerController::ClientSetCinematicMode(bool bInCinematicMode, bool bAffectsMovement, bool bAffectsTurning, bool bAffectsHUD)
{
	PlayerController_eventClientSetCinematicMode_Parms Parms;
	Parms.bInCinematicMode=bInCinematicMode ? true : false;
	Parms.bAffectsMovement=bAffectsMovement ? true : false;
	Parms.bAffectsTurning=bAffectsTurning ? true : false;
	Parms.bAffectsHUD=bAffectsHUD ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetCinematicMode),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Called by the server to synchronize cinematic transitions with the client */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called by the server to synchronize cinematic transitions with the client" },
	};
#endif // WITH_METADATA
	static void NewProp_bInCinematicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCinematicMode;
	static void NewProp_bAffectsMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement;
	static void NewProp_bAffectsTurning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning;
	static void NewProp_bAffectsHUD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bInCinematicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode = { "bInCinematicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement = { "bAffectsMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning = { "bAffectsTurning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit(void* Obj)
{
	((PlayerController_eventClientSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD = { "bAffectsHUD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bInCinematicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsTurning,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::NewProp_bAffectsHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetCinematicMode", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::PropPointers), sizeof(PlayerController_eventClientSetCinematicMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetCinematicMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetCinematicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetCinematicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetCinematicMode)
{
	P_GET_UBOOL(Z_Param_bInCinematicMode);
	P_GET_UBOOL(Z_Param_bAffectsMovement);
	P_GET_UBOOL(Z_Param_bAffectsTurning);
	P_GET_UBOOL(Z_Param_bAffectsHUD);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetCinematicMode_Implementation(Z_Param_bInCinematicMode,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning,Z_Param_bAffectsHUD);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetCinematicMode

// Begin Class APlayerController Function ClientSetForceMipLevelsToBeResident
struct PlayerController_eventClientSetForceMipLevelsToBeResident_Parms
{
	UMaterialInterface* Material;
	float ForceDuration;
	int32 CinematicTextureGroups;
};
static FName NAME_APlayerController_ClientSetForceMipLevelsToBeResident = FName(TEXT("ClientSetForceMipLevelsToBeResident"));
void APlayerController::ClientSetForceMipLevelsToBeResident(UMaterialInterface* Material, float ForceDuration, int32 CinematicTextureGroups)
{
	PlayerController_eventClientSetForceMipLevelsToBeResident_Parms Parms;
	Parms.Material=Material;
	Parms.ForceDuration=ForceDuration;
	Parms.CinematicTextureGroups=CinematicTextureGroups;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetForceMipLevelsToBeResident),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Forces the streaming system to disregard the normal logic for the specified duration and\n\x09 * instead always load all mip-levels for all textures used by the specified material.\n\x09 *\n\x09 * @param Material\x09\x09- The material whose textures should be forced into memory.\n\x09 * @param ForceDuration\x09- Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n\x09 * @param CinematicTextureGroups\x09- Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Forces the streaming system to disregard the normal logic for the specified duration and\ninstead always load all mip-levels for all textures used by the specified material.\n\n@param Material              - The material whose textures should be forced into memory.\n@param ForceDuration - Number of seconds to keep all mip-levels in memory, disregarding the normal priority logic.\n@param CinematicTextureGroups        - Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration = { "ForceDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms, ForceDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms, CinematicTextureGroups), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_Material,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_ForceDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::NewProp_CinematicTextureGroups,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetForceMipLevelsToBeResident", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::PropPointers), sizeof(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetForceMipLevelsToBeResident_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetForceMipLevelsToBeResident)
{
	P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ForceDuration);
	P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetForceMipLevelsToBeResident_Implementation(Z_Param_Material,Z_Param_ForceDuration,Z_Param_CinematicTextureGroups);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetForceMipLevelsToBeResident

// Begin Class APlayerController Function ClientSetHUD
struct PlayerController_eventClientSetHUD_Parms
{
	TSubclassOf<AHUD> NewHUDClass;
};
static FName NAME_APlayerController_ClientSetHUD = FName(TEXT("ClientSetHUD"));
void APlayerController::ClientSetHUD(TSubclassOf<AHUD> NewHUDClass)
{
	PlayerController_eventClientSetHUD_Parms Parms;
	Parms.NewHUDClass=NewHUDClass;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetHUD),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Set the client's class of HUD and spawns a new instance of it. If there was already a HUD active, it is destroyed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the client's class of HUD and spawns a new instance of it. If there was already a HUD active, it is destroyed." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_NewHUDClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::NewProp_NewHUDClass = { "NewHUDClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetHUD_Parms, NewHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::NewProp_NewHUDClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetHUD", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::PropPointers), sizeof(PlayerController_eventClientSetHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetHUD)
{
	P_GET_OBJECT(UClass,Z_Param_NewHUDClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetHUD_Implementation(Z_Param_NewHUDClass);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetHUD

// Begin Class APlayerController Function ClientSetSpectatorWaiting
struct PlayerController_eventClientSetSpectatorWaiting_Parms
{
	bool bWaiting;
};
static FName NAME_APlayerController_ClientSetSpectatorWaiting = FName(TEXT("ClientSetSpectatorWaiting"));
void APlayerController::ClientSetSpectatorWaiting(bool bWaiting)
{
	PlayerController_eventClientSetSpectatorWaiting_Parms Parms;
	Parms.bWaiting=bWaiting ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetSpectatorWaiting),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Indicate that the Spectator is waiting to join/respawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Indicate that the Spectator is waiting to join/respawn." },
	};
#endif // WITH_METADATA
	static void NewProp_bWaiting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaiting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit(void* Obj)
{
	((PlayerController_eventClientSetSpectatorWaiting_Parms*)Obj)->bWaiting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting = { "bWaiting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientSetSpectatorWaiting_Parms), &Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::NewProp_bWaiting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetSpectatorWaiting", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::PropPointers), sizeof(PlayerController_eventClientSetSpectatorWaiting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetSpectatorWaiting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetSpectatorWaiting)
{
	P_GET_UBOOL(Z_Param_bWaiting);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetSpectatorWaiting_Implementation(Z_Param_bWaiting);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetSpectatorWaiting

// Begin Class APlayerController Function ClientSetupNetworkPhysicsTimestamp
struct PlayerController_eventClientSetupNetworkPhysicsTimestamp_Parms
{
	FAsyncPhysicsTimestamp Timestamp;
};
static FName NAME_APlayerController_ClientSetupNetworkPhysicsTimestamp = FName(TEXT("ClientSetupNetworkPhysicsTimestamp"));
void APlayerController::ClientSetupNetworkPhysicsTimestamp(FAsyncPhysicsTimestamp Timestamp)
{
	PlayerController_eventClientSetupNetworkPhysicsTimestamp_Parms Parms;
	Parms.Timestamp=Timestamp;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetupNetworkPhysicsTimestamp),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Client receives the setup of the FAsyncPhysicsTimestamp ServerFrame and LocalFrame offset from the server. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Client receives the setup of the FAsyncPhysicsTimestamp ServerFrame and LocalFrame offset from the server." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetupNetworkPhysicsTimestamp_Parms, Timestamp), Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp, METADATA_PARAMS(0, nullptr) }; // 312180022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetupNetworkPhysicsTimestamp", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::PropPointers), sizeof(PlayerController_eventClientSetupNetworkPhysicsTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetupNetworkPhysicsTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetupNetworkPhysicsTimestamp)
{
	P_GET_STRUCT(FAsyncPhysicsTimestamp,Z_Param_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetupNetworkPhysicsTimestamp_Implementation(Z_Param_Timestamp);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetupNetworkPhysicsTimestamp

// Begin Class APlayerController Function ClientSetViewTarget
struct PlayerController_eventClientSetViewTarget_Parms
{
	AActor* A;
	FViewTargetTransitionParams TransitionParams;
};
static FName NAME_APlayerController_ClientSetViewTarget = FName(TEXT("ClientSetViewTarget"));
void APlayerController::ClientSetViewTarget(AActor* A, FViewTargetTransitionParams TransitionParams)
{
	PlayerController_eventClientSetViewTarget_Parms Parms;
	Parms.A=A;
	Parms.TransitionParams=TransitionParams;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSetViewTarget),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Set the view target\n\x09 * @param A - new actor to set as view target\n\x09 * @param TransitionParams - parameters to use for controlling the transition\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the view target\n@param A - new actor to set as view target\n@param TransitionParams - parameters to use for controlling the transition" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_A;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetViewTarget_Parms, A), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSetViewTarget_Parms, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(0, nullptr) }; // 290970485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::NewProp_TransitionParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSetViewTarget", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::PropPointers), sizeof(PlayerController_eventClientSetViewTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSetViewTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSetViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSetViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSetViewTarget)
{
	P_GET_OBJECT(AActor,Z_Param_A);
	P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSetViewTarget_Implementation(Z_Param_A,Z_Param_TransitionParams);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSetViewTarget

// Begin Class APlayerController Function ClientSpawnCameraLensEffect
struct PlayerController_eventClientSpawnCameraLensEffect_Parms
{
	TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass;
};
static FName NAME_APlayerController_ClientSpawnCameraLensEffect = FName(TEXT("ClientSpawnCameraLensEffect"));
void APlayerController::ClientSpawnCameraLensEffect(TSubclassOf<AEmitterCameraLensEffectBase> LensEffectEmitterClass)
{
	PlayerController_eventClientSpawnCameraLensEffect_Parms Parms;
	Parms.LensEffectEmitterClass=LensEffectEmitterClass;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSpawnCameraLensEffect),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Prefer the version taking ICameraLensEffectInterface (ClientSpawnGenericCameraLensEffect)" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LensEffectEmitterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::NewProp_LensEffectEmitterClass = { "LensEffectEmitterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSpawnCameraLensEffect_Parms, LensEffectEmitterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::NewProp_LensEffectEmitterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSpawnCameraLensEffect", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::PropPointers), sizeof(PlayerController_eventClientSpawnCameraLensEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSpawnCameraLensEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSpawnCameraLensEffect)
{
	P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSpawnCameraLensEffect_Implementation(Z_Param_LensEffectEmitterClass);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSpawnCameraLensEffect

// Begin Class APlayerController Function ClientSpawnGenericCameraLensEffect
struct PlayerController_eventClientSpawnGenericCameraLensEffect_Parms
{
	TSubclassOf<AActor> LensEffectEmitterClass;
};
static FName NAME_APlayerController_ClientSpawnGenericCameraLensEffect = FName(TEXT("ClientSpawnGenericCameraLensEffect"));
void APlayerController::ClientSpawnGenericCameraLensEffect(TSubclassOf<AActor> LensEffectEmitterClass)
{
	PlayerController_eventClientSpawnGenericCameraLensEffect_Parms Parms;
	Parms.LensEffectEmitterClass=LensEffectEmitterClass;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientSpawnGenericCameraLensEffect),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Spawn a camera lens effect (e.g. blood). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Spawn a camera lens effect (e.g. blood)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LensEffectEmitterClass_MetaData[] = {
		{ "MustImplement", "CameraLensEffectInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_LensEffectEmitterClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass = { "LensEffectEmitterClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientSpawnGenericCameraLensEffect_Parms, LensEffectEmitterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LensEffectEmitterClass_MetaData), NewProp_LensEffectEmitterClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::NewProp_LensEffectEmitterClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientSpawnGenericCameraLensEffect", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::PropPointers), sizeof(PlayerController_eventClientSpawnGenericCameraLensEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientSpawnGenericCameraLensEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientSpawnGenericCameraLensEffect)
{
	P_GET_OBJECT(UClass,Z_Param_LensEffectEmitterClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientSpawnGenericCameraLensEffect_Implementation(Z_Param_LensEffectEmitterClass);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientSpawnGenericCameraLensEffect

// Begin Class APlayerController Function ClientStartCameraShake
struct PlayerController_eventClientStartCameraShake_Parms
{
	TSubclassOf<UCameraShakeBase> Shake;
	float Scale;
	ECameraShakePlaySpace PlaySpace;
	FRotator UserPlaySpaceRot;
};
static FName NAME_APlayerController_ClientStartCameraShake = FName(TEXT("ClientStartCameraShake"));
void APlayerController::ClientStartCameraShake(TSubclassOf<UCameraShakeBase> Shake, float Scale, ECameraShakePlaySpace PlaySpace, FRotator UserPlaySpaceRot)
{
	PlayerController_eventClientStartCameraShake_Parms Parms;
	Parms.Shake=Shake;
	Parms.Scale=Scale;
	Parms.PlaySpace=PlaySpace;
	Parms.UserPlaySpaceRot=UserPlaySpaceRot;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStartCameraShake),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Play Camera Shake \n\x09 * @param Shake - Camera shake animation to play\n\x09 * @param Scale - Scalar defining how \"intense\" to play the anim\n\x09 * @param PlaySpace - Which coordinate system to play the shake in (used for CameraAnims within the shake).\n\x09 * @param UserPlaySpaceRot - Matrix used when PlaySpace = CAPS_UserDefined\n\x09 */" },
		{ "CPP_Default_PlaySpace", "CameraLocal" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "CPP_Default_UserPlaySpaceRot", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play Camera Shake\n@param Shake - Camera shake animation to play\n@param Scale - Scalar defining how \"intense\" to play the anim\n@param PlaySpace - Which coordinate system to play the shake in (used for CameraAnims within the shake).\n@param UserPlaySpaceRot - Matrix used when PlaySpace = CAPS_UserDefined" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PlaySpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PlaySpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_UserPlaySpaceRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStartCameraShake_Parms, Shake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStartCameraShake_Parms, Scale), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_PlaySpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_PlaySpace = { "PlaySpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStartCameraShake_Parms, PlaySpace), Z_Construct_UEnum_Engine_ECameraShakePlaySpace, METADATA_PARAMS(0, nullptr) }; // 2661961121
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_UserPlaySpaceRot = { "UserPlaySpaceRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStartCameraShake_Parms, UserPlaySpaceRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_Shake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_PlaySpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_PlaySpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::NewProp_UserPlaySpaceRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStartCameraShake", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::PropPointers), sizeof(PlayerController_eventClientStartCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05820C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientStartCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientStartCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStartCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientStartCameraShake)
{
	P_GET_OBJECT(UClass,Z_Param_Shake);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_ENUM(ECameraShakePlaySpace,Z_Param_PlaySpace);
	P_GET_STRUCT(FRotator,Z_Param_UserPlaySpaceRot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStartCameraShake_Implementation(Z_Param_Shake,Z_Param_Scale,ECameraShakePlaySpace(Z_Param_PlaySpace),Z_Param_UserPlaySpaceRot);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientStartCameraShake

// Begin Class APlayerController Function ClientStartCameraShakeFromSource
struct Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics
{
	struct PlayerController_eventClientStartCameraShakeFromSource_Parms
	{
		TSubclassOf<UCameraShakeBase> Shake;
		UCameraShakeSourceComponent* SourceComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Play Camera Shake localized to a given source\n\x09 * @param Shake - Camera shake animation to play\n\x09 * @param SourceComponent - The source from which the camera shakes originates\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play Camera Shake localized to a given source\n@param Shake - Camera shake animation to play\n@param SourceComponent - The source from which the camera shakes originates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStartCameraShakeFromSource_Parms, Shake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStartCameraShakeFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::NewProp_Shake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::NewProp_SourceComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStartCameraShakeFromSource", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::PlayerController_eventClientStartCameraShakeFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::PlayerController_eventClientStartCameraShakeFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientStartCameraShakeFromSource)
{
	P_GET_OBJECT(UClass,Z_Param_Shake);
	P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStartCameraShakeFromSource(Z_Param_Shake,Z_Param_SourceComponent);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientStartCameraShakeFromSource

// Begin Class APlayerController Function ClientStartOnlineSession
static FName NAME_APlayerController_ClientStartOnlineSession = FName(TEXT("ClientStartOnlineSession"));
void APlayerController::ClientStartOnlineSession()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStartOnlineSession),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client that the session is starting */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify client that the session is starting" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStartOnlineSession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientStartOnlineSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStartOnlineSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientStartOnlineSession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStartOnlineSession_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientStartOnlineSession

// Begin Class APlayerController Function ClientStopCameraShake
struct PlayerController_eventClientStopCameraShake_Parms
{
	TSubclassOf<UCameraShakeBase> Shake;
	bool bImmediately;
};
static FName NAME_APlayerController_ClientStopCameraShake = FName(TEXT("ClientStopCameraShake"));
void APlayerController::ClientStopCameraShake(TSubclassOf<UCameraShakeBase> Shake, bool bImmediately)
{
	PlayerController_eventClientStopCameraShake_Parms Parms;
	Parms.Shake=Shake;
	Parms.bImmediately=bImmediately ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStopCameraShake),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Stop camera shake on client.  */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stop camera shake on client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_Shake;
	static void NewProp_bImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_Shake = { "Shake", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStopCameraShake_Parms, Shake), Z_Construct_UClass_UClass, Z_Construct_UClass_UCameraShakeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately_SetBit(void* Obj)
{
	((PlayerController_eventClientStopCameraShake_Parms*)Obj)->bImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientStopCameraShake_Parms), &Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_Shake,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::NewProp_bImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopCameraShake", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::PropPointers), sizeof(PlayerController_eventClientStopCameraShake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientStopCameraShake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientStopCameraShake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopCameraShake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientStopCameraShake)
{
	P_GET_OBJECT(UClass,Z_Param_Shake);
	P_GET_UBOOL(Z_Param_bImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStopCameraShake_Implementation(Z_Param_Shake,Z_Param_bImmediately);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientStopCameraShake

// Begin Class APlayerController Function ClientStopCameraShakesFromSource
struct Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics
{
	struct PlayerController_eventClientStopCameraShakesFromSource_Parms
	{
		UCameraShakeSourceComponent* SourceComponent;
		bool bImmediately;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** Stop camera shake on client.  */" },
		{ "CPP_Default_bImmediately", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stop camera shake on client." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SourceComponent;
	static void NewProp_bImmediately_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bImmediately;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent = { "SourceComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStopCameraShakesFromSource_Parms, SourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceComponent_MetaData), NewProp_SourceComponent_MetaData) };
void Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately_SetBit(void* Obj)
{
	((PlayerController_eventClientStopCameraShakesFromSource_Parms*)Obj)->bImmediately = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately = { "bImmediately", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientStopCameraShakesFromSource_Parms), &Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_SourceComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::NewProp_bImmediately,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopCameraShakesFromSource", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PlayerController_eventClientStopCameraShakesFromSource_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::PlayerController_eventClientStopCameraShakesFromSource_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientStopCameraShakesFromSource)
{
	P_GET_OBJECT(UCameraShakeSourceComponent,Z_Param_SourceComponent);
	P_GET_UBOOL(Z_Param_bImmediately);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStopCameraShakesFromSource(Z_Param_SourceComponent,Z_Param_bImmediately);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientStopCameraShakesFromSource

// Begin Class APlayerController Function ClientStopForceFeedback
struct PlayerController_eventClientStopForceFeedback_Parms
{
	UForceFeedbackEffect* ForceFeedbackEffect;
	FName Tag;
};
static FName NAME_APlayerController_ClientStopForceFeedback = FName(TEXT("ClientStopForceFeedback"));
void APlayerController::ClientStopForceFeedback(UForceFeedbackEffect* ForceFeedbackEffect, FName Tag)
{
	PlayerController_eventClientStopForceFeedback_Parms Parms;
	Parms.ForceFeedbackEffect=ForceFeedbackEffect;
	Parms.Tag=Tag;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientStopForceFeedback),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Stops a playing force feedback pattern\n\x09 * @param\x09""ForceFeedbackEffect\x09\x09If set only patterns from that effect will be stopped\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09If not none only the pattern with this tag will be stopped\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stops a playing force feedback pattern\n@param       ForceFeedbackEffect             If set only patterns from that effect will be stopped\n@param       Tag                                             If not none only the pattern with this tag will be stopped" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStopForceFeedback_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientStopForceFeedback_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_ForceFeedbackEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientStopForceFeedback", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::PropPointers), sizeof(PlayerController_eventClientStopForceFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientStopForceFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientStopForceFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientStopForceFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientStopForceFeedback)
{
	P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientStopForceFeedback_Implementation(Z_Param_ForceFeedbackEffect,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientStopForceFeedback

// Begin Class APlayerController Function ClientTeamMessage
struct PlayerController_eventClientTeamMessage_Parms
{
	APlayerState* SenderPlayerState;
	FString S;
	FName Type;
	float MsgLifeTime;
};
static FName NAME_APlayerController_ClientTeamMessage = FName(TEXT("ClientTeamMessage"));
void APlayerController::ClientTeamMessage(APlayerState* SenderPlayerState, const FString& S, FName Type, float MsgLifeTime)
{
	PlayerController_eventClientTeamMessage_Parms Parms;
	Parms.SenderPlayerState=SenderPlayerState;
	Parms.S=S;
	Parms.Type=Type;
	Parms.MsgLifeTime=MsgLifeTime;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientTeamMessage),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** @todo document */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "@todo document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SenderPlayerState;
	static const UECodeGen_Private::FStrPropertyParams NewProp_S;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Type;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MsgLifeTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_SenderPlayerState = { "SenderPlayerState", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, SenderPlayerState), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, S), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_MetaData), NewProp_S_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, Type), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_MsgLifeTime = { "MsgLifeTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTeamMessage_Parms, MsgLifeTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_SenderPlayerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_S,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::NewProp_MsgLifeTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientTeamMessage", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::PropPointers), sizeof(PlayerController_eventClientTeamMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientTeamMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientTeamMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientTeamMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientTeamMessage)
{
	P_GET_OBJECT(APlayerState,Z_Param_SenderPlayerState);
	P_GET_PROPERTY(FStrProperty,Z_Param_S);
	P_GET_PROPERTY(FNameProperty,Z_Param_Type);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MsgLifeTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientTeamMessage_Implementation(Z_Param_SenderPlayerState,Z_Param_S,Z_Param_Type,Z_Param_MsgLifeTime);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientTeamMessage

// Begin Class APlayerController Function ClientTravel
struct Z_Construct_UFunction_APlayerController_ClientTravel_Statics
{
	struct PlayerController_eventClientTravel_Parms
	{
		FString URL;
		TEnumAsByte<ETravelType> TravelType;
		bool bSeamless;
		FGuid MapPackageGuid;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Travel to a different map or IP address. Calls the PreClientTravel event before doing anything.\n\x09 * NOTE: This is implemented as a locally executed wrapper for ClientTravelInternal, to avoid API compatability breakage\n\x09 *\n\x09 * @param URL\x09\x09\x09\x09""A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n\x09 * @param TravelType \x09\x09specifies whether the client should append URL options used in previous travels; if true is specified\n\x09 *\x09\x09\x09\x09\x09\x09\x09""for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n\x09 * @param bSeamless\x09\x09\x09Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n\x09 * @param MapPackageGuid\x09The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n\x09 * \x09\x09\x09\x09\x09\x09\x09so it is only needed for clients\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Travel to a different map or IP address. Calls the PreClientTravel event before doing anything.\nNOTE: This is implemented as a locally executed wrapper for ClientTravelInternal, to avoid API compatability breakage\n\n@param URL                           A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n@param TravelType            specifies whether the client should append URL options used in previous travels; if true is specified\n                                                     for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n@param bSeamless                     Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n@param MapPackageGuid        The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n                                                     so it is only needed for clients" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TravelType;
	static void NewProp_bSeamless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeamless;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapPackageGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTravel_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_TravelType = { "TravelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTravel_Parms, TravelType), Z_Construct_UEnum_Engine_ETravelType, METADATA_PARAMS(0, nullptr) }; // 2976621600
void Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless_SetBit(void* Obj)
{
	((PlayerController_eventClientTravel_Parms*)Obj)->bSeamless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless = { "bSeamless", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientTravel_Parms), &Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_MapPackageGuid = { "MapPackageGuid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTravel_Parms, MapPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_TravelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_bSeamless,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravel_Statics::NewProp_MapPackageGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientTravel", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PlayerController_eventClientTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientTravel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ClientTravel_Statics::PlayerController_eventClientTravel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientTravel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientTravel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientTravel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FByteProperty,Z_Param_TravelType);
	P_GET_UBOOL(Z_Param_bSeamless);
	P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientTravel(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientTravel

// Begin Class APlayerController Function ClientTravelInternal
struct PlayerController_eventClientTravelInternal_Parms
{
	FString URL;
	TEnumAsByte<ETravelType> TravelType;
	bool bSeamless;
	FGuid MapPackageGuid;
};
static FName NAME_APlayerController_ClientTravelInternal = FName(TEXT("ClientTravelInternal"));
void APlayerController::ClientTravelInternal(const FString& URL, ETravelType TravelType, bool bSeamless, FGuid MapPackageGuid)
{
	PlayerController_eventClientTravelInternal_Parms Parms;
	Parms.URL=URL;
	Parms.TravelType=TravelType;
	Parms.bSeamless=bSeamless ? true : false;
	Parms.MapPackageGuid=MapPackageGuid;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientTravelInternal),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Internal clientside implementation of ClientTravel - use ClientTravel to call this\n\x09 *\n\x09 * @param URL\x09\x09\x09\x09""A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n\x09 * @param TravelType \x09\x09specifies whether the client should append URL options used in previous travels; if true is specified\n\x09 *\x09\x09\x09\x09\x09\x09\x09""for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n\x09 * @param bSeamless\x09\x09\x09Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n\x09 * @param MapPackageGuid\x09The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n\x09 * \x09\x09\x09\x09\x09\x09\x09so it is only needed for clients\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Internal clientside implementation of ClientTravel - use ClientTravel to call this\n\n@param URL                           A string containing the mapname (or IP address) to travel to, along with option key/value pairs\n@param TravelType            specifies whether the client should append URL options used in previous travels; if true is specified\n                                                     for the bSeamlesss parameter, this value must be TRAVEL_Relative.\n@param bSeamless                     Indicates whether to use seamless travel (requires TravelType of TRAVEL_Relative)\n@param MapPackageGuid        The GUID of the map package to travel to - this is used to find the file when it has been autodownloaded,\n                                                     so it is only needed for clients" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TravelType;
	static void NewProp_bSeamless_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeamless;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MapPackageGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTravelInternal_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_TravelType = { "TravelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTravelInternal_Parms, TravelType), Z_Construct_UEnum_Engine_ETravelType, METADATA_PARAMS(0, nullptr) }; // 2976621600
void Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless_SetBit(void* Obj)
{
	((PlayerController_eventClientTravelInternal_Parms*)Obj)->bSeamless = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless = { "bSeamless", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientTravelInternal_Parms), &Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_MapPackageGuid = { "MapPackageGuid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientTravelInternal_Parms, MapPackageGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_TravelType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_bSeamless,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::NewProp_MapPackageGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientTravelInternal", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::PropPointers), sizeof(PlayerController_eventClientTravelInternal_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01820CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientTravelInternal_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientTravelInternal()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientTravelInternal_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientTravelInternal)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_GET_PROPERTY(FByteProperty,Z_Param_TravelType);
	P_GET_UBOOL(Z_Param_bSeamless);
	P_GET_STRUCT(FGuid,Z_Param_MapPackageGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientTravelInternal_Implementation(Z_Param_URL,ETravelType(Z_Param_TravelType),Z_Param_bSeamless,Z_Param_MapPackageGuid);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientTravelInternal

// Begin Class APlayerController Function ClientUnmutePlayer
struct PlayerController_eventClientUnmutePlayer_Parms
{
	FUniqueNetIdRepl PlayerId;
};
static FName NAME_APlayerController_ClientUnmutePlayer = FName(TEXT("ClientUnmutePlayer"));
void APlayerController::ClientUnmutePlayer(FUniqueNetIdRepl PlayerId)
{
	PlayerController_eventClientUnmutePlayer_Parms Parms;
	Parms.PlayerId=PlayerId;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUnmutePlayer),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to unmute a player for this controller\n\x09 * @param PlayerId player id to unmute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to unmute a player for this controller\n@param PlayerId player id to unmute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientUnmutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::NewProp_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUnmutePlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::PropPointers), sizeof(PlayerController_eventClientUnmutePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientUnmutePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientUnmutePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUnmutePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientUnmutePlayer)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientUnmutePlayer_Implementation(Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientUnmutePlayer

// Begin Class APlayerController Function ClientUnmutePlayers
struct PlayerController_eventClientUnmutePlayers_Parms
{
	TArray<FUniqueNetIdRepl> PlayerIds;
};
static FName NAME_APlayerController_ClientUnmutePlayers = FName(TEXT("ClientUnmutePlayers"));
void APlayerController::ClientUnmutePlayers(TArray<FUniqueNetIdRepl> const& PlayerIds)
{
	PlayerController_eventClientUnmutePlayers_Parms Parms;
	Parms.PlayerIds=PlayerIds;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUnmutePlayers),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to unmute an array of players for this controller\n\x09 * @param PlayerIds player ids to unmute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to unmute an array of players for this controller\n@param PlayerIds player ids to unmute" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIds_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PlayerIds;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::NewProp_PlayerIds_Inner = { "PlayerIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::NewProp_PlayerIds = { "PlayerIds", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientUnmutePlayers_Parms, PlayerIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIds_MetaData), NewProp_PlayerIds_MetaData) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::NewProp_PlayerIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::NewProp_PlayerIds,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUnmutePlayers", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::PropPointers), sizeof(PlayerController_eventClientUnmutePlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientUnmutePlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientUnmutePlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUnmutePlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientUnmutePlayers)
{
	P_GET_TARRAY(FUniqueNetIdRepl,Z_Param_PlayerIds);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientUnmutePlayers_Implementation(Z_Param_PlayerIds);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientUnmutePlayers

// Begin Class APlayerController Function ClientUpdateLevelStreamingStatus
struct PlayerController_eventClientUpdateLevelStreamingStatus_Parms
{
	FName PackageName;
	bool bNewShouldBeLoaded;
	bool bNewShouldBeVisible;
	bool bNewShouldBlockOnLoad;
	int32 LODIndex;
	FNetLevelVisibilityTransactionId TransactionId;
	bool bNewShouldBlockOnUnload;
};
static FName NAME_APlayerController_ClientUpdateLevelStreamingStatus = FName(TEXT("ClientUpdateLevelStreamingStatus"));
void APlayerController::ClientUpdateLevelStreamingStatus(FName PackageName, bool bNewShouldBeLoaded, bool bNewShouldBeVisible, bool bNewShouldBlockOnLoad, int32 LODIndex, FNetLevelVisibilityTransactionId TransactionId, bool bNewShouldBlockOnUnload)
{
	PlayerController_eventClientUpdateLevelStreamingStatus_Parms Parms;
	Parms.PackageName=PackageName;
	Parms.bNewShouldBeLoaded=bNewShouldBeLoaded ? true : false;
	Parms.bNewShouldBeVisible=bNewShouldBeVisible ? true : false;
	Parms.bNewShouldBlockOnLoad=bNewShouldBlockOnLoad ? true : false;
	Parms.LODIndex=LODIndex;
	Parms.TransactionId=TransactionId;
	Parms.bNewShouldBlockOnUnload=bNewShouldBlockOnUnload ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUpdateLevelStreamingStatus),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicated Update streaming status\n\x09 * @param PackageName - Name of the level package name used for loading.\n\x09 * @param bNewShouldBeLoaded - Whether the level should be loaded\n\x09 * @param bNewShouldBeVisible - Whether the level should be visible if it is loaded\x09\n\x09 * @param bNewShouldBlockOnLoad - Whether we want to force a blocking load\n\x09 * @param LODIndex\x09\x09\x09\x09- Current LOD index for a streaming level\n\x09 * @param TransactionId\x09\x09\x09- Optional parameter used when communicating LevelVisibility changes between server and client\n\x09 * @param bNewShouldBlockOnUnload - Optional parameter used to force a blocking unload or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated Update streaming status\n@param PackageName - Name of the level package name used for loading.\n@param bNewShouldBeLoaded - Whether the level should be loaded\n@param bNewShouldBeVisible - Whether the level should be visible if it is loaded\n@param bNewShouldBlockOnLoad - Whether we want to force a blocking load\n@param LODIndex                              - Current LOD index for a streaming level\n@param TransactionId                 - Optional parameter used when communicating LevelVisibility changes between server and client\n@param bNewShouldBlockOnUnload - Optional parameter used to force a blocking unload or not" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static void NewProp_bNewShouldBeLoaded_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeLoaded;
	static void NewProp_bNewShouldBeVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBeVisible;
	static void NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBlockOnLoad;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LODIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransactionId;
	static void NewProp_bNewShouldBlockOnUnload_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewShouldBlockOnUnload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateLevelStreamingStatus_Parms, PackageName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit(void* Obj)
{
	((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBeLoaded = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded = { "bNewShouldBeLoaded", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible_SetBit(void* Obj)
{
	((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBeVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible = { "bNewShouldBeVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit(void* Obj)
{
	((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBlockOnLoad = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad = { "bNewShouldBlockOnLoad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_LODIndex = { "LODIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateLevelStreamingStatus_Parms, LODIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_TransactionId = { "TransactionId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateLevelStreamingStatus_Parms, TransactionId), Z_Construct_UScriptStruct_FNetLevelVisibilityTransactionId, METADATA_PARAMS(0, nullptr) }; // 1049054583
void Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnUnload_SetBit(void* Obj)
{
	((PlayerController_eventClientUpdateLevelStreamingStatus_Parms*)Obj)->bNewShouldBlockOnUnload = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnUnload = { "bNewShouldBlockOnUnload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnUnload_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeLoaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBeVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnLoad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_LODIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_TransactionId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::NewProp_bNewShouldBlockOnUnload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUpdateLevelStreamingStatus", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::PropPointers), sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientUpdateLevelStreamingStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientUpdateLevelStreamingStatus)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_GET_UBOOL(Z_Param_bNewShouldBeLoaded);
	P_GET_UBOOL(Z_Param_bNewShouldBeVisible);
	P_GET_UBOOL(Z_Param_bNewShouldBlockOnLoad);
	P_GET_PROPERTY(FIntProperty,Z_Param_LODIndex);
	P_GET_STRUCT(FNetLevelVisibilityTransactionId,Z_Param_TransactionId);
	P_GET_UBOOL(Z_Param_bNewShouldBlockOnUnload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientUpdateLevelStreamingStatus_Implementation(Z_Param_PackageName,Z_Param_bNewShouldBeLoaded,Z_Param_bNewShouldBeVisible,Z_Param_bNewShouldBlockOnLoad,Z_Param_LODIndex,Z_Param_TransactionId,Z_Param_bNewShouldBlockOnUnload);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientUpdateLevelStreamingStatus

// Begin Class APlayerController Function ClientUpdateMultipleLevelsStreamingStatus
struct PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms
{
	TArray<FUpdateLevelStreamingLevelStatus> LevelStatuses;
};
static FName NAME_APlayerController_ClientUpdateMultipleLevelsStreamingStatus = FName(TEXT("ClientUpdateMultipleLevelsStreamingStatus"));
void APlayerController::ClientUpdateMultipleLevelsStreamingStatus(TArray<FUpdateLevelStreamingLevelStatus> const& LevelStatuses)
{
	PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms Parms;
	Parms.LevelStatuses=LevelStatuses;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientUpdateMultipleLevelsStreamingStatus),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicated Update streaming status.  This version allows for the streaming state of many levels to be sent in a single RPC.\n\x09 * @param LevelStatuses\x09The list of levels the client should have either streamed in or not, depending on state.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicated Update streaming status.  This version allows for the streaming state of many levels to be sent in a single RPC.\n@param LevelStatuses The list of levels the client should have either streamed in or not, depending on state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelStatuses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelStatuses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelStatuses;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_Inner = { "LevelStatuses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus, METADATA_PARAMS(0, nullptr) }; // 3506010777
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses = { "LevelStatuses", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms, LevelStatuses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelStatuses_MetaData), NewProp_LevelStatuses_MetaData) }; // 3506010777
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::NewProp_LevelStatuses,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientUpdateMultipleLevelsStreamingStatus", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::PropPointers), sizeof(PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientUpdateMultipleLevelsStreamingStatus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientUpdateMultipleLevelsStreamingStatus)
{
	P_GET_TARRAY(FUpdateLevelStreamingLevelStatus,Z_Param_LevelStatuses);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientUpdateMultipleLevelsStreamingStatus_Implementation(Z_Param_LevelStatuses);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientUpdateMultipleLevelsStreamingStatus

// Begin Class APlayerController Function ClientVoiceHandshakeComplete
static FName NAME_APlayerController_ClientVoiceHandshakeComplete = FName(TEXT("ClientVoiceHandshakeComplete"));
void APlayerController::ClientVoiceHandshakeComplete()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientVoiceHandshakeComplete),NULL);
}
struct Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tells the client that the server has all the information it needs and that it\n\x09 * is ok to start sending voice packets. The server will already send voice packets\n\x09 * when this function is called, since it is set server side and then forwarded\n\x09 *\n\x09 * NOTE: This is done as an RPC instead of variable replication because ordering matters\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the client that the server has all the information it needs and that it\nis ok to start sending voice packets. The server will already send voice packets\nwhen this function is called, since it is set server side and then forwarded\n\nNOTE: This is done as an RPC instead of variable replication because ordering matters" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientVoiceHandshakeComplete", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientVoiceHandshakeComplete)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientVoiceHandshakeComplete_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ClientVoiceHandshakeComplete

// Begin Class APlayerController Function ClientWasKicked
struct PlayerController_eventClientWasKicked_Parms
{
	FText KickReason;
};
static FName NAME_APlayerController_ClientWasKicked = FName(TEXT("ClientWasKicked"));
void APlayerController::ClientWasKicked(FText const& KickReason)
{
	PlayerController_eventClientWasKicked_Parms Parms;
	Parms.KickReason=KickReason;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ClientWasKicked),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notify client they were kicked from the server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify client they were kicked from the server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_KickReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_KickReason;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason = { "KickReason", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventClientWasKicked_Parms, KickReason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_KickReason_MetaData), NewProp_KickReason_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::NewProp_KickReason,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ClientWasKicked", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::PropPointers), sizeof(PlayerController_eventClientWasKicked_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventClientWasKicked_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ClientWasKicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ClientWasKicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execClientWasKicked)
{
	P_GET_PROPERTY(FTextProperty,Z_Param_KickReason);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClientWasKicked_Implementation(Z_Param_KickReason);
	P_NATIVE_END;
}
// End Class APlayerController Function ClientWasKicked

// Begin Class APlayerController Function ConsoleKey
struct Z_Construct_UFunction_APlayerController_ConsoleKey_Statics
{
	struct PlayerController_eventConsoleKey_Parms
	{
		FKey Key;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Console control commands, useful when remote debugging so you can't touch the console the normal way */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Console control commands, useful when remote debugging so you can't touch the console the normal way" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventConsoleKey_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::NewProp_Key,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ConsoleKey", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PlayerController_eventConsoleKey_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::PlayerController_eventConsoleKey_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ConsoleKey()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ConsoleKey_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execConsoleKey)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConsoleKey(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function ConsoleKey

// Begin Class APlayerController Function DeprojectMousePositionToWorld
struct Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics
{
	struct PlayerController_eventDeprojectMousePositionToWorld_Parms
	{
		FVector WorldLocation;
		FVector WorldDirection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Convert current mouse 2D position to World Space 3D position and direction. Returns false if unable to determine value. **/" },
		{ "DisplayName", "Convert Mouse Location To World Space" },
		{ "Keywords", "deproject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Convert current mouse 2D position to World Space 3D position and direction. Returns false if unable to determine value. *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventDeprojectMousePositionToWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventDeprojectMousePositionToWorld_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventDeprojectMousePositionToWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventDeprojectMousePositionToWorld_Parms), &Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "DeprojectMousePositionToWorld", nullptr, nullptr, Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PlayerController_eventDeprojectMousePositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::PlayerController_eventDeprojectMousePositionToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execDeprojectMousePositionToWorld)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeprojectMousePositionToWorld(Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection);
	P_NATIVE_END;
}
// End Class APlayerController Function DeprojectMousePositionToWorld

// Begin Class APlayerController Function DeprojectScreenPositionToWorld
struct Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics
{
	struct PlayerController_eventDeprojectScreenPositionToWorld_Parms
	{
		float ScreenX;
		float ScreenY;
		FVector WorldLocation;
		FVector WorldDirection;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Convert 2D screen position to World Space 3D position and direction. Returns false if unable to determine value. **/" },
		{ "DisplayName", "Convert Screen Location To World Space" },
		{ "Keywords", "deproject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Convert 2D screen position to World Space 3D position and direction. Returns false if unable to determine value. *" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ScreenY;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldDirection;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX = { "ScreenX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, ScreenX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY = { "ScreenY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, ScreenY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldDirection = { "WorldDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventDeprojectScreenPositionToWorld_Parms, WorldDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventDeprojectScreenPositionToWorld_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventDeprojectScreenPositionToWorld_Parms), &Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ScreenY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_WorldDirection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "DeprojectScreenPositionToWorld", nullptr, nullptr, Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PlayerController_eventDeprojectScreenPositionToWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::PlayerController_eventDeprojectScreenPositionToWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execDeprojectScreenPositionToWorld)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenX);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ScreenY);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DeprojectScreenPositionToWorld(Z_Param_ScreenX,Z_Param_ScreenY,Z_Param_Out_WorldLocation,Z_Param_Out_WorldDirection);
	P_NATIVE_END;
}
// End Class APlayerController Function DeprojectScreenPositionToWorld

// Begin Class APlayerController Function EnableCheats
struct Z_Construct_UFunction_APlayerController_EnableCheats_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Run from the console to try and manually enable cheats which are disabled by default in multiplayer, games can override this */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Run from the console to try and manually enable cheats which are disabled by default in multiplayer, games can override this" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_EnableCheats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "EnableCheats", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_EnableCheats_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_EnableCheats_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_EnableCheats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_EnableCheats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execEnableCheats)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableCheats();
	P_NATIVE_END;
}
// End Class APlayerController Function EnableCheats

// Begin Class APlayerController Function FOV
struct Z_Construct_UFunction_APlayerController_FOV_Statics
{
	struct PlayerController_eventFOV_Parms
	{
		float NewFOV;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Set the field of view to NewFOV */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the field of view to NewFOV" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_FOV_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventFOV_Parms, NewFOV), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_FOV_Statics::NewProp_NewFOV,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_FOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "FOV", nullptr, nullptr, Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_FOV_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_FOV_Statics::PlayerController_eventFOV_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_FOV_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_FOV_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_FOV_Statics::PlayerController_eventFOV_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_FOV()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_FOV_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execFOV)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FOV(Z_Param_NewFOV);
	P_NATIVE_END;
}
// End Class APlayerController Function FOV

// Begin Class APlayerController Function GetAsyncPhysicsDataToConsume
struct Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics
{
	struct PlayerController_eventGetAsyncPhysicsDataToConsume_Parms
	{
		const UAsyncPhysicsData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetAsyncPhysicsDataToConsume_Parms, ReturnValue), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetAsyncPhysicsDataToConsume", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::PlayerController_eventGetAsyncPhysicsDataToConsume_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::PlayerController_eventGetAsyncPhysicsDataToConsume_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetAsyncPhysicsDataToConsume)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UAsyncPhysicsData**)Z_Param__Result=P_THIS->GetAsyncPhysicsDataToConsume();
	P_NATIVE_END;
}
// End Class APlayerController Function GetAsyncPhysicsDataToConsume

// Begin Class APlayerController Function GetAsyncPhysicsDataToWrite
struct Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics
{
	struct PlayerController_eventGetAsyncPhysicsDataToWrite_Parms
	{
		UAsyncPhysicsData* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetAsyncPhysicsDataToWrite_Parms, ReturnValue), Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetAsyncPhysicsDataToWrite", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::PlayerController_eventGetAsyncPhysicsDataToWrite_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::PlayerController_eventGetAsyncPhysicsDataToWrite_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetAsyncPhysicsDataToWrite)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAsyncPhysicsData**)Z_Param__Result=P_THIS->GetAsyncPhysicsDataToWrite();
	P_NATIVE_END;
}
// End Class APlayerController Function GetAsyncPhysicsDataToWrite

// Begin Class APlayerController Function GetDeprecatedInputPitchScale
struct Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics
{
	struct PlayerController_eventGetDeprecatedInputPitchScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetDeprecatedInputPitchScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetDeprecatedInputPitchScale", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::PlayerController_eventGetDeprecatedInputPitchScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::PlayerController_eventGetDeprecatedInputPitchScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetDeprecatedInputPitchScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeprecatedInputPitchScale();
	P_NATIVE_END;
}
// End Class APlayerController Function GetDeprecatedInputPitchScale

// Begin Class APlayerController Function GetDeprecatedInputRollScale
struct Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics
{
	struct PlayerController_eventGetDeprecatedInputRollScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetDeprecatedInputRollScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetDeprecatedInputRollScale", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::PlayerController_eventGetDeprecatedInputRollScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::PlayerController_eventGetDeprecatedInputRollScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetDeprecatedInputRollScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeprecatedInputRollScale();
	P_NATIVE_END;
}
// End Class APlayerController Function GetDeprecatedInputRollScale

// Begin Class APlayerController Function GetDeprecatedInputYawScale
struct Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics
{
	struct PlayerController_eventGetDeprecatedInputYawScale_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetDeprecatedInputYawScale_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetDeprecatedInputYawScale", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::PlayerController_eventGetDeprecatedInputYawScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::PlayerController_eventGetDeprecatedInputYawScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetDeprecatedInputYawScale)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDeprecatedInputYawScale();
	P_NATIVE_END;
}
// End Class APlayerController Function GetDeprecatedInputYawScale

// Begin Class APlayerController Function GetFocalLocation
struct Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics
{
	struct PlayerController_eventGetFocalLocation_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/**\n\x09 * Returns the location the PlayerController is focused on.\n\x09 *  If there is a possessed Pawn, returns the Pawn's location.\n\x09 *  If there is a spectator Pawn, returns that Pawn's location.\n\x09 *  Otherwise, returns the PlayerController's spawn location (usually the last known Pawn location after it has died).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the location the PlayerController is focused on.\n If there is a possessed Pawn, returns the Pawn's location.\n If there is a spectator Pawn, returns that Pawn's location.\n Otherwise, returns the PlayerController's spawn location (usually the last known Pawn location after it has died)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetFocalLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetFocalLocation", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PlayerController_eventGetFocalLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::PlayerController_eventGetFocalLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetFocalLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetFocalLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetFocalLocation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetFocalLocation();
	P_NATIVE_END;
}
// End Class APlayerController Function GetFocalLocation

// Begin Class APlayerController Function GetHitResultUnderCursor
struct Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics
{
	struct PlayerController_eventGetHitResultUnderCursor_Parms
	{
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bTraceComplex;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use new GetHitResultUnderCursorByChannel or GetHitResultUnderCursorForObject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "TraceChannel", "ECC_Visibility" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursor_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderCursor_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursor_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursor_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderCursor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursor_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderCursor", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PlayerController_eventGetHitResultUnderCursor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::PlayerController_eventGetHitResultUnderCursor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHitResultUnderCursor)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderCursor(ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class APlayerController Function GetHitResultUnderCursor

// Begin Class APlayerController Function GetHitResultUnderCursorByChannel
struct Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics
{
	struct PlayerController_eventGetHitResultUnderCursorByChannel_Parms
	{
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		bool bTraceComplex;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the mouse cursor, looking on a trace channel */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the mouse cursor, looking on a trace channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderCursorByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorByChannel_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderCursorByChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderCursorByChannel", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PlayerController_eventGetHitResultUnderCursorByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::PlayerController_eventGetHitResultUnderCursorByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHitResultUnderCursorByChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderCursorByChannel(ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class APlayerController Function GetHitResultUnderCursorByChannel

// Begin Class APlayerController Function GetHitResultUnderCursorForObjects
struct Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics
{
	struct PlayerController_eventGetHitResultUnderCursorForObjects_Parms
	{
		TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
		bool bTraceComplex;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the mouse cursor, looking for object types */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the mouse cursor, looking for object types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorForObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderCursorForObjects_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderCursorForObjects_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderCursorForObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderCursorForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderCursorForObjects", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PlayerController_eventGetHitResultUnderCursorForObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::PlayerController_eventGetHitResultUnderCursorForObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHitResultUnderCursorForObjects)
{
	P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderCursorForObjects(Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class APlayerController Function GetHitResultUnderCursorForObjects

// Begin Class APlayerController Function GetHitResultUnderFinger
struct Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics
{
	struct PlayerController_eventGetHitResultUnderFinger_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bTraceComplex;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use new GetHitResultUnderFingerByChannel or GetHitResultUnderFingerForObject" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "TraceChannel", "ECC_Visibility" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFinger_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFinger_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderFinger_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFinger_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFinger_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderFinger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFinger_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderFinger", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PlayerController_eventGetHitResultUnderFinger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::PlayerController_eventGetHitResultUnderFinger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHitResultUnderFinger)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderFinger(ETouchIndex::Type(Z_Param_FingerIndex),ECollisionChannel(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class APlayerController Function GetHitResultUnderFinger

// Begin Class APlayerController Function GetHitResultUnderFingerByChannel
struct Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics
{
	struct PlayerController_eventGetHitResultUnderFingerByChannel_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		TEnumAsByte<ETraceTypeQuery> TraceChannel;
		bool bTraceComplex;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the finger, looking on a trace channel */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the finger, looking on a trace channel" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerByChannel_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerByChannel_Parms, TraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1673313466
void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderFingerByChannel_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerByChannel_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderFingerByChannel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerByChannel_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderFingerByChannel", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PlayerController_eventGetHitResultUnderFingerByChannel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::PlayerController_eventGetHitResultUnderFingerByChannel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHitResultUnderFingerByChannel)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderFingerByChannel(ETouchIndex::Type(Z_Param_FingerIndex),ETraceTypeQuery(Z_Param_TraceChannel),Z_Param_bTraceComplex,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class APlayerController Function GetHitResultUnderFingerByChannel

// Begin Class APlayerController Function GetHitResultUnderFingerForObjects
struct Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics
{
	struct PlayerController_eventGetHitResultUnderFingerForObjects_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		TArray<TEnumAsByte<EObjectTypeQuery> > ObjectTypes;
		bool bTraceComplex;
		FHitResult HitResult;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bTraceComplex", "TRUE" },
		{ "Category", "Game|Player" },
		{ "Comment", "/** Performs a collision query under the finger, looking for object types */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Performs a collision query under the finger, looking for object types" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypes;
	static void NewProp_bTraceComplex_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bTraceComplex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerForObjects_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_Inner = { "ObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes = { "ObjectTypes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerForObjects_Parms, ObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypes_MetaData), NewProp_ObjectTypes_MetaData) }; // 1798967895
void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderFingerForObjects_Parms*)Obj)->bTraceComplex = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex = { "bTraceComplex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHitResultUnderFingerForObjects_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 4100991306
void Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetHitResultUnderFingerForObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetHitResultUnderFingerForObjects_Parms), &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ObjectTypes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_bTraceComplex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_HitResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHitResultUnderFingerForObjects", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PlayerController_eventGetHitResultUnderFingerForObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::PlayerController_eventGetHitResultUnderFingerForObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHitResultUnderFingerForObjects)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
	P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes);
	P_GET_UBOOL(Z_Param_bTraceComplex);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetHitResultUnderFingerForObjects(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class APlayerController Function GetHitResultUnderFingerForObjects

// Begin Class APlayerController Function GetHUD
struct Z_Construct_UFunction_APlayerController_GetHUD_Statics
{
	struct PlayerController_eventGetHUD_Parms
	{
		AHUD* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Gets the HUD currently being used by this player controller */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Gets the HUD currently being used by this player controller" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_GetHUD_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetHUD_Parms, ReturnValue), Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetHUD_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetHUD", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHUD_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetHUD_Statics::PlayerController_eventGetHUD_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetHUD_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetHUD_Statics::PlayerController_eventGetHUD_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetHUD()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetHUD_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetHUD)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AHUD**)Z_Param__Result=P_THIS->GetHUD();
	P_NATIVE_END;
}
// End Class APlayerController Function GetHUD

// Begin Class APlayerController Function GetInputAnalogKeyState
struct Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics
{
	struct PlayerController_eventGetInputAnalogKeyState_Parms
	{
		FKey Key;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the analog value for the given key/button.  If analog isn't supported, returns 1 for down and 0 for up." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogKeyState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputAnalogKeyState", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PlayerController_eventGetInputAnalogKeyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::PlayerController_eventGetInputAnalogKeyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputAnalogKeyState)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInputAnalogKeyState(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputAnalogKeyState

// Begin Class APlayerController Function GetInputAnalogStickState
struct Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics
{
	struct PlayerController_eventGetInputAnalogStickState_Parms
	{
		TEnumAsByte<EControllerAnalogStick::Type> WhichStick;
		float StickX;
		float StickY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the X and Y displacement of the given analog stick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the X and Y displacement of the given analog stick." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_WhichStick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StickX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_StickY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_WhichStick = { "WhichStick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogStickState_Parms, WhichStick), Z_Construct_UEnum_Engine_EControllerAnalogStick, METADATA_PARAMS(0, nullptr) }; // 3426242276
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickX = { "StickX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogStickState_Parms, StickX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickY = { "StickY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputAnalogStickState_Parms, StickY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_WhichStick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::NewProp_StickY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputAnalogStickState", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PlayerController_eventGetInputAnalogStickState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::PlayerController_eventGetInputAnalogStickState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputAnalogStickState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputAnalogStickState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputAnalogStickState)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_WhichStick);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StickX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_StickY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInputAnalogStickState(EControllerAnalogStick::Type(Z_Param_WhichStick),Z_Param_Out_StickX,Z_Param_Out_StickY);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputAnalogStickState

// Begin Class APlayerController Function GetInputKeyTimeDown
struct Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics
{
	struct PlayerController_eventGetInputKeyTimeDown_Parms
	{
		FKey Key;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns how long the given key/button has been down.  Returns 0 if it's up or it just went down this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputKeyTimeDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputKeyTimeDown_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputKeyTimeDown", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PlayerController_eventGetInputKeyTimeDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::PlayerController_eventGetInputKeyTimeDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputKeyTimeDown)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetInputKeyTimeDown(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputKeyTimeDown

// Begin Class APlayerController Function GetInputMotionState
struct Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics
{
	struct PlayerController_eventGetInputMotionState_Parms
	{
		FVector Tilt;
		FVector RotationRate;
		FVector Gravity;
		FVector Acceleration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the current motion state of the player's input device */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the current motion state of the player's input device" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tilt;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RotationRate;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Gravity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Acceleration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Tilt = { "Tilt", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, Tilt), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_RotationRate = { "RotationRate", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, RotationRate), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, Gravity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputMotionState_Parms, Acceleration), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Tilt,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_RotationRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Gravity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::NewProp_Acceleration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputMotionState", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PlayerController_eventGetInputMotionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::PlayerController_eventGetInputMotionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputMotionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputMotionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputMotionState)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Tilt);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_RotationRate);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Gravity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Acceleration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInputMotionState(Z_Param_Out_Tilt,Z_Param_Out_RotationRate,Z_Param_Out_Gravity,Z_Param_Out_Acceleration);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputMotionState

// Begin Class APlayerController Function GetInputMouseDelta
struct Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics
{
	struct PlayerController_eventGetInputMouseDelta_Parms
	{
		float DeltaX;
		float DeltaY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves how far the mouse moved this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves how far the mouse moved this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaX = { "DeltaX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputMouseDelta_Parms, DeltaX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaY = { "DeltaY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputMouseDelta_Parms, DeltaY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::NewProp_DeltaY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputMouseDelta", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PlayerController_eventGetInputMouseDelta_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::PlayerController_eventGetInputMouseDelta_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputMouseDelta()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputMouseDelta_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputMouseDelta)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_DeltaY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInputMouseDelta(Z_Param_Out_DeltaX,Z_Param_Out_DeltaY);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputMouseDelta

// Begin Class APlayerController Function GetInputTouchState
struct Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics
{
	struct PlayerController_eventGetInputTouchState_Parms
	{
		TEnumAsByte<ETouchIndex::Type> FingerIndex;
		float LocationX;
		float LocationY;
		bool bIsCurrentlyPressed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the X and Y screen coordinates of the specified touch key. Returns false if the touch index is not down */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the X and Y screen coordinates of the specified touch key. Returns false if the touch index is not down" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FingerIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationY;
	static void NewProp_bIsCurrentlyPressed_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsCurrentlyPressed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_FingerIndex = { "FingerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputTouchState_Parms, FingerIndex), Z_Construct_UEnum_InputCore_ETouchIndex, METADATA_PARAMS(0, nullptr) }; // 3556756081
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputTouchState_Parms, LocationX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputTouchState_Parms, LocationY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed_SetBit(void* Obj)
{
	((PlayerController_eventGetInputTouchState_Parms*)Obj)->bIsCurrentlyPressed = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed = { "bIsCurrentlyPressed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetInputTouchState_Parms), &Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_FingerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_LocationY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::NewProp_bIsCurrentlyPressed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputTouchState", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PlayerController_eventGetInputTouchState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::PlayerController_eventGetInputTouchState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputTouchState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputTouchState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputTouchState)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FingerIndex);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationY);
	P_GET_UBOOL_REF(Z_Param_Out_bIsCurrentlyPressed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetInputTouchState(ETouchIndex::Type(Z_Param_FingerIndex),Z_Param_Out_LocationX,Z_Param_Out_LocationY,Z_Param_Out_bIsCurrentlyPressed);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputTouchState

// Begin Class APlayerController Function GetInputVectorKeyState
struct Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics
{
	struct PlayerController_eventGetInputVectorKeyState_Parms
	{
		FKey Key;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns the vector value for the given key/button. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the vector value for the given key/button." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputVectorKeyState_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetInputVectorKeyState_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetInputVectorKeyState", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PlayerController_eventGetInputVectorKeyState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::PlayerController_eventGetInputVectorKeyState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetInputVectorKeyState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetInputVectorKeyState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetInputVectorKeyState)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetInputVectorKeyState(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function GetInputVectorKeyState

// Begin Class APlayerController Function GetMousePosition
struct Z_Construct_UFunction_APlayerController_GetMousePosition_Statics
{
	struct PlayerController_eventGetMousePosition_Parms
	{
		float LocationX;
		float LocationY;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Retrieves the X and Y screen coordinates of the mouse cursor. Returns false if there is no associated mouse device */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Retrieves the X and Y screen coordinates of the mouse cursor. Returns false if there is no associated mouse device" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationX;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LocationY;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationX = { "LocationX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetMousePosition_Parms, LocationX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationY = { "LocationY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetMousePosition_Parms, LocationY), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventGetMousePosition_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventGetMousePosition_Parms), &Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_LocationY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetMousePosition", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PlayerController_eventGetMousePosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::PlayerController_eventGetMousePosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetMousePosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetMousePosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetMousePosition)
{
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationX);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_LocationY);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetMousePosition(Z_Param_Out_LocationX,Z_Param_Out_LocationY);
	P_NATIVE_END;
}
// End Class APlayerController Function GetMousePosition

// Begin Class APlayerController Function GetOverridePlayerInputClass
struct Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics
{
	struct PlayerController_eventGetOverridePlayerInputClass_Parms
	{
		TSubclassOf<UPlayerInput> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetOverridePlayerInputClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetOverridePlayerInputClass", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::PlayerController_eventGetOverridePlayerInputClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::PlayerController_eventGetOverridePlayerInputClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetOverridePlayerInputClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UPlayerInput>*)Z_Param__Result=P_THIS->GetOverridePlayerInputClass();
	P_NATIVE_END;
}
// End Class APlayerController Function GetOverridePlayerInputClass

// Begin Class APlayerController Function GetPlatformUserId
struct Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics
{
	struct FPlatformUserId
	{
		int32 InternalId;
	};

	struct PlayerController_eventGetPlatformUserId_Parms
	{
		FPlatformUserId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Returns the platform user that is assigned to this Player Controller's Local Player.\n\x09 * If there is no local player, then this will return PLATFORMUSERID_NONE\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns the platform user that is assigned to this Player Controller's Local Player.\nIf there is no local player, then this will return PLATFORMUSERID_NONE" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetPlatformUserId_Parms, ReturnValue), Z_Construct_UScriptStruct_FPlatformUserId, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetPlatformUserId", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::PlayerController_eventGetPlatformUserId_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::PlayerController_eventGetPlatformUserId_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetPlatformUserId()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetPlatformUserId_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetPlatformUserId)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FPlatformUserId*)Z_Param__Result=P_THIS->GetPlatformUserId();
	P_NATIVE_END;
}
// End Class APlayerController Function GetPlatformUserId

// Begin Class APlayerController Function GetSpectatorPawn
struct Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics
{
	struct PlayerController_eventGetSpectatorPawn_Parms
	{
		ASpectatorPawn* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Comment", "/** Get the Pawn used when spectating. nullptr when not spectating. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Get the Pawn used when spectating. nullptr when not spectating." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetSpectatorPawn_Parms, ReturnValue), Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetSpectatorPawn", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PlayerController_eventGetSpectatorPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::PlayerController_eventGetSpectatorPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetSpectatorPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetSpectatorPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetSpectatorPawn)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ASpectatorPawn**)Z_Param__Result=P_THIS->GetSpectatorPawn();
	P_NATIVE_END;
}
// End Class APlayerController Function GetSpectatorPawn

// Begin Class APlayerController Function GetStreamingSourceLocationAndRotation
struct Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics
{
	struct PlayerController_eventGetStreamingSourceLocationAndRotation_Parms
	{
		FVector OutLocation;
		FRotator OutRotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/**\n\x09* Gets the streaming source location and rotation.\n\x09* Default implementation returns APlayerController::GetPlayerViewPoint but can be overriden in child classes.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Gets the streaming source location and rotation.\nDefault implementation returns APlayerController::GetPlayerViewPoint but can be overriden in child classes." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetStreamingSourceLocationAndRotation_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::NewProp_OutRotation = { "OutRotation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetStreamingSourceLocationAndRotation_Parms, OutRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::NewProp_OutRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetStreamingSourceLocationAndRotation", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::PlayerController_eventGetStreamingSourceLocationAndRotation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::PlayerController_eventGetStreamingSourceLocationAndRotation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetStreamingSourceLocationAndRotation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_OutRotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetStreamingSourceLocationAndRotation(Z_Param_Out_OutLocation,Z_Param_Out_OutRotation);
	P_NATIVE_END;
}
// End Class APlayerController Function GetStreamingSourceLocationAndRotation

// Begin Class APlayerController Function GetStreamingSourcePriority
struct Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics
{
	struct PlayerController_eventGetStreamingSourcePriority_Parms
	{
		EStreamingSourcePriority ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/**\n\x09* Gets the streaming source priority.\n\x09* Default implementation returns StreamingSourcePriority but can be overriden in child classes.\n\x09* @return the streaming source priority.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Gets the streaming source priority.\nDefault implementation returns StreamingSourcePriority but can be overriden in child classes.\n@return the streaming source priority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetStreamingSourcePriority_Parms, ReturnValue), Z_Construct_UEnum_Engine_EStreamingSourcePriority, METADATA_PARAMS(0, nullptr) }; // 3463526699
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetStreamingSourcePriority", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::PlayerController_eventGetStreamingSourcePriority_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::PlayerController_eventGetStreamingSourcePriority_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetStreamingSourcePriority)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EStreamingSourcePriority*)Z_Param__Result=P_THIS->GetStreamingSourcePriority();
	P_NATIVE_END;
}
// End Class APlayerController Function GetStreamingSourcePriority

// Begin Class APlayerController Function GetStreamingSourceShapes
struct Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics
{
	struct PlayerController_eventGetStreamingSourceShapes_Parms
	{
		TArray<FStreamingSourceShape> OutShapes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/**\n\x09* Gets the streaming source priority.\n\x09* Default implementation returns StreamingSourceShapes but can be overriden in child classes.\n\x09* @return the streaming source priority.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Gets the streaming source priority.\nDefault implementation returns StreamingSourceShapes but can be overriden in child classes.\n@return the streaming source priority." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutShapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutShapes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::NewProp_OutShapes_Inner = { "OutShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreamingSourceShape, METADATA_PARAMS(0, nullptr) }; // 2223099804
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::NewProp_OutShapes = { "OutShapes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetStreamingSourceShapes_Parms, OutShapes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2223099804
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::NewProp_OutShapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::NewProp_OutShapes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetStreamingSourceShapes", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::PlayerController_eventGetStreamingSourceShapes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::PlayerController_eventGetStreamingSourceShapes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetStreamingSourceShapes)
{
	P_GET_TARRAY_REF(FStreamingSourceShape,Z_Param_Out_OutShapes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetStreamingSourceShapes(Z_Param_Out_OutShapes);
	P_NATIVE_END;
}
// End Class APlayerController Function GetStreamingSourceShapes

// Begin Class APlayerController Function GetViewportSize
struct Z_Construct_UFunction_APlayerController_GetViewportSize_Statics
{
	struct PlayerController_eventGetViewportSize_Parms
	{
		int32 SizeX;
		int32 SizeY;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "Comment", "/** Helper to get the size of the HUD canvas for this player controller.  Returns 0 if there is no HUD */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Helper to get the size of the HUD canvas for this player controller.  Returns 0 if there is no HUD" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetViewportSize_Parms, SizeX), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventGetViewportSize_Parms, SizeY), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::NewProp_SizeY,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "GetViewportSize", nullptr, nullptr, Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PlayerController_eventGetViewportSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::PlayerController_eventGetViewportSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_GetViewportSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_GetViewportSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execGetViewportSize)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeX);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_SizeY);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetViewportSize(Z_Param_Out_SizeX,Z_Param_Out_SizeY);
	P_NATIVE_END;
}
// End Class APlayerController Function GetViewportSize

// Begin Class APlayerController Function IsInputKeyDown
struct Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics
{
	struct PlayerController_eventIsInputKeyDown_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if the given key/button is pressed on the input of the controller (if present) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if the given key/button is pressed on the input of the controller (if present)" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventIsInputKeyDown_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventIsInputKeyDown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventIsInputKeyDown_Parms), &Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "IsInputKeyDown", nullptr, nullptr, Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PlayerController_eventIsInputKeyDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::PlayerController_eventIsInputKeyDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_IsInputKeyDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_IsInputKeyDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execIsInputKeyDown)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInputKeyDown(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function IsInputKeyDown

// Begin Class APlayerController Function IsStreamingSourceEnabled
struct Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics
{
	struct PlayerController_eventIsStreamingSourceEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/**\n\x09* Whether the PlayerController should be used as a World Partiton streaming source. \n\x09* Default implementation returns bEnableStreamingSource but can be overriden in child classes.\n\x09* @return true if it should.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the PlayerController should be used as a World Partiton streaming source.\nDefault implementation returns bEnableStreamingSource but can be overriden in child classes.\n@return true if it should." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventIsStreamingSourceEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventIsStreamingSourceEnabled_Parms), &Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "IsStreamingSourceEnabled", nullptr, nullptr, Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::PlayerController_eventIsStreamingSourceEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::PlayerController_eventIsStreamingSourceEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execIsStreamingSourceEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsStreamingSourceEnabled();
	P_NATIVE_END;
}
// End Class APlayerController Function IsStreamingSourceEnabled

// Begin Class APlayerController Function K2_ClientPlayForceFeedback
struct Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics
{
	struct PlayerController_eventK2_ClientPlayForceFeedback_Parms
	{
		UForceFeedbackEffect* ForceFeedbackEffect;
		FName Tag;
		bool bLooping;
		bool bIgnoreTimeDilation;
		bool bPlayWhilePaused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bIgnoreTimeDilation,bPlayWhilePaused" },
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Play a force feedback pattern on the player's controller\n\x09 * @param\x09""ForceFeedbackEffect\x09\x09The force feedback pattern to play\n\x09 * @param\x09""bLooping\x09\x09\x09\x09Whether the pattern should be played repeatedly or be a single one shot\n\x09 * @param\x09""bIgnoreTimeDilation\x09\x09Whether the pattern should ignore time dilation\n\x09 * @param\x09""bPlayWhilePaused\x09\x09Whether the pattern should continue to play while the game is paused\n\x09 * @param\x09Tag\x09\x09\x09\x09\x09\x09""A tag that allows stopping of an effect.  If another effect with this Tag is playing, it will be stopped and replaced\n\x09 */" },
		{ "DisplayName", "Client Play Force Feedback" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play a force feedback pattern on the player's controller\n@param       ForceFeedbackEffect             The force feedback pattern to play\n@param       bLooping                                Whether the pattern should be played repeatedly or be a single one shot\n@param       bIgnoreTimeDilation             Whether the pattern should ignore time dilation\n@param       bPlayWhilePaused                Whether the pattern should continue to play while the game is paused\n@param       Tag                                             A tag that allows stopping of an effect.  If another effect with this Tag is playing, it will be stopped and replaced" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ForceFeedbackEffect;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static void NewProp_bPlayWhilePaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayWhilePaused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_ForceFeedbackEffect = { "ForceFeedbackEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventK2_ClientPlayForceFeedback_Parms, ForceFeedbackEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventK2_ClientPlayForceFeedback_Parms, Tag), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((PlayerController_eventK2_ClientPlayForceFeedback_Parms*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((PlayerController_eventK2_ClientPlayForceFeedback_Parms*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused_SetBit(void* Obj)
{
	((PlayerController_eventK2_ClientPlayForceFeedback_Parms*)Obj)->bPlayWhilePaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused = { "bPlayWhilePaused", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventK2_ClientPlayForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_ForceFeedbackEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_Tag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bIgnoreTimeDilation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::NewProp_bPlayWhilePaused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "K2_ClientPlayForceFeedback", nullptr, nullptr, Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PlayerController_eventK2_ClientPlayForceFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::PlayerController_eventK2_ClientPlayForceFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execK2_ClientPlayForceFeedback)
{
	P_GET_OBJECT(UForceFeedbackEffect,Z_Param_ForceFeedbackEffect);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_GET_UBOOL(Z_Param_bLooping);
	P_GET_UBOOL(Z_Param_bIgnoreTimeDilation);
	P_GET_UBOOL(Z_Param_bPlayWhilePaused);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->K2_ClientPlayForceFeedback(Z_Param_ForceFeedbackEffect,Z_Param_Tag,Z_Param_bLooping,Z_Param_bIgnoreTimeDilation,Z_Param_bPlayWhilePaused);
	P_NATIVE_END;
}
// End Class APlayerController Function K2_ClientPlayForceFeedback

// Begin Class APlayerController Function LocalTravel
struct Z_Construct_UFunction_APlayerController_LocalTravel_Statics
{
	struct PlayerController_eventLocalTravel_Parms
	{
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Causes the client to travel to the given URL */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Causes the client to travel to the given URL" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventLocalTravel_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_LocalTravel_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_LocalTravel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "LocalTravel", nullptr, nullptr, Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PlayerController_eventLocalTravel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_LocalTravel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_LocalTravel_Statics::PlayerController_eventLocalTravel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_LocalTravel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_LocalTravel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execLocalTravel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LocalTravel(Z_Param_URL);
	P_NATIVE_END;
}
// End Class APlayerController Function LocalTravel

// Begin Class APlayerController Function OnRep_AsyncPhysicsDataComponent
struct Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "OnRep_AsyncPhysicsDataComponent", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execOnRep_AsyncPhysicsDataComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_AsyncPhysicsDataComponent();
	P_NATIVE_END;
}
// End Class APlayerController Function OnRep_AsyncPhysicsDataComponent

// Begin Class APlayerController Function OnServerStartedVisualLogger
struct PlayerController_eventOnServerStartedVisualLogger_Parms
{
	bool bIsLogging;
};
static FName NAME_APlayerController_OnServerStartedVisualLogger = FName(TEXT("OnServerStartedVisualLogger"));
void APlayerController::OnServerStartedVisualLogger(bool bIsLogging)
{
	PlayerController_eventOnServerStartedVisualLogger_Parms Parms;
	Parms.bIsLogging=bIsLogging ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_OnServerStartedVisualLogger),&Parms);
}
struct Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Notify from server that Visual Logger is recording, to show that information on client about possible performance issues \n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notify from server that Visual Logger is recording, to show that information on client about possible performance issues" },
	};
#endif // WITH_METADATA
	static void NewProp_bIsLogging_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLogging;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging_SetBit(void* Obj)
{
	((PlayerController_eventOnServerStartedVisualLogger_Parms*)Obj)->bIsLogging = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging = { "bIsLogging", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventOnServerStartedVisualLogger_Parms), &Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::NewProp_bIsLogging,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "OnServerStartedVisualLogger", nullptr, nullptr, Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::PropPointers), sizeof(PlayerController_eventOnServerStartedVisualLogger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventOnServerStartedVisualLogger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execOnServerStartedVisualLogger)
{
	P_GET_UBOOL(Z_Param_bIsLogging);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnServerStartedVisualLogger_Implementation(Z_Param_bIsLogging);
	P_NATIVE_END;
}
// End Class APlayerController Function OnServerStartedVisualLogger

// Begin Class APlayerController Function Pause
struct Z_Construct_UFunction_APlayerController_Pause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Command to try to pause the game. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Command to try to pause the game." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_Pause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "Pause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_Pause_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_Pause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_Pause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_Pause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Pause();
	P_NATIVE_END;
}
// End Class APlayerController Function Pause

// Begin Class APlayerController Function PlayDynamicForceFeedback
struct Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics
{
	struct PlayerController_eventPlayDynamicForceFeedback_Parms
	{
		float Intensity;
		float Duration;
		bool bAffectsLeftLarge;
		bool bAffectsLeftSmall;
		bool bAffectsRightLarge;
		bool bAffectsRightSmall;
		TEnumAsByte<EDynamicForceFeedbackAction::Type> Action;
		FLatentActionInfo LatentInfo;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bAffectsLeftLarge,bAffectsLeftSmall,bAffectsRightLarge,bAffectsRightSmall" },
		{ "bAffectsLeftLarge", "true" },
		{ "bAffectsLeftSmall", "true" },
		{ "bAffectsRightLarge", "true" },
		{ "bAffectsRightSmall", "true" },
		{ "Category", "Game|Feedback" },
		{ "Comment", "/** \n\x09 * Latent action that controls the playing of force feedback \n\x09 * Begins playing when Start is called.  Calling Update or Stop if the feedback is not active will have no effect.\n\x09 * Completed will execute when Stop is called or the duration ends.\n\x09 * When Update is called the Intensity, Duration, and affect values will be updated with the current inputs\n\x09 * @param\x09Intensity\x09\x09\x09\x09How strong the feedback should be.  Valid values are between 0.0 and 1.0\n\x09 * @param\x09""Duration\x09\x09\x09\x09How long the feedback should play for.  If the value is negative it will play until stopped\n\x09 * @param   bAffectsLeftLarge\x09\x09Whether the intensity should be applied to the large left servo\n\x09 * @param   bAffectsLeftSmall\x09\x09Whether the intensity should be applied to the small left servo\n\x09 * @param   bAffectsRightLarge\x09\x09Whether the intensity should be applied to the large right servo\n\x09 * @param   bAffectsRightSmall\x09\x09Whether the intensity should be applied to the small right servo\n\x09 */" },
		{ "Duration", "-1" },
		{ "ExpandEnumAsExecs", "Action" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Latent action that controls the playing of force feedback\nBegins playing when Start is called.  Calling Update or Stop if the feedback is not active will have no effect.\nCompleted will execute when Stop is called or the duration ends.\nWhen Update is called the Intensity, Duration, and affect values will be updated with the current inputs\n@param       Intensity                               How strong the feedback should be.  Valid values are between 0.0 and 1.0\n@param       Duration                                How long the feedback should play for.  If the value is negative it will play until stopped\n@param   bAffectsLeftLarge           Whether the intensity should be applied to the large left servo\n@param   bAffectsLeftSmall           Whether the intensity should be applied to the small left servo\n@param   bAffectsRightLarge          Whether the intensity should be applied to the large right servo\n@param   bAffectsRightSmall          Whether the intensity should be applied to the small right servo" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bAffectsLeftLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftLarge;
	static void NewProp_bAffectsLeftSmall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsLeftSmall;
	static void NewProp_bAffectsRightLarge_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightLarge;
	static void NewProp_bAffectsRightSmall_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsRightSmall;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, Intensity), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge_SetBit(void* Obj)
{
	((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsLeftLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge = { "bAffectsLeftLarge", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall_SetBit(void* Obj)
{
	((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsLeftSmall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall = { "bAffectsLeftSmall", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge_SetBit(void* Obj)
{
	((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsRightLarge = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge = { "bAffectsRightLarge", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall_SetBit(void* Obj)
{
	((PlayerController_eventPlayDynamicForceFeedback_Parms*)Obj)->bAffectsRightSmall = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall = { "bAffectsRightSmall", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventPlayDynamicForceFeedback_Parms), &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, Action), Z_Construct_UEnum_Engine_EDynamicForceFeedbackAction, METADATA_PARAMS(0, nullptr) }; // 2284877327
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayDynamicForceFeedback_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(0, nullptr) }; // 1503398820
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Intensity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftLarge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsLeftSmall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightLarge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_bAffectsRightSmall,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_Action,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::NewProp_LatentInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "PlayDynamicForceFeedback", nullptr, nullptr, Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PlayerController_eventPlayDynamicForceFeedback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::PlayerController_eventPlayDynamicForceFeedback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execPlayDynamicForceFeedback)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Intensity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bAffectsLeftLarge);
	P_GET_UBOOL(Z_Param_bAffectsLeftSmall);
	P_GET_UBOOL(Z_Param_bAffectsRightLarge);
	P_GET_UBOOL(Z_Param_bAffectsRightSmall);
	P_GET_PROPERTY(FByteProperty,Z_Param_Action);
	P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayDynamicForceFeedback(Z_Param_Intensity,Z_Param_Duration,Z_Param_bAffectsLeftLarge,Z_Param_bAffectsLeftSmall,Z_Param_bAffectsRightLarge,Z_Param_bAffectsRightSmall,EDynamicForceFeedbackAction::Type(Z_Param_Action),Z_Param_LatentInfo);
	P_NATIVE_END;
}
// End Class APlayerController Function PlayDynamicForceFeedback

// Begin Class APlayerController Function PlayHapticEffect
struct Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics
{
	struct PlayerController_eventPlayHapticEffect_Parms
	{
		UHapticFeedbackEffect_Base* HapticEffect;
		EControllerHand Hand;
		float Scale;
		bool bLoop;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Play a haptic feedback curve on the player's controller\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to play\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 * @param\x09Scale\x09\x09\x09\x09\x09Scale between 0.0 and 1.0 on the intensity of playback\n\x09 */" },
		{ "CPP_Default_bLoop", "false" },
		{ "CPP_Default_Scale", "1.000000" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Play a haptic feedback curve on the player's controller\n@param       HapticEffect                    The haptic effect to play\n@param       Hand                                    Which hand to play the effect on\n@param       Scale                                   Scale between 0.0 and 1.0 on the intensity of playback" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HapticEffect;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
	static void NewProp_bLoop_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_HapticEffect = { "HapticEffect", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayHapticEffect_Parms, HapticEffect), Z_Construct_UClass_UHapticFeedbackEffect_Base_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventPlayHapticEffect_Parms, Scale), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop_SetBit(void* Obj)
{
	((PlayerController_eventPlayHapticEffect_Parms*)Obj)->bLoop = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventPlayHapticEffect_Parms), &Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_HapticEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Hand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_Scale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::NewProp_bLoop,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "PlayHapticEffect", nullptr, nullptr, Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PlayerController_eventPlayHapticEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::PlayerController_eventPlayHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_PlayHapticEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_PlayHapticEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execPlayHapticEffect)
{
	P_GET_OBJECT(UHapticFeedbackEffect_Base,Z_Param_HapticEffect);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Scale);
	P_GET_UBOOL(Z_Param_bLoop);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayHapticEffect(Z_Param_HapticEffect,EControllerHand(Z_Param_Hand),Z_Param_Scale,Z_Param_bLoop);
	P_NATIVE_END;
}
// End Class APlayerController Function PlayHapticEffect

// Begin Class APlayerController Function ProjectWorldLocationToScreen
struct Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics
{
	struct PlayerController_eventProjectWorldLocationToScreen_Parms
	{
		FVector WorldLocation;
		FVector2D ScreenLocation;
		bool bPlayerViewportRelative;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Convert a World Space 3D position into a 2D Screen Space position.\n\x09 * @return true if the world coordinate was successfully projected to the screen.\n\x09 */" },
		{ "CPP_Default_bPlayerViewportRelative", "false" },
		{ "DisplayName", "Convert World Location To Screen Location" },
		{ "Keywords", "project" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Convert a World Space 3D position into a 2D Screen Space position.\n@return true if the world coordinate was successfully projected to the screen." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenLocation;
	static void NewProp_bPlayerViewportRelative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerViewportRelative;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventProjectWorldLocationToScreen_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ScreenLocation = { "ScreenLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventProjectWorldLocationToScreen_Parms, ScreenLocation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative_SetBit(void* Obj)
{
	((PlayerController_eventProjectWorldLocationToScreen_Parms*)Obj)->bPlayerViewportRelative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative = { "bPlayerViewportRelative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventProjectWorldLocationToScreen_Parms), &Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventProjectWorldLocationToScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventProjectWorldLocationToScreen_Parms), &Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ScreenLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_bPlayerViewportRelative,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ProjectWorldLocationToScreen", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PlayerController_eventProjectWorldLocationToScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::PlayerController_eventProjectWorldLocationToScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execProjectWorldLocationToScreen)
{
	P_GET_STRUCT(FVector,Z_Param_WorldLocation);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenLocation);
	P_GET_UBOOL(Z_Param_bPlayerViewportRelative);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ProjectWorldLocationToScreen(Z_Param_WorldLocation,Z_Param_Out_ScreenLocation,Z_Param_bPlayerViewportRelative);
	P_NATIVE_END;
}
// End Class APlayerController Function ProjectWorldLocationToScreen

// Begin Class APlayerController Function ResetControllerLightColor
struct Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Resets the light color of the player's controller to default\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Resets the light color of the player's controller to default" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ResetControllerLightColor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ResetControllerLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ResetControllerLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execResetControllerLightColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetControllerLightColor();
	P_NATIVE_END;
}
// End Class APlayerController Function ResetControllerLightColor

// Begin Class APlayerController Function RestartLevel
struct Z_Construct_UFunction_APlayerController_RestartLevel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Restarts the current level */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Restarts the current level" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_RestartLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "RestartLevel", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_RestartLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_RestartLevel_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_RestartLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_RestartLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execRestartLevel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartLevel();
	P_NATIVE_END;
}
// End Class APlayerController Function RestartLevel

// Begin Class APlayerController Function SendToConsole
struct Z_Construct_UFunction_APlayerController_SendToConsole_Statics
{
	struct PlayerController_eventSendToConsole_Parms
	{
		FString Command;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Sends a command to the console to execute if not shipping version */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sends a command to the console to execute if not shipping version" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSendToConsole_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SendToConsole_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SendToConsole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SendToConsole", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PlayerController_eventSendToConsole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SendToConsole_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SendToConsole_Statics::PlayerController_eventSendToConsole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SendToConsole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SendToConsole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSendToConsole)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendToConsole(Z_Param_Command);
	P_NATIVE_END;
}
// End Class APlayerController Function SendToConsole

// Begin Class APlayerController Function ServerAcknowledgePossession
struct PlayerController_eventServerAcknowledgePossession_Parms
{
	APawn* P;
};
static FName NAME_APlayerController_ServerAcknowledgePossession = FName(TEXT("ServerAcknowledgePossession"));
void APlayerController::ServerAcknowledgePossession(APawn* P)
{
	PlayerController_eventServerAcknowledgePossession_Parms Parms;
	Parms.P=P;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerAcknowledgePossession),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** acknowledge possession of pawn */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "acknowledge possession of pawn" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_P;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::NewProp_P = { "P", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerAcknowledgePossession_Parms, P), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::NewProp_P,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerAcknowledgePossession", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::PropPointers), sizeof(PlayerController_eventServerAcknowledgePossession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerAcknowledgePossession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerAcknowledgePossession)
{
	P_GET_OBJECT(APawn,Z_Param_P);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerAcknowledgePossession_Validate(Z_Param_P))
	{
		RPC_ValidateFailed(TEXT("ServerAcknowledgePossession_Validate"));
		return;
	}
	P_THIS->ServerAcknowledgePossession_Implementation(Z_Param_P);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerAcknowledgePossession

// Begin Class APlayerController Function ServerBlockPlayer
struct PlayerController_eventServerBlockPlayer_Parms
{
	FUniqueNetIdRepl PlayerId;
};
static FName NAME_APlayerController_ServerBlockPlayer = FName(TEXT("ServerBlockPlayer"));
void APlayerController::ServerBlockPlayer(FUniqueNetIdRepl PlayerId)
{
	PlayerController_eventServerBlockPlayer_Parms Parms;
	Parms.PlayerId=PlayerId;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerBlockPlayer),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to block a player for this controller\n\x09 * @param PlayerId player id to block\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to block a player for this controller\n@param PlayerId player id to block" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerBlockPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::NewProp_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerBlockPlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::PropPointers), sizeof(PlayerController_eventServerBlockPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerBlockPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerBlockPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerBlockPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerBlockPlayer)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerBlockPlayer_Validate(Z_Param_PlayerId))
	{
		RPC_ValidateFailed(TEXT("ServerBlockPlayer_Validate"));
		return;
	}
	P_THIS->ServerBlockPlayer_Implementation(Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerBlockPlayer

// Begin Class APlayerController Function ServerCamera
struct PlayerController_eventServerCamera_Parms
{
	FName NewMode;
};
static FName NAME_APlayerController_ServerCamera = FName(TEXT("ServerCamera"));
void APlayerController::ServerCamera(FName NewMode)
{
	PlayerController_eventServerCamera_Parms Parms;
	Parms.NewMode=NewMode;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerCamera),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** change mode of camera */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "change mode of camera" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ServerCamera_Statics::NewProp_NewMode = { "NewMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerCamera_Parms, NewMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerCamera_Statics::NewProp_NewMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerCamera", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCamera_Statics::PropPointers), sizeof(PlayerController_eventServerCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerCamera)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCamera_Validate(Z_Param_NewMode))
	{
		RPC_ValidateFailed(TEXT("ServerCamera_Validate"));
		return;
	}
	P_THIS->ServerCamera_Implementation(Z_Param_NewMode);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerCamera

// Begin Class APlayerController Function ServerChangeName
struct PlayerController_eventServerChangeName_Parms
{
	FString S;
};
static FName NAME_APlayerController_ServerChangeName = FName(TEXT("ServerChangeName"));
void APlayerController::ServerChangeName(const FString& S)
{
	PlayerController_eventServerChangeName_Parms Parms;
	Parms.S=S;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerChangeName),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerChangeName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Change name of server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Change name of server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_S;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerChangeName_Parms, S), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_MetaData), NewProp_S_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::NewProp_S,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerChangeName", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::PropPointers), sizeof(PlayerController_eventServerChangeName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerChangeName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerChangeName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerChangeName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerChangeName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_S);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerChangeName_Validate(Z_Param_S))
	{
		RPC_ValidateFailed(TEXT("ServerChangeName_Validate"));
		return;
	}
	P_THIS->ServerChangeName_Implementation(Z_Param_S);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerChangeName

// Begin Class APlayerController Function ServerCheckClientPossession
static FName NAME_APlayerController_ServerCheckClientPossession = FName(TEXT("ServerCheckClientPossession"));
void APlayerController::ServerCheckClientPossession()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerCheckClientPossession),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Tells the server to make sure the possessed pawn is in sync with the client. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tells the server to make sure the possessed pawn is in sync with the client." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerCheckClientPossession", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerCheckClientPossession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerCheckClientPossession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerCheckClientPossession)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCheckClientPossession_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerCheckClientPossession_Validate"));
		return;
	}
	P_THIS->ServerCheckClientPossession_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerCheckClientPossession

// Begin Class APlayerController Function ServerCheckClientPossessionReliable
static FName NAME_APlayerController_ServerCheckClientPossessionReliable = FName(TEXT("ServerCheckClientPossessionReliable"));
void APlayerController::ServerCheckClientPossessionReliable()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerCheckClientPossessionReliable),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Reliable version of ServerCheckClientPossession to be used when there is no likely danger of spamming the network. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Reliable version of ServerCheckClientPossession to be used when there is no likely danger of spamming the network." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerCheckClientPossessionReliable", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerCheckClientPossessionReliable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerCheckClientPossessionReliable_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerCheckClientPossessionReliable_Validate"));
		return;
	}
	P_THIS->ServerCheckClientPossessionReliable_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerCheckClientPossessionReliable

// Begin Class APlayerController Function ServerExec
struct Z_Construct_UFunction_APlayerController_ServerExec_Statics
{
	struct PlayerController_eventServerExec_Parms
	{
		FString Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Executes command on server (non shipping builds only) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Executes command on server (non shipping builds only)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerExec_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerExec_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerExec_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerExec", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExec_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ServerExec_Statics::PlayerController_eventServerExec_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExec_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerExec_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ServerExec_Statics::PlayerController_eventServerExec_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerExec()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerExec_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerExec)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerExec(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerExec

// Begin Class APlayerController Function ServerExecRPC
struct PlayerController_eventServerExecRPC_Parms
{
	FString Msg;
};
static FName NAME_APlayerController_ServerExecRPC = FName(TEXT("ServerExecRPC"));
void APlayerController::ServerExecRPC(const FString& Msg)
{
	PlayerController_eventServerExecRPC_Parms Parms;
	Parms.Msg=Msg;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerExecRPC),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** RPC used by ServerExec. Not intended to be called directly */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "RPC used by ServerExec. Not intended to be called directly" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerExecRPC_Parms, Msg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerExecRPC", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::PropPointers), sizeof(PlayerController_eventServerExecRPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerExecRPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerExecRPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerExecRPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerExecRPC)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerExecRPC_Validate(Z_Param_Msg))
	{
		RPC_ValidateFailed(TEXT("ServerExecRPC_Validate"));
		return;
	}
	P_THIS->ServerExecRPC_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerExecRPC

// Begin Class APlayerController Function ServerMutePlayer
struct PlayerController_eventServerMutePlayer_Parms
{
	FUniqueNetIdRepl PlayerId;
};
static FName NAME_APlayerController_ServerMutePlayer = FName(TEXT("ServerMutePlayer"));
void APlayerController::ServerMutePlayer(FUniqueNetIdRepl PlayerId)
{
	PlayerController_eventServerMutePlayer_Parms Parms;
	Parms.PlayerId=PlayerId;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerMutePlayer),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to mute a player for this controller\n\x09 * @param PlayerId player id to mute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the server to mute a player for this controller\n@param PlayerId player id to mute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerMutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::NewProp_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerMutePlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::PropPointers), sizeof(PlayerController_eventServerMutePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerMutePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerMutePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerMutePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerMutePlayer)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerMutePlayer_Validate(Z_Param_PlayerId))
	{
		RPC_ValidateFailed(TEXT("ServerMutePlayer_Validate"));
		return;
	}
	P_THIS->ServerMutePlayer_Implementation(Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerMutePlayer

// Begin Class APlayerController Function ServerNotifyLoadedWorld
struct PlayerController_eventServerNotifyLoadedWorld_Parms
{
	FName WorldPackageName;
};
static FName NAME_APlayerController_ServerNotifyLoadedWorld = FName(TEXT("ServerNotifyLoadedWorld"));
void APlayerController::ServerNotifyLoadedWorld(FName WorldPackageName)
{
	PlayerController_eventServerNotifyLoadedWorld_Parms Parms;
	Parms.WorldPackageName=WorldPackageName;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerNotifyLoadedWorld),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called to notify the server when the client has loaded a new world via seamless traveling\n\x09 * @param WorldPackageName the name of the world package that was loaded\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called to notify the server when the client has loaded a new world via seamless traveling\n@param WorldPackageName the name of the world package that was loaded" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_WorldPackageName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::NewProp_WorldPackageName = { "WorldPackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerNotifyLoadedWorld_Parms, WorldPackageName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::NewProp_WorldPackageName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerNotifyLoadedWorld", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::PropPointers), sizeof(PlayerController_eventServerNotifyLoadedWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerNotifyLoadedWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerNotifyLoadedWorld)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_WorldPackageName);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerNotifyLoadedWorld_Validate(Z_Param_WorldPackageName))
	{
		RPC_ValidateFailed(TEXT("ServerNotifyLoadedWorld_Validate"));
		return;
	}
	P_THIS->ServerNotifyLoadedWorld_Implementation(Z_Param_WorldPackageName);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerNotifyLoadedWorld

// Begin Class APlayerController Function ServerPause
static FName NAME_APlayerController_ServerPause = FName(TEXT("ServerPause"));
void APlayerController::ServerPause()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerPause),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerPause_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Replicate pause request to the server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Replicate pause request to the server" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerPause_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerPause", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerPause_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerPause_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerPause()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerPause_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerPause)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerPause_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerPause_Validate"));
		return;
	}
	P_THIS->ServerPause_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerPause

// Begin Class APlayerController Function ServerRecvClientInputFrame
struct PlayerController_eventServerRecvClientInputFrame_Parms
{
	int32 RecvClientInputFrame;
	TArray<uint8> Data;
};
static FName NAME_APlayerController_ServerRecvClientInputFrame = FName(TEXT("ServerRecvClientInputFrame"));
void APlayerController::ServerRecvClientInputFrame(int32 RecvClientInputFrame, TArray<uint8> const& Data)
{
	PlayerController_eventServerRecvClientInputFrame_Parms Parms;
	Parms.RecvClientInputFrame=RecvClientInputFrame;
	Parms.Data=Data;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerRecvClientInputFrame),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RecvClientInputFrame;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::NewProp_RecvClientInputFrame = { "RecvClientInputFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerRecvClientInputFrame_Parms, RecvClientInputFrame), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerRecvClientInputFrame_Parms, Data), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::NewProp_RecvClientInputFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::NewProp_Data_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::NewProp_Data,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerRecvClientInputFrame", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::PropPointers), sizeof(PlayerController_eventServerRecvClientInputFrame_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerRecvClientInputFrame_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerRecvClientInputFrame)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_RecvClientInputFrame);
	P_GET_TARRAY(uint8,Z_Param_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerRecvClientInputFrame_Implementation(Z_Param_RecvClientInputFrame,Z_Param_Data);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerRecvClientInputFrame

// Begin Class APlayerController Function ServerRestartPlayer
static FName NAME_APlayerController_ServerRestartPlayer = FName(TEXT("ServerRestartPlayer"));
void APlayerController::ServerRestartPlayer()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerRestartPlayer),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Attempts to restart this player, generally called from the client upon respawn request. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Attempts to restart this player, generally called from the client upon respawn request." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerRestartPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerRestartPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerRestartPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerRestartPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerRestartPlayer_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerRestartPlayer_Validate"));
		return;
	}
	P_THIS->ServerRestartPlayer_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerRestartPlayer

// Begin Class APlayerController Function ServerSendLatestAsyncPhysicsTimestamp
struct PlayerController_eventServerSendLatestAsyncPhysicsTimestamp_Parms
{
	FAsyncPhysicsTimestamp Timestamp;
};
static FName NAME_APlayerController_ServerSendLatestAsyncPhysicsTimestamp = FName(TEXT("ServerSendLatestAsyncPhysicsTimestamp"));
void APlayerController::ServerSendLatestAsyncPhysicsTimestamp(FAsyncPhysicsTimestamp Timestamp)
{
	PlayerController_eventServerSendLatestAsyncPhysicsTimestamp_Parms Parms;
	Parms.Timestamp=Timestamp;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerSendLatestAsyncPhysicsTimestamp),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Server receives the clients FAsyncPhysicsTimestamp with its predicted ServerFrame and clients LocalFrame, to updates the time dilation needed to keep the ServerFrame prediction in sync */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Server receives the clients FAsyncPhysicsTimestamp with its predicted ServerFrame and clients LocalFrame, to updates the time dilation needed to keep the ServerFrame prediction in sync" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Timestamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerSendLatestAsyncPhysicsTimestamp_Parms, Timestamp), Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp, METADATA_PARAMS(0, nullptr) }; // 312180022
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::NewProp_Timestamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerSendLatestAsyncPhysicsTimestamp", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::PropPointers), sizeof(PlayerController_eventServerSendLatestAsyncPhysicsTimestamp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerSendLatestAsyncPhysicsTimestamp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerSendLatestAsyncPhysicsTimestamp)
{
	P_GET_STRUCT(FAsyncPhysicsTimestamp,Z_Param_Timestamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ServerSendLatestAsyncPhysicsTimestamp_Implementation(Z_Param_Timestamp);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerSendLatestAsyncPhysicsTimestamp

// Begin Class APlayerController Function ServerSetSpectatorLocation
struct PlayerController_eventServerSetSpectatorLocation_Parms
{
	FVector NewLoc;
	FRotator NewRot;
};
static FName NAME_APlayerController_ServerSetSpectatorLocation = FName(TEXT("ServerSetSpectatorLocation"));
void APlayerController::ServerSetSpectatorLocation(FVector NewLoc, FRotator NewRot)
{
	PlayerController_eventServerSetSpectatorLocation_Parms Parms;
	Parms.NewLoc=NewLoc;
	Parms.NewRot=NewRot;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerSetSpectatorLocation),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** When spectating, updates spectator location/rotation and pings the server to make sure spectating should continue. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "When spectating, updates spectator location/rotation and pings the server to make sure spectating should continue." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLoc;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewRot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewLoc = { "NewLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerSetSpectatorLocation_Parms, NewLoc), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewRot = { "NewRot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerSetSpectatorLocation_Parms, NewRot), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::NewProp_NewRot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerSetSpectatorLocation", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::PropPointers), sizeof(PlayerController_eventServerSetSpectatorLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80A20C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerSetSpectatorLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerSetSpectatorLocation)
{
	P_GET_STRUCT(FVector,Z_Param_NewLoc);
	P_GET_STRUCT(FRotator,Z_Param_NewRot);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetSpectatorLocation_Validate(Z_Param_NewLoc,Z_Param_NewRot))
	{
		RPC_ValidateFailed(TEXT("ServerSetSpectatorLocation_Validate"));
		return;
	}
	P_THIS->ServerSetSpectatorLocation_Implementation(Z_Param_NewLoc,Z_Param_NewRot);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerSetSpectatorLocation

// Begin Class APlayerController Function ServerSetSpectatorWaiting
struct PlayerController_eventServerSetSpectatorWaiting_Parms
{
	bool bWaiting;
};
static FName NAME_APlayerController_ServerSetSpectatorWaiting = FName(TEXT("ServerSetSpectatorWaiting"));
void APlayerController::ServerSetSpectatorWaiting(bool bWaiting)
{
	PlayerController_eventServerSetSpectatorWaiting_Parms Parms;
	Parms.bWaiting=bWaiting ? true : false;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerSetSpectatorWaiting),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Indicate that the Spectator is waiting to join/respawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Indicate that the Spectator is waiting to join/respawn." },
	};
#endif // WITH_METADATA
	static void NewProp_bWaiting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaiting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit(void* Obj)
{
	((PlayerController_eventServerSetSpectatorWaiting_Parms*)Obj)->bWaiting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting = { "bWaiting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventServerSetSpectatorWaiting_Parms), &Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::NewProp_bWaiting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerSetSpectatorWaiting", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::PropPointers), sizeof(PlayerController_eventServerSetSpectatorWaiting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerSetSpectatorWaiting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerSetSpectatorWaiting)
{
	P_GET_UBOOL(Z_Param_bWaiting);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerSetSpectatorWaiting_Validate(Z_Param_bWaiting))
	{
		RPC_ValidateFailed(TEXT("ServerSetSpectatorWaiting_Validate"));
		return;
	}
	P_THIS->ServerSetSpectatorWaiting_Implementation(Z_Param_bWaiting);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerSetSpectatorWaiting

// Begin Class APlayerController Function ServerShortTimeout
static FName NAME_APlayerController_ServerShortTimeout = FName(TEXT("ServerShortTimeout"));
void APlayerController::ServerShortTimeout()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerShortTimeout),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Notifies the server that the client has ticked gameplay code, and should no longer get the extended \"still loading\" timeout grace period */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Notifies the server that the client has ticked gameplay code, and should no longer get the extended \"still loading\" timeout grace period" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerShortTimeout", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerShortTimeout()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerShortTimeout_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerShortTimeout)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerShortTimeout_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerShortTimeout_Validate"));
		return;
	}
	P_THIS->ServerShortTimeout_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerShortTimeout

// Begin Class APlayerController Function ServerToggleAILogging
static FName NAME_APlayerController_ServerToggleAILogging = FName(TEXT("ServerToggleAILogging"));
void APlayerController::ServerToggleAILogging()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerToggleAILogging),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Used by UGameplayDebuggingControllerComponent to replicate messages for AI debugging in network games. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used by UGameplayDebuggingControllerComponent to replicate messages for AI debugging in network games." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerToggleAILogging", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerToggleAILogging()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerToggleAILogging_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerToggleAILogging)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerToggleAILogging_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerToggleAILogging_Validate"));
		return;
	}
	P_THIS->ServerToggleAILogging_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerToggleAILogging

// Begin Class APlayerController Function ServerUnblockPlayer
struct PlayerController_eventServerUnblockPlayer_Parms
{
	FUniqueNetIdRepl PlayerId;
};
static FName NAME_APlayerController_ServerUnblockPlayer = FName(TEXT("ServerUnblockPlayer"));
void APlayerController::ServerUnblockPlayer(FUniqueNetIdRepl PlayerId)
{
	PlayerController_eventServerUnblockPlayer_Parms Parms;
	Parms.PlayerId=PlayerId;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUnblockPlayer),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the client to unblock a player for this controller\n\x09 * @param PlayerId player id to unblock\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the client to unblock a player for this controller\n@param PlayerId player id to unblock" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerUnblockPlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::NewProp_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUnblockPlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::PropPointers), sizeof(PlayerController_eventServerUnblockPlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerUnblockPlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerUnblockPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUnblockPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerUnblockPlayer)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUnblockPlayer_Validate(Z_Param_PlayerId))
	{
		RPC_ValidateFailed(TEXT("ServerUnblockPlayer_Validate"));
		return;
	}
	P_THIS->ServerUnblockPlayer_Implementation(Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerUnblockPlayer

// Begin Class APlayerController Function ServerUnmutePlayer
struct PlayerController_eventServerUnmutePlayer_Parms
{
	FUniqueNetIdRepl PlayerId;
};
static FName NAME_APlayerController_ServerUnmutePlayer = FName(TEXT("ServerUnmutePlayer"));
void APlayerController::ServerUnmutePlayer(FUniqueNetIdRepl PlayerId)
{
	PlayerController_eventServerUnmutePlayer_Parms Parms;
	Parms.PlayerId=PlayerId;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUnmutePlayer),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Tell the server to unmute a player for this controller\n\x09 * @param PlayerId player id to unmute\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tell the server to unmute a player for this controller\n@param PlayerId player id to unmute" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::NewProp_PlayerId = { "PlayerId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerUnmutePlayer_Parms, PlayerId), Z_Construct_UScriptStruct_FUniqueNetIdRepl, METADATA_PARAMS(0, nullptr) }; // 3410776867
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::NewProp_PlayerId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUnmutePlayer", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::PropPointers), sizeof(PlayerController_eventServerUnmutePlayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerUnmutePlayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerUnmutePlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUnmutePlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerUnmutePlayer)
{
	P_GET_STRUCT(FUniqueNetIdRepl,Z_Param_PlayerId);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUnmutePlayer_Validate(Z_Param_PlayerId))
	{
		RPC_ValidateFailed(TEXT("ServerUnmutePlayer_Validate"));
		return;
	}
	P_THIS->ServerUnmutePlayer_Implementation(Z_Param_PlayerId);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerUnmutePlayer

// Begin Class APlayerController Function ServerUpdateCamera
struct PlayerController_eventServerUpdateCamera_Parms
{
	FVector_NetQuantize CamLoc;
	int32 CamPitchAndYaw;
};
static FName NAME_APlayerController_ServerUpdateCamera = FName(TEXT("ServerUpdateCamera"));
void APlayerController::ServerUpdateCamera(FVector_NetQuantize CamLoc, int32 CamPitchAndYaw)
{
	PlayerController_eventServerUpdateCamera_Parms Parms;
	Parms.CamLoc=CamLoc;
	Parms.CamPitchAndYaw=CamPitchAndYaw;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUpdateCamera),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** If PlayerCamera.bUseClientSideCameraUpdates is set, client will replicate camera positions to the server. */// @TODO - combine pitch/yaw into one int, maybe also send location compressed\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "If PlayerCamera.bUseClientSideCameraUpdates is set, client will replicate camera positions to the server. // @TODO - combine pitch/yaw into one int, maybe also send location compressed" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CamLoc;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CamPitchAndYaw;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamLoc = { "CamLoc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateCamera_Parms, CamLoc), Z_Construct_UScriptStruct_FVector_NetQuantize, METADATA_PARAMS(0, nullptr) }; // 1723029535
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamPitchAndYaw = { "CamPitchAndYaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateCamera_Parms, CamPitchAndYaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamLoc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::NewProp_CamPitchAndYaw,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUpdateCamera", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::PropPointers), sizeof(PlayerController_eventServerUpdateCamera_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerUpdateCamera_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerUpdateCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUpdateCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerUpdateCamera)
{
	P_GET_STRUCT(FVector_NetQuantize,Z_Param_CamLoc);
	P_GET_PROPERTY(FIntProperty,Z_Param_CamPitchAndYaw);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUpdateCamera_Validate(Z_Param_CamLoc,Z_Param_CamPitchAndYaw))
	{
		RPC_ValidateFailed(TEXT("ServerUpdateCamera_Validate"));
		return;
	}
	P_THIS->ServerUpdateCamera_Implementation(Z_Param_CamLoc,Z_Param_CamPitchAndYaw);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerUpdateCamera

// Begin Class APlayerController Function ServerUpdateLevelVisibility
struct PlayerController_eventServerUpdateLevelVisibility_Parms
{
	FUpdateLevelVisibilityLevelInfo LevelVisibility;
};
static FName NAME_APlayerController_ServerUpdateLevelVisibility = FName(TEXT("ServerUpdateLevelVisibility"));
void APlayerController::ServerUpdateLevelVisibility(FUpdateLevelVisibilityLevelInfo const& LevelVisibility)
{
	PlayerController_eventServerUpdateLevelVisibility_Parms Parms;
	Parms.LevelVisibility=LevelVisibility;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUpdateLevelVisibility),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called when the client adds/removes a streamed level.\n\x09 * The server will only replicate references to Actors in visible levels so that it's impossible to send references to\n\x09 * Actors the client has not initialized.\n\x09 *\n\x09 * @param LevelVisibility\x09Visibility state for the level whose state changed.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called when the client adds/removes a streamed level.\nThe server will only replicate references to Actors in visible levels so that it's impossible to send references to\nActors the client has not initialized.\n\n@param LevelVisibility       Visibility state for the level whose state changed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility = { "LevelVisibility", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateLevelVisibility_Parms, LevelVisibility), Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelVisibility_MetaData), NewProp_LevelVisibility_MetaData) }; // 3244678757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::NewProp_LevelVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUpdateLevelVisibility", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::PropPointers), sizeof(PlayerController_eventServerUpdateLevelVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerUpdateLevelVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerUpdateLevelVisibility)
{
	P_GET_STRUCT(FUpdateLevelVisibilityLevelInfo,Z_Param_LevelVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUpdateLevelVisibility_Validate(Z_Param_LevelVisibility))
	{
		RPC_ValidateFailed(TEXT("ServerUpdateLevelVisibility_Validate"));
		return;
	}
	P_THIS->ServerUpdateLevelVisibility_Implementation(Z_Param_LevelVisibility);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerUpdateLevelVisibility

// Begin Class APlayerController Function ServerUpdateMultipleLevelsVisibility
struct PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms
{
	TArray<FUpdateLevelVisibilityLevelInfo> LevelVisibilities;
};
static FName NAME_APlayerController_ServerUpdateMultipleLevelsVisibility = FName(TEXT("ServerUpdateMultipleLevelsVisibility"));
void APlayerController::ServerUpdateMultipleLevelsVisibility(TArray<FUpdateLevelVisibilityLevelInfo> const& LevelVisibilities)
{
	PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms Parms;
	Parms.LevelVisibilities=LevelVisibilities;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerUpdateMultipleLevelsVisibility),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Called when the client adds/removes a streamed level.  This version of the function allows you to pass the state of \n\x09 * multiple levels at once, to reduce the number of RPC events that will be sent.\n\x09 *\n\x09 * @param\x09LevelVisibilities\x09Visibility state for each level whose state has changed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Called when the client adds/removes a streamed level.  This version of the function allows you to pass the state of\nmultiple levels at once, to reduce the number of RPC events that will be sent.\n\n@param       LevelVisibilities       Visibility state for each level whose state has changed" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelVisibilities_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LevelVisibilities_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_LevelVisibilities;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_Inner = { "LevelVisibilities", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUpdateLevelVisibilityLevelInfo, METADATA_PARAMS(0, nullptr) }; // 3244678757
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities = { "LevelVisibilities", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms, LevelVisibilities), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelVisibilities_MetaData), NewProp_LevelVisibilities_MetaData) }; // 3244678757
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::NewProp_LevelVisibilities,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerUpdateMultipleLevelsVisibility", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::PropPointers), sizeof(PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC3, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerUpdateMultipleLevelsVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerUpdateMultipleLevelsVisibility)
{
	P_GET_TARRAY(FUpdateLevelVisibilityLevelInfo,Z_Param_LevelVisibilities);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerUpdateMultipleLevelsVisibility_Validate(Z_Param_LevelVisibilities))
	{
		RPC_ValidateFailed(TEXT("ServerUpdateMultipleLevelsVisibility_Validate"));
		return;
	}
	P_THIS->ServerUpdateMultipleLevelsVisibility_Implementation(Z_Param_LevelVisibilities);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerUpdateMultipleLevelsVisibility

// Begin Class APlayerController Function ServerVerifyViewTarget
static FName NAME_APlayerController_ServerVerifyViewTarget = FName(TEXT("ServerVerifyViewTarget"));
void APlayerController::ServerVerifyViewTarget()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerVerifyViewTarget),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Used by client to request server to confirm current viewtarget (server will respond with ClientSetViewTarget() ). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used by client to request server to confirm current viewtarget (server will respond with ClientSetViewTarget() )." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerVerifyViewTarget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC2, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerVerifyViewTarget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerVerifyViewTarget_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerVerifyViewTarget_Validate"));
		return;
	}
	P_THIS->ServerVerifyViewTarget_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerVerifyViewTarget

// Begin Class APlayerController Function ServerViewNextPlayer
static FName NAME_APlayerController_ServerViewNextPlayer = FName(TEXT("ServerViewNextPlayer"));
void APlayerController::ServerViewNextPlayer()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerViewNextPlayer),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Move camera to next player on round ended or spectating*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Move camera to next player on round ended or spectating" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerViewNextPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerViewNextPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerViewNextPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerViewNextPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerViewNextPlayer_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerViewNextPlayer_Validate"));
		return;
	}
	P_THIS->ServerViewNextPlayer_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerViewNextPlayer

// Begin Class APlayerController Function ServerViewPrevPlayer
static FName NAME_APlayerController_ServerViewPrevPlayer = FName(TEXT("ServerViewPrevPlayer"));
void APlayerController::ServerViewPrevPlayer()
{
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerViewPrevPlayer),NULL);
}
struct Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Move camera to previous player on round ended or spectating */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Move camera to previous player on round ended or spectating" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerViewPrevPlayer", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerViewPrevPlayer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerViewPrevPlayer_Validate())
	{
		RPC_ValidateFailed(TEXT("ServerViewPrevPlayer_Validate"));
		return;
	}
	P_THIS->ServerViewPrevPlayer_Implementation();
	P_NATIVE_END;
}
// End Class APlayerController Function ServerViewPrevPlayer

// Begin Class APlayerController Function ServerViewSelf
struct PlayerController_eventServerViewSelf_Parms
{
	FViewTargetTransitionParams TransitionParams;
};
static FName NAME_APlayerController_ServerViewSelf = FName(TEXT("ServerViewSelf"));
void APlayerController::ServerViewSelf(FViewTargetTransitionParams TransitionParams)
{
	PlayerController_eventServerViewSelf_Parms Parms;
	Parms.TransitionParams=TransitionParams;
	ProcessEvent(FindFunctionChecked(NAME_APlayerController_ServerViewSelf),&Parms);
}
struct Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Move camera to current user */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Move camera to current user" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransitionParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::NewProp_TransitionParams = { "TransitionParams", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventServerViewSelf_Parms, TransitionParams), Z_Construct_UScriptStruct_FViewTargetTransitionParams, METADATA_PARAMS(0, nullptr) }; // 290970485
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::NewProp_TransitionParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ServerViewSelf", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::PropPointers), sizeof(PlayerController_eventServerViewSelf_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220C42, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::Function_MetaDataParams) };
static_assert(sizeof(PlayerController_eventServerViewSelf_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ServerViewSelf()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ServerViewSelf_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execServerViewSelf)
{
	P_GET_STRUCT(FViewTargetTransitionParams,Z_Param_TransitionParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	if (!P_THIS->ServerViewSelf_Validate(Z_Param_TransitionParams))
	{
		RPC_ValidateFailed(TEXT("ServerViewSelf_Validate"));
		return;
	}
	P_THIS->ServerViewSelf_Implementation(Z_Param_TransitionParams);
	P_NATIVE_END;
}
// End Class APlayerController Function ServerViewSelf

// Begin Class APlayerController Function SetAudioListenerAttenuationOverride
struct Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics
{
	struct PlayerController_eventSetAudioListenerAttenuationOverride_Parms
	{
		USceneComponent* AttachToComponent;
		FVector AttenuationLocationOVerride;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AttenuationLocationOVerride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerAttenuationOverride_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttenuationLocationOVerride = { "AttenuationLocationOVerride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerAttenuationOverride_Parms, AttenuationLocationOVerride), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::NewProp_AttenuationLocationOVerride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetAudioListenerAttenuationOverride", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PlayerController_eventSetAudioListenerAttenuationOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::PlayerController_eventSetAudioListenerAttenuationOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetAudioListenerAttenuationOverride)
{
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_STRUCT(FVector,Z_Param_AttenuationLocationOVerride);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioListenerAttenuationOverride(Z_Param_AttachToComponent,Z_Param_AttenuationLocationOVerride);
	P_NATIVE_END;
}
// End Class APlayerController Function SetAudioListenerAttenuationOverride

// Begin Class APlayerController Function SetAudioListenerOverride
struct Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics
{
	struct PlayerController_eventSetAudioListenerOverride_Parms
	{
		USceneComponent* AttachToComponent;
		FVector Location;
		FRotator Rotation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Audio" },
		{ "Comment", "/**\n\x09 * Used to override the default positioning of the audio listener\n\x09 * \n\x09 * @param AttachToComponent Optional component to attach the audio listener to\n\x09 * @param Location Depending on whether Component is attached this is either an offset from its location or an absolute position\n\x09 * @param Rotation Depending on whether Component is attached this is either an offset from its rotation or an absolute rotation\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used to override the default positioning of the audio listener\n\n@param AttachToComponent Optional component to attach the audio listener to\n@param Location Depending on whether Component is attached this is either an offset from its location or an absolute position\n@param Rotation Depending on whether Component is attached this is either an offset from its rotation or an absolute rotation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerOverride_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachToComponent_MetaData), NewProp_AttachToComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerOverride_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetAudioListenerOverride_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_AttachToComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::NewProp_Rotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetAudioListenerOverride", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PlayerController_eventSetAudioListenerOverride_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::PlayerController_eventSetAudioListenerOverride_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetAudioListenerOverride()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetAudioListenerOverride_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetAudioListenerOverride)
{
	P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_GET_STRUCT(FRotator,Z_Param_Rotation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioListenerOverride(Z_Param_AttachToComponent,Z_Param_Location,Z_Param_Rotation);
	P_NATIVE_END;
}
// End Class APlayerController Function SetAudioListenerOverride

// Begin Class APlayerController Function SetCinematicMode
struct Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics
{
	struct PlayerController_eventSetCinematicMode_Parms
	{
		bool bInCinematicMode;
		bool bHidePlayer;
		bool bAffectsHUD;
		bool bAffectsMovement;
		bool bAffectsTurning;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "bAffectsHUD", "true" },
		{ "bHidePlayer", "true" },
		{ "Category", "Game|Cinematic" },
		{ "Comment", "/**\n\x09 * Server/SP only function for changing whether the player is in cinematic mode.  Updates values of various state variables, then replicates the call to the client\n\x09 * to sync the current cinematic mode.\n\x09 * @param\x09""bInCinematicMode\x09specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n\x09 * @param\x09""bHidePlayer\x09\x09\x09specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n\x09 * @param\x09""bAffectsHUD\x09\x09\x09specify true if we should show/hide the HUD to match the value of bCinematicMode\n\x09 * @param\x09""bAffectsMovement\x09specify true to disable movement in cinematic mode, enable it when leaving\n\x09 * @param\x09""bAffectsTurning\x09\x09specify true to disable turning in cinematic mode or enable it when leaving\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Server/SP only function for changing whether the player is in cinematic mode.  Updates values of various state variables, then replicates the call to the client\nto sync the current cinematic mode.\n@param       bInCinematicMode        specify true if the player is entering cinematic mode; false if the player is leaving cinematic mode.\n@param       bHidePlayer                     specify true to hide the player's pawn (only relevant if bInCinematicMode is true)\n@param       bAffectsHUD                     specify true if we should show/hide the HUD to match the value of bCinematicMode\n@param       bAffectsMovement        specify true to disable movement in cinematic mode, enable it when leaving\n@param       bAffectsTurning         specify true to disable turning in cinematic mode or enable it when leaving" },
	};
#endif // WITH_METADATA
	static void NewProp_bInCinematicMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInCinematicMode;
	static void NewProp_bHidePlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidePlayer;
	static void NewProp_bAffectsHUD_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsHUD;
	static void NewProp_bAffectsMovement_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsMovement;
	static void NewProp_bAffectsTurning_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAffectsTurning;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit(void* Obj)
{
	((PlayerController_eventSetCinematicMode_Parms*)Obj)->bInCinematicMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode = { "bInCinematicMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit(void* Obj)
{
	((PlayerController_eventSetCinematicMode_Parms*)Obj)->bHidePlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer = { "bHidePlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit(void* Obj)
{
	((PlayerController_eventSetCinematicMode_Parms*)Obj)->bAffectsHUD = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD = { "bAffectsHUD", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit(void* Obj)
{
	((PlayerController_eventSetCinematicMode_Parms*)Obj)->bAffectsMovement = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement = { "bAffectsMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit(void* Obj)
{
	((PlayerController_eventSetCinematicMode_Parms*)Obj)->bAffectsTurning = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning = { "bAffectsTurning", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetCinematicMode_Parms), &Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bInCinematicMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bHidePlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsMovement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::NewProp_bAffectsTurning,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetCinematicMode", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PlayerController_eventSetCinematicMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::PlayerController_eventSetCinematicMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetCinematicMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetCinematicMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetCinematicMode)
{
	P_GET_UBOOL(Z_Param_bInCinematicMode);
	P_GET_UBOOL(Z_Param_bHidePlayer);
	P_GET_UBOOL(Z_Param_bAffectsHUD);
	P_GET_UBOOL(Z_Param_bAffectsMovement);
	P_GET_UBOOL(Z_Param_bAffectsTurning);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCinematicMode(Z_Param_bInCinematicMode,Z_Param_bHidePlayer,Z_Param_bAffectsHUD,Z_Param_bAffectsMovement,Z_Param_bAffectsTurning);
	P_NATIVE_END;
}
// End Class APlayerController Function SetCinematicMode

// Begin Class APlayerController Function SetControllerLightColor
struct Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics
{
	struct PlayerController_eventSetControllerLightColor_Parms
	{
		FColor Color;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Sets the light color of the player's controller\n\x09 * @param\x09""Color\x09\x09\x09\x09\x09The color for the light to be\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sets the light color of the player's controller\n@param       Color                                   The color for the light to be" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetControllerLightColor_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::NewProp_Color,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetControllerLightColor", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PlayerController_eventSetControllerLightColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::PlayerController_eventSetControllerLightColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetControllerLightColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetControllerLightColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetControllerLightColor)
{
	P_GET_STRUCT(FColor,Z_Param_Color);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetControllerLightColor(Z_Param_Color);
	P_NATIVE_END;
}
// End Class APlayerController Function SetControllerLightColor

// Begin Class APlayerController Function SetDeprecatedInputPitchScale
struct Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics
{
	struct PlayerController_eventSetDeprecatedInputPitchScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetDeprecatedInputPitchScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetDeprecatedInputPitchScale", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::PlayerController_eventSetDeprecatedInputPitchScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::PlayerController_eventSetDeprecatedInputPitchScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetDeprecatedInputPitchScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeprecatedInputPitchScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class APlayerController Function SetDeprecatedInputPitchScale

// Begin Class APlayerController Function SetDeprecatedInputRollScale
struct Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics
{
	struct PlayerController_eventSetDeprecatedInputRollScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetDeprecatedInputRollScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetDeprecatedInputRollScale", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::PlayerController_eventSetDeprecatedInputRollScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::PlayerController_eventSetDeprecatedInputRollScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetDeprecatedInputRollScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeprecatedInputRollScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class APlayerController Function SetDeprecatedInputRollScale

// Begin Class APlayerController Function SetDeprecatedInputYawScale
struct Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics
{
	struct PlayerController_eventSetDeprecatedInputYawScale_Parms
	{
		float NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerController" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetDeprecatedInputYawScale_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetDeprecatedInputYawScale", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::PlayerController_eventSetDeprecatedInputYawScale_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::PlayerController_eventSetDeprecatedInputYawScale_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetDeprecatedInputYawScale)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDeprecatedInputYawScale(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class APlayerController Function SetDeprecatedInputYawScale

// Begin Class APlayerController Function SetDisableHaptics
struct Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics
{
	struct PlayerController_eventSetDisableHaptics_Parms
	{
		bool bNewDisabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Allows the player controller to disable all haptic requests from being fired, e.g. in the case of a level loading\n\x09 *\n\x09 * @param\x09""bNewDisabled\x09If TRUE, the haptics will stop and prevented from being enabled again until set to FALSE\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Allows the player controller to disable all haptic requests from being fired, e.g. in the case of a level loading\n\n@param       bNewDisabled    If TRUE, the haptics will stop and prevented from being enabled again until set to FALSE" },
	};
#endif // WITH_METADATA
	static void NewProp_bNewDisabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewDisabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled_SetBit(void* Obj)
{
	((PlayerController_eventSetDisableHaptics_Parms*)Obj)->bNewDisabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled = { "bNewDisabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetDisableHaptics_Parms), &Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::NewProp_bNewDisabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetDisableHaptics", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PlayerController_eventSetDisableHaptics_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::PlayerController_eventSetDisableHaptics_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetDisableHaptics()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetDisableHaptics_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetDisableHaptics)
{
	P_GET_UBOOL(Z_Param_bNewDisabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDisableHaptics(Z_Param_bNewDisabled);
	P_NATIVE_END;
}
// End Class APlayerController Function SetDisableHaptics

// Begin Class APlayerController Function SetHapticsByValue
struct Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics
{
	struct PlayerController_eventSetHapticsByValue_Parms
	{
		float Frequency;
		float Amplitude;
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Sets the value of the haptics for the specified hand directly, using frequency and amplitude.  NOTE:  If a curve is already\n\x09 * playing for this hand, it will be cancelled in favour of the specified values.\n\x09 *\n\x09 * @param\x09""Frequency\x09\x09\x09\x09The normalized frequency [0.0, 1.0] to play through the haptics system\n\x09 * @param\x09""Amplitude\x09\x09\x09\x09The normalized amplitude [0.0, 1.0] to set the haptic feedback to\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to play the effect on\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sets the value of the haptics for the specified hand directly, using frequency and amplitude.  NOTE:  If a curve is already\nplaying for this hand, it will be cancelled in favour of the specified values.\n\n@param       Frequency                               The normalized frequency [0.0, 1.0] to play through the haptics system\n@param       Amplitude                               The normalized amplitude [0.0, 1.0] to set the haptic feedback to\n@param       Hand                                    Which hand to play the effect on" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amplitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Frequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amplitude;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency = { "Frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetHapticsByValue_Parms, Frequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Frequency_MetaData), NewProp_Frequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude = { "Amplitude", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetHapticsByValue_Parms, Amplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amplitude_MetaData), NewProp_Amplitude_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetHapticsByValue_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Frequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Amplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetHapticsByValue", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PlayerController_eventSetHapticsByValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::PlayerController_eventSetHapticsByValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetHapticsByValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetHapticsByValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetHapticsByValue)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Frequency);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Amplitude);
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetHapticsByValue(Z_Param_Frequency,Z_Param_Amplitude,EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// End Class APlayerController Function SetHapticsByValue

// Begin Class APlayerController Function SetMotionControlsEnabled
struct Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics
{
	struct PlayerController_eventSetMotionControlsEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((PlayerController_eventSetMotionControlsEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetMotionControlsEnabled_Parms), &Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetMotionControlsEnabled", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::PlayerController_eventSetMotionControlsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::PlayerController_eventSetMotionControlsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetMotionControlsEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMotionControlsEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class APlayerController Function SetMotionControlsEnabled

// Begin Class APlayerController Function SetMouseCursorWidget
struct Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics
{
	struct PlayerController_eventSetMouseCursorWidget_Parms
	{
		TEnumAsByte<EMouseCursor::Type> Cursor;
		UUserWidget* CursorWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Sets the Widget for the Mouse Cursor to display \n\x09 * @param Cursor - the cursor to set the widget for\n\x09 * @param CursorWidget - the widget to set the cursor to\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Sets the Widget for the Mouse Cursor to display\n@param Cursor - the cursor to set the widget for\n@param CursorWidget - the widget to set the cursor to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CursorWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Cursor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CursorWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_Cursor = { "Cursor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetMouseCursorWidget_Parms, Cursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(0, nullptr) }; // 3426243287
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget = { "CursorWidget", nullptr, (EPropertyFlags)0x0010000000088080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetMouseCursorWidget_Parms, CursorWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CursorWidget_MetaData), NewProp_CursorWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_Cursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::NewProp_CursorWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetMouseCursorWidget", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PlayerController_eventSetMouseCursorWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::PlayerController_eventSetMouseCursorWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetMouseCursorWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetMouseCursorWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetMouseCursorWidget)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Cursor);
	P_GET_OBJECT(UUserWidget,Z_Param_CursorWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseCursorWidget(EMouseCursor::Type(Z_Param_Cursor),Z_Param_CursorWidget);
	P_NATIVE_END;
}
// End Class APlayerController Function SetMouseCursorWidget

// Begin Class APlayerController Function SetMouseLocation
struct Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics
{
	struct PlayerController_eventSetMouseLocation_Parms
	{
		int32 X;
		int32 Y;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Positions the mouse cursor in screen space, in pixels. */" },
		{ "DisplayName", "Set Mouse Position" },
		{ "Keywords", "mouse" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Positions the mouse cursor in screen space, in pixels." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_X;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetMouseLocation_Parms, X), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_X_MetaData), NewProp_X_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetMouseLocation_Parms, Y), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Y_MetaData), NewProp_Y_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_X,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::NewProp_Y,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetMouseLocation", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PlayerController_eventSetMouseLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::PlayerController_eventSetMouseLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetMouseLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetMouseLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetMouseLocation)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_X);
	P_GET_PROPERTY(FIntProperty,Z_Param_Y);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetMouseLocation(Z_Param_X,Z_Param_Y);
	P_NATIVE_END;
}
// End Class APlayerController Function SetMouseLocation

// Begin Class APlayerController Function SetName
struct Z_Construct_UFunction_APlayerController_SetName_Statics
{
	struct PlayerController_eventSetName_Parms
	{
		FString S;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Tries to set the player's name to the given name. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Tries to set the player's name to the given name." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_S_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_S;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S = { "S", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetName_Parms, S), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_S_MetaData), NewProp_S_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetName_Statics::NewProp_S,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetName", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetName_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetName_Statics::PlayerController_eventSetName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetName_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetName_Statics::PlayerController_eventSetName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_S);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetName(Z_Param_S);
	P_NATIVE_END;
}
// End Class APlayerController Function SetName

// Begin Class APlayerController Function SetViewTargetWithBlend
struct Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics
{
	struct PlayerController_eventSetViewTargetWithBlend_Parms
	{
		AActor* NewViewTarget;
		float BlendTime;
		TEnumAsByte<EViewTargetBlendFunction> BlendFunc;
		float BlendExp;
		bool bLockOutgoing;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/**\n\x09 * Set the view target blending with variable control\n\x09 * @param NewViewTarget - new actor to set as view target\n\x09 * @param BlendTime - time taken to blend\n\x09 * @param BlendFunc - Cubic, Linear etc functions for blending\n\x09 * @param BlendExp -  Exponent, used by certain blend functions to control the shape of the curve. \n\x09 * @param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend.\n\x09 */" },
		{ "CPP_Default_BlendExp", "0.000000" },
		{ "CPP_Default_BlendFunc", "VTBlend_Linear" },
		{ "CPP_Default_BlendTime", "0.000000" },
		{ "CPP_Default_bLockOutgoing", "false" },
		{ "Keywords", "Camera" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the view target blending with variable control\n@param NewViewTarget - new actor to set as view target\n@param BlendTime - time taken to blend\n@param BlendFunc - Cubic, Linear etc functions for blending\n@param BlendExp -  Exponent, used by certain blend functions to control the shape of the curve.\n@param bLockOutgoing - If true, lock outgoing viewtarget to last frame's camera position for the remainder of the blend." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewViewTarget;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendTime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlendFunc;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExp;
	static void NewProp_bLockOutgoing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockOutgoing;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_NewViewTarget = { "NewViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, NewViewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendTime = { "BlendTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, BlendTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendFunc = { "BlendFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, BlendFunc), Z_Construct_UEnum_Engine_EViewTargetBlendFunction, METADATA_PARAMS(0, nullptr) }; // 2076869023
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendExp = { "BlendExp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSetViewTargetWithBlend_Parms, BlendExp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing_SetBit(void* Obj)
{
	((PlayerController_eventSetViewTargetWithBlend_Parms*)Obj)->bLockOutgoing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing = { "bLockOutgoing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetViewTargetWithBlend_Parms), &Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_NewViewTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_BlendExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::NewProp_bLockOutgoing,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetViewTargetWithBlend", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PlayerController_eventSetViewTargetWithBlend_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::PlayerController_eventSetViewTargetWithBlend_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetViewTargetWithBlend)
{
	P_GET_OBJECT(AActor,Z_Param_NewViewTarget);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendTime);
	P_GET_PROPERTY(FByteProperty,Z_Param_BlendFunc);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendExp);
	P_GET_UBOOL(Z_Param_bLockOutgoing);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetViewTargetWithBlend(Z_Param_NewViewTarget,Z_Param_BlendTime,EViewTargetBlendFunction(Z_Param_BlendFunc),Z_Param_BlendExp,Z_Param_bLockOutgoing);
	P_NATIVE_END;
}
// End Class APlayerController Function SetViewTargetWithBlend

// Begin Class APlayerController Function SetVirtualJoystickVisibility
struct Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics
{
	struct PlayerController_eventSetVirtualJoystickVisibility_Parms
	{
		bool bVisible;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Set the virtual joystick visibility. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set the virtual joystick visibility." },
	};
#endif // WITH_METADATA
	static void NewProp_bVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
{
	((PlayerController_eventSetVirtualJoystickVisibility_Parms*)Obj)->bVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventSetVirtualJoystickVisibility_Parms), &Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::NewProp_bVisible,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SetVirtualJoystickVisibility", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PlayerController_eventSetVirtualJoystickVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::PlayerController_eventSetVirtualJoystickVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSetVirtualJoystickVisibility)
{
	P_GET_UBOOL(Z_Param_bVisible);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVirtualJoystickVisibility(Z_Param_bVisible);
	P_NATIVE_END;
}
// End Class APlayerController Function SetVirtualJoystickVisibility

// Begin Class APlayerController Function StartFire
struct Z_Construct_UFunction_APlayerController_StartFire_Statics
{
	struct PlayerController_eventStartFire_Parms
	{
		uint8 FireModeNum;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Fire the player's currently selected weapon with the optional firemode. */" },
		{ "CPP_Default_FireModeNum", "0" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Fire the player's currently selected weapon with the optional firemode." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_FireModeNum;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_StartFire_Statics::NewProp_FireModeNum = { "FireModeNum", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventStartFire_Parms, FireModeNum), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StartFire_Statics::NewProp_FireModeNum,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_StartFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "StartFire", nullptr, nullptr, Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StartFire_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_StartFire_Statics::PlayerController_eventStartFire_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StartFire_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_StartFire_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_StartFire_Statics::PlayerController_eventStartFire_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_StartFire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_StartFire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execStartFire)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_FireModeNum);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartFire(Z_Param_FireModeNum);
	P_NATIVE_END;
}
// End Class APlayerController Function StartFire

// Begin Class APlayerController Function StopHapticEffect
struct Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics
{
	struct PlayerController_eventStopHapticEffect_Parms
	{
		EControllerHand Hand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Feedback" },
		{ "Comment", "/**\n\x09 * Stops a playing haptic feedback curve\n\x09 * @param\x09HapticEffect\x09\x09\x09The haptic effect to stop\n\x09 * @param\x09Hand\x09\x09\x09\x09\x09Which hand to stop the effect for\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Stops a playing haptic feedback curve\n@param       HapticEffect                    The haptic effect to stop\n@param       Hand                                    Which hand to stop the effect for" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Hand_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventStopHapticEffect_Parms, Hand), Z_Construct_UEnum_InputCore_EControllerHand, METADATA_PARAMS(0, nullptr) }; // 775183092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::NewProp_Hand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "StopHapticEffect", nullptr, nullptr, Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PlayerController_eventStopHapticEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::PlayerController_eventStopHapticEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_StopHapticEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_StopHapticEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execStopHapticEffect)
{
	P_GET_ENUM(EControllerHand,Z_Param_Hand);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopHapticEffect(EControllerHand(Z_Param_Hand));
	P_NATIVE_END;
}
// End Class APlayerController Function StopHapticEffect

// Begin Class APlayerController Function StreamingSourceShouldActivate
struct Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics
{
	struct PlayerController_eventStreamingSourceShouldActivate_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/**\n\x09* Whether the PlayerController streaming source should activate cells after loading.\n\x09* Default implementation returns bStreamingSourceShouldActivate but can be overriden in child classes.\n\x09* @return true if it should.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the PlayerController streaming source should activate cells after loading.\nDefault implementation returns bStreamingSourceShouldActivate but can be overriden in child classes.\n@return true if it should." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventStreamingSourceShouldActivate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventStreamingSourceShouldActivate_Parms), &Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "StreamingSourceShouldActivate", nullptr, nullptr, Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::PlayerController_eventStreamingSourceShouldActivate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::PlayerController_eventStreamingSourceShouldActivate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execStreamingSourceShouldActivate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StreamingSourceShouldActivate();
	P_NATIVE_END;
}
// End Class APlayerController Function StreamingSourceShouldActivate

// Begin Class APlayerController Function StreamingSourceShouldBlockOnSlowStreaming
struct Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics
{
	struct PlayerController_eventStreamingSourceShouldBlockOnSlowStreaming_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/**\n\x09* Whether the PlayerController streaming source should block on slow streaming.\n\x09* Default implementation returns bStreamingSourceShouldBlockOnSlowStreaming but can be overriden in child classes.\n\x09* @return true if it should.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the PlayerController streaming source should block on slow streaming.\nDefault implementation returns bStreamingSourceShouldBlockOnSlowStreaming but can be overriden in child classes.\n@return true if it should." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventStreamingSourceShouldBlockOnSlowStreaming_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventStreamingSourceShouldBlockOnSlowStreaming_Parms), &Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "StreamingSourceShouldBlockOnSlowStreaming", nullptr, nullptr, Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::PlayerController_eventStreamingSourceShouldBlockOnSlowStreaming_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::PlayerController_eventStreamingSourceShouldBlockOnSlowStreaming_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execStreamingSourceShouldBlockOnSlowStreaming)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->StreamingSourceShouldBlockOnSlowStreaming();
	P_NATIVE_END;
}
// End Class APlayerController Function StreamingSourceShouldBlockOnSlowStreaming

// Begin Class APlayerController Function SwitchLevel
struct Z_Construct_UFunction_APlayerController_SwitchLevel_Statics
{
	struct PlayerController_eventSwitchLevel_Parms
	{
		FString URL;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** SwitchLevel to the given MapURL. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "SwitchLevel to the given MapURL." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventSwitchLevel_Parms, URL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_URL_MetaData), NewProp_URL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::NewProp_URL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "SwitchLevel", nullptr, nullptr, Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PlayerController_eventSwitchLevel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::PlayerController_eventSwitchLevel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_SwitchLevel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_SwitchLevel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execSwitchLevel)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SwitchLevel(Z_Param_URL);
	P_NATIVE_END;
}
// End Class APlayerController Function SwitchLevel

// Begin Class APlayerController Function TestServerLevelVisibilityChange
struct Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics
{
	struct PlayerController_eventTestServerLevelVisibilityChange_Parms
	{
		FName PackageName;
		FName FileName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "//~ This method is purely for debugging purposes.\n//~ It will trigger a ServerUpdateLevelVisibilityCall with the provided package name.\n" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PackageName_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FileName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventTestServerLevelVisibilityChange_Parms, PackageName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PackageName_MetaData), NewProp_PackageName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventTestServerLevelVisibilityChange_Parms, FileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileName_MetaData), NewProp_FileName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_PackageName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::NewProp_FileName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "TestServerLevelVisibilityChange", nullptr, nullptr, Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PlayerController_eventTestServerLevelVisibilityChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040603, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::PlayerController_eventTestServerLevelVisibilityChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execTestServerLevelVisibilityChange)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
	P_GET_PROPERTY(FNameProperty,Z_Param_FileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TestServerLevelVisibilityChange(Z_Param_PackageName,Z_Param_FileName);
	P_NATIVE_END;
}
// End Class APlayerController Function TestServerLevelVisibilityChange

// Begin Class APlayerController Function ToggleSpeaking
struct Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics
{
	struct PlayerController_eventToggleSpeaking_Parms
	{
		bool bInSpeaking;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Toggle voice chat on and off\n\x09 * @param bSpeaking enable or disable voice chat\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Toggle voice chat on and off\n@param bSpeaking enable or disable voice chat" },
	};
#endif // WITH_METADATA
	static void NewProp_bInSpeaking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInSpeaking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking_SetBit(void* Obj)
{
	((PlayerController_eventToggleSpeaking_Parms*)Obj)->bInSpeaking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking = { "bInSpeaking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventToggleSpeaking_Parms), &Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::NewProp_bInSpeaking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "ToggleSpeaking", nullptr, nullptr, Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PlayerController_eventToggleSpeaking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020602, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::PlayerController_eventToggleSpeaking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_ToggleSpeaking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_ToggleSpeaking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execToggleSpeaking)
{
	P_GET_UBOOL(Z_Param_bInSpeaking);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleSpeaking(Z_Param_bInSpeaking);
	P_NATIVE_END;
}
// End Class APlayerController Function ToggleSpeaking

// Begin Class APlayerController Function WasInputKeyJustPressed
struct Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics
{
	struct PlayerController_eventWasInputKeyJustPressed_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if the given key/button was up last frame and down this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if the given key/button was up last frame and down this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventWasInputKeyJustPressed_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventWasInputKeyJustPressed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventWasInputKeyJustPressed_Parms), &Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "WasInputKeyJustPressed", nullptr, nullptr, Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PlayerController_eventWasInputKeyJustPressed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::PlayerController_eventWasInputKeyJustPressed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execWasInputKeyJustPressed)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasInputKeyJustPressed(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function WasInputKeyJustPressed

// Begin Class APlayerController Function WasInputKeyJustReleased
struct Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics
{
	struct PlayerController_eventWasInputKeyJustReleased_Parms
	{
		FKey Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Player" },
		{ "Comment", "/** Returns true if the given key/button was down last frame and up this frame. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Returns true if the given key/button was down last frame and up this frame." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerController_eventWasInputKeyJustReleased_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
void Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerController_eventWasInputKeyJustReleased_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerController_eventWasInputKeyJustReleased_Parms), &Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerController, nullptr, "WasInputKeyJustReleased", nullptr, nullptr, Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PlayerController_eventWasInputKeyJustReleased_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::PlayerController_eventWasInputKeyJustReleased_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerController::execWasInputKeyJustReleased)
{
	P_GET_STRUCT(FKey,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->WasInputKeyJustReleased(Z_Param_Key);
	P_NATIVE_END;
}
// End Class APlayerController Function WasInputKeyJustReleased

// Begin Class APlayerController
void APlayerController::StaticRegisterNativesAPlayerController()
{
	UClass* Class = APlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateTouchInterface", &APlayerController::execActivateTouchInterface },
		{ "AddPitchInput", &APlayerController::execAddPitchInput },
		{ "AddRollInput", &APlayerController::execAddRollInput },
		{ "AddYawInput", &APlayerController::execAddYawInput },
		{ "Camera", &APlayerController::execCamera },
		{ "CanRestartPlayer", &APlayerController::execCanRestartPlayer },
		{ "ClearAudioListenerAttenuationOverride", &APlayerController::execClearAudioListenerAttenuationOverride },
		{ "ClearAudioListenerOverride", &APlayerController::execClearAudioListenerOverride },
		{ "ClientAckTimeDilation", &APlayerController::execClientAckTimeDilation },
		{ "ClientAckUpdateLevelVisibility", &APlayerController::execClientAckUpdateLevelVisibility },
		{ "ClientAddTextureStreamingLoc", &APlayerController::execClientAddTextureStreamingLoc },
		{ "ClientCancelPendingMapChange", &APlayerController::execClientCancelPendingMapChange },
		{ "ClientCapBandwidth", &APlayerController::execClientCapBandwidth },
		{ "ClientClearCameraLensEffects", &APlayerController::execClientClearCameraLensEffects },
		{ "ClientCommitMapChange", &APlayerController::execClientCommitMapChange },
		{ "ClientCorrectionAsyncPhysicsTimestamp", &APlayerController::execClientCorrectionAsyncPhysicsTimestamp },
		{ "ClientEnableNetworkVoice", &APlayerController::execClientEnableNetworkVoice },
		{ "ClientEndOnlineSession", &APlayerController::execClientEndOnlineSession },
		{ "ClientFlushLevelStreaming", &APlayerController::execClientFlushLevelStreaming },
		{ "ClientForceGarbageCollection", &APlayerController::execClientForceGarbageCollection },
		{ "ClientGameEnded", &APlayerController::execClientGameEnded },
		{ "ClientGotoState", &APlayerController::execClientGotoState },
		{ "ClientIgnoreLookInput", &APlayerController::execClientIgnoreLookInput },
		{ "ClientIgnoreMoveInput", &APlayerController::execClientIgnoreMoveInput },
		{ "ClientMessage", &APlayerController::execClientMessage },
		{ "ClientMutePlayer", &APlayerController::execClientMutePlayer },
		{ "ClientPlayForceFeedback_Internal", &APlayerController::execClientPlayForceFeedback_Internal },
		{ "ClientPlaySound", &APlayerController::execClientPlaySound },
		{ "ClientPlaySoundAtLocation", &APlayerController::execClientPlaySoundAtLocation },
		{ "ClientPrepareMapChange", &APlayerController::execClientPrepareMapChange },
		{ "ClientPrestreamTextures", &APlayerController::execClientPrestreamTextures },
		{ "ClientReceiveLocalizedMessage", &APlayerController::execClientReceiveLocalizedMessage },
		{ "ClientRecvServerAckFrame", &APlayerController::execClientRecvServerAckFrame },
		{ "ClientRecvServerAckFrameDebug", &APlayerController::execClientRecvServerAckFrameDebug },
		{ "ClientRepObjRef", &APlayerController::execClientRepObjRef },
		{ "ClientReset", &APlayerController::execClientReset },
		{ "ClientRestart", &APlayerController::execClientRestart },
		{ "ClientRetryClientRestart", &APlayerController::execClientRetryClientRestart },
		{ "ClientReturnToMainMenuWithTextReason", &APlayerController::execClientReturnToMainMenuWithTextReason },
		{ "ClientSetBlockOnAsyncLoading", &APlayerController::execClientSetBlockOnAsyncLoading },
		{ "ClientSetCameraFade", &APlayerController::execClientSetCameraFade },
		{ "ClientSetCameraMode", &APlayerController::execClientSetCameraMode },
		{ "ClientSetCinematicMode", &APlayerController::execClientSetCinematicMode },
		{ "ClientSetForceMipLevelsToBeResident", &APlayerController::execClientSetForceMipLevelsToBeResident },
		{ "ClientSetHUD", &APlayerController::execClientSetHUD },
		{ "ClientSetSpectatorWaiting", &APlayerController::execClientSetSpectatorWaiting },
		{ "ClientSetupNetworkPhysicsTimestamp", &APlayerController::execClientSetupNetworkPhysicsTimestamp },
		{ "ClientSetViewTarget", &APlayerController::execClientSetViewTarget },
		{ "ClientSpawnCameraLensEffect", &APlayerController::execClientSpawnCameraLensEffect },
		{ "ClientSpawnGenericCameraLensEffect", &APlayerController::execClientSpawnGenericCameraLensEffect },
		{ "ClientStartCameraShake", &APlayerController::execClientStartCameraShake },
		{ "ClientStartCameraShakeFromSource", &APlayerController::execClientStartCameraShakeFromSource },
		{ "ClientStartOnlineSession", &APlayerController::execClientStartOnlineSession },
		{ "ClientStopCameraShake", &APlayerController::execClientStopCameraShake },
		{ "ClientStopCameraShakesFromSource", &APlayerController::execClientStopCameraShakesFromSource },
		{ "ClientStopForceFeedback", &APlayerController::execClientStopForceFeedback },
		{ "ClientTeamMessage", &APlayerController::execClientTeamMessage },
		{ "ClientTravel", &APlayerController::execClientTravel },
		{ "ClientTravelInternal", &APlayerController::execClientTravelInternal },
		{ "ClientUnmutePlayer", &APlayerController::execClientUnmutePlayer },
		{ "ClientUnmutePlayers", &APlayerController::execClientUnmutePlayers },
		{ "ClientUpdateLevelStreamingStatus", &APlayerController::execClientUpdateLevelStreamingStatus },
		{ "ClientUpdateMultipleLevelsStreamingStatus", &APlayerController::execClientUpdateMultipleLevelsStreamingStatus },
		{ "ClientVoiceHandshakeComplete", &APlayerController::execClientVoiceHandshakeComplete },
		{ "ClientWasKicked", &APlayerController::execClientWasKicked },
		{ "ConsoleKey", &APlayerController::execConsoleKey },
		{ "DeprojectMousePositionToWorld", &APlayerController::execDeprojectMousePositionToWorld },
		{ "DeprojectScreenPositionToWorld", &APlayerController::execDeprojectScreenPositionToWorld },
		{ "EnableCheats", &APlayerController::execEnableCheats },
		{ "FOV", &APlayerController::execFOV },
		{ "GetAsyncPhysicsDataToConsume", &APlayerController::execGetAsyncPhysicsDataToConsume },
		{ "GetAsyncPhysicsDataToWrite", &APlayerController::execGetAsyncPhysicsDataToWrite },
		{ "GetDeprecatedInputPitchScale", &APlayerController::execGetDeprecatedInputPitchScale },
		{ "GetDeprecatedInputRollScale", &APlayerController::execGetDeprecatedInputRollScale },
		{ "GetDeprecatedInputYawScale", &APlayerController::execGetDeprecatedInputYawScale },
		{ "GetFocalLocation", &APlayerController::execGetFocalLocation },
		{ "GetHitResultUnderCursor", &APlayerController::execGetHitResultUnderCursor },
		{ "GetHitResultUnderCursorByChannel", &APlayerController::execGetHitResultUnderCursorByChannel },
		{ "GetHitResultUnderCursorForObjects", &APlayerController::execGetHitResultUnderCursorForObjects },
		{ "GetHitResultUnderFinger", &APlayerController::execGetHitResultUnderFinger },
		{ "GetHitResultUnderFingerByChannel", &APlayerController::execGetHitResultUnderFingerByChannel },
		{ "GetHitResultUnderFingerForObjects", &APlayerController::execGetHitResultUnderFingerForObjects },
		{ "GetHUD", &APlayerController::execGetHUD },
		{ "GetInputAnalogKeyState", &APlayerController::execGetInputAnalogKeyState },
		{ "GetInputAnalogStickState", &APlayerController::execGetInputAnalogStickState },
		{ "GetInputKeyTimeDown", &APlayerController::execGetInputKeyTimeDown },
		{ "GetInputMotionState", &APlayerController::execGetInputMotionState },
		{ "GetInputMouseDelta", &APlayerController::execGetInputMouseDelta },
		{ "GetInputTouchState", &APlayerController::execGetInputTouchState },
		{ "GetInputVectorKeyState", &APlayerController::execGetInputVectorKeyState },
		{ "GetMousePosition", &APlayerController::execGetMousePosition },
		{ "GetOverridePlayerInputClass", &APlayerController::execGetOverridePlayerInputClass },
		{ "GetPlatformUserId", &APlayerController::execGetPlatformUserId },
		{ "GetSpectatorPawn", &APlayerController::execGetSpectatorPawn },
		{ "GetStreamingSourceLocationAndRotation", &APlayerController::execGetStreamingSourceLocationAndRotation },
		{ "GetStreamingSourcePriority", &APlayerController::execGetStreamingSourcePriority },
		{ "GetStreamingSourceShapes", &APlayerController::execGetStreamingSourceShapes },
		{ "GetViewportSize", &APlayerController::execGetViewportSize },
		{ "IsInputKeyDown", &APlayerController::execIsInputKeyDown },
		{ "IsStreamingSourceEnabled", &APlayerController::execIsStreamingSourceEnabled },
		{ "K2_ClientPlayForceFeedback", &APlayerController::execK2_ClientPlayForceFeedback },
		{ "LocalTravel", &APlayerController::execLocalTravel },
		{ "OnRep_AsyncPhysicsDataComponent", &APlayerController::execOnRep_AsyncPhysicsDataComponent },
		{ "OnServerStartedVisualLogger", &APlayerController::execOnServerStartedVisualLogger },
		{ "Pause", &APlayerController::execPause },
		{ "PlayDynamicForceFeedback", &APlayerController::execPlayDynamicForceFeedback },
		{ "PlayHapticEffect", &APlayerController::execPlayHapticEffect },
		{ "ProjectWorldLocationToScreen", &APlayerController::execProjectWorldLocationToScreen },
		{ "ResetControllerLightColor", &APlayerController::execResetControllerLightColor },
		{ "RestartLevel", &APlayerController::execRestartLevel },
		{ "SendToConsole", &APlayerController::execSendToConsole },
		{ "ServerAcknowledgePossession", &APlayerController::execServerAcknowledgePossession },
		{ "ServerBlockPlayer", &APlayerController::execServerBlockPlayer },
		{ "ServerCamera", &APlayerController::execServerCamera },
		{ "ServerChangeName", &APlayerController::execServerChangeName },
		{ "ServerCheckClientPossession", &APlayerController::execServerCheckClientPossession },
		{ "ServerCheckClientPossessionReliable", &APlayerController::execServerCheckClientPossessionReliable },
		{ "ServerExec", &APlayerController::execServerExec },
		{ "ServerExecRPC", &APlayerController::execServerExecRPC },
		{ "ServerMutePlayer", &APlayerController::execServerMutePlayer },
		{ "ServerNotifyLoadedWorld", &APlayerController::execServerNotifyLoadedWorld },
		{ "ServerPause", &APlayerController::execServerPause },
		{ "ServerRecvClientInputFrame", &APlayerController::execServerRecvClientInputFrame },
		{ "ServerRestartPlayer", &APlayerController::execServerRestartPlayer },
		{ "ServerSendLatestAsyncPhysicsTimestamp", &APlayerController::execServerSendLatestAsyncPhysicsTimestamp },
		{ "ServerSetSpectatorLocation", &APlayerController::execServerSetSpectatorLocation },
		{ "ServerSetSpectatorWaiting", &APlayerController::execServerSetSpectatorWaiting },
		{ "ServerShortTimeout", &APlayerController::execServerShortTimeout },
		{ "ServerToggleAILogging", &APlayerController::execServerToggleAILogging },
		{ "ServerUnblockPlayer", &APlayerController::execServerUnblockPlayer },
		{ "ServerUnmutePlayer", &APlayerController::execServerUnmutePlayer },
		{ "ServerUpdateCamera", &APlayerController::execServerUpdateCamera },
		{ "ServerUpdateLevelVisibility", &APlayerController::execServerUpdateLevelVisibility },
		{ "ServerUpdateMultipleLevelsVisibility", &APlayerController::execServerUpdateMultipleLevelsVisibility },
		{ "ServerVerifyViewTarget", &APlayerController::execServerVerifyViewTarget },
		{ "ServerViewNextPlayer", &APlayerController::execServerViewNextPlayer },
		{ "ServerViewPrevPlayer", &APlayerController::execServerViewPrevPlayer },
		{ "ServerViewSelf", &APlayerController::execServerViewSelf },
		{ "SetAudioListenerAttenuationOverride", &APlayerController::execSetAudioListenerAttenuationOverride },
		{ "SetAudioListenerOverride", &APlayerController::execSetAudioListenerOverride },
		{ "SetCinematicMode", &APlayerController::execSetCinematicMode },
		{ "SetControllerLightColor", &APlayerController::execSetControllerLightColor },
		{ "SetDeprecatedInputPitchScale", &APlayerController::execSetDeprecatedInputPitchScale },
		{ "SetDeprecatedInputRollScale", &APlayerController::execSetDeprecatedInputRollScale },
		{ "SetDeprecatedInputYawScale", &APlayerController::execSetDeprecatedInputYawScale },
		{ "SetDisableHaptics", &APlayerController::execSetDisableHaptics },
		{ "SetHapticsByValue", &APlayerController::execSetHapticsByValue },
		{ "SetMotionControlsEnabled", &APlayerController::execSetMotionControlsEnabled },
		{ "SetMouseCursorWidget", &APlayerController::execSetMouseCursorWidget },
		{ "SetMouseLocation", &APlayerController::execSetMouseLocation },
		{ "SetName", &APlayerController::execSetName },
		{ "SetViewTargetWithBlend", &APlayerController::execSetViewTargetWithBlend },
		{ "SetVirtualJoystickVisibility", &APlayerController::execSetVirtualJoystickVisibility },
		{ "StartFire", &APlayerController::execStartFire },
		{ "StopHapticEffect", &APlayerController::execStopHapticEffect },
		{ "StreamingSourceShouldActivate", &APlayerController::execStreamingSourceShouldActivate },
		{ "StreamingSourceShouldBlockOnSlowStreaming", &APlayerController::execStreamingSourceShouldBlockOnSlowStreaming },
		{ "SwitchLevel", &APlayerController::execSwitchLevel },
		{ "TestServerLevelVisibilityChange", &APlayerController::execTestServerLevelVisibilityChange },
		{ "ToggleSpeaking", &APlayerController::execToggleSpeaking },
		{ "WasInputKeyJustPressed", &APlayerController::execWasInputKeyJustPressed },
		{ "WasInputKeyJustReleased", &APlayerController::execWasInputKeyJustReleased },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerController);
UClass* Z_Construct_UClass_APlayerController_NoRegister()
{
	return APlayerController::StaticClass();
}
struct Z_Construct_UClass_APlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * PlayerControllers are used by human players to control Pawns.\n *\n * ControlRotation (accessed via GetControlRotation()), determines the aiming\n * orientation of the controlled Pawn.\n *\n * In networked games, PlayerControllers exist on the server for every player-controlled pawn,\n * and also on the controlling client's machine. They do NOT exist on a client's\n * machine for pawns controlled by remote players elsewhere on the network.\n *\n * @see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/PlayerController/\n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "GameFramework/PlayerController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "A Player Controller is an actor responsible for controlling a Pawn used by the player." },
		{ "ToolTip", "PlayerControllers are used by human players to control Pawns.\n\nControlRotation (accessed via GetControlRotation()), determines the aiming\norientation of the controlled Pawn.\n\nIn networked games, PlayerControllers exist on the server for every player-controlled pawn,\nand also on the controlling client's machine. They do NOT exist on a client's\nmachine for pawns controlled by remote players elsewhere on the network.\n\n@see https://docs.unrealengine.com/latest/INT/Gameplay/Framework/Controller/PlayerController/" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Comment", "/** UPlayer associated with this PlayerController.  Could be a local player or a net connection. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "UPlayer associated with this PlayerController.  Could be a local player or a net connection." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AcknowledgedPawn_MetaData[] = {
		{ "Comment", "/** Used in net games so client can acknowledge it possessed a specific pawn. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used in net games so client can acknowledge it possessed a specific pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyHUD_MetaData[] = {
		{ "Comment", "/** Heads up display associated with this PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Heads up display associated with this PlayerController." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManager_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Camera manager associated with this Player Controller. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Camera manager associated with this Player Controller." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCameraManagerClass_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** PlayerCamera class should be set for each game, otherwise Engine.PlayerCameraManager is used */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "PlayerCamera class should be set for each game, otherwise Engine.PlayerCameraManager is used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoManageActiveCameraTarget_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** \n\x09 * True to allow this player controller to manage the camera target for you,\n\x09 * typically by using the possessed pawn as the camera target. Set to false\n\x09 * if you want to manually control the camera target.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "True to allow this player controller to manage the camera target for you,\ntypically by using the possessed pawn as the camera target. Set to false\nif you want to manually control the camera target." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetViewRotation_MetaData[] = {
		{ "Comment", "/** Used to replicate the view rotation of targets not owned/possessed by this PlayerController. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used to replicate the view rotation of targets not owned/possessed by this PlayerController." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmoothTargetViewRotationSpeed_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Interp speed for blending remote view rotation for smoother client updates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Interp speed for blending remote view rotation for smoother client updates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenActors_MetaData[] = {
		{ "Comment", "/** The actors which the camera shouldn't see - e.g. used to hide actors which the camera penetrates */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The actors which the camera shouldn't see - e.g. used to hide actors which the camera penetrates" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HiddenPrimitiveComponents_MetaData[] = {
		{ "Comment", "/** Explicit components the camera shouldn't see (helpful for external systems to hide a component from a single player) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Explicit components the camera shouldn't see (helpful for external systems to hide a component from a single player)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpectatorStateSynchTime_MetaData[] = {
		{ "Comment", "/** Used to make sure the client is kept synchronized when in a spectator state */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Used to make sure the client is kept synchronized when in a spectator state" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpectatorSyncLocation_MetaData[] = {
		{ "Comment", "/** Last location synced on the server for a spectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Last location synced on the server for a spectator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastSpectatorSyncRotation_MetaData[] = {
		{ "Comment", "/** Last rotation synced on the server for a spectator. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Last rotation synced on the server for a spectator." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClientCap_MetaData[] = {
		{ "Comment", "/** Cap set by server on bandwidth from client to server in bytes/sec (only has impact if >=2600) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Cap set by server on bandwidth from client to server in bytes/sec (only has impact if >=2600)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatManager_MetaData[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/**\n\x09 * Object that manages \"cheat\" commands.\n\x09 *\n\x09 * By default:\n\x09 *\x09 - In Shipping configurations, the manager is always disabled because UE_WITH_CHEAT_MANAGER is 0\n\x09 *   - When playing in the editor, cheats are always enabled\n\x09 *   - In other cases, cheats are enabled by default in single player games but can be forced on with the EnableCheats console command\n\x09 * \n\x09 * This behavior can be changed either by overriding APlayerController::EnableCheats or AGameModeBase::AllowCheats.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Object that manages \"cheat\" commands.\n\nBy default:\n      - In Shipping configurations, the manager is always disabled because UE_WITH_CHEAT_MANAGER is 0\n  - When playing in the editor, cheats are always enabled\n  - In other cases, cheats are enabled by default in single player games but can be forced on with the EnableCheats console command\n\nThis behavior can be changed either by overriding APlayerController::EnableCheats or AGameModeBase::AllowCheats." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheatClass_MetaData[] = {
		{ "Category", "Cheat Manager" },
		{ "Comment", "/**\n\x09 * Class of my CheatManager.\n\x09 * @see CheatManager for more information about when it will be instantiated.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Class of my CheatManager.\n@see CheatManager for more information about when it will be instantiated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerInput_MetaData[] = {
		{ "Comment", "/** Object that manages player input. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Object that manages player input." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveForceFeedbackEffects_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncPhysicsDataClass_MetaData[] = {
		{ "Comment", "/** The type of async physics data object to use*/" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "AsyncPhysicsDataClass is deprecated. See UInputSettings::bEnableLegacyInputScales to enable legacy behavior" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The type of async physics data object to use" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AsyncPhysicsDataComponent_DEPRECARED_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "AsyncPhysicsDataComponent is deprecated. please see the new C++ NetworkPhysicsComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlayerIsWaiting_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** True if PlayerController is currently waiting for the match to start or to respawn. Only valid in Spectating state. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "True if PlayerController is currently waiting for the match to start or to respawn. Only valid in Spectating state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetPlayerIndex_MetaData[] = {
		{ "Comment", "/**\n\x09 * Index identifying players using the same base connection (splitscreen clients)\n\x09 * Used by netcode to match replicated PlayerControllers to the correct splitscreen viewport and child connection\n\x09 * replicated via special internal code, not through normal variable replication\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Index identifying players using the same base connection (splitscreen clients)\nUsed by netcode to match replicated PlayerControllers to the correct splitscreen viewport and child connection\nreplicated via special internal code, not through normal variable replication" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingSwapConnection_MetaData[] = {
		{ "Comment", "/**\n\x09 * This is set on the OLD PlayerController when performing a swap over a network connection\n\x09 * so we know what connection we're waiting on acknowledgment from to finish destroying this PC\n\x09 * (or when the connection is closed)\n\x09 * @see GameModeBase::SwapPlayerControllers()\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "This is set on the OLD PlayerController when performing a swap over a network connection\nso we know what connection we're waiting on acknowledgment from to finish destroying this PC\n(or when the connection is closed)\n@see GameModeBase::SwapPlayerControllers()" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NetConnection_MetaData[] = {
		{ "Comment", "/** The net connection this controller is communicating on, nullptr for local players on server */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The net connection this controller is communicating on, nullptr for local players on server" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputYawScale_MetaData[] = {
		{ "Comment", "/** Yaw input speed scaling */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the Enhanced Input plugin Scalar Modifier instead. See UInputSettings::bEnableLegacyInputScales to enable legacy behavior" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Yaw input speed scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputPitchScale_MetaData[] = {
		{ "Comment", "/** Pitch input speed scaling */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the Enhanced Input plugin Scalar Modifier instead. See UInputSettings::bEnableLegacyInputScales to enable legacy behavior" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Pitch input speed scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputRollScale_MetaData[] = {
		{ "Comment", "/** Roll input speed scaling */" },
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use the Enhanced Input plugin Scalar Modifier instead. See UInputSettings::bEnableLegacyInputScales to enable legacy behavior" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Roll input speed scaling" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowMouseCursor_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether the mouse cursor should be displayed. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the mouse cursor should be displayed." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClickEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component click events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component click events should be generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTouchEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component touch events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component touch events should be generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMouseOverEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component mouse over events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component mouse over events should be generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTouchOverEvents_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Whether actor/component touch over events should be generated. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether actor/component touch over events should be generated." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFeedbackEnabled_MetaData[] = {
		{ "Category", "Game|Feedback" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionControls_MetaData[] = {
		{ "BlueprintSetter", "SetMotionControlsEnabled" },
		{ "Category", "Input" },
		{ "Comment", "/** Whether or not to consider input from motion sources (tilt, acceleration, etc) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether or not to consider input from motion sources (tilt, acceleration, etc)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableStreamingSource_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Whether the PlayerController should be used as a World Partiton streaming source. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the PlayerController should be used as a World Partiton streaming source." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingSourceShouldActivate_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Whether the PlayerController streaming source should activate cells after loading. */" },
		{ "EditCondition", "bEnableStreamingSource" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the PlayerController streaming source should activate cells after loading." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bStreamingSourceShouldBlockOnSlowStreaming_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Whether the PlayerController streaming source should block on slow streaming. */" },
		{ "EditCondition", "bEnableStreamingSource" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether the PlayerController streaming source should block on slow streaming." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingSourcePriority_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** PlayerController streaming source priority. */" },
		{ "EditCondition", "bEnableStreamingSource" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "PlayerController streaming source priority." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingSourceDebugColor_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Color used for debugging. */" },
		{ "EditCondition", "bEnableStreamingSource" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Color used for debugging." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StreamingSourceShapes_MetaData[] = {
		{ "Category", "WorldPartition" },
		{ "Comment", "/** Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range. */" },
		{ "EditCondition", "bEnableStreamingSource" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Optional aggregated shape list used to build a custom shape for the streaming source. When empty, fallbacks sphere shape with a radius equal to grid's loading range." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceFeedbackScale_MetaData[] = {
		{ "Comment", "/** Scale applied to force feedback values */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Scale applied to force feedback values" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClickEventKeys_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** List of keys that will cause click events to be forwarded, default to left click */" },
		{ "EditCondition", "bEnableClickEvents" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "List of keys that will cause click events to be forwarded, default to left click" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMouseCursor_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Type of mouse cursor to show by default */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Type of mouse cursor to show by default" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentMouseCursor_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Currently visible mouse cursor */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Currently visible mouse cursor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultClickTraceChannel_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Default trace channel used for determining what world object was clicked on. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Default trace channel used for determining what world object was clicked on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentClickTraceChannel_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Trace channel currently being used for determining what world object was clicked on. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Trace channel currently being used for determining what world object was clicked on." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResultTraceDistance_MetaData[] = {
		{ "Category", "MouseInterface" },
		{ "Comment", "/** Distance to trace when computing click events */" },
		{ "DisplayName", "Trace Distance" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Distance to trace when computing click events" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeamlessTravelCount_MetaData[] = {
		{ "Comment", "/** Counter for this players seamless travels (used along with the below value, to restrict ServerNotifyLoadedWorld) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Counter for this players seamless travels (used along with the below value, to restrict ServerNotifyLoadedWorld)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastCompletedSeamlessTravelCount_MetaData[] = {
		{ "Comment", "/** The value of SeamlessTravelCount, upon the last call to GameModeBase::HandleSeamlessTravelPlayer; used to detect seamless travel */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The value of SeamlessTravelCount, upon the last call to GameModeBase::HandleSeamlessTravelPlayer; used to detect seamless travel" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InactiveStateInputComponent_MetaData[] = {
		{ "Comment", "/** InputComponent we use when player is in Inactive state. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "InputComponent we use when player is in Inactive state." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldPerformFullTickWhenPaused_MetaData[] = {
		{ "Category", "PlayerController" },
		{ "Comment", "/** Whether we fully tick when the game is paused, if our tick function is allowed to do so. If false, we do a minimal update during the tick. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Whether we fully tick when the game is paused, if our tick function is allowed to do so. If false, we do a minimal update during the tick." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTouchInterface_MetaData[] = {
		{ "Comment", "/** The currently set touch interface */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The currently set touch interface" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverridePlayerInputClass_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** If set, then this UPlayerInput class will be used instead of the Input Settings' DefaultPlayerInputClass */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "If set, then this UPlayerInput class will be used instead of the Input Settings' DefaultPlayerInputClass" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpectatorPawn_MetaData[] = {
		{ "Comment", "/** The pawn used when spectating (nullptr if not spectating). */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The pawn used when spectating (nullptr if not spectating)." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocalPlayerController_MetaData[] = {
		{ "Comment", "/** Set during SpawnActor once and never again to indicate the intent of this controller instance (SERVER ONLY) */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "Set during SpawnActor once and never again to indicate the intent of this controller instance (SERVER ONLY)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Comment", "/** The location used internally when there is no pawn or spectator, to know where to spawn the spectator or focus the camera on death. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerController.h" },
		{ "ToolTip", "The location used internally when there is no pawn or spectator, to know where to spawn the spectator or focus the camera on death." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AcknowledgedPawn;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyHUD;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCameraManager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerCameraManagerClass;
	static void NewProp_bAutoManageActiveCameraTarget_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoManageActiveCameraTarget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetViewRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothTargetViewRotationSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HiddenActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenActors;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_HiddenPrimitiveComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HiddenPrimitiveComponents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LastSpectatorStateSynchTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSpectatorSyncLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastSpectatorSyncRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClientCap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CheatManager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CheatClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerInput;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveForceFeedbackEffects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveForceFeedbackEffects;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AsyncPhysicsDataClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AsyncPhysicsDataComponent_DEPRECARED;
	static void NewProp_bPlayerIsWaiting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayerIsWaiting;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NetPlayerIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PendingSwapConnection;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NetConnection;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputYawScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputPitchScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InputRollScale;
	static void NewProp_bShowMouseCursor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowMouseCursor;
	static void NewProp_bEnableClickEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClickEvents;
	static void NewProp_bEnableTouchEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTouchEvents;
	static void NewProp_bEnableMouseOverEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMouseOverEvents;
	static void NewProp_bEnableTouchOverEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTouchOverEvents;
	static void NewProp_bForceFeedbackEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFeedbackEnabled;
	static void NewProp_bEnableMotionControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionControls;
	static void NewProp_bEnableStreamingSource_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableStreamingSource;
	static void NewProp_bStreamingSourceShouldActivate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingSourceShouldActivate;
	static void NewProp_bStreamingSourceShouldBlockOnSlowStreaming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bStreamingSourceShouldBlockOnSlowStreaming;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StreamingSourcePriority_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_StreamingSourcePriority;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingSourceDebugColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StreamingSourceShapes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamingSourceShapes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceFeedbackScale;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClickEventKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ClickEventKeys;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultMouseCursor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentMouseCursor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultClickTraceChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentClickTraceChannel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitResultTraceDistance;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_SeamlessTravelCount;
	static const UECodeGen_Private::FUInt16PropertyParams NewProp_LastCompletedSeamlessTravelCount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InactiveStateInputComponent;
	static void NewProp_bShouldPerformFullTickWhenPaused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldPerformFullTickWhenPaused;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTouchInterface;
	static const UECodeGen_Private::FClassPropertyParams NewProp_OverridePlayerInputClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpectatorPawn;
	static void NewProp_bIsLocalPlayerController_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocalPlayerController;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerController_ActivateTouchInterface, "ActivateTouchInterface" }, // 3590026127
		{ &Z_Construct_UFunction_APlayerController_AddPitchInput, "AddPitchInput" }, // 3824726041
		{ &Z_Construct_UFunction_APlayerController_AddRollInput, "AddRollInput" }, // 537088740
		{ &Z_Construct_UFunction_APlayerController_AddYawInput, "AddYawInput" }, // 3011140319
		{ &Z_Construct_UFunction_APlayerController_Camera, "Camera" }, // 3586318278
		{ &Z_Construct_UFunction_APlayerController_CanRestartPlayer, "CanRestartPlayer" }, // 1086938419
		{ &Z_Construct_UFunction_APlayerController_ClearAudioListenerAttenuationOverride, "ClearAudioListenerAttenuationOverride" }, // 3570311057
		{ &Z_Construct_UFunction_APlayerController_ClearAudioListenerOverride, "ClearAudioListenerOverride" }, // 3962713609
		{ &Z_Construct_UFunction_APlayerController_ClientAckTimeDilation, "ClientAckTimeDilation" }, // 254967191
		{ &Z_Construct_UFunction_APlayerController_ClientAckUpdateLevelVisibility, "ClientAckUpdateLevelVisibility" }, // 1186990922
		{ &Z_Construct_UFunction_APlayerController_ClientAddTextureStreamingLoc, "ClientAddTextureStreamingLoc" }, // 4215823410
		{ &Z_Construct_UFunction_APlayerController_ClientCancelPendingMapChange, "ClientCancelPendingMapChange" }, // 2408402545
		{ &Z_Construct_UFunction_APlayerController_ClientCapBandwidth, "ClientCapBandwidth" }, // 1723298428
		{ &Z_Construct_UFunction_APlayerController_ClientClearCameraLensEffects, "ClientClearCameraLensEffects" }, // 2809785639
		{ &Z_Construct_UFunction_APlayerController_ClientCommitMapChange, "ClientCommitMapChange" }, // 860423126
		{ &Z_Construct_UFunction_APlayerController_ClientCorrectionAsyncPhysicsTimestamp, "ClientCorrectionAsyncPhysicsTimestamp" }, // 3819445012
		{ &Z_Construct_UFunction_APlayerController_ClientEnableNetworkVoice, "ClientEnableNetworkVoice" }, // 1910143246
		{ &Z_Construct_UFunction_APlayerController_ClientEndOnlineSession, "ClientEndOnlineSession" }, // 4085200049
		{ &Z_Construct_UFunction_APlayerController_ClientFlushLevelStreaming, "ClientFlushLevelStreaming" }, // 3509721893
		{ &Z_Construct_UFunction_APlayerController_ClientForceGarbageCollection, "ClientForceGarbageCollection" }, // 788836963
		{ &Z_Construct_UFunction_APlayerController_ClientGameEnded, "ClientGameEnded" }, // 1233750709
		{ &Z_Construct_UFunction_APlayerController_ClientGotoState, "ClientGotoState" }, // 2936443120
		{ &Z_Construct_UFunction_APlayerController_ClientIgnoreLookInput, "ClientIgnoreLookInput" }, // 4147942836
		{ &Z_Construct_UFunction_APlayerController_ClientIgnoreMoveInput, "ClientIgnoreMoveInput" }, // 173993734
		{ &Z_Construct_UFunction_APlayerController_ClientMessage, "ClientMessage" }, // 1231403928
		{ &Z_Construct_UFunction_APlayerController_ClientMutePlayer, "ClientMutePlayer" }, // 3152613509
		{ &Z_Construct_UFunction_APlayerController_ClientPlayForceFeedback_Internal, "ClientPlayForceFeedback_Internal" }, // 396013974
		{ &Z_Construct_UFunction_APlayerController_ClientPlaySound, "ClientPlaySound" }, // 1708236643
		{ &Z_Construct_UFunction_APlayerController_ClientPlaySoundAtLocation, "ClientPlaySoundAtLocation" }, // 1939387226
		{ &Z_Construct_UFunction_APlayerController_ClientPrepareMapChange, "ClientPrepareMapChange" }, // 654470227
		{ &Z_Construct_UFunction_APlayerController_ClientPrestreamTextures, "ClientPrestreamTextures" }, // 541910030
		{ &Z_Construct_UFunction_APlayerController_ClientReceiveLocalizedMessage, "ClientReceiveLocalizedMessage" }, // 4124763954
		{ &Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrame, "ClientRecvServerAckFrame" }, // 1157321108
		{ &Z_Construct_UFunction_APlayerController_ClientRecvServerAckFrameDebug, "ClientRecvServerAckFrameDebug" }, // 1949792371
		{ &Z_Construct_UFunction_APlayerController_ClientRepObjRef, "ClientRepObjRef" }, // 3935200378
		{ &Z_Construct_UFunction_APlayerController_ClientReset, "ClientReset" }, // 4198480850
		{ &Z_Construct_UFunction_APlayerController_ClientRestart, "ClientRestart" }, // 1499357563
		{ &Z_Construct_UFunction_APlayerController_ClientRetryClientRestart, "ClientRetryClientRestart" }, // 737769780
		{ &Z_Construct_UFunction_APlayerController_ClientReturnToMainMenuWithTextReason, "ClientReturnToMainMenuWithTextReason" }, // 1537604096
		{ &Z_Construct_UFunction_APlayerController_ClientSetBlockOnAsyncLoading, "ClientSetBlockOnAsyncLoading" }, // 999538304
		{ &Z_Construct_UFunction_APlayerController_ClientSetCameraFade, "ClientSetCameraFade" }, // 952209350
		{ &Z_Construct_UFunction_APlayerController_ClientSetCameraMode, "ClientSetCameraMode" }, // 3415154928
		{ &Z_Construct_UFunction_APlayerController_ClientSetCinematicMode, "ClientSetCinematicMode" }, // 2498202940
		{ &Z_Construct_UFunction_APlayerController_ClientSetForceMipLevelsToBeResident, "ClientSetForceMipLevelsToBeResident" }, // 786362405
		{ &Z_Construct_UFunction_APlayerController_ClientSetHUD, "ClientSetHUD" }, // 580027005
		{ &Z_Construct_UFunction_APlayerController_ClientSetSpectatorWaiting, "ClientSetSpectatorWaiting" }, // 1440576748
		{ &Z_Construct_UFunction_APlayerController_ClientSetupNetworkPhysicsTimestamp, "ClientSetupNetworkPhysicsTimestamp" }, // 2322324013
		{ &Z_Construct_UFunction_APlayerController_ClientSetViewTarget, "ClientSetViewTarget" }, // 632268984
		{ &Z_Construct_UFunction_APlayerController_ClientSpawnCameraLensEffect, "ClientSpawnCameraLensEffect" }, // 2816989205
		{ &Z_Construct_UFunction_APlayerController_ClientSpawnGenericCameraLensEffect, "ClientSpawnGenericCameraLensEffect" }, // 724217839
		{ &Z_Construct_UFunction_APlayerController_ClientStartCameraShake, "ClientStartCameraShake" }, // 1847755401
		{ &Z_Construct_UFunction_APlayerController_ClientStartCameraShakeFromSource, "ClientStartCameraShakeFromSource" }, // 2335221189
		{ &Z_Construct_UFunction_APlayerController_ClientStartOnlineSession, "ClientStartOnlineSession" }, // 1672930837
		{ &Z_Construct_UFunction_APlayerController_ClientStopCameraShake, "ClientStopCameraShake" }, // 209510041
		{ &Z_Construct_UFunction_APlayerController_ClientStopCameraShakesFromSource, "ClientStopCameraShakesFromSource" }, // 878011306
		{ &Z_Construct_UFunction_APlayerController_ClientStopForceFeedback, "ClientStopForceFeedback" }, // 32721972
		{ &Z_Construct_UFunction_APlayerController_ClientTeamMessage, "ClientTeamMessage" }, // 4047438303
		{ &Z_Construct_UFunction_APlayerController_ClientTravel, "ClientTravel" }, // 513315994
		{ &Z_Construct_UFunction_APlayerController_ClientTravelInternal, "ClientTravelInternal" }, // 3818052368
		{ &Z_Construct_UFunction_APlayerController_ClientUnmutePlayer, "ClientUnmutePlayer" }, // 2826898717
		{ &Z_Construct_UFunction_APlayerController_ClientUnmutePlayers, "ClientUnmutePlayers" }, // 2515628197
		{ &Z_Construct_UFunction_APlayerController_ClientUpdateLevelStreamingStatus, "ClientUpdateLevelStreamingStatus" }, // 4099011249
		{ &Z_Construct_UFunction_APlayerController_ClientUpdateMultipleLevelsStreamingStatus, "ClientUpdateMultipleLevelsStreamingStatus" }, // 507826586
		{ &Z_Construct_UFunction_APlayerController_ClientVoiceHandshakeComplete, "ClientVoiceHandshakeComplete" }, // 3558062010
		{ &Z_Construct_UFunction_APlayerController_ClientWasKicked, "ClientWasKicked" }, // 2340267237
		{ &Z_Construct_UFunction_APlayerController_ConsoleKey, "ConsoleKey" }, // 4119833814
		{ &Z_Construct_UFunction_APlayerController_DeprojectMousePositionToWorld, "DeprojectMousePositionToWorld" }, // 1977075924
		{ &Z_Construct_UFunction_APlayerController_DeprojectScreenPositionToWorld, "DeprojectScreenPositionToWorld" }, // 3638413218
		{ &Z_Construct_UFunction_APlayerController_EnableCheats, "EnableCheats" }, // 1305334249
		{ &Z_Construct_UFunction_APlayerController_FOV, "FOV" }, // 3573505117
		{ &Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToConsume, "GetAsyncPhysicsDataToConsume" }, // 2414604809
		{ &Z_Construct_UFunction_APlayerController_GetAsyncPhysicsDataToWrite, "GetAsyncPhysicsDataToWrite" }, // 379315884
		{ &Z_Construct_UFunction_APlayerController_GetDeprecatedInputPitchScale, "GetDeprecatedInputPitchScale" }, // 2642546889
		{ &Z_Construct_UFunction_APlayerController_GetDeprecatedInputRollScale, "GetDeprecatedInputRollScale" }, // 475412700
		{ &Z_Construct_UFunction_APlayerController_GetDeprecatedInputYawScale, "GetDeprecatedInputYawScale" }, // 3273672043
		{ &Z_Construct_UFunction_APlayerController_GetFocalLocation, "GetFocalLocation" }, // 2702074309
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursor, "GetHitResultUnderCursor" }, // 1940337541
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorByChannel, "GetHitResultUnderCursorByChannel" }, // 146191028
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderCursorForObjects, "GetHitResultUnderCursorForObjects" }, // 1043259652
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderFinger, "GetHitResultUnderFinger" }, // 1652259561
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerByChannel, "GetHitResultUnderFingerByChannel" }, // 1668053410
		{ &Z_Construct_UFunction_APlayerController_GetHitResultUnderFingerForObjects, "GetHitResultUnderFingerForObjects" }, // 1684024607
		{ &Z_Construct_UFunction_APlayerController_GetHUD, "GetHUD" }, // 2634596160
		{ &Z_Construct_UFunction_APlayerController_GetInputAnalogKeyState, "GetInputAnalogKeyState" }, // 829790805
		{ &Z_Construct_UFunction_APlayerController_GetInputAnalogStickState, "GetInputAnalogStickState" }, // 2967813427
		{ &Z_Construct_UFunction_APlayerController_GetInputKeyTimeDown, "GetInputKeyTimeDown" }, // 2435858814
		{ &Z_Construct_UFunction_APlayerController_GetInputMotionState, "GetInputMotionState" }, // 371117805
		{ &Z_Construct_UFunction_APlayerController_GetInputMouseDelta, "GetInputMouseDelta" }, // 511026605
		{ &Z_Construct_UFunction_APlayerController_GetInputTouchState, "GetInputTouchState" }, // 3806477089
		{ &Z_Construct_UFunction_APlayerController_GetInputVectorKeyState, "GetInputVectorKeyState" }, // 1524998325
		{ &Z_Construct_UFunction_APlayerController_GetMousePosition, "GetMousePosition" }, // 3238849369
		{ &Z_Construct_UFunction_APlayerController_GetOverridePlayerInputClass, "GetOverridePlayerInputClass" }, // 2960584454
		{ &Z_Construct_UFunction_APlayerController_GetPlatformUserId, "GetPlatformUserId" }, // 898835069
		{ &Z_Construct_UFunction_APlayerController_GetSpectatorPawn, "GetSpectatorPawn" }, // 3536961059
		{ &Z_Construct_UFunction_APlayerController_GetStreamingSourceLocationAndRotation, "GetStreamingSourceLocationAndRotation" }, // 2542268759
		{ &Z_Construct_UFunction_APlayerController_GetStreamingSourcePriority, "GetStreamingSourcePriority" }, // 3244313263
		{ &Z_Construct_UFunction_APlayerController_GetStreamingSourceShapes, "GetStreamingSourceShapes" }, // 422752846
		{ &Z_Construct_UFunction_APlayerController_GetViewportSize, "GetViewportSize" }, // 1581272248
		{ &Z_Construct_UFunction_APlayerController_IsInputKeyDown, "IsInputKeyDown" }, // 2410834566
		{ &Z_Construct_UFunction_APlayerController_IsStreamingSourceEnabled, "IsStreamingSourceEnabled" }, // 1776031525
		{ &Z_Construct_UFunction_APlayerController_K2_ClientPlayForceFeedback, "K2_ClientPlayForceFeedback" }, // 1116322873
		{ &Z_Construct_UFunction_APlayerController_LocalTravel, "LocalTravel" }, // 2321823274
		{ &Z_Construct_UFunction_APlayerController_OnRep_AsyncPhysicsDataComponent, "OnRep_AsyncPhysicsDataComponent" }, // 1603129633
		{ &Z_Construct_UFunction_APlayerController_OnServerStartedVisualLogger, "OnServerStartedVisualLogger" }, // 968727712
		{ &Z_Construct_UFunction_APlayerController_Pause, "Pause" }, // 2953635032
		{ &Z_Construct_UFunction_APlayerController_PlayDynamicForceFeedback, "PlayDynamicForceFeedback" }, // 1453338102
		{ &Z_Construct_UFunction_APlayerController_PlayHapticEffect, "PlayHapticEffect" }, // 3001759242
		{ &Z_Construct_UFunction_APlayerController_ProjectWorldLocationToScreen, "ProjectWorldLocationToScreen" }, // 4095299421
		{ &Z_Construct_UFunction_APlayerController_ResetControllerLightColor, "ResetControllerLightColor" }, // 373603170
		{ &Z_Construct_UFunction_APlayerController_RestartLevel, "RestartLevel" }, // 3776995828
		{ &Z_Construct_UFunction_APlayerController_SendToConsole, "SendToConsole" }, // 3216903313
		{ &Z_Construct_UFunction_APlayerController_ServerAcknowledgePossession, "ServerAcknowledgePossession" }, // 327419133
		{ &Z_Construct_UFunction_APlayerController_ServerBlockPlayer, "ServerBlockPlayer" }, // 2702354893
		{ &Z_Construct_UFunction_APlayerController_ServerCamera, "ServerCamera" }, // 3915591315
		{ &Z_Construct_UFunction_APlayerController_ServerChangeName, "ServerChangeName" }, // 2818691090
		{ &Z_Construct_UFunction_APlayerController_ServerCheckClientPossession, "ServerCheckClientPossession" }, // 201445578
		{ &Z_Construct_UFunction_APlayerController_ServerCheckClientPossessionReliable, "ServerCheckClientPossessionReliable" }, // 1615165938
		{ &Z_Construct_UFunction_APlayerController_ServerExec, "ServerExec" }, // 223261693
		{ &Z_Construct_UFunction_APlayerController_ServerExecRPC, "ServerExecRPC" }, // 3592748546
		{ &Z_Construct_UFunction_APlayerController_ServerMutePlayer, "ServerMutePlayer" }, // 3822194546
		{ &Z_Construct_UFunction_APlayerController_ServerNotifyLoadedWorld, "ServerNotifyLoadedWorld" }, // 2703585288
		{ &Z_Construct_UFunction_APlayerController_ServerPause, "ServerPause" }, // 1539448364
		{ &Z_Construct_UFunction_APlayerController_ServerRecvClientInputFrame, "ServerRecvClientInputFrame" }, // 1401026556
		{ &Z_Construct_UFunction_APlayerController_ServerRestartPlayer, "ServerRestartPlayer" }, // 1799563885
		{ &Z_Construct_UFunction_APlayerController_ServerSendLatestAsyncPhysicsTimestamp, "ServerSendLatestAsyncPhysicsTimestamp" }, // 2937843567
		{ &Z_Construct_UFunction_APlayerController_ServerSetSpectatorLocation, "ServerSetSpectatorLocation" }, // 2789841234
		{ &Z_Construct_UFunction_APlayerController_ServerSetSpectatorWaiting, "ServerSetSpectatorWaiting" }, // 3779874945
		{ &Z_Construct_UFunction_APlayerController_ServerShortTimeout, "ServerShortTimeout" }, // 1347503497
		{ &Z_Construct_UFunction_APlayerController_ServerToggleAILogging, "ServerToggleAILogging" }, // 476080888
		{ &Z_Construct_UFunction_APlayerController_ServerUnblockPlayer, "ServerUnblockPlayer" }, // 4207647686
		{ &Z_Construct_UFunction_APlayerController_ServerUnmutePlayer, "ServerUnmutePlayer" }, // 2247474491
		{ &Z_Construct_UFunction_APlayerController_ServerUpdateCamera, "ServerUpdateCamera" }, // 2214663435
		{ &Z_Construct_UFunction_APlayerController_ServerUpdateLevelVisibility, "ServerUpdateLevelVisibility" }, // 1321125737
		{ &Z_Construct_UFunction_APlayerController_ServerUpdateMultipleLevelsVisibility, "ServerUpdateMultipleLevelsVisibility" }, // 2983357546
		{ &Z_Construct_UFunction_APlayerController_ServerVerifyViewTarget, "ServerVerifyViewTarget" }, // 2281367215
		{ &Z_Construct_UFunction_APlayerController_ServerViewNextPlayer, "ServerViewNextPlayer" }, // 698218155
		{ &Z_Construct_UFunction_APlayerController_ServerViewPrevPlayer, "ServerViewPrevPlayer" }, // 2204802490
		{ &Z_Construct_UFunction_APlayerController_ServerViewSelf, "ServerViewSelf" }, // 1539694696
		{ &Z_Construct_UFunction_APlayerController_SetAudioListenerAttenuationOverride, "SetAudioListenerAttenuationOverride" }, // 4171693328
		{ &Z_Construct_UFunction_APlayerController_SetAudioListenerOverride, "SetAudioListenerOverride" }, // 1808603130
		{ &Z_Construct_UFunction_APlayerController_SetCinematicMode, "SetCinematicMode" }, // 3127665839
		{ &Z_Construct_UFunction_APlayerController_SetControllerLightColor, "SetControllerLightColor" }, // 302311374
		{ &Z_Construct_UFunction_APlayerController_SetDeprecatedInputPitchScale, "SetDeprecatedInputPitchScale" }, // 4211204666
		{ &Z_Construct_UFunction_APlayerController_SetDeprecatedInputRollScale, "SetDeprecatedInputRollScale" }, // 4291503353
		{ &Z_Construct_UFunction_APlayerController_SetDeprecatedInputYawScale, "SetDeprecatedInputYawScale" }, // 456406092
		{ &Z_Construct_UFunction_APlayerController_SetDisableHaptics, "SetDisableHaptics" }, // 2750489813
		{ &Z_Construct_UFunction_APlayerController_SetHapticsByValue, "SetHapticsByValue" }, // 321886572
		{ &Z_Construct_UFunction_APlayerController_SetMotionControlsEnabled, "SetMotionControlsEnabled" }, // 1059338456
		{ &Z_Construct_UFunction_APlayerController_SetMouseCursorWidget, "SetMouseCursorWidget" }, // 1254718714
		{ &Z_Construct_UFunction_APlayerController_SetMouseLocation, "SetMouseLocation" }, // 4162867852
		{ &Z_Construct_UFunction_APlayerController_SetName, "SetName" }, // 2273853238
		{ &Z_Construct_UFunction_APlayerController_SetViewTargetWithBlend, "SetViewTargetWithBlend" }, // 4127427647
		{ &Z_Construct_UFunction_APlayerController_SetVirtualJoystickVisibility, "SetVirtualJoystickVisibility" }, // 1664428986
		{ &Z_Construct_UFunction_APlayerController_StartFire, "StartFire" }, // 2046388331
		{ &Z_Construct_UFunction_APlayerController_StopHapticEffect, "StopHapticEffect" }, // 367394573
		{ &Z_Construct_UFunction_APlayerController_StreamingSourceShouldActivate, "StreamingSourceShouldActivate" }, // 3997601171
		{ &Z_Construct_UFunction_APlayerController_StreamingSourceShouldBlockOnSlowStreaming, "StreamingSourceShouldBlockOnSlowStreaming" }, // 635642564
		{ &Z_Construct_UFunction_APlayerController_SwitchLevel, "SwitchLevel" }, // 369970534
		{ &Z_Construct_UFunction_APlayerController_TestServerLevelVisibilityChange, "TestServerLevelVisibilityChange" }, // 884515408
		{ &Z_Construct_UFunction_APlayerController_ToggleSpeaking, "ToggleSpeaking" }, // 1258978076
		{ &Z_Construct_UFunction_APlayerController_WasInputKeyJustPressed, "WasInputKeyJustPressed" }, // 1575047126
		{ &Z_Construct_UFunction_APlayerController_WasInputKeyJustReleased, "WasInputKeyJustReleased" }, // 875423556
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, Player), Z_Construct_UClass_UPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn = { "AcknowledgedPawn", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, AcknowledgedPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AcknowledgedPawn_MetaData), NewProp_AcknowledgedPawn_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD = { "MyHUD", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, MyHUD), Z_Construct_UClass_AHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyHUD_MetaData), NewProp_MyHUD_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager = { "PlayerCameraManager", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, PlayerCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCameraManager_MetaData), NewProp_PlayerCameraManager_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass = { "PlayerCameraManagerClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, PlayerCameraManagerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCameraManagerClass_MetaData), NewProp_PlayerCameraManagerClass_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bAutoManageActiveCameraTarget = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget = { "bAutoManageActiveCameraTarget", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoManageActiveCameraTarget_MetaData), NewProp_bAutoManageActiveCameraTarget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation = { "TargetViewRotation", nullptr, (EPropertyFlags)0x0010000000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, TargetViewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetViewRotation_MetaData), NewProp_TargetViewRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed = { "SmoothTargetViewRotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, SmoothTargetViewRotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmoothTargetViewRotationSpeed_MetaData), NewProp_SmoothTargetViewRotationSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_Inner = { "HiddenActors", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors = { "HiddenActors", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, HiddenActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenActors_MetaData), NewProp_HiddenActors_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_Inner = { "HiddenPrimitiveComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents = { "HiddenPrimitiveComponents", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, HiddenPrimitiveComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HiddenPrimitiveComponents_MetaData), NewProp_HiddenPrimitiveComponents_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime = { "LastSpectatorStateSynchTime", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, LastSpectatorStateSynchTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpectatorStateSynchTime_MetaData), NewProp_LastSpectatorStateSynchTime_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation = { "LastSpectatorSyncLocation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, LastSpectatorSyncLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpectatorSyncLocation_MetaData), NewProp_LastSpectatorSyncLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation = { "LastSpectatorSyncRotation", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, LastSpectatorSyncRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastSpectatorSyncRotation_MetaData), NewProp_LastSpectatorSyncRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap = { "ClientCap", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, ClientCap), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClientCap_MetaData), NewProp_ClientCap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager = { "CheatManager", nullptr, (EPropertyFlags)0x0114000000002014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, CheatManager), Z_Construct_UClass_UCheatManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatManager_MetaData), NewProp_CheatManager_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass = { "CheatClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, CheatClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCheatManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheatClass_MetaData), NewProp_CheatClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput = { "PlayerInput", nullptr, (EPropertyFlags)0x0114000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, PlayerInput), Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerInput_MetaData), NewProp_PlayerInput_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_Inner = { "ActiveForceFeedbackEffects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActiveForceFeedbackEffect, METADATA_PARAMS(0, nullptr) }; // 3742515358
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects = { "ActiveForceFeedbackEffects", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, ActiveForceFeedbackEffects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveForceFeedbackEffects_MetaData), NewProp_ActiveForceFeedbackEffects_MetaData) }; // 3742515358
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_AsyncPhysicsDataClass = { "AsyncPhysicsDataClass", nullptr, (EPropertyFlags)0x0024080020000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, AsyncPhysicsDataClass_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UAsyncPhysicsData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncPhysicsDataClass_MetaData), NewProp_AsyncPhysicsDataClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_AsyncPhysicsDataComponent_DEPRECARED = { "AsyncPhysicsDataComponent_DEPRECARED", "OnRep_AsyncPhysicsDataComponent", (EPropertyFlags)0x0144000100080028, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, AsyncPhysicsDataComponent_DEPRECARED), Z_Construct_UClass_UAsyncPhysicsInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AsyncPhysicsDataComponent_DEPRECARED_MetaData), NewProp_AsyncPhysicsDataComponent_DEPRECARED_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bPlayerIsWaiting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting = { "bPlayerIsWaiting", nullptr, (EPropertyFlags)0x0010000000020815, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlayerIsWaiting_MetaData), NewProp_bPlayerIsWaiting_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex = { "NetPlayerIndex", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, NetPlayerIndex), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetPlayerIndex_MetaData), NewProp_NetPlayerIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection = { "PendingSwapConnection", nullptr, (EPropertyFlags)0x0114000000200000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, PendingSwapConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingSwapConnection_MetaData), NewProp_PendingSwapConnection_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection = { "NetConnection", nullptr, (EPropertyFlags)0x0114000000200000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, NetConnection), Z_Construct_UClass_UNetConnection_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NetConnection_MetaData), NewProp_NetConnection_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale = { "InputYawScale", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, InputYawScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputYawScale_MetaData), NewProp_InputYawScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale = { "InputPitchScale", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, InputPitchScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputPitchScale_MetaData), NewProp_InputPitchScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale = { "InputRollScale", nullptr, (EPropertyFlags)0x0010000020004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, InputRollScale_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputRollScale_MetaData), NewProp_InputRollScale_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bShowMouseCursor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor = { "bShowMouseCursor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowMouseCursor_MetaData), NewProp_bShowMouseCursor_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bEnableClickEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents = { "bEnableClickEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableClickEvents_MetaData), NewProp_bEnableClickEvents_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bEnableTouchEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents = { "bEnableTouchEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTouchEvents_MetaData), NewProp_bEnableTouchEvents_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bEnableMouseOverEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents = { "bEnableMouseOverEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMouseOverEvents_MetaData), NewProp_bEnableMouseOverEvents_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bEnableTouchOverEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents = { "bEnableTouchOverEvents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableTouchOverEvents_MetaData), NewProp_bEnableTouchOverEvents_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bForceFeedbackEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled = { "bForceFeedbackEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFeedbackEnabled_MetaData), NewProp_bForceFeedbackEnabled_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMotionControls_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bEnableMotionControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMotionControls = { "bEnableMotionControls", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMotionControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableMotionControls_MetaData), NewProp_bEnableMotionControls_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableStreamingSource_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bEnableStreamingSource = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableStreamingSource = { "bEnableStreamingSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableStreamingSource_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableStreamingSource_MetaData), NewProp_bEnableStreamingSource_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldActivate_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bStreamingSourceShouldActivate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldActivate = { "bStreamingSourceShouldActivate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldActivate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreamingSourceShouldActivate_MetaData), NewProp_bStreamingSourceShouldActivate_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldBlockOnSlowStreaming_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bStreamingSourceShouldBlockOnSlowStreaming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldBlockOnSlowStreaming = { "bStreamingSourceShouldBlockOnSlowStreaming", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldBlockOnSlowStreaming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bStreamingSourceShouldBlockOnSlowStreaming_MetaData), NewProp_bStreamingSourceShouldBlockOnSlowStreaming_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourcePriority_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourcePriority = { "StreamingSourcePriority", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, StreamingSourcePriority), Z_Construct_UEnum_Engine_EStreamingSourcePriority, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingSourcePriority_MetaData), NewProp_StreamingSourcePriority_MetaData) }; // 3463526699
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourceDebugColor = { "StreamingSourceDebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, StreamingSourceDebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingSourceDebugColor_MetaData), NewProp_StreamingSourceDebugColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourceShapes_Inner = { "StreamingSourceShapes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FStreamingSourceShape, METADATA_PARAMS(0, nullptr) }; // 2223099804
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourceShapes = { "StreamingSourceShapes", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, StreamingSourceShapes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StreamingSourceShapes_MetaData), NewProp_StreamingSourceShapes_MetaData) }; // 2223099804
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale = { "ForceFeedbackScale", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, ForceFeedbackScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceFeedbackScale_MetaData), NewProp_ForceFeedbackScale_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_Inner = { "ClickEventKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 658672854
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys = { "ClickEventKeys", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, ClickEventKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClickEventKeys_MetaData), NewProp_ClickEventKeys_MetaData) }; // 658672854
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor = { "DefaultMouseCursor", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, DefaultMouseCursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMouseCursor_MetaData), NewProp_DefaultMouseCursor_MetaData) }; // 3426243287
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor = { "CurrentMouseCursor", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, CurrentMouseCursor), Z_Construct_UEnum_CoreUObject_EMouseCursor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentMouseCursor_MetaData), NewProp_CurrentMouseCursor_MetaData) }; // 3426243287
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel = { "DefaultClickTraceChannel", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, DefaultClickTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultClickTraceChannel_MetaData), NewProp_DefaultClickTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel = { "CurrentClickTraceChannel", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, CurrentClickTraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentClickTraceChannel_MetaData), NewProp_CurrentClickTraceChannel_MetaData) }; // 756624936
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance = { "HitResultTraceDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, HitResultTraceDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResultTraceDistance_MetaData), NewProp_HitResultTraceDistance_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount = { "SeamlessTravelCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, SeamlessTravelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeamlessTravelCount_MetaData), NewProp_SeamlessTravelCount_MetaData) };
const UECodeGen_Private::FUInt16PropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount = { "LastCompletedSeamlessTravelCount", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, LastCompletedSeamlessTravelCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastCompletedSeamlessTravelCount_MetaData), NewProp_LastCompletedSeamlessTravelCount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent = { "InactiveStateInputComponent", nullptr, (EPropertyFlags)0x0124080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, InactiveStateInputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InactiveStateInputComponent_MetaData), NewProp_InactiveStateInputComponent_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bShouldPerformFullTickWhenPaused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused = { "bShouldPerformFullTickWhenPaused", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldPerformFullTickWhenPaused_MetaData), NewProp_bShouldPerformFullTickWhenPaused_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface = { "CurrentTouchInterface", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, CurrentTouchInterface), Z_Construct_UClass_UTouchInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentTouchInterface_MetaData), NewProp_CurrentTouchInterface_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_OverridePlayerInputClass = { "OverridePlayerInputClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, OverridePlayerInputClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UPlayerInput_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverridePlayerInputClass_MetaData), NewProp_OverridePlayerInputClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn = { "SpectatorPawn", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, SpectatorPawn), Z_Construct_UClass_ASpectatorPawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpectatorPawn_MetaData), NewProp_SpectatorPawn_MetaData) };
void Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_SetBit(void* Obj)
{
	((APlayerController*)Obj)->bIsLocalPlayerController = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController = { "bIsLocalPlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerController), &Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocalPlayerController_MetaData), NewProp_bIsLocalPlayerController_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0020080000000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerController, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_AcknowledgedPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_MyHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerCameraManagerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bAutoManageActiveCameraTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_TargetViewRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SmoothTargetViewRotationSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenActors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HiddenPrimitiveComponents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorStateSynchTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastSpectatorSyncRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ClientCap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CheatManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CheatClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PlayerInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ActiveForceFeedbackEffects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_AsyncPhysicsDataClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_AsyncPhysicsDataComponent_DEPRECARED,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bPlayerIsWaiting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_NetPlayerIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_PendingSwapConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_NetConnection,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InputYawScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InputPitchScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InputRollScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bShowMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableClickEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMouseOverEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableTouchOverEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bForceFeedbackEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableMotionControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bEnableStreamingSource,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldActivate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bStreamingSourceShouldBlockOnSlowStreaming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourcePriority_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourcePriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourceDebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourceShapes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_StreamingSourceShapes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ForceFeedbackScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_ClickEventKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentMouseCursor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_DefaultClickTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentClickTraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_HitResultTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SeamlessTravelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_LastCompletedSeamlessTravelCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_InactiveStateInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bShouldPerformFullTickWhenPaused,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_CurrentTouchInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_OverridePlayerInputClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SpectatorPawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_bIsLocalPlayerController,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_Statics::NewProp_SpawnLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AController,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_Statics::ClassParams = {
	&APlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::PropPointers),
	0,
	0x008802A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerController()
{
	if (!Z_Registration_Info_UClass_APlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerController.OuterSingleton, Z_Construct_UClass_APlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerController.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<APlayerController>()
{
	return APlayerController::StaticClass();
}
void APlayerController::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TargetViewRotation(TEXT("TargetViewRotation"));
	static const FName Name_AsyncPhysicsDataComponent_DEPRECARED(TEXT("AsyncPhysicsDataComponent_DEPRECARED"));
	static const FName Name_SpawnLocation(TEXT("SpawnLocation"));
	const bool bIsValid = true
		&& Name_TargetViewRotation == ClassReps[(int32)ENetFields_Private::TargetViewRotation].Property->GetFName()
		&& Name_AsyncPhysicsDataComponent_DEPRECARED == ClassReps[(int32)ENetFields_Private::AsyncPhysicsDataComponent_DEPRECARED].Property->GetFName()
		&& Name_SpawnLocation == ClassReps[(int32)ENetFields_Private::SpawnLocation].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in APlayerController"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController);
APlayerController::~APlayerController() {}
// End Class APlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDynamicForceFeedbackAction_StaticEnum, TEXT("EDynamicForceFeedbackAction"), &Z_Registration_Info_UEnum_EDynamicForceFeedbackAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2284877327U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FUpdateLevelStreamingLevelStatus::StaticStruct, Z_Construct_UScriptStruct_FUpdateLevelStreamingLevelStatus_Statics::NewStructOps, TEXT("UpdateLevelStreamingLevelStatus"), &Z_Registration_Info_UScriptStruct_UpdateLevelStreamingLevelStatus, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUpdateLevelStreamingLevelStatus), 3506010777U) },
		{ FAsyncPhysicsTimestamp::StaticStruct, Z_Construct_UScriptStruct_FAsyncPhysicsTimestamp_Statics::NewStructOps, TEXT("AsyncPhysicsTimestamp"), &Z_Registration_Info_UScriptStruct_AsyncPhysicsTimestamp, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAsyncPhysicsTimestamp), 312180022U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerController, APlayerController::StaticClass, TEXT("APlayerController"), &Z_Registration_Info_UClass_APlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerController), 1464957747U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_244340211(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerController_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
