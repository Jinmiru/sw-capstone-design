// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimelineComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveLinearColor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent();
ENGINE_API UClass* Z_Construct_UClass_UTimelineComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineDirection();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Delegate FOnTimelineEvent
struct Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle a timeline 'event' */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle a timeline 'event'" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineEvent__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimelineEvent_DelegateWrapper(const FScriptDelegate& OnTimelineEvent)
{
	OnTimelineEvent.ProcessDelegate<UObject>(NULL);
}
// End Delegate FOnTimelineEvent

// Begin Delegate FOnTimelineFloat
struct Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnTimelineFloat_Parms
	{
		float Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle timeline float track */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle timeline float track" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnTimelineFloat_Parms, Output), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineFloat__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::_Script_Engine_eventOnTimelineFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::_Script_Engine_eventOnTimelineFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimelineFloat_DelegateWrapper(const FScriptDelegate& OnTimelineFloat, float Output)
{
	struct _Script_Engine_eventOnTimelineFloat_Parms
	{
		float Output;
	};
	_Script_Engine_eventOnTimelineFloat_Parms Parms;
	Parms.Output=Output;
	OnTimelineFloat.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnTimelineFloat

// Begin Delegate FOnTimelineVector
struct Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnTimelineVector_Parms
	{
		FVector Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle timeline vector track */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle timeline vector track" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnTimelineVector_Parms, Output), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineVector__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::_Script_Engine_eventOnTimelineVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::_Script_Engine_eventOnTimelineVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimelineVector_DelegateWrapper(const FScriptDelegate& OnTimelineVector, FVector Output)
{
	struct _Script_Engine_eventOnTimelineVector_Parms
	{
		FVector Output;
	};
	_Script_Engine_eventOnTimelineVector_Parms Parms;
	Parms.Output=Output;
	OnTimelineVector.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnTimelineVector

// Begin Delegate FOnTimelineLinearColor
struct Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics
{
	struct _Script_Engine_eventOnTimelineLinearColor_Parms
	{
		FLinearColor Output;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** Signature of function to handle linear color track */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Signature of function to handle linear color track" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Output;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Engine_eventOnTimelineLinearColor_Parms, Output), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::NewProp_Output,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Engine, nullptr, "OnTimelineLinearColor__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::_Script_Engine_eventOnTimelineLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::_Script_Engine_eventOnTimelineLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTimelineLinearColor_DelegateWrapper(const FScriptDelegate& OnTimelineLinearColor, FLinearColor Output)
{
	struct _Script_Engine_eventOnTimelineLinearColor_Parms
	{
		FLinearColor Output;
	};
	_Script_Engine_eventOnTimelineLinearColor_Parms Parms;
	Parms.Output=Output;
	OnTimelineLinearColor.ProcessDelegate<UObject>(&Parms);
}
// End Delegate FOnTimelineLinearColor

// Begin Enum ETimelineLengthMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimelineLengthMode;
static UEnum* ETimelineLengthMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineLengthMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineLengthMode"));
	}
	return Z_Registration_Info_UEnum_ETimelineLengthMode.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETimelineLengthMode>()
{
	return ETimelineLengthMode_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Comment", "/** Whether or not the timeline should be finished after the specified length, or the last keyframe in the tracks */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "TL_LastKeyFrame.Name", "TL_LastKeyFrame" },
		{ "TL_TimelineLength.Name", "TL_TimelineLength" },
		{ "ToolTip", "Whether or not the timeline should be finished after the specified length, or the last keyframe in the tracks" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "TL_TimelineLength", (int64)TL_TimelineLength },
		{ "TL_LastKeyFrame", (int64)TL_LastKeyFrame },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETimelineLengthMode",
	"ETimelineLengthMode",
	Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Regular,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETimelineLengthMode()
{
	if (!Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton, Z_Construct_UEnum_Engine_ETimelineLengthMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETimelineLengthMode.InnerSingleton;
}
// End Enum ETimelineLengthMode

// Begin Enum ETimelineDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimelineDirection;
static UEnum* ETimelineDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_ETimelineDirection, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ETimelineDirection"));
	}
	return Z_Registration_Info_UEnum_ETimelineDirection.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<ETimelineDirection::Type>()
{
	return ETimelineDirection_StaticEnum();
}
struct Z_Construct_UEnum_Engine_ETimelineDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Name", "ETimelineDirection::Backward" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** Does timeline play or reverse ? */" },
		{ "Forward.Name", "ETimelineDirection::Forward" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Does timeline play or reverse ?" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETimelineDirection::Forward", (int64)ETimelineDirection::Forward },
		{ "ETimelineDirection::Backward", (int64)ETimelineDirection::Backward },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_ETimelineDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"ETimelineDirection",
	"ETimelineDirection::Type",
	Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::Namespaced,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_ETimelineDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_ETimelineDirection()
{
	if (!Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton, Z_Construct_UEnum_Engine_ETimelineDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETimelineDirection.InnerSingleton;
}
// End Enum ETimelineDirection

// Begin ScriptStruct FTimelineEventEntry
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineEventEntry;
class UScriptStruct* FTimelineEventEntry::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineEventEntry.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineEventEntry.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineEventEntry, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineEventEntry"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineEventEntry.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineEventEntry>()
{
	return FTimelineEventEntry::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimelineEventEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for an 'event' during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for an 'event' during the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[] = {
		{ "Comment", "/** Time at which event should fire */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Time at which event should fire" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventFunc_MetaData[] = {
		{ "Comment", "/** Function to execute when Time is reached */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function to execute when Time is reached" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_EventFunc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineEventEntry>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineEventEntry, Time), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Time_MetaData), NewProp_Time_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc = { "EventFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineEventEntry, EventFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventFunc_MetaData), NewProp_EventFunc_MetaData) }; // 862519175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewProp_EventFunc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TimelineEventEntry",
	Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::PropPointers),
	sizeof(FTimelineEventEntry),
	alignof(FTimelineEventEntry),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimelineEventEntry()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineEventEntry.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineEventEntry.InnerSingleton, Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimelineEventEntry.InnerSingleton;
}
// End ScriptStruct FTimelineEventEntry

// Begin ScriptStruct FTimelineVectorTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineVectorTrack;
class UScriptStruct* FTimelineVectorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineVectorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineVectorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineVectorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineVectorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineVectorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineVectorTrack>()
{
	return FTimelineVectorTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for each vector interpolation performed by the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorCurve_MetaData[] = {
		{ "Comment", "/** Vector curve to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Vector curve to be evaluated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[] = {
		{ "Comment", "/** Function that the output from ValueCurve will be passed to */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpVectorCurve function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VectorPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property that we should update from this curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VectorCurve;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VectorPropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineVectorTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve = { "VectorCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineVectorTrack, VectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorCurve_MetaData), NewProp_VectorCurve_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineVectorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpFunc_MetaData), NewProp_InterpFunc_MetaData) }; // 1402349364
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineVectorTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName = { "VectorPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineVectorTrack, VectorPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VectorPropertyName_MetaData), NewProp_VectorPropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_InterpFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewProp_VectorPropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TimelineVectorTrack",
	Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::PropPointers),
	sizeof(FTimelineVectorTrack),
	alignof(FTimelineVectorTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimelineVectorTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineVectorTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineVectorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimelineVectorTrack.InnerSingleton;
}
// End ScriptStruct FTimelineVectorTrack

// Begin ScriptStruct FTimelineFloatTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineFloatTrack;
class UScriptStruct* FTimelineFloatTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineFloatTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineFloatTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineFloatTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineFloatTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineFloatTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineFloatTrack>()
{
	return FTimelineFloatTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for each vector interpolation performed by the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each vector interpolation performed by the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Float curve to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Float curve to be evaluated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[] = {
		{ "Comment", "/** Function that the output from ValueCurve will be passed to */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of track, usually set in Timeline Editor. Used by SetInterpFloatCurve function. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpFloatCurve function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FloatPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property that we should update from this curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FloatPropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineFloatTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineFloatTrack, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatCurve_MetaData), NewProp_FloatCurve_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineFloatTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpFunc_MetaData), NewProp_InterpFunc_MetaData) }; // 2854256714
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineFloatTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName = { "FloatPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineFloatTrack, FloatPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FloatPropertyName_MetaData), NewProp_FloatPropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_InterpFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewProp_FloatPropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TimelineFloatTrack",
	Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::PropPointers),
	sizeof(FTimelineFloatTrack),
	alignof(FTimelineFloatTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimelineFloatTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineFloatTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineFloatTrack.InnerSingleton, Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimelineFloatTrack.InnerSingleton;
}
// End ScriptStruct FTimelineFloatTrack

// Begin ScriptStruct FTimelineLinearColorTrack
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack;
class UScriptStruct* FTimelineLinearColorTrack::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimelineLinearColorTrack, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("TimelineLinearColorTrack"));
	}
	return Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimelineLinearColorTrack>()
{
	return FTimelineLinearColorTrack::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that contains one entry for each linear color interpolation performed by the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Struct that contains one entry for each linear color interpolation performed by the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorCurve_MetaData[] = {
		{ "Comment", "/** Float curve to be evaluated */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Float curve to be evaluated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpFunc_MetaData[] = {
		{ "Comment", "/** Function that the output from ValueCurve will be passed to */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Function that the output from ValueCurve will be passed to" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackName_MetaData[] = {
		{ "Comment", "/** Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of track, usually set in Timeline Editor. Used by SetInterpLinearColorCurve function." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LinearColorPropertyName_MetaData[] = {
		{ "Comment", "/** Name of property that we should update from this curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Name of property that we should update from this curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinearColorCurve;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinearColorPropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimelineLinearColorTrack>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve = { "LinearColorCurve", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearColorCurve_MetaData), NewProp_LinearColorCurve_MetaData) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineLinearColorTrack, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpFunc_MetaData), NewProp_InterpFunc_MetaData) }; // 1162083193
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineLinearColorTrack, TrackName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackName_MetaData), NewProp_TrackName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName = { "LinearColorPropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimelineLinearColorTrack, LinearColorPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LinearColorPropertyName_MetaData), NewProp_LinearColorPropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_InterpFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_TrackName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewProp_LinearColorPropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"TimelineLinearColorTrack",
	Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::PropPointers),
	sizeof(FTimelineLinearColorTrack),
	alignof(FTimelineLinearColorTrack),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimelineLinearColorTrack()
{
	if (!Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.InnerSingleton, Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack.InnerSingleton;
}
// End ScriptStruct FTimelineLinearColorTrack

// Begin ScriptStruct FTimeline
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Timeline;
class UScriptStruct* FTimeline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Timeline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Timeline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeline, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("Timeline"));
	}
	return Z_Registration_Info_UScriptStruct_Timeline.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FTimeline>()
{
	return FTimeline::StaticStruct();
}
struct Z_Construct_UScriptStruct_FTimeline_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LengthMode_MetaData[] = {
		{ "Comment", "/** Specified how the timeline determines its own length (e.g. specified length, last keyframe) */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Specified how the timeline determines its own length (e.g. specified length, last keyframe)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[] = {
		{ "Comment", "/** Whether timeline should loop when it reaches the end, or stop */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Whether timeline should loop when it reaches the end, or stop" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReversePlayback_MetaData[] = {
		{ "Comment", "/** If playback should move the current position backwards instead of forwards */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "If playback should move the current position backwards instead of forwards" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPlaying_MetaData[] = {
		{ "Comment", "/** Are we currently playing (moving Position) */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Are we currently playing (moving Position)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[] = {
		{ "Comment", "/** How long the timeline is, will stop or loop at the end */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "How long the timeline is, will stop or loop at the end" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[] = {
		{ "Comment", "/** How fast we should play through the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "How fast we should play through the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Position_MetaData[] = {
		{ "Comment", "/** Current position in the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Current position in the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "Comment", "/** Array of events that are fired at various times during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of events that are fired at various times during the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpVectors_MetaData[] = {
		{ "Comment", "/** Array of vector interpolations performed during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of vector interpolations performed during the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpFloats_MetaData[] = {
		{ "Comment", "/** Array of float interpolations performed during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of float interpolations performed during the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InterpLinearColors_MetaData[] = {
		{ "Comment", "/** Array of linear color interpolations performed during the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Array of linear color interpolations performed during the timeline" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelinePostUpdateFunc_MetaData[] = {
		{ "Comment", "/** Called whenever this timeline is playing and updates - done after all delegates are executed and variables updated  */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Called whenever this timeline is playing and updates - done after all delegates are executed and variables updated" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimelineFinishedFunc_MetaData[] = {
		{ "Comment", "/** Called whenever this timeline is finished. Is not called if 'stop' is used to terminate timeline early  */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Called whenever this timeline is finished. Is not called if 'stop' is used to terminate timeline early" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PropertySetObject_MetaData[] = {
		{ "Comment", "/**\x09Optional. If set, Timeline will also set float/vector properties on this object using the PropertyName set in the tracks. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Optional. If set, Timeline will also set float/vector properties on this object using the PropertyName set in the tracks." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionPropertyName_MetaData[] = {
		{ "Comment", "/**\x09Optional. If set, Timeline will also set ETimelineDirection property on PropertySetObject using the name. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Optional. If set, Timeline will also set ETimelineDirection property on PropertySetObject using the name." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_LengthMode;
	static void NewProp_bLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
	static void NewProp_bReversePlayback_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReversePlayback;
	static void NewProp_bPlaying_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlaying;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Position;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpVectors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpVectors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpFloats_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpFloats;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InterpLinearColors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InterpLinearColors;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimelinePostUpdateFunc;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_TimelineFinishedFunc;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_PropertySetObject;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DirectionPropertyName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeline>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode = { "LengthMode", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, LengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LengthMode_MetaData), NewProp_LengthMode_MetaData) }; // 3815588061
void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit(void* Obj)
{
	((FTimeline*)Obj)->bLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLooping_MetaData), NewProp_bLooping_MetaData) };
void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit(void* Obj)
{
	((FTimeline*)Obj)->bReversePlayback = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback = { "bReversePlayback", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReversePlayback_MetaData), NewProp_bReversePlayback_MetaData) };
void Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit(void* Obj)
{
	((FTimeline*)Obj)->bPlaying = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying = { "bPlaying", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(FTimeline), &Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPlaying_MetaData), NewProp_bPlaying_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, Length), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Length_MetaData), NewProp_Length_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, PlayRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayRate_MetaData), NewProp_PlayRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position = { "Position", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, Position), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Position_MetaData), NewProp_Position_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimelineEventEntry, METADATA_PARAMS(0, nullptr) }; // 295098517
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 295098517
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_Inner = { "InterpVectors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimelineVectorTrack, METADATA_PARAMS(0, nullptr) }; // 1859305919
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors = { "InterpVectors", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, InterpVectors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpVectors_MetaData), NewProp_InterpVectors_MetaData) }; // 1859305919
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_Inner = { "InterpFloats", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimelineFloatTrack, METADATA_PARAMS(0, nullptr) }; // 3396701233
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats = { "InterpFloats", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, InterpFloats), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpFloats_MetaData), NewProp_InterpFloats_MetaData) }; // 3396701233
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_Inner = { "InterpLinearColors", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FTimelineLinearColorTrack, METADATA_PARAMS(0, nullptr) }; // 1396604242
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors = { "InterpLinearColors", nullptr, (EPropertyFlags)0x0040008080000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, InterpLinearColors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InterpLinearColors_MetaData), NewProp_InterpLinearColors_MetaData) }; // 1396604242
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc = { "TimelinePostUpdateFunc", nullptr, (EPropertyFlags)0x0040000080080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, TimelinePostUpdateFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelinePostUpdateFunc_MetaData), NewProp_TimelinePostUpdateFunc_MetaData) }; // 862519175
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc = { "TimelineFinishedFunc", nullptr, (EPropertyFlags)0x0040000080080000, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, TimelineFinishedFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimelineFinishedFunc_MetaData), NewProp_TimelineFinishedFunc_MetaData) }; // 862519175
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject = { "PropertySetObject", nullptr, (EPropertyFlags)0x0044000080000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, PropertySetObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PropertySetObject_MetaData), NewProp_PropertySetObject_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName = { "DirectionPropertyName", nullptr, (EPropertyFlags)0x0040000080000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FTimeline, DirectionPropertyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionPropertyName_MetaData), NewProp_DirectionPropertyName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_LengthMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bLooping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bReversePlayback,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_bPlaying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Length,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PlayRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Position,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_Events,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpVectors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpFloats,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_InterpLinearColors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelinePostUpdateFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_TimelineFinishedFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_PropertySetObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeline_Statics::NewProp_DirectionPropertyName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeline_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"Timeline",
	Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::PropPointers),
	sizeof(FTimeline),
	alignof(FTimeline),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FTimeline_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FTimeline()
{
	if (!Z_Registration_Info_UScriptStruct_Timeline.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Timeline.InnerSingleton, Z_Construct_UScriptStruct_FTimeline_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_Timeline.InnerSingleton;
}
// End ScriptStruct FTimeline

// Begin Class UTimelineComponent Function AddEvent
struct Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics
{
	struct TimelineComponent_eventAddEvent_Parms
	{
		float Time;
		FScriptDelegate EventFunc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Add a callback event to the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Add a callback event to the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_EventFunc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddEvent_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::NewProp_EventFunc = { "EventFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddEvent_Parms, EventFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 862519175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::NewProp_Time,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::NewProp_EventFunc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "AddEvent", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::TimelineComponent_eventAddEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::TimelineComponent_eventAddEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_AddEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_AddEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execAddEvent)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Time);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_EventFunc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddEvent(Z_Param_Time,FOnTimelineEvent(Z_Param_EventFunc));
	P_NATIVE_END;
}
// End Class UTimelineComponent Function AddEvent

// Begin Class UTimelineComponent Function AddInterpFloat
struct Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics
{
	struct TimelineComponent_eventAddInterpFloat_Parms
	{
		UCurveFloat* FloatCurve;
		FScriptDelegate InterpFunc;
		FName PropertyName;
		FName TrackName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Add a float interpolation to the timeline */" },
		{ "CPP_Default_PropertyName", "None" },
		{ "CPP_Default_TrackName", "None" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Add a float interpolation to the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FloatCurve;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpFloat_Parms, FloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpFloat_Parms, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineFloat__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 2854256714
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpFloat_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpFloat_Parms, TrackName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_FloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_InterpFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::NewProp_TrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "AddInterpFloat", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::TimelineComponent_eventAddInterpFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::TimelineComponent_eventAddInterpFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_AddInterpFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_AddInterpFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execAddInterpFloat)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_FloatCurve);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InterpFunc);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInterpFloat(Z_Param_FloatCurve,FOnTimelineFloat(Z_Param_InterpFunc),Z_Param_PropertyName,Z_Param_TrackName);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function AddInterpFloat

// Begin Class UTimelineComponent Function AddInterpLinearColor
struct Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics
{
	struct TimelineComponent_eventAddInterpLinearColor_Parms
	{
		UCurveLinearColor* LinearColorCurve;
		FScriptDelegate InterpFunc;
		FName PropertyName;
		FName TrackName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Add a linear color interpolation to the timeline */" },
		{ "CPP_Default_PropertyName", "None" },
		{ "CPP_Default_TrackName", "None" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Add a linear color interpolation to the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LinearColorCurve;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_LinearColorCurve = { "LinearColorCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpLinearColor_Parms, LinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpLinearColor_Parms, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineLinearColor__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1162083193
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpLinearColor_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpLinearColor_Parms, TrackName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_LinearColorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_InterpFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::NewProp_TrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "AddInterpLinearColor", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::TimelineComponent_eventAddInterpLinearColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::TimelineComponent_eventAddInterpLinearColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execAddInterpLinearColor)
{
	P_GET_OBJECT(UCurveLinearColor,Z_Param_LinearColorCurve);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InterpFunc);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInterpLinearColor(Z_Param_LinearColorCurve,FOnTimelineLinearColor(Z_Param_InterpFunc),Z_Param_PropertyName,Z_Param_TrackName);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function AddInterpLinearColor

// Begin Class UTimelineComponent Function AddInterpVector
struct Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics
{
	struct TimelineComponent_eventAddInterpVector_Parms
	{
		UCurveVector* VectorCurve;
		FScriptDelegate InterpFunc;
		FName PropertyName;
		FName TrackName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Add a vector interpolation to the timeline */" },
		{ "CPP_Default_PropertyName", "None" },
		{ "CPP_Default_TrackName", "None" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Add a vector interpolation to the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VectorCurve;
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_InterpFunc;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_VectorCurve = { "VectorCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpVector_Parms, VectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_InterpFunc = { "InterpFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpVector_Parms, InterpFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineVector__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 1402349364
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpVector_Parms, PropertyName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_TrackName = { "TrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventAddInterpVector_Parms, TrackName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_VectorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_InterpFunc,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_PropertyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::NewProp_TrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "AddInterpVector", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::TimelineComponent_eventAddInterpVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::TimelineComponent_eventAddInterpVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_AddInterpVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_AddInterpVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execAddInterpVector)
{
	P_GET_OBJECT(UCurveVector,Z_Param_VectorCurve);
	P_GET_PROPERTY(FDelegateProperty,Z_Param_InterpFunc);
	P_GET_PROPERTY(FNameProperty,Z_Param_PropertyName);
	P_GET_PROPERTY(FNameProperty,Z_Param_TrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddInterpVector(Z_Param_VectorCurve,FOnTimelineVector(Z_Param_InterpFunc),Z_Param_PropertyName,Z_Param_TrackName);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function AddInterpVector

// Begin Class UTimelineComponent Function GetIgnoreTimeDilation
struct Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics
{
	struct TimelineComponent_eventGetIgnoreTimeDilation_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether to ignore time dilation. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether to ignore time dilation." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TimelineComponent_eventGetIgnoreTimeDilation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventGetIgnoreTimeDilation_Parms), &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetIgnoreTimeDilation", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::TimelineComponent_eventGetIgnoreTimeDilation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::TimelineComponent_eventGetIgnoreTimeDilation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execGetIgnoreTimeDilation)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetIgnoreTimeDilation();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function GetIgnoreTimeDilation

// Begin Class UTimelineComponent Function GetPlaybackPosition
struct Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics
{
	struct TimelineComponent_eventGetPlaybackPosition_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get the current playback position of the Timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get the current playback position of the Timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventGetPlaybackPosition_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetPlaybackPosition", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::TimelineComponent_eventGetPlaybackPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::TimelineComponent_eventGetPlaybackPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execGetPlaybackPosition)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlaybackPosition();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function GetPlaybackPosition

// Begin Class UTimelineComponent Function GetPlayRate
struct Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics
{
	struct TimelineComponent_eventGetPlayRate_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get the current play rate for this timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get the current play rate for this timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventGetPlayRate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::TimelineComponent_eventGetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::TimelineComponent_eventGetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_GetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execGetPlayRate)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayRate();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function GetPlayRate

// Begin Class UTimelineComponent Function GetScaledTimelineLength
struct Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics
{
	struct TimelineComponent_eventGetScaledTimelineLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get length of the timeline divided by the play rate */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get length of the timeline divided by the play rate" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventGetScaledTimelineLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetScaledTimelineLength", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::TimelineComponent_eventGetScaledTimelineLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::TimelineComponent_eventGetScaledTimelineLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execGetScaledTimelineLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetScaledTimelineLength();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function GetScaledTimelineLength

// Begin Class UTimelineComponent Function GetTimelineLength
struct Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics
{
	struct TimelineComponent_eventGetTimelineLength_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get length of the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get length of the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventGetTimelineLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "GetTimelineLength", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::TimelineComponent_eventGetTimelineLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::TimelineComponent_eventGetTimelineLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_GetTimelineLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_GetTimelineLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execGetTimelineLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetTimelineLength();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function GetTimelineLength

// Begin Class UTimelineComponent Function IsLooping
struct Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics
{
	struct TimelineComponent_eventIsLooping_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether we are looping or not */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether we are looping or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TimelineComponent_eventIsLooping_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventIsLooping_Parms), &Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "IsLooping", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::TimelineComponent_eventIsLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::TimelineComponent_eventIsLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_IsLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execIsLooping)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsLooping();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function IsLooping

// Begin Class UTimelineComponent Function IsPlaying
struct Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics
{
	struct TimelineComponent_eventIsPlaying_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether this timeline is playing or not. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether this timeline is playing or not." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TimelineComponent_eventIsPlaying_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventIsPlaying_Parms), &Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "IsPlaying", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::TimelineComponent_eventIsPlaying_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::TimelineComponent_eventIsPlaying_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_IsPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execIsPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsPlaying();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function IsPlaying

// Begin Class UTimelineComponent Function IsReversing
struct Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics
{
	struct TimelineComponent_eventIsReversing_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Get whether we are reversing or not */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Get whether we are reversing or not" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TimelineComponent_eventIsReversing_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventIsReversing_Parms), &Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "IsReversing", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::TimelineComponent_eventIsReversing_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::TimelineComponent_eventIsReversing_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_IsReversing()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_IsReversing_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execIsReversing)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsReversing();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function IsReversing

// Begin Class UTimelineComponent Function OnRep_Timeline
struct Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics
{
	struct TimelineComponent_eventOnRep_Timeline_Parms
	{
		FTimeline OldTimeline;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OldTimeline;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::NewProp_OldTimeline = { "OldTimeline", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventOnRep_Timeline_Parms, OldTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(0, nullptr) }; // 3274989648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::NewProp_OldTimeline,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "OnRep_Timeline", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::TimelineComponent_eventOnRep_Timeline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::TimelineComponent_eventOnRep_Timeline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execOnRep_Timeline)
{
	P_GET_STRUCT_REF(FTimeline,Z_Param_Out_OldTimeline);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_Timeline(Z_Param_Out_OldTimeline);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function OnRep_Timeline

// Begin Class UTimelineComponent Function Play
struct Z_Construct_UFunction_UTimelineComponent_Play_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "Play", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_Play_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTimelineComponent_Play()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Play_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execPlay)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Play();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function Play

// Begin Class UTimelineComponent Function PlayFromStart
struct Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline from the start */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline from the start" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "PlayFromStart", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTimelineComponent_PlayFromStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_PlayFromStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execPlayFromStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayFromStart();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function PlayFromStart

// Begin Class UTimelineComponent Function Reverse
struct Z_Construct_UFunction_UTimelineComponent_Reverse_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline in reverse */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline in reverse" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "Reverse", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTimelineComponent_Reverse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Reverse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execReverse)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Reverse();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function Reverse

// Begin Class UTimelineComponent Function ReverseFromEnd
struct Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Start playback of timeline in reverse from the end */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Start playback of timeline in reverse from the end" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "ReverseFromEnd", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execReverseFromEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReverseFromEnd();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function ReverseFromEnd

// Begin Class UTimelineComponent Function SetFloatCurve
struct Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics
{
	struct TimelineComponent_eventSetFloatCurve_Parms
	{
		UCurveFloat* NewFloatCurve;
		FName FloatTrackName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Update a certain float track's curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain float track's curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewFloatCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_FloatTrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_NewFloatCurve = { "NewFloatCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, NewFloatCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_FloatTrackName = { "FloatTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetFloatCurve_Parms, FloatTrackName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_NewFloatCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::NewProp_FloatTrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetFloatCurve", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::TimelineComponent_eventSetFloatCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::TimelineComponent_eventSetFloatCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetFloatCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetFloatCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetFloatCurve)
{
	P_GET_OBJECT(UCurveFloat,Z_Param_NewFloatCurve);
	P_GET_PROPERTY(FNameProperty,Z_Param_FloatTrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFloatCurve(Z_Param_NewFloatCurve,Z_Param_FloatTrackName);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetFloatCurve

// Begin Class UTimelineComponent Function SetIgnoreTimeDilation
struct Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics
{
	struct TimelineComponent_eventSetIgnoreTimeDilation_Parms
	{
		bool bNewIgnoreTimeDilation;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set whether to ignore time dilation. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set whether to ignore time dilation." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIgnoreTimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation_SetBit(void* Obj)
{
	((TimelineComponent_eventSetIgnoreTimeDilation_Parms*)Obj)->bNewIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation = { "bNewIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventSetIgnoreTimeDilation_Parms), &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::NewProp_bNewIgnoreTimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetIgnoreTimeDilation", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::TimelineComponent_eventSetIgnoreTimeDilation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::TimelineComponent_eventSetIgnoreTimeDilation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetIgnoreTimeDilation)
{
	P_GET_UBOOL(Z_Param_bNewIgnoreTimeDilation);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetIgnoreTimeDilation(Z_Param_bNewIgnoreTimeDilation);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetIgnoreTimeDilation

// Begin Class UTimelineComponent Function SetLinearColorCurve
struct Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics
{
	struct TimelineComponent_eventSetLinearColorCurve_Parms
	{
		UCurveLinearColor* NewLinearColorCurve;
		FName LinearColorTrackName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Update a certain linear color track's curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain linear color track's curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewLinearColorCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LinearColorTrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_NewLinearColorCurve = { "NewLinearColorCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, NewLinearColorCurve), Z_Construct_UClass_UCurveLinearColor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_LinearColorTrackName = { "LinearColorTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetLinearColorCurve_Parms, LinearColorTrackName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_NewLinearColorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::NewProp_LinearColorTrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetLinearColorCurve", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::TimelineComponent_eventSetLinearColorCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::TimelineComponent_eventSetLinearColorCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetLinearColorCurve)
{
	P_GET_OBJECT(UCurveLinearColor,Z_Param_NewLinearColorCurve);
	P_GET_PROPERTY(FNameProperty,Z_Param_LinearColorTrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLinearColorCurve(Z_Param_NewLinearColorCurve,Z_Param_LinearColorTrackName);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetLinearColorCurve

// Begin Class UTimelineComponent Function SetLooping
struct Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics
{
	struct TimelineComponent_eventSetLooping_Parms
	{
		bool bNewLooping;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** true means we would loop, false means we should not. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "true means we would loop, false means we should not." },
	};
#endif // WITH_METADATA
	static void NewProp_bNewLooping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewLooping;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit(void* Obj)
{
	((TimelineComponent_eventSetLooping_Parms*)Obj)->bNewLooping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping = { "bNewLooping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventSetLooping_Parms), &Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::NewProp_bNewLooping,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetLooping", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::TimelineComponent_eventSetLooping_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::TimelineComponent_eventSetLooping_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetLooping()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetLooping_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetLooping)
{
	P_GET_UBOOL(Z_Param_bNewLooping);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetLooping(Z_Param_bNewLooping);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetLooping

// Begin Class UTimelineComponent Function SetNewTime
struct Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics
{
	struct TimelineComponent_eventSetNewTime_Parms
	{
		float NewTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set the new playback position time to use */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set the new playback position time to use" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::NewProp_NewTime = { "NewTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetNewTime_Parms, NewTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::NewProp_NewTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetNewTime", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::TimelineComponent_eventSetNewTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::TimelineComponent_eventSetNewTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetNewTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetNewTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetNewTime)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewTime(Z_Param_NewTime);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetNewTime

// Begin Class UTimelineComponent Function SetPlaybackPosition
struct Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics
{
	struct TimelineComponent_eventSetPlaybackPosition_Parms
	{
		float NewPosition;
		bool bFireEvents;
		bool bFireUpdate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bFireUpdate" },
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Jump to a position in the timeline. \n\x09  * @param bFireEvents If true, event functions that are between current position and new playback position will fire. \n\x09  * @param bFireUpdate If true, the update output exec will fire after setting the new playback position.\n\x09 */" },
		{ "CPP_Default_bFireUpdate", "true" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Jump to a position in the timeline.\n@param bFireEvents If true, event functions that are between current position and new playback position will fire.\n@param bFireUpdate If true, the update output exec will fire after setting the new playback position." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPosition;
	static void NewProp_bFireEvents_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireEvents;
	static void NewProp_bFireUpdate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFireUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_NewPosition = { "NewPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetPlaybackPosition_Parms, NewPosition), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit(void* Obj)
{
	((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireEvents = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents = { "bFireEvents", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit(void* Obj)
{
	((TimelineComponent_eventSetPlaybackPosition_Parms*)Obj)->bFireUpdate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate = { "bFireUpdate", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TimelineComponent_eventSetPlaybackPosition_Parms), &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_NewPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::NewProp_bFireUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetPlaybackPosition", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::TimelineComponent_eventSetPlaybackPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::TimelineComponent_eventSetPlaybackPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetPlaybackPosition)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPosition);
	P_GET_UBOOL(Z_Param_bFireEvents);
	P_GET_UBOOL(Z_Param_bFireUpdate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlaybackPosition(Z_Param_NewPosition,Z_Param_bFireEvents,Z_Param_bFireUpdate);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetPlaybackPosition

// Begin Class UTimelineComponent Function SetPlayRate
struct Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics
{
	struct TimelineComponent_eventSetPlayRate_Parms
	{
		float NewRate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Sets the new play rate for this timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Sets the new play rate for this timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::NewProp_NewRate = { "NewRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetPlayRate_Parms, NewRate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::NewProp_NewRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetPlayRate", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::TimelineComponent_eventSetPlayRate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::TimelineComponent_eventSetPlayRate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetPlayRate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetPlayRate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetPlayRate)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewRate);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayRate(Z_Param_NewRate);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetPlayRate

// Begin Class UTimelineComponent Function SetTimelineFinishedFunc
struct Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics
{
	struct TimelineComponent_eventSetTimelineFinishedFunc_Parms
	{
		FScriptDelegate NewTimelineFinishedFunc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set the delegate to call when timeline is finished */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set the delegate to call when timeline is finished" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_NewTimelineFinishedFunc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::NewProp_NewTimelineFinishedFunc = { "NewTimelineFinishedFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetTimelineFinishedFunc_Parms, NewTimelineFinishedFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 862519175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::NewProp_NewTimelineFinishedFunc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetTimelineFinishedFunc", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::TimelineComponent_eventSetTimelineFinishedFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::TimelineComponent_eventSetTimelineFinishedFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetTimelineFinishedFunc)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_NewTimelineFinishedFunc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimelineFinishedFunc(FOnTimelineEvent(Z_Param_NewTimelineFinishedFunc));
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetTimelineFinishedFunc

// Begin Class UTimelineComponent Function SetTimelineLength
struct Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics
{
	struct TimelineComponent_eventSetTimelineLength_Parms
	{
		float NewLength;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set length of the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set length of the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewLength;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::NewProp_NewLength = { "NewLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLength_Parms, NewLength), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::NewProp_NewLength,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetTimelineLength", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::TimelineComponent_eventSetTimelineLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::TimelineComponent_eventSetTimelineLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetTimelineLength)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewLength);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimelineLength(Z_Param_NewLength);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetTimelineLength

// Begin Class UTimelineComponent Function SetTimelineLengthMode
struct Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics
{
	struct TimelineComponent_eventSetTimelineLengthMode_Parms
	{
		TEnumAsByte<ETimelineLengthMode> NewLengthMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Sets the length mode of the timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Sets the length mode of the timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewLengthMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::NewProp_NewLengthMode = { "NewLengthMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetTimelineLengthMode_Parms, NewLengthMode), Z_Construct_UEnum_Engine_ETimelineLengthMode, METADATA_PARAMS(0, nullptr) }; // 3815588061
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::NewProp_NewLengthMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetTimelineLengthMode", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::TimelineComponent_eventSetTimelineLengthMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::TimelineComponent_eventSetTimelineLengthMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetTimelineLengthMode)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NewLengthMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimelineLengthMode(ETimelineLengthMode(Z_Param_NewLengthMode));
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetTimelineLengthMode

// Begin Class UTimelineComponent Function SetTimelinePostUpdateFunc
struct Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics
{
	struct TimelineComponent_eventSetTimelinePostUpdateFunc_Parms
	{
		FScriptDelegate NewTimelinePostUpdateFunc;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Set the delegate to call after each timeline tick */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Set the delegate to call after each timeline tick" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegatePropertyParams NewProp_NewTimelinePostUpdateFunc;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::NewProp_NewTimelinePostUpdateFunc = { "NewTimelinePostUpdateFunc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetTimelinePostUpdateFunc_Parms, NewTimelinePostUpdateFunc), Z_Construct_UDelegateFunction_Engine_OnTimelineEvent__DelegateSignature, METADATA_PARAMS(0, nullptr) }; // 862519175
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::NewProp_NewTimelinePostUpdateFunc,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetTimelinePostUpdateFunc", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::TimelineComponent_eventSetTimelinePostUpdateFunc_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::TimelineComponent_eventSetTimelinePostUpdateFunc_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetTimelinePostUpdateFunc)
{
	P_GET_PROPERTY(FDelegateProperty,Z_Param_NewTimelinePostUpdateFunc);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTimelinePostUpdateFunc(FOnTimelineEvent(Z_Param_NewTimelinePostUpdateFunc));
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetTimelinePostUpdateFunc

// Begin Class UTimelineComponent Function SetVectorCurve
struct Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics
{
	struct TimelineComponent_eventSetVectorCurve_Parms
	{
		UCurveVector* NewVectorCurve;
		FName VectorTrackName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Update a certain vector track's curve */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Update a certain vector track's curve" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewVectorCurve;
	static const UECodeGen_Private::FNamePropertyParams NewProp_VectorTrackName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_NewVectorCurve = { "NewVectorCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, NewVectorCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_VectorTrackName = { "VectorTrackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimelineComponent_eventSetVectorCurve_Parms, VectorTrackName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_NewVectorCurve,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::NewProp_VectorTrackName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "SetVectorCurve", nullptr, nullptr, Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::TimelineComponent_eventSetVectorCurve_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::TimelineComponent_eventSetVectorCurve_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimelineComponent_SetVectorCurve()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_SetVectorCurve_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execSetVectorCurve)
{
	P_GET_OBJECT(UCurveVector,Z_Param_NewVectorCurve);
	P_GET_PROPERTY(FNameProperty,Z_Param_VectorTrackName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetVectorCurve(Z_Param_NewVectorCurve,Z_Param_VectorTrackName);
	P_NATIVE_END;
}
// End Class UTimelineComponent Function SetVectorCurve

// Begin Class UTimelineComponent Function Stop
struct Z_Construct_UFunction_UTimelineComponent_Stop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Components|Timeline" },
		{ "Comment", "/** Stop playback of timeline */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "Stop playback of timeline" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTimelineComponent, nullptr, "Stop", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimelineComponent_Stop_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UTimelineComponent_Stop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimelineComponent_Stop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimelineComponent::execStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Stop();
	P_NATIVE_END;
}
// End Class UTimelineComponent Function Stop

// Begin Class UTimelineComponent
void UTimelineComponent::StaticRegisterNativesUTimelineComponent()
{
	UClass* Class = UTimelineComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddEvent", &UTimelineComponent::execAddEvent },
		{ "AddInterpFloat", &UTimelineComponent::execAddInterpFloat },
		{ "AddInterpLinearColor", &UTimelineComponent::execAddInterpLinearColor },
		{ "AddInterpVector", &UTimelineComponent::execAddInterpVector },
		{ "GetIgnoreTimeDilation", &UTimelineComponent::execGetIgnoreTimeDilation },
		{ "GetPlaybackPosition", &UTimelineComponent::execGetPlaybackPosition },
		{ "GetPlayRate", &UTimelineComponent::execGetPlayRate },
		{ "GetScaledTimelineLength", &UTimelineComponent::execGetScaledTimelineLength },
		{ "GetTimelineLength", &UTimelineComponent::execGetTimelineLength },
		{ "IsLooping", &UTimelineComponent::execIsLooping },
		{ "IsPlaying", &UTimelineComponent::execIsPlaying },
		{ "IsReversing", &UTimelineComponent::execIsReversing },
		{ "OnRep_Timeline", &UTimelineComponent::execOnRep_Timeline },
		{ "Play", &UTimelineComponent::execPlay },
		{ "PlayFromStart", &UTimelineComponent::execPlayFromStart },
		{ "Reverse", &UTimelineComponent::execReverse },
		{ "ReverseFromEnd", &UTimelineComponent::execReverseFromEnd },
		{ "SetFloatCurve", &UTimelineComponent::execSetFloatCurve },
		{ "SetIgnoreTimeDilation", &UTimelineComponent::execSetIgnoreTimeDilation },
		{ "SetLinearColorCurve", &UTimelineComponent::execSetLinearColorCurve },
		{ "SetLooping", &UTimelineComponent::execSetLooping },
		{ "SetNewTime", &UTimelineComponent::execSetNewTime },
		{ "SetPlaybackPosition", &UTimelineComponent::execSetPlaybackPosition },
		{ "SetPlayRate", &UTimelineComponent::execSetPlayRate },
		{ "SetTimelineFinishedFunc", &UTimelineComponent::execSetTimelineFinishedFunc },
		{ "SetTimelineLength", &UTimelineComponent::execSetTimelineLength },
		{ "SetTimelineLengthMode", &UTimelineComponent::execSetTimelineLengthMode },
		{ "SetTimelinePostUpdateFunc", &UTimelineComponent::execSetTimelinePostUpdateFunc },
		{ "SetVectorCurve", &UTimelineComponent::execSetVectorCurve },
		{ "Stop", &UTimelineComponent::execStop },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTimelineComponent);
UClass* Z_Construct_UClass_UTimelineComponent_NoRegister()
{
	return UTimelineComponent::StaticClass();
}
struct Z_Construct_UClass_UTimelineComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/** \n * TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.\n * Events can be triggered at keyframes along the timeline. \n * Floats, vectors, and colors are interpolated between keyframes along the timeline.\n */" },
		{ "IncludePath", "Components/TimelineComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "TimelineComponent holds a series of events, floats, vectors or colors with associated keyframes.\nEvents can be triggered at keyframes along the timeline.\nFloats, vectors, and colors are interpolated between keyframes along the timeline." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TheTimeline_MetaData[] = {
		{ "Comment", "/** The actual timeline structure */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "The actual timeline structure" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Comment", "/** True if global time dilation should be ignored by this timeline, false otherwise. */" },
		{ "ModuleRelativePath", "Classes/Components/TimelineComponent.h" },
		{ "ToolTip", "True if global time dilation should be ignored by this timeline, false otherwise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TheTimeline;
	static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimelineComponent_AddEvent, "AddEvent" }, // 4232512810
		{ &Z_Construct_UFunction_UTimelineComponent_AddInterpFloat, "AddInterpFloat" }, // 753861777
		{ &Z_Construct_UFunction_UTimelineComponent_AddInterpLinearColor, "AddInterpLinearColor" }, // 3507347231
		{ &Z_Construct_UFunction_UTimelineComponent_AddInterpVector, "AddInterpVector" }, // 3597366293
		{ &Z_Construct_UFunction_UTimelineComponent_GetIgnoreTimeDilation, "GetIgnoreTimeDilation" }, // 657829300
		{ &Z_Construct_UFunction_UTimelineComponent_GetPlaybackPosition, "GetPlaybackPosition" }, // 85033978
		{ &Z_Construct_UFunction_UTimelineComponent_GetPlayRate, "GetPlayRate" }, // 2704571983
		{ &Z_Construct_UFunction_UTimelineComponent_GetScaledTimelineLength, "GetScaledTimelineLength" }, // 2406501403
		{ &Z_Construct_UFunction_UTimelineComponent_GetTimelineLength, "GetTimelineLength" }, // 1718165473
		{ &Z_Construct_UFunction_UTimelineComponent_IsLooping, "IsLooping" }, // 1625743528
		{ &Z_Construct_UFunction_UTimelineComponent_IsPlaying, "IsPlaying" }, // 3351015851
		{ &Z_Construct_UFunction_UTimelineComponent_IsReversing, "IsReversing" }, // 3021277214
		{ &Z_Construct_UFunction_UTimelineComponent_OnRep_Timeline, "OnRep_Timeline" }, // 73805739
		{ &Z_Construct_UFunction_UTimelineComponent_Play, "Play" }, // 743553482
		{ &Z_Construct_UFunction_UTimelineComponent_PlayFromStart, "PlayFromStart" }, // 3542916507
		{ &Z_Construct_UFunction_UTimelineComponent_Reverse, "Reverse" }, // 1138357644
		{ &Z_Construct_UFunction_UTimelineComponent_ReverseFromEnd, "ReverseFromEnd" }, // 3931850144
		{ &Z_Construct_UFunction_UTimelineComponent_SetFloatCurve, "SetFloatCurve" }, // 1905564010
		{ &Z_Construct_UFunction_UTimelineComponent_SetIgnoreTimeDilation, "SetIgnoreTimeDilation" }, // 3724506501
		{ &Z_Construct_UFunction_UTimelineComponent_SetLinearColorCurve, "SetLinearColorCurve" }, // 2225697146
		{ &Z_Construct_UFunction_UTimelineComponent_SetLooping, "SetLooping" }, // 2505268883
		{ &Z_Construct_UFunction_UTimelineComponent_SetNewTime, "SetNewTime" }, // 2046141293
		{ &Z_Construct_UFunction_UTimelineComponent_SetPlaybackPosition, "SetPlaybackPosition" }, // 1160727623
		{ &Z_Construct_UFunction_UTimelineComponent_SetPlayRate, "SetPlayRate" }, // 1698452478
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineFinishedFunc, "SetTimelineFinishedFunc" }, // 3140183572
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLength, "SetTimelineLength" }, // 335053184
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelineLengthMode, "SetTimelineLengthMode" }, // 3593433958
		{ &Z_Construct_UFunction_UTimelineComponent_SetTimelinePostUpdateFunc, "SetTimelinePostUpdateFunc" }, // 3016124466
		{ &Z_Construct_UFunction_UTimelineComponent_SetVectorCurve, "SetVectorCurve" }, // 2159098035
		{ &Z_Construct_UFunction_UTimelineComponent_Stop, "Stop" }, // 819524611
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimelineComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline = { "TheTimeline", "OnRep_Timeline", (EPropertyFlags)0x0040008100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimelineComponent, TheTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TheTimeline_MetaData), NewProp_TheTimeline_MetaData) }; // 3274989648
void Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
{
	((UTimelineComponent*)Obj)->bIgnoreTimeDilation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UTimelineComponent), &Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIgnoreTimeDilation_MetaData), NewProp_bIgnoreTimeDilation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimelineComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineComponent_Statics::NewProp_TheTimeline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimelineComponent_Statics::NewProp_bIgnoreTimeDilation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimelineComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimelineComponent_Statics::ClassParams = {
	&UTimelineComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimelineComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimelineComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimelineComponent()
{
	if (!Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton, Z_Construct_UClass_UTimelineComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimelineComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UTimelineComponent>()
{
	return UTimelineComponent::StaticClass();
}
void UTimelineComponent::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_TheTimeline(TEXT("TheTimeline"));
	const bool bIsValid = true
		&& Name_TheTimeline == ClassReps[(int32)ENetFields_Private::TheTimeline].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTimelineComponent"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimelineComponent);
UTimelineComponent::~UTimelineComponent() {}
// End Class UTimelineComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETimelineLengthMode_StaticEnum, TEXT("ETimelineLengthMode"), &Z_Registration_Info_UEnum_ETimelineLengthMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3815588061U) },
		{ ETimelineDirection_StaticEnum, TEXT("ETimelineDirection"), &Z_Registration_Info_UEnum_ETimelineDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 870930381U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FTimelineEventEntry::StaticStruct, Z_Construct_UScriptStruct_FTimelineEventEntry_Statics::NewStructOps, TEXT("TimelineEventEntry"), &Z_Registration_Info_UScriptStruct_TimelineEventEntry, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineEventEntry), 295098517U) },
		{ FTimelineVectorTrack::StaticStruct, Z_Construct_UScriptStruct_FTimelineVectorTrack_Statics::NewStructOps, TEXT("TimelineVectorTrack"), &Z_Registration_Info_UScriptStruct_TimelineVectorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineVectorTrack), 1859305919U) },
		{ FTimelineFloatTrack::StaticStruct, Z_Construct_UScriptStruct_FTimelineFloatTrack_Statics::NewStructOps, TEXT("TimelineFloatTrack"), &Z_Registration_Info_UScriptStruct_TimelineFloatTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineFloatTrack), 3396701233U) },
		{ FTimelineLinearColorTrack::StaticStruct, Z_Construct_UScriptStruct_FTimelineLinearColorTrack_Statics::NewStructOps, TEXT("TimelineLinearColorTrack"), &Z_Registration_Info_UScriptStruct_TimelineLinearColorTrack, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimelineLinearColorTrack), 1396604242U) },
		{ FTimeline::StaticStruct, Z_Construct_UScriptStruct_FTimeline_Statics::NewStructOps, TEXT("Timeline"), &Z_Registration_Info_UScriptStruct_Timeline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeline), 3274989648U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimelineComponent, UTimelineComponent::StaticClass, TEXT("UTimelineComponent"), &Z_Registration_Info_UClass_UTimelineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimelineComponent), 1542969415U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_2400822919(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_TimelineComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
