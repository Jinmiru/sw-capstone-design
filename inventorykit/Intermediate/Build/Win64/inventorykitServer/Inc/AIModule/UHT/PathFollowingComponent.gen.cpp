// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathFollowingComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIResourceInterface_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent();
AIMODULE_API UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingAction();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult();
AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UNavMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavigationData_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Enum EPathFollowingStatus
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingStatus;
static UEnum* EPathFollowingStatus_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingStatus, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingStatus"));
	}
	return Z_Registration_Info_UEnum_EPathFollowingStatus.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingStatus::Type>()
{
	return EPathFollowingStatus_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Idle.Comment", "/** No requests */" },
		{ "Idle.Name", "EPathFollowingStatus::Idle" },
		{ "Idle.ToolTip", "No requests" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "Moving.Comment", "/** Following path */" },
		{ "Moving.Name", "EPathFollowingStatus::Moving" },
		{ "Moving.ToolTip", "Following path" },
		{ "Paused.Comment", "/** Request paused, will continue after ResumeMove() */" },
		{ "Paused.Name", "EPathFollowingStatus::Paused" },
		{ "Paused.ToolTip", "Request paused, will continue after ResumeMove()" },
		{ "Waiting.Comment", "/** Request with incomplete path, will start after UpdateMove() */" },
		{ "Waiting.Name", "EPathFollowingStatus::Waiting" },
		{ "Waiting.ToolTip", "Request with incomplete path, will start after UpdateMove()" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathFollowingStatus::Idle", (int64)EPathFollowingStatus::Idle },
		{ "EPathFollowingStatus::Waiting", (int64)EPathFollowingStatus::Waiting },
		{ "EPathFollowingStatus::Paused", (int64)EPathFollowingStatus::Paused },
		{ "EPathFollowingStatus::Moving", (int64)EPathFollowingStatus::Moving },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPathFollowingStatus",
	"EPathFollowingStatus::Type",
	Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPathFollowingStatus()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingStatus_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathFollowingStatus.InnerSingleton;
}
// End Enum EPathFollowingStatus

// Begin Enum EPathFollowingResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingResult;
static UEnum* EPathFollowingResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingResult"));
	}
	return Z_Registration_Info_UEnum_EPathFollowingResult.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingResult::Type>()
{
	return EPathFollowingResult_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Aborted.Comment", "/** Aborted and stopped (failure) */" },
		{ "Aborted.Name", "EPathFollowingResult::Aborted" },
		{ "Aborted.ToolTip", "Aborted and stopped (failure)" },
		{ "Blocked.Comment", "/** Movement was blocked */" },
		{ "Blocked.Name", "EPathFollowingResult::Blocked" },
		{ "Blocked.ToolTip", "Movement was blocked" },
		{ "BlueprintType", "true" },
		{ "Invalid.Comment", "/** Request was invalid */" },
		{ "Invalid.Name", "EPathFollowingResult::Invalid" },
		{ "Invalid.ToolTip", "Request was invalid" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "OffPath.Comment", "/** Agent is not on path */" },
		{ "OffPath.Name", "EPathFollowingResult::OffPath" },
		{ "OffPath.ToolTip", "Agent is not on path" },
		{ "Skipped_DEPRECATED.Comment", "/** DEPRECATED, use Aborted result instead */" },
		{ "Skipped_DEPRECATED.Hidden", "" },
		{ "Skipped_DEPRECATED.Name", "EPathFollowingResult::Skipped_DEPRECATED" },
		{ "Skipped_DEPRECATED.ToolTip", "DEPRECATED, use Aborted result instead" },
		{ "Success.Comment", "/** Reached destination */" },
		{ "Success.Name", "EPathFollowingResult::Success" },
		{ "Success.ToolTip", "Reached destination" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathFollowingResult::Success", (int64)EPathFollowingResult::Success },
		{ "EPathFollowingResult::Blocked", (int64)EPathFollowingResult::Blocked },
		{ "EPathFollowingResult::OffPath", (int64)EPathFollowingResult::OffPath },
		{ "EPathFollowingResult::Aborted", (int64)EPathFollowingResult::Aborted },
		{ "EPathFollowingResult::Skipped_DEPRECATED", (int64)EPathFollowingResult::Skipped_DEPRECATED },
		{ "EPathFollowingResult::Invalid", (int64)EPathFollowingResult::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPathFollowingResult",
	"EPathFollowingResult::Type",
	Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPathFollowingResult()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathFollowingResult.InnerSingleton;
}
// End Enum EPathFollowingResult

// Begin Enum EPathFollowingAction
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingAction;
static UEnum* EPathFollowingAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingAction, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingAction"));
	}
	return Z_Registration_Info_UEnum_EPathFollowingAction.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingAction::Type>()
{
	return EPathFollowingAction_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// DEPRECATED, will be removed with GetPathActionType function\n" },
		{ "DirectMove.Name", "EPathFollowingAction::DirectMove" },
		{ "Error.Name", "EPathFollowingAction::Error" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "NoMove.Name", "EPathFollowingAction::NoMove" },
		{ "PartialPath.Name", "EPathFollowingAction::PartialPath" },
		{ "PathToGoal.Name", "EPathFollowingAction::PathToGoal" },
		{ "ToolTip", "DEPRECATED, will be removed with GetPathActionType function" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathFollowingAction::Error", (int64)EPathFollowingAction::Error },
		{ "EPathFollowingAction::NoMove", (int64)EPathFollowingAction::NoMove },
		{ "EPathFollowingAction::DirectMove", (int64)EPathFollowingAction::DirectMove },
		{ "EPathFollowingAction::PartialPath", (int64)EPathFollowingAction::PartialPath },
		{ "EPathFollowingAction::PathToGoal", (int64)EPathFollowingAction::PathToGoal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPathFollowingAction",
	"EPathFollowingAction::Type",
	Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPathFollowingAction()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathFollowingAction.InnerSingleton;
}
// End Enum EPathFollowingAction

// Begin Enum EPathFollowingRequestResult
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPathFollowingRequestResult;
static UEnum* EPathFollowingRequestResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EPathFollowingRequestResult"));
	}
	return Z_Registration_Info_UEnum_EPathFollowingRequestResult.OuterSingleton;
}
template<> AIMODULE_API UEnum* StaticEnum<EPathFollowingRequestResult::Type>()
{
	return EPathFollowingRequestResult_StaticEnum();
}
struct Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "AlreadyAtGoal.Name", "EPathFollowingRequestResult::AlreadyAtGoal" },
		{ "BlueprintType", "true" },
		{ "Failed.Name", "EPathFollowingRequestResult::Failed" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "RequestSuccessful.Name", "EPathFollowingRequestResult::RequestSuccessful" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EPathFollowingRequestResult::Failed", (int64)EPathFollowingRequestResult::Failed },
		{ "EPathFollowingRequestResult::AlreadyAtGoal", (int64)EPathFollowingRequestResult::AlreadyAtGoal },
		{ "EPathFollowingRequestResult::RequestSuccessful", (int64)EPathFollowingRequestResult::RequestSuccessful },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	"EPathFollowingRequestResult",
	"EPathFollowingRequestResult::Type",
	Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_AIModule_EPathFollowingRequestResult()
{
	if (!Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton, Z_Construct_UEnum_AIModule_EPathFollowingRequestResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EPathFollowingRequestResult.InnerSingleton;
}
// End Enum EPathFollowingRequestResult

// Begin Class UPathFollowingComponent Function GetPathActionType
struct Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics
{
	struct PathFollowingComponent_eventGetPathActionType_Parms
	{
		TEnumAsByte<EPathFollowingAction::Type> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PathFollowing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now deprecated, please use AIController.GetMoveStatus instead" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventGetPathActionType_Parms, ReturnValue), Z_Construct_UEnum_AIModule_EPathFollowingAction, METADATA_PARAMS(0, nullptr) }; // 1128298502
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "GetPathActionType", nullptr, nullptr, Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PathFollowingComponent_eventGetPathActionType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::PathFollowingComponent_eventGetPathActionType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFollowingComponent::execGetPathActionType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<EPathFollowingAction::Type>*)Z_Param__Result=P_THIS->GetPathActionType();
	P_NATIVE_END;
}
// End Class UPathFollowingComponent Function GetPathActionType

// Begin Class UPathFollowingComponent Function GetPathDestination
struct Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics
{
	struct PathFollowingComponent_eventGetPathDestination_Parms
	{
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PathFollowing" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is now deprecated, please use AIController.GetImmediateMoveDestination instead" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventGetPathDestination_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "GetPathDestination", nullptr, nullptr, Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PathFollowingComponent_eventGetPathDestination_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::PathFollowingComponent_eventGetPathDestination_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFollowingComponent::execGetPathDestination)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetPathDestination();
	P_NATIVE_END;
}
// End Class UPathFollowingComponent Function GetPathDestination

// Begin Class UPathFollowingComponent Function OnActorBump
struct Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics
{
	struct PathFollowingComponent_eventOnActorBump_Parms
	{
		AActor* SelfActor;
		AActor* OtherActor;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** called when moving agent collides with another actor */" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "called when moving agent collides with another actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_SelfActor = { "SelfActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, SelfActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnActorBump_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_SelfActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "OnActorBump", nullptr, nullptr, Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PathFollowingComponent_eventOnActorBump_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::PathFollowingComponent_eventOnActorBump_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnActorBump()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_OnActorBump_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFollowingComponent::execOnActorBump)
{
	P_GET_OBJECT(AActor,Z_Param_SelfActor);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnActorBump(Z_Param_SelfActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// End Class UPathFollowingComponent Function OnActorBump

// Begin Class UPathFollowingComponent Function OnNavDataRegistered
struct Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics
{
	struct PathFollowingComponent_eventOnNavDataRegistered_Parms
	{
		ANavigationData* NavData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** called when NavigationSystem registers new navigation data type while this component\n\x09 *\x09instance has empty MyNavData. This is usually the case for AI agents hand-placed\n\x09 *\x09on levels. */" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "called when NavigationSystem registers new navigation data type while this component\n    instance has empty MyNavData. This is usually the case for AI agents hand-placed\n    on levels." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NavData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::NewProp_NavData = { "NavData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PathFollowingComponent_eventOnNavDataRegistered_Parms, NavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::NewProp_NavData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPathFollowingComponent, nullptr, "OnNavDataRegistered", nullptr, nullptr, Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PathFollowingComponent_eventOnNavDataRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::PathFollowingComponent_eventOnNavDataRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPathFollowingComponent::execOnNavDataRegistered)
{
	P_GET_OBJECT(ANavigationData,Z_Param_NavData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNavDataRegistered(Z_Param_NavData);
	P_NATIVE_END;
}
// End Class UPathFollowingComponent Function OnNavDataRegistered

// Begin Class UPathFollowingComponent
void UPathFollowingComponent::StaticRegisterNativesUPathFollowingComponent()
{
	UClass* Class = UPathFollowingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPathActionType", &UPathFollowingComponent::execGetPathActionType },
		{ "GetPathDestination", &UPathFollowingComponent::execGetPathDestination },
		{ "OnActorBump", &UPathFollowingComponent::execOnActorBump },
		{ "OnNavDataRegistered", &UPathFollowingComponent::execOnNavDataRegistered },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPathFollowingComponent);
UClass* Z_Construct_UClass_UPathFollowingComponent_NoRegister()
{
	return UPathFollowingComponent::StaticClass();
}
struct Z_Construct_UClass_UPathFollowingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Navigation/PathFollowingComponent.h" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "Comment", "/** associated movement component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "associated movement component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MyNavData_MetaData[] = {
		{ "Comment", "/** navigation data for agent described in movement component */" },
		{ "ModuleRelativePath", "Classes/Navigation/PathFollowingComponent.h" },
		{ "ToolTip", "navigation data for agent described in movement component" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MyNavData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPathFollowingComponent_GetPathActionType, "GetPathActionType" }, // 1945266560
		{ &Z_Construct_UFunction_UPathFollowingComponent_GetPathDestination, "GetPathDestination" }, // 1055691595
		{ &Z_Construct_UFunction_UPathFollowingComponent_OnActorBump, "OnActorBump" }, // 3110710388
		{ &Z_Construct_UFunction_UPathFollowingComponent_OnNavDataRegistered, "OnNavDataRegistered" }, // 2718265182
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathFollowingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0124080000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFollowingComponent, MovementComp), Z_Construct_UClass_UNavMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData = { "MyNavData", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPathFollowingComponent, MyNavData), Z_Construct_UClass_ANavigationData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MyNavData_MetaData), NewProp_MyNavData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPathFollowingComponent_Statics::NewProp_MyNavData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPathFollowingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPathFollowingComponent_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UAIResourceInterface_NoRegister, (int32)VTABLE_OFFSET(UPathFollowingComponent, IAIResourceInterface), false },  // 1205303296
	{ Z_Construct_UClass_UPathFollowingAgentInterface_NoRegister, (int32)VTABLE_OFFSET(UPathFollowingComponent, IPathFollowingAgentInterface), false },  // 3502078145
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams = {
	&UPathFollowingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPathFollowingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPathFollowingComponent()
{
	if (!Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton, Z_Construct_UClass_UPathFollowingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPathFollowingComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UPathFollowingComponent>()
{
	return UPathFollowingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPathFollowingComponent);
UPathFollowingComponent::~UPathFollowingComponent() {}
// End Class UPathFollowingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EPathFollowingStatus_StaticEnum, TEXT("EPathFollowingStatus"), &Z_Registration_Info_UEnum_EPathFollowingStatus, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1429550023U) },
		{ EPathFollowingResult_StaticEnum, TEXT("EPathFollowingResult"), &Z_Registration_Info_UEnum_EPathFollowingResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3125870747U) },
		{ EPathFollowingAction_StaticEnum, TEXT("EPathFollowingAction"), &Z_Registration_Info_UEnum_EPathFollowingAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1128298502U) },
		{ EPathFollowingRequestResult_StaticEnum, TEXT("EPathFollowingRequestResult"), &Z_Registration_Info_UEnum_EPathFollowingRequestResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3122571778U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPathFollowingComponent, UPathFollowingComponent::StaticClass, TEXT("UPathFollowingComponent"), &Z_Registration_Info_UClass_UPathFollowingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPathFollowingComponent), 2016726736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_1480039811(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Navigation_PathFollowingComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
