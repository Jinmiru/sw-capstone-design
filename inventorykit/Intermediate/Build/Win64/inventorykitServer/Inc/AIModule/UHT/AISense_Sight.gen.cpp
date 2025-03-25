// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Sight.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Sight() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Sight_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAISightEvent();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin ScriptStruct FAISightEvent
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AISightEvent;
class UScriptStruct* FAISightEvent::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AISightEvent.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AISightEvent.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISightEvent, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("AISightEvent"));
	}
	return Z_Registration_Info_UScriptStruct_AISightEvent.OuterSingleton;
}
template<> AIMODULE_API UScriptStruct* StaticStruct<FAISightEvent>()
{
	return FAISightEvent::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAISightEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SeenActor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Observer_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SeenActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Observer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISightEvent>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor = { "SeenActor", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAISightEvent, SeenActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SeenActor_MetaData), NewProp_SeenActor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer = { "Observer", nullptr, (EPropertyFlags)0x0114000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FAISightEvent, Observer), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Observer_MetaData), NewProp_Observer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_SeenActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISightEvent_Statics::NewProp_Observer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISightEvent_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	nullptr,
	&NewStructOps,
	"AISightEvent",
	Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::PropPointers),
	sizeof(FAISightEvent),
	alignof(FAISightEvent),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISightEvent_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAISightEvent_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAISightEvent()
{
	if (!Z_Registration_Info_UScriptStruct_AISightEvent.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AISightEvent.InnerSingleton, Z_Construct_UScriptStruct_FAISightEvent_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AISightEvent.InnerSingleton;
}
// End ScriptStruct FAISightEvent

// Begin Class UAISense_Sight
void UAISense_Sight::StaticRegisterNativesUAISense_Sight()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Sight);
UClass* Z_Construct_UClass_UAISense_Sight_NoRegister()
{
	return UAISense_Sight::StaticClass();
}
struct Z_Construct_UClass_UAISense_Sight_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Sight.h" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxAsyncTracesPerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** Maximum number of asynchronous traces that can be requested in a single update call*/" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
		{ "ToolTip", "Maximum number of asynchronous traces that can be requested in a single update call" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinQueriesPerTimeSliceCheck_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxTimeSlicePerTick_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighImportanceQueryDistanceThreshold_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightLimitQueryImportance_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PendingQueriesBudgetReductionRatio_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** Defines the amount of async trace queries to prevent based on the number of pending queries at the start of an update.\n\x09 * 1 means that the async trace budget is slashed by the pending queries count\n\x09 * 0 means that the async trace budget is not impacted by the pending queries\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
		{ "ToolTip", "Defines the amount of async trace queries to prevent based on the number of pending queries at the start of an update.\n1 means that the async trace budget is slashed by the pending queries count\n0 means that the async trace budget is not impacted by the pending queries" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAsynchronousTraceForDefaultSightQueries_MetaData[] = {
		{ "Category", "AI Perception" },
		{ "Comment", "/** Defines if we are allowed to use asynchronous trace queries when there is no IAISightTargetInterface for a Target */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Sight.h" },
		{ "ToolTip", "Defines if we are allowed to use asynchronous trace queries when there is no IAISightTargetInterface for a Target" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTracesPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAsyncTracesPerTick;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinQueriesPerTimeSliceCheck;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MaxTimeSlicePerTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HighImportanceQueryDistanceThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxQueryImportance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightLimitQueryImportance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PendingQueriesBudgetReductionRatio;
	static void NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAsynchronousTraceForDefaultSightQueries;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Sight>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick = { "MaxTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, MaxTracesPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTracesPerTick_MetaData), NewProp_MaxTracesPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxAsyncTracesPerTick = { "MaxAsyncTracesPerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, MaxAsyncTracesPerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxAsyncTracesPerTick_MetaData), NewProp_MaxAsyncTracesPerTick_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck = { "MinQueriesPerTimeSliceCheck", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, MinQueriesPerTimeSliceCheck), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinQueriesPerTimeSliceCheck_MetaData), NewProp_MinQueriesPerTimeSliceCheck_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick = { "MaxTimeSlicePerTick", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, MaxTimeSlicePerTick), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxTimeSlicePerTick_MetaData), NewProp_MaxTimeSlicePerTick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold = { "HighImportanceQueryDistanceThreshold", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, HighImportanceQueryDistanceThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighImportanceQueryDistanceThreshold_MetaData), NewProp_HighImportanceQueryDistanceThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance = { "MaxQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, MaxQueryImportance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxQueryImportance_MetaData), NewProp_MaxQueryImportance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance = { "SightLimitQueryImportance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, SightLimitQueryImportance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightLimitQueryImportance_MetaData), NewProp_SightLimitQueryImportance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_PendingQueriesBudgetReductionRatio = { "PendingQueriesBudgetReductionRatio", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Sight, PendingQueriesBudgetReductionRatio), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PendingQueriesBudgetReductionRatio_MetaData), NewProp_PendingQueriesBudgetReductionRatio_MetaData) };
void Z_Construct_UClass_UAISense_Sight_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit(void* Obj)
{
	((UAISense_Sight*)Obj)->bUseAsynchronousTraceForDefaultSightQueries = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAISense_Sight_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries = { "bUseAsynchronousTraceForDefaultSightQueries", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAISense_Sight), &Z_Construct_UClass_UAISense_Sight_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAsynchronousTraceForDefaultSightQueries_MetaData), NewProp_bUseAsynchronousTraceForDefaultSightQueries_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Sight_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTracesPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxAsyncTracesPerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MinQueriesPerTimeSliceCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxTimeSlicePerTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_HighImportanceQueryDistanceThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_MaxQueryImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_SightLimitQueryImportance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_PendingQueriesBudgetReductionRatio,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Sight_Statics::NewProp_bUseAsynchronousTraceForDefaultSightQueries,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Sight_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Sight_Statics::ClassParams = {
	&UAISense_Sight::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAISense_Sight_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Sight_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Sight_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Sight()
{
	if (!Z_Registration_Info_UClass_UAISense_Sight.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Sight.OuterSingleton, Z_Construct_UClass_UAISense_Sight_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Sight.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Sight>()
{
	return UAISense_Sight::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Sight);
UAISense_Sight::~UAISense_Sight() {}
// End Class UAISense_Sight

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAISightEvent::StaticStruct, Z_Construct_UScriptStruct_FAISightEvent_Statics::NewStructOps, TEXT("AISightEvent"), &Z_Registration_Info_UScriptStruct_AISightEvent, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAISightEvent), 4209751250U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Sight, UAISense_Sight::StaticClass, TEXT("UAISense_Sight"), &Z_Registration_Info_UClass_UAISense_Sight, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Sight), 1845543331U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_2551905105(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Sight_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
