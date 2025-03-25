// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Hearing.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Hearing() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAINoiseEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AINoiseEvent;
class UScriptStruct* FAINoiseEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AINoiseEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AINoiseEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAINoiseEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AINoiseEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AINoiseEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAINoiseEvent>()
{
	return FAINoiseEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAINoiseEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** if not set Instigator's location will be used */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "if not set Instigator's location will be used" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Loudness_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Loudness modifier of the sound.\n\x09 * If MaxRange is non-zero, this modifies the range (by multiplication).\n\x09 * If there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange * Loudness), the sound is heard, false otherwise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Loudness modifier of the sound.\nIf MaxRange is non-zero, this modifies the range (by multiplication).\nIf there is no MaxRange, then if Square(DistanceToSound) <= Square(HearingRange * Loudness), the sound is heard, false otherwise." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRange_MetaData[] = {
		{ "Category", "Sense" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * Max range at which the sound can be heard. Multiplied by Loudness.\n\x09 * A value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Max range at which the sound can be heard. Multiplied by Loudness.\nA value of 0 indicates that there is no range limit, though listeners are still limited by their own hearing range." },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/**\n\x09 * Actor triggering the sound.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Actor triggering the sound." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/**\n\x09 * Named identifier for the noise.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Named identifier for the noise." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAINoiseEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAINoiseEvent, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseLocation_MetaData), NewProp_NoiseLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAINoiseEvent, Loudness), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Loudness_MetaData), NewProp_Loudness_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAINoiseEvent, MaxRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRange_MetaData), NewProp_MaxRange_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAINoiseEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAINoiseEvent, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_NoiseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Loudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAINoiseEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AINoiseEvent",
	Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::PropPointers),
	sizeof(FAINoiseEvent),
	alignof(FAINoiseEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAINoiseEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAINoiseEvent()
{
	if (!Z_Registration_Info_UScriptStruct_AINoiseEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AINoiseEvent.InnerSingleton, Z_Construct_UScriptStruct_FAINoiseEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AINoiseEvent.InnerSingleton;
}
// End ScriptStruct FAINoiseEvent

// Begin Class UAISense_Hearing Function ReportNoiseEvent
struct Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics
{
	struct AISense_Hearing_eventReportNoiseEvent_Parms
	{
		UObject* WorldContextObject;
		FVector NoiseLocation;
		float Loudness;
		AActor* Instigator;
		float MaxRange;
		FName Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/**\n\x09 * Report a noise event.\n\x09 * \n\x09 * @param NoiseLocation Location of the noise.\n\x09 * @param Loudness Loudness of the noise. If MaxRange is non-zero, modifies MaxRange, otherwise modifies the squared distance of the sensor's range.\n\x09 * @param Instigator Actor that triggered the noise.\n\x09 * @param MaxRange Max range at which the sound can be heard, multiplied by Loudness. Values <= 0 mean no limit (still limited by listener's range however).\n\x09 * @param Tag Identifier for the event.\n\x09 */" },
		{ "CPP_Default_Instigator", "None" },
		{ "CPP_Default_Loudness", "1.000000" },
		{ "CPP_Default_MaxRange", "0.000000" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Report a noise event.\n\n@param NoiseLocation Location of the noise.\n@param Loudness Loudness of the noise. If MaxRange is non-zero, modifies MaxRange, otherwise modifies the squared distance of the sensor's range.\n@param Instigator Actor that triggered the noise.\n@param MaxRange Max range at which the sound can be heard, multiplied by Loudness. Values <= 0 mean no limit (still limited by listener's range however).\n@param Tag Identifier for the event." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Loudness;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRange;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_NoiseLocation = { "NoiseLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, NoiseLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Loudness = { "Loudness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Loudness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_MaxRange = { "MaxRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, MaxRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Hearing_eventReportNoiseEvent_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_NoiseLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Loudness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_MaxRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Hearing, nullptr, "ReportNoiseEvent", nullptr, nullptr, Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::AISense_Hearing_eventReportNoiseEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::AISense_Hearing_eventReportNoiseEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Hearing::execReportNoiseEvent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FVector,Z_Param_NoiseLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Loudness);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_PROPERTY(FFloatProperty,Z_Param_MaxRange);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAISense_Hearing::ReportNoiseEvent(Z_Param_WorldContextObject,Z_Param_NoiseLocation,Z_Param_Loudness,Z_Param_Instigator,Z_Param_MaxRange,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UAISense_Hearing Function ReportNoiseEvent

// Begin Class UAISense_Hearing
void UAISense_Hearing::StaticRegisterNativesUAISense_Hearing()
{
	UClass* Class = UAISense_Hearing::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReportNoiseEvent", &UAISense_Hearing::execReportNoiseEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Hearing);
UClass* Z_Construct_UClass_UAISense_Hearing_NoRegister()
{
	return UAISense_Hearing::StaticClass();
}
struct Z_Construct_UClass_UAISense_Hearing_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Hearing.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoiseEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedOfSoundSq_MetaData[] = {
		{ "Comment", "/** Defaults to 0 to have instant notification. Setting to > 0 will result in delaying \n\x09 *\x09when AI hears the sound based on the distance from the source */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Hearing.h" },
		{ "ToolTip", "Defaults to 0 to have instant notification. Setting to > 0 will result in delaying\n    when AI hears the sound based on the distance from the source" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoiseEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NoiseEvents;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedOfSoundSq;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Hearing_ReportNoiseEvent, "ReportNoiseEvent" }, // 2984126247
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Hearing>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_Inner = { "NoiseEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAINoiseEvent, METADATA_PARAMS(0, nullptr) }; // 1611572614
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents = { "NoiseEvents", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Hearing, NoiseEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoiseEvents_MetaData), NewProp_NoiseEvents_MetaData) }; // 1611572614
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq = { "SpeedOfSoundSq", nullptr, (EPropertyFlags)0x0020080000004000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Hearing, SpeedOfSoundSq), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedOfSoundSq_MetaData), NewProp_SpeedOfSoundSq_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_NoiseEvents,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Hearing_Statics::NewProp_SpeedOfSoundSq,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Hearing_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams = {
	&UAISense_Hearing::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Hearing_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Hearing()
{
	if (!Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton, Z_Construct_UClass_UAISense_Hearing_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Hearing.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Hearing>()
{
	return UAISense_Hearing::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Hearing);
UAISense_Hearing::~UAISense_Hearing() {}
// End Class UAISense_Hearing

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAINoiseEvent::StaticStruct, Z_Construct_UScriptStruct_FAINoiseEvent_Statics::NewStructOps, TEXT("AINoiseEvent"), &Z_Registration_Info_UScriptStruct_AINoiseEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAINoiseEvent), 1611572614U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Hearing, UAISense_Hearing::StaticClass, TEXT("UAISense_Hearing"), &Z_Registration_Info_UClass_UAISense_Hearing, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Hearing), 3134922951U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_2838970054(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Hearing_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
