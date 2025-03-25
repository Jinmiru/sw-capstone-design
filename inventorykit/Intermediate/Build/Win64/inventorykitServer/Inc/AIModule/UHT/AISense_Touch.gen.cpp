// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Touch.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Touch() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Touch_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAITouchEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AITouchEvent;
class UScriptStruct* FAITouchEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AITouchEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AITouchEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAITouchEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AITouchEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AITouchEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAITouchEvent>()
{
	return FAITouchEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAITouchEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TouchReceiver_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchReceiver;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAITouchEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver = { "TouchReceiver", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITouchEvent, TouchReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TouchReceiver_MetaData), NewProp_TouchReceiver_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAITouchEvent, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherActor_MetaData), NewProp_OtherActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_TouchReceiver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewProp_OtherActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAITouchEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AITouchEvent",
	Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::PropPointers),
	sizeof(FAITouchEvent),
	alignof(FAITouchEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAITouchEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAITouchEvent()
{
	if (!Z_Registration_Info_UScriptStruct_AITouchEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AITouchEvent.InnerSingleton, Z_Construct_UScriptStruct_FAITouchEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AITouchEvent.InnerSingleton;
}
// End ScriptStruct FAITouchEvent

// Begin Class UAISense_Touch Function ReportTouchEvent
struct Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics
{
	struct AISense_Touch_eventReportTouchEvent_Parms
	{
		UObject* WorldContextObject;
		AActor* TouchReceiver;
		AActor* OtherActor;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TouchReceiver;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Touch_eventReportTouchEvent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_TouchReceiver = { "TouchReceiver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Touch_eventReportTouchEvent_Parms, TouchReceiver), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Touch_eventReportTouchEvent_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Touch_eventReportTouchEvent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_TouchReceiver,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Touch, nullptr, "ReportTouchEvent", nullptr, nullptr, Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::AISense_Touch_eventReportTouchEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::AISense_Touch_eventReportTouchEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Touch::execReportTouchEvent)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_TouchReceiver);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_STRUCT(FVector,Z_Param_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAISense_Touch::ReportTouchEvent(Z_Param_WorldContextObject,Z_Param_TouchReceiver,Z_Param_OtherActor,Z_Param_Location);
	P_NATIVE_END;
}
// End Class UAISense_Touch Function ReportTouchEvent

// Begin Class UAISense_Touch
void UAISense_Touch::StaticRegisterNativesUAISense_Touch()
{
	UClass* Class = UAISense_Touch::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReportTouchEvent", &UAISense_Touch::execReportTouchEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Touch);
UClass* Z_Construct_UClass_UAISense_Touch_NoRegister()
{
	return UAISense_Touch::StaticClass();
}
struct Z_Construct_UClass_UAISense_Touch_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Touch.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Touch.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Touch_ReportTouchEvent, "ReportTouchEvent" }, // 1413601600
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Touch>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAITouchEvent, METADATA_PARAMS(0, nullptr) }; // 1329469185
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Touch, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredEvents_MetaData), NewProp_RegisteredEvents_MetaData) }; // 1329469185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Touch_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Touch_Statics::NewProp_RegisteredEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Touch_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Touch_Statics::ClassParams = {
	&UAISense_Touch::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAISense_Touch_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Touch_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Touch()
{
	if (!Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton, Z_Construct_UClass_UAISense_Touch_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Touch.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Touch>()
{
	return UAISense_Touch::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Touch);
UAISense_Touch::~UAISense_Touch() {}
// End Class UAISense_Touch

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAITouchEvent::StaticStruct, Z_Construct_UScriptStruct_FAITouchEvent_Statics::NewStructOps, TEXT("AITouchEvent"), &Z_Registration_Info_UScriptStruct_AITouchEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAITouchEvent), 1329469185U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Touch, UAISense_Touch::StaticClass, TEXT("UAISense_Touch"), &Z_Registration_Info_UClass_UAISense_Touch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Touch), 293915523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_2781708559(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Touch_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
