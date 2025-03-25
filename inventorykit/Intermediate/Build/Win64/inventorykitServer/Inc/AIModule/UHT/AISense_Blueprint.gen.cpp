// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/AISense_Blueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISense_Blueprint() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISense();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint();
AIMODULE_API UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UAISenseEvent_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UAISense_Blueprint Function GetAllListenerActors
struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics
{
	struct AISense_Blueprint_eventGetAllListenerActors_Parms
	{
		TArray<AActor*> ListenerActors;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenerActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner = { "ListenerActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors = { "ListenerActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerActors_Parms, ListenerActors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::NewProp_ListenerActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "GetAllListenerActors", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::AISense_Blueprint_eventGetAllListenerActors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::AISense_Blueprint_eventGetAllListenerActors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Blueprint::execGetAllListenerActors)
{
	P_GET_TARRAY_REF(AActor*,Z_Param_Out_ListenerActors);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllListenerActors(Z_Param_Out_ListenerActors);
	P_NATIVE_END;
}
// End Class UAISense_Blueprint Function GetAllListenerActors

// Begin Class UAISense_Blueprint Function GetAllListenerComponents
struct Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics
{
	struct AISense_Blueprint_eventGetAllListenerComponents_Parms
	{
		TArray<UAIPerceptionComponent*> ListenerComponents;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Perception" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenerComponents_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerComponents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenerComponents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner = { "ListenerComponents", nullptr, (EPropertyFlags)0x0000000000080000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents = { "ListenerComponents", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventGetAllListenerComponents_Parms, ListenerComponents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenerComponents_MetaData), NewProp_ListenerComponents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::NewProp_ListenerComponents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "GetAllListenerComponents", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::AISense_Blueprint_eventGetAllListenerComponents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::AISense_Blueprint_eventGetAllListenerComponents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAISense_Blueprint::execGetAllListenerComponents)
{
	P_GET_TARRAY_REF(UAIPerceptionComponent*,Z_Param_Out_ListenerComponents);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GetAllListenerComponents(Z_Param_Out_ListenerComponents);
	P_NATIVE_END;
}
// End Class UAISense_Blueprint Function GetAllListenerComponents

// Begin Class UAISense_Blueprint Function K2_OnNewPawn
struct AISense_Blueprint_eventK2_OnNewPawn_Parms
{
	APawn* NewPawn;
};
static FName NAME_UAISense_Blueprint_K2_OnNewPawn = FName(TEXT("K2_OnNewPawn"));
void UAISense_Blueprint::K2_OnNewPawn(APawn* NewPawn)
{
	AISense_Blueprint_eventK2_OnNewPawn_Parms Parms;
	Parms.NewPawn=NewPawn;
	ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_K2_OnNewPawn),&Parms);
}
struct Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** called when sense's instance gets notified about new pawn that has just been spawned */" },
		{ "DisplayName", "OnNewPawn" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ScriptName", "OnNewPawn" },
		{ "ToolTip", "called when sense's instance gets notified about new pawn that has just been spawned" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventK2_OnNewPawn_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::NewProp_NewPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "K2_OnNewPawn", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::PropPointers), sizeof(AISense_Blueprint_eventK2_OnNewPawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(AISense_Blueprint_eventK2_OnNewPawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAISense_Blueprint Function K2_OnNewPawn

// Begin Class UAISense_Blueprint Function OnListenerRegistered
struct AISense_Blueprint_eventOnListenerRegistered_Parms
{
	AActor* ActorListener;
	UAIPerceptionComponent* PerceptionComponent;
};
static FName NAME_UAISense_Blueprint_OnListenerRegistered = FName(TEXT("OnListenerRegistered"));
void UAISense_Blueprint::OnListenerRegistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
{
	AISense_Blueprint_eventOnListenerRegistered_Parms Parms;
	Parms.ActorListener=ActorListener;
	Parms.PerceptionComponent=PerceptionComponent;
	ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerRegistered),&Parms);
}
struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param PerceptionComponent is ActorListener's AIPerceptionComponent instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerRegistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_ActorListener,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerRegistered", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::PropPointers), sizeof(AISense_Blueprint_eventOnListenerRegistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(AISense_Blueprint_eventOnListenerRegistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAISense_Blueprint Function OnListenerRegistered

// Begin Class UAISense_Blueprint Function OnListenerUnregistered
struct AISense_Blueprint_eventOnListenerUnregistered_Parms
{
	AActor* ActorListener;
	UAIPerceptionComponent* PerceptionComponent;
};
static FName NAME_UAISense_Blueprint_OnListenerUnregistered = FName(TEXT("OnListenerUnregistered"));
void UAISense_Blueprint::OnListenerUnregistered(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
{
	AISense_Blueprint_eventOnListenerUnregistered_Parms Parms;
	Parms.ActorListener=ActorListener;
	Parms.PerceptionComponent=PerceptionComponent;
	ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUnregistered),&Parms);
}
struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** called when a listener unregistered from this sense. Most often this is called due to actor's death\n\x09 *\x09@param PerceptionComponent is ActorListener's AIPerceptionComponent instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "called when a listener unregistered from this sense. Most often this is called due to actor's death\n    @param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUnregistered_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_ActorListener,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerUnregistered", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::PropPointers), sizeof(AISense_Blueprint_eventOnListenerUnregistered_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::Function_MetaDataParams) };
static_assert(sizeof(AISense_Blueprint_eventOnListenerUnregistered_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAISense_Blueprint Function OnListenerUnregistered

// Begin Class UAISense_Blueprint Function OnListenerUpdated
struct AISense_Blueprint_eventOnListenerUpdated_Parms
{
	AActor* ActorListener;
	UAIPerceptionComponent* PerceptionComponent;
};
static FName NAME_UAISense_Blueprint_OnListenerUpdated = FName(TEXT("OnListenerUpdated"));
void UAISense_Blueprint::OnListenerUpdated(AActor* ActorListener, UAIPerceptionComponent* PerceptionComponent)
{
	AISense_Blueprint_eventOnListenerUpdated_Parms Parms;
	Parms.ActorListener=ActorListener;
	Parms.PerceptionComponent=PerceptionComponent;
	ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnListenerUpdated),&Parms);
}
struct Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 *\x09@param PerceptionComponent is ActorListener's AIPerceptionComponent instance\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "@param PerceptionComponent is ActorListener's AIPerceptionComponent instance" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorListener;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PerceptionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener = { "ActorListener", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, ActorListener), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnListenerUpdated_Parms, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerceptionComponent_MetaData), NewProp_PerceptionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_ActorListener,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::NewProp_PerceptionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnListenerUpdated", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::PropPointers), sizeof(AISense_Blueprint_eventOnListenerUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(AISense_Blueprint_eventOnListenerUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAISense_Blueprint Function OnListenerUpdated

// Begin Class UAISense_Blueprint Function OnUpdate
struct AISense_Blueprint_eventOnUpdate_Parms
{
	TArray<UAISenseEvent*> EventsToProcess;
	float ReturnValue;

	/** Constructor, initializes return property only **/
	AISense_Blueprint_eventOnUpdate_Parms()
		: ReturnValue(0)
	{
	}
};
static FName NAME_UAISense_Blueprint_OnUpdate = FName(TEXT("OnUpdate"));
float UAISense_Blueprint::OnUpdate(TArray<UAISenseEvent*> const& EventsToProcess)
{
	AISense_Blueprint_eventOnUpdate_Parms Parms;
	Parms.EventsToProcess=EventsToProcess;
	ProcessEvent(FindFunctionChecked(NAME_UAISense_Blueprint_OnUpdate),&Parms);
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Comment", "/** returns requested amount of time to pass until next frame. \n\x09 *\x09Return 0 to get update every frame (WARNING: hits performance) */" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ToolTip", "returns requested amount of time to pass until next frame.\n    Return 0 to get update every frame (WARNING: hits performance)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EventsToProcess_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EventsToProcess_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EventsToProcess;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner = { "EventsToProcess", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess = { "EventsToProcess", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, EventsToProcess), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EventsToProcess_MetaData), NewProp_EventsToProcess_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AISense_Blueprint_eventOnUpdate_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_EventsToProcess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAISense_Blueprint, nullptr, "OnUpdate", nullptr, nullptr, Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::PropPointers), sizeof(AISense_Blueprint_eventOnUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420802, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(AISense_Blueprint_eventOnUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAISense_Blueprint_OnUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAISense_Blueprint_OnUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UAISense_Blueprint Function OnUpdate

// Begin Class UAISense_Blueprint
void UAISense_Blueprint::StaticRegisterNativesUAISense_Blueprint()
{
	UClass* Class = UAISense_Blueprint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAllListenerActors", &UAISense_Blueprint::execGetAllListenerActors },
		{ "GetAllListenerComponents", &UAISense_Blueprint::execGetAllListenerComponents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAISense_Blueprint);
UClass* Z_Construct_UClass_UAISense_Blueprint_NoRegister()
{
	return UAISense_Blueprint::StaticClass();
}
struct Z_Construct_UClass_UAISense_Blueprint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AI" },
		{ "IncludePath", "Perception/AISense_Blueprint.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenerDataType_MetaData[] = {
		{ "Category", "Sense" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListenerContainer_MetaData[] = {
		{ "Category", "Sense" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UnprocessedEvents_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Perception/AISense_Blueprint.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ListenerDataType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListenerContainer_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ListenerContainer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UnprocessedEvents_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_UnprocessedEvents;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerActors, "GetAllListenerActors" }, // 2150769950
		{ &Z_Construct_UFunction_UAISense_Blueprint_GetAllListenerComponents, "GetAllListenerComponents" }, // 289536356
		{ &Z_Construct_UFunction_UAISense_Blueprint_K2_OnNewPawn, "K2_OnNewPawn" }, // 3279169856
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerRegistered, "OnListenerRegistered" }, // 553230681
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUnregistered, "OnListenerUnregistered" }, // 3592470480
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnListenerUpdated, "OnListenerUpdated" }, // 2072242982
		{ &Z_Construct_UFunction_UAISense_Blueprint_OnUpdate, "OnUpdate" }, // 3973279934
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISense_Blueprint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType = { "ListenerDataType", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Blueprint, ListenerDataType), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserDefinedStruct_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenerDataType_MetaData), NewProp_ListenerDataType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner = { "ListenerContainer", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer = { "ListenerContainer", nullptr, (EPropertyFlags)0x012408800000001c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Blueprint, ListenerContainer), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListenerContainer_MetaData), NewProp_ListenerContainer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner = { "UnprocessedEvents", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAISenseEvent_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents = { "UnprocessedEvents", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAISense_Blueprint, UnprocessedEvents), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UnprocessedEvents_MetaData), NewProp_UnprocessedEvents_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerDataType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_ListenerContainer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISense_Blueprint_Statics::NewProp_UnprocessedEvents,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAISense_Blueprint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAISense,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams = {
	&UAISense_Blueprint::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::PropPointers),
	0,
	0x048800A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams), Z_Construct_UClass_UAISense_Blueprint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAISense_Blueprint()
{
	if (!Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton, Z_Construct_UClass_UAISense_Blueprint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAISense_Blueprint.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UAISense_Blueprint>()
{
	return UAISense_Blueprint::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAISense_Blueprint);
UAISense_Blueprint::~UAISense_Blueprint() {}
// End Class UAISense_Blueprint

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAISense_Blueprint, UAISense_Blueprint::StaticClass, TEXT("UAISense_Blueprint"), &Z_Registration_Info_UClass_UAISense_Blueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAISense_Blueprint), 3710063444U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_822154996(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_AISense_Blueprint_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
