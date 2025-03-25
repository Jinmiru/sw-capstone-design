// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Damage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Damage() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Damage_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAIDamageEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIDamageEvent;
class UScriptStruct* FAIDamageEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIDamageEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIDamageEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDamageEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIDamageEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AIDamageEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIDamageEvent>()
{
	return FAIDamageEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIDamageEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Amount_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Damage taken by DamagedActor.\n\x09 *\x09@Note 0-damage events do not get ignored */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Damage taken by DamagedActor.\n    @Note 0-damage events do not get ignored" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Event's \"Location\", or what will be later treated as the perceived location for this sense.\n\x09 *\x09If not set, HitLocation will be used, if that is unset too DamagedActor's location */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Event's \"Location\", or what will be later treated as the perceived location for this sense.\n    If not set, HitLocation will be used, if that is unset too DamagedActor's location" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Event's additional spatial information\n\x09 *\x09@TODO document */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Event's additional spatial information\n    @TODO document" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamagedActor_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Damaged actor */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Damaged actor" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Actor that instigated damage. Can be None */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Actor that instigated damage. Can be None" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "Category", "Sense" },
		{ "Comment", "/** Optional named identifier for the damage. */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "Optional named identifier for the damage." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDamageEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDamageEvent, Amount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Amount_MetaData), NewProp_Amount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDamageEvent, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDamageEvent, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitLocation_MetaData), NewProp_HitLocation_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDamageEvent, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamagedActor_MetaData), NewProp_DamagedActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDamageEvent, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instigator_MetaData), NewProp_Instigator_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIDamageEvent, Tag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Amount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDamageEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AIDamageEvent",
	Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::PropPointers),
	sizeof(FAIDamageEvent),
	alignof(FAIDamageEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDamageEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIDamageEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIDamageEvent()
{
	if (!Z_Registration_Info_UScriptStruct_AIDamageEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIDamageEvent.InnerSingleton, Z_Construct_UScriptStruct_FAIDamageEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIDamageEvent.InnerSingleton;
}
// End ScriptStruct FAIDamageEvent

// Begin Class UAISense_Damage Function ReportDamageEvent
struct Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics
{
	struct AISense_Damage_eventReportDamageEvent_Parms
	{
		UObject* WorldContextObject;
		AActor* DamagedActor;
		AActor* Instigator;
		float DamageAmount;
		FVector EventLocation;
		FVector HitLocation;
		FName Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "HitLocation" },
		{ "Category", "AI|Perception" },
		{ "Comment", "/** EventLocation will be reported as Instigator's location at the moment of event happening*/" },
		{ "CPP_Default_Tag", "None" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
		{ "ToolTip", "EventLocation will be reported as Instigator's location at the moment of event happening" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_EventLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitLocation;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_EventLocation = { "EventLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, EventLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_HitLocation = { "HitLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Damage_eventReportDamageEvent_Parms, Tag), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_EventLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_HitLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Damage, nullptr, "ReportDamageEvent", nullptr, nullptr, Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::AISense_Damage_eventReportDamageEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::AISense_Damage_eventReportDamageEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Damage::execReportDamageEvent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_OBJECT(AActor,Z_Param_Instigator);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
	P_GET_STRUCT(FVector,Z_Param_EventLocation);
	P_GET_STRUCT(FVector,Z_Param_HitLocation);
	P_GET_PROPERTY(FNameProperty,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAISense_Damage::ReportDamageEvent(Z_Param_WorldContextObject,Z_Param_DamagedActor,Z_Param_Instigator,Z_Param_DamageAmount,Z_Param_EventLocation,Z_Param_HitLocation,Z_Param_Tag);
	P_NATIVE_END;
}
// End Class UAISense_Damage Function ReportDamageEvent

// Begin Class UAISense_Damage
void UAISense_Damage::StaticRegisterNativesUAISense_Damage()
{
	UClass* Class = UAISense_Damage::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReportDamageEvent", &UAISense_Damage::execReportDamageEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Damage);
UClass* Z_Construct_UClass_UAISense_Damage_NoRegister()
{
	return UAISense_Damage::StaticClass();
}
struct Z_Construct_UClass_UAISense_Damage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Damage.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Damage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Damage_ReportDamageEvent, "ReportDamageEvent" }, // 1870880011
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Damage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIDamageEvent, METADATA_PARAMS(0, nullptr) }; // 4164150535
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Damage, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredEvents_MetaData), NewProp_RegisteredEvents_MetaData) }; // 4164150535
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Damage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Damage_Statics::NewProp_RegisteredEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Damage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Damage_Statics::ClassParams = {
	&UAISense_Damage::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAISense_Damage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Damage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Damage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Damage()
{
	if (!Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton, Z_Construct_UClass_UAISense_Damage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Damage.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Damage>()
{
	return UAISense_Damage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Damage);
UAISense_Damage::~UAISense_Damage() {}
// End Class UAISense_Damage

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIDamageEvent::StaticStruct, Z_Construct_UScriptStruct_FAIDamageEvent_Statics::NewStructOps, TEXT("AIDamageEvent"), &Z_Registration_Info_UScriptStruct_AIDamageEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIDamageEvent), 4164150535U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Damage, UAISense_Damage::StaticClass, TEXT("UAISense_Damage"), &Z_Registration_Info_UClass_UAISense_Damage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Damage), 2124286721U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_1187745970(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Damage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
