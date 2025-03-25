// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEventReference();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Class UAnimNotifyState Function GetDefaultTriggerWeightThreshold
struct AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms
{
	float ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold = FName(TEXT("GetDefaultTriggerWeightThreshold"));
float UAnimNotifyState::GetDefaultTriggerWeightThreshold() const
{
	AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms Parms;
	const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_GetDefaultTriggerWeightThreshold),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** TriggerWeightThreshold to use when creating notifies of this type */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "TriggerWeightThreshold to use when creating notifies of this type" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "GetDefaultTriggerWeightThreshold", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::PropPointers), sizeof(AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotifyState_eventGetDefaultTriggerWeightThreshold_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyState::execGetDefaultTriggerWeightThreshold)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDefaultTriggerWeightThreshold_Implementation();
	P_NATIVE_END;
}
// End Class UAnimNotifyState Function GetDefaultTriggerWeightThreshold

// Begin Class UAnimNotifyState Function GetNotifyName
struct AnimNotifyState_eventGetNotifyName_Parms
{
	FString ReturnValue;
};
static FName NAME_UAnimNotifyState_GetNotifyName = FName(TEXT("GetNotifyName"));
FString UAnimNotifyState::GetNotifyName() const
{
	AnimNotifyState_eventGetNotifyName_Parms Parms;
	const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_GetNotifyName),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Implementable event to get a custom name for the notify\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Implementable event to get a custom name for the notify" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventGetNotifyName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "GetNotifyName", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::PropPointers), sizeof(AnimNotifyState_eventGetNotifyName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C02, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotifyState_eventGetNotifyName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_GetNotifyName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_GetNotifyName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAnimNotifyState::execGetNotifyName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNotifyName_Implementation();
	P_NATIVE_END;
}
// End Class UAnimNotifyState Function GetNotifyName

// Begin Class UAnimNotifyState Function Received_NotifyBegin
struct AnimNotifyState_eventReceived_NotifyBegin_Parms
{
	USkeletalMeshComponent* MeshComp;
	UAnimSequenceBase* Animation;
	float TotalDuration;
	FAnimNotifyEventReference EventReference;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotifyState_eventReceived_NotifyBegin_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAnimNotifyState_Received_NotifyBegin = FName(TEXT("Received_NotifyBegin"));
bool UAnimNotifyState::Received_NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration, FAnimNotifyEventReference const& EventReference) const
{
	AnimNotifyState_eventReceived_NotifyBegin_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.Animation=Animation;
	Parms.TotalDuration=TotalDuration;
	Parms.EventReference=EventReference;
	const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyBegin),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyBegin_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimNotifyState_eventReceived_NotifyBegin_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_TotalDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyBegin", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::PropPointers), sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotifyState_eventReceived_NotifyBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAnimNotifyState Function Received_NotifyBegin

// Begin Class UAnimNotifyState Function Received_NotifyEnd
struct AnimNotifyState_eventReceived_NotifyEnd_Parms
{
	USkeletalMeshComponent* MeshComp;
	UAnimSequenceBase* Animation;
	FAnimNotifyEventReference EventReference;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotifyState_eventReceived_NotifyEnd_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAnimNotifyState_Received_NotifyEnd = FName(TEXT("Received_NotifyEnd"));
bool UAnimNotifyState::Received_NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, FAnimNotifyEventReference const& EventReference) const
{
	AnimNotifyState_eventReceived_NotifyEnd_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.Animation=Animation;
	Parms.EventReference=EventReference;
	const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyEnd),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyEnd_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimNotifyState_eventReceived_NotifyEnd_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyEnd", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::PropPointers), sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotifyState_eventReceived_NotifyEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAnimNotifyState Function Received_NotifyEnd

