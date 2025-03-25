// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Prediction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Prediction() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_AAIController_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Prediction();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Prediction_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAIPredictionEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AIPredictionEvent;
class UScriptStruct* FAIPredictionEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AIPredictionEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AIPredictionEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIPredictionEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AIPredictionEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AIPredictionEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAIPredictionEvent>()
{
	return FAIPredictionEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAIPredictionEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requestor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PredictedActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requestor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PredictedActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIPredictionEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIPredictionEvent, Requestor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requestor_MetaData), NewProp_Requestor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor = { "PredictedActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAIPredictionEvent, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PredictedActor_MetaData), NewProp_PredictedActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_Requestor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewProp_PredictedActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AIPredictionEvent",
	Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::PropPointers),
	sizeof(FAIPredictionEvent),
	alignof(FAIPredictionEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAIPredictionEvent()
{
	if (!Z_Registration_Info_UScriptStruct_AIPredictionEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AIPredictionEvent.InnerSingleton, Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AIPredictionEvent.InnerSingleton;
}
// End ScriptStruct FAIPredictionEvent

// Begin Class UAISense_Prediction Function RequestControllerPredictionEvent
struct Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics
{
	struct AISense_Prediction_eventRequestControllerPredictionEvent_Parms
	{
		AAIController* Requestor;
		AActor* PredictedActor;
		float PredictionTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n\x09 *\x09Location is being predicted based on PredicterActor's current location and velocity */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
		{ "ToolTip", "Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n    Location is being predicted based on PredicterActor's current location and velocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requestor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PredictedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, Requestor), Z_Construct_UClass_AAIController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictedActor = { "PredictedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictionTime = { "PredictionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestControllerPredictionEvent_Parms, PredictionTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_Requestor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::NewProp_PredictionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Prediction, nullptr, "RequestControllerPredictionEvent", nullptr, nullptr, Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::AISense_Prediction_eventRequestControllerPredictionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::AISense_Prediction_eventRequestControllerPredictionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Prediction::execRequestControllerPredictionEvent)
{
	P_GET_OBJECT(AAIController,Z_Param_Requestor);
	P_GET_OBJECT(AActor,Z_Param_PredictedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PredictionTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAISense_Prediction::RequestControllerPredictionEvent(Z_Param_Requestor,Z_Param_PredictedActor,Z_Param_PredictionTime);
	P_NATIVE_END;
}
// End Class UAISense_Prediction Function RequestControllerPredictionEvent

// Begin Class UAISense_Prediction Function RequestPawnPredictionEvent
struct Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics
{
	struct AISense_Prediction_eventRequestPawnPredictionEvent_Parms
	{
		APawn* Requestor;
		AActor* PredictedActor;
		float PredictionTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "Comment", "/** Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n\x09 *\x09Location is being predicted based on PredicterActor's current location and velocity */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
		{ "ToolTip", "Asks perception system to supply Requestor with PredictedActor's predicted location in PredictionTime seconds\n    Location is being predicted based on PredicterActor's current location and velocity" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requestor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PredictedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PredictionTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, Requestor), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictedActor = { "PredictedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, PredictedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictionTime = { "PredictionTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Prediction_eventRequestPawnPredictionEvent_Parms, PredictionTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_Requestor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::NewProp_PredictionTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Prediction, nullptr, "RequestPawnPredictionEvent", nullptr, nullptr, Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::AISense_Prediction_eventRequestPawnPredictionEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::AISense_Prediction_eventRequestPawnPredictionEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Prediction::execRequestPawnPredictionEvent)
{
	P_GET_OBJECT(APawn,Z_Param_Requestor);
	P_GET_OBJECT(AActor,Z_Param_PredictedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PredictionTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	UAISense_Prediction::RequestPawnPredictionEvent(Z_Param_Requestor,Z_Param_PredictedActor,Z_Param_PredictionTime);
	P_NATIVE_END;
}
// End Class UAISense_Prediction Function RequestPawnPredictionEvent

// Begin Class UAISense_Prediction
void UAISense_Prediction::StaticRegisterNativesUAISense_Prediction()
{
	UClass* Class = UAISense_Prediction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestControllerPredictionEvent", &UAISense_Prediction::execRequestControllerPredictionEvent },
		{ "RequestPawnPredictionEvent", &UAISense_Prediction::execRequestPawnPredictionEvent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Prediction);
UClass* Z_Construct_UClass_UAISense_Prediction_NoRegister()
{
	return UAISense_Prediction::StaticClass();
}
struct Z_Construct_UClass_UAISense_Prediction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Prediction.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RegisteredEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Prediction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RegisteredEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RegisteredEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Prediction_RequestControllerPredictionEvent, "RequestControllerPredictionEvent" }, // 244910665
		{ &Z_Construct_UFunction_UAISense_Prediction_RequestPawnPredictionEvent, "RequestPawnPredictionEvent" }, // 2676313596
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Prediction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_Inner = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FAIPredictionEvent, METADATA_PARAMS(0, nullptr) }; // 2980868083
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents = { "RegisteredEvents", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Prediction, RegisteredEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RegisteredEvents_MetaData), NewProp_RegisteredEvents_MetaData) }; // 2980868083
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Prediction_Statics::NewProp_RegisteredEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Prediction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Prediction_Statics::ClassParams = {
	&UAISense_Prediction::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Prediction_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Prediction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Prediction()
{
	if (!Z_Registration_Info_UClass_UAISense_Prediction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Prediction.OuterSingleton, Z_Construct_UClass_UAISense_Prediction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Prediction.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Prediction>()
{
	return UAISense_Prediction::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Prediction);
UAISense_Prediction::~UAISense_Prediction() {}
// End Class UAISense_Prediction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAIPredictionEvent::StaticStruct, Z_Construct_UScriptStruct_FAIPredictionEvent_Statics::NewStructOps, TEXT("AIPredictionEvent"), &Z_Registration_Info_UScriptStruct_AIPredictionEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAIPredictionEvent), 2980868083U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Prediction, UAISense_Prediction::StaticClass, TEXT("UAISense_Prediction"), &Z_Registration_Info_UClass_UAISense_Prediction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Prediction), 297440517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_2792462694(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Prediction_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