// Begin Class UAnimNotifyState Function Received_NotifyTick
struct AnimNotifyState_eventReceived_NotifyTick_Parms
{
	USkeletalMeshComponent* MeshComp;
	UAnimSequenceBase* Animation;
	float FrameDeltaTime;
	FAnimNotifyEventReference EventReference;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	AnimNotifyState_eventReceived_NotifyTick_Parms()
		: ReturnValue(false)
	{
	}
};
static FName NAME_UAnimNotifyState_Received_NotifyTick = FName(TEXT("Received_NotifyTick"));
bool UAnimNotifyState::Received_NotifyTick(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float FrameDeltaTime, FAnimNotifyEventReference const& EventReference) const
{
	AnimNotifyState_eventReceived_NotifyTick_Parms Parms;
	Parms.MeshComp=MeshComp;
	Parms.Animation=Animation;
	Parms.FrameDeltaTime=FrameDeltaTime;
	Parms.EventReference=EventReference;
	const_cast<UAnimNotifyState*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Received_NotifyTick),&Parms);
	return !!Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "EventReference" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameDeltaTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventReference;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComp_MetaData), NewProp_MeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_FrameDeltaTime = { "FrameDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, FrameDeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference = { "EventReference", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AnimNotifyState_eventReceived_NotifyTick_Parms, EventReference), Z_Construct_UScriptStruct_FAnimNotifyEventReference, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventReference_MetaData), NewProp_EventReference_MetaData) }; // 3961895738
void Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AnimNotifyState_eventReceived_NotifyTick_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_MeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_Animation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_FrameDeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_EventReference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState, nullptr, "Received_NotifyTick", nullptr, nullptr, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::PropPointers), sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(AnimNotifyState_eventReceived_NotifyTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAnimNotifyState Function Received_NotifyTick

// Begin Class UAnimNotifyState
void UAnimNotifyState::StaticRegisterNativesUAnimNotifyState()
{
	UClass* Class = UAnimNotifyState::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDefaultTriggerWeightThreshold", &UAnimNotifyState::execGetDefaultTriggerWeightThreshold },
		{ "GetNotifyName", &UAnimNotifyState::execGetNotifyName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState);
UClass* Z_Construct_UClass_UAnimNotifyState_NoRegister()
{
	return UAnimNotifyState::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ShowWorldContextPin", "" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotifyColor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Color of Notify in editor */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Color of Notify in editor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFireInEditor_MetaData[] = {
		{ "Category", "AnimNotify" },
		{ "Comment", "/** Whether this notify state instance should fire in animation editors */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState.h" },
		{ "ToolTip", "Whether this notify state instance should fire in animation editors" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotifyColor;
	static void NewProp_bShouldFireInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFireInEditor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_GetDefaultTriggerWeightThreshold, "GetDefaultTriggerWeightThreshold" }, // 2031675993
		{ &Z_Construct_UFunction_UAnimNotifyState_GetNotifyName, "GetNotifyName" }, // 1543597311
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyBegin, "Received_NotifyBegin" }, // 1160082232
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyEnd, "Received_NotifyEnd" }, // 3777406570
		{ &Z_Construct_UFunction_UAnimNotifyState_Received_NotifyTick, "Received_NotifyTick" }, // 4182511297
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor = { "NotifyColor", nullptr, (EPropertyFlags)0x0010000800000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState, NotifyColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotifyColor_MetaData), NewProp_NotifyColor_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_SetBit(void* Obj)
{
	((UAnimNotifyState*)Obj)->bShouldFireInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor = { "bShouldFireInEditor", nullptr, (EPropertyFlags)0x0010040800000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState), &Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShouldFireInEditor_MetaData), NewProp_bShouldFireInEditor_MetaData) };
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_NotifyColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Statics::NewProp_bShouldFireInEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers) < 2048);
#endif // WITH_EDITORONLY_DATA
UObject* (*const Z_Construct_UClass_UAnimNotifyState_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams = {
	&UAnimNotifyState::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers, nullptr),
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::PropPointers), 0),
	0,
	0x000930A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAnimNotifyState>()
{
	return UAnimNotifyState::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState);
UAnimNotifyState::~UAnimNotifyState() {}
// End Class UAnimNotifyState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState, UAnimNotifyState::StaticClass, TEXT("UAnimNotifyState"), &Z_Registration_Info_UClass_UAnimNotifyState, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState), 2675064859U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_1390062451(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
