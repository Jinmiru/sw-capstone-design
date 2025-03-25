// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryContext_BlueprintBase() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase();
AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Class UEnvQueryContext_BlueprintBase Function ProvideActorsSet
struct EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms
{
	UObject* QuerierObject;
	AActor* QuerierActor;
	TArray<AActor*> ResultingActorsSet;
};
static FName NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet = FName(TEXT("ProvideActorsSet"));
void UEnvQueryContext_BlueprintBase::ProvideActorsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<AActor*>& ResultingActorsSet) const
{
	EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms Parms;
	Parms.QuerierObject=QuerierObject;
	Parms.QuerierActor=QuerierActor;
	Parms.ResultingActorsSet=ResultingActorsSet;
	const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideActorsSet),&Parms);
	ResultingActorsSet=Parms.ResultingActorsSet;
}
struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultingActorsSet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultingActorsSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet_Inner = { "ResultingActorsSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet = { "ResultingActorsSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms, ResultingActorsSet), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_QuerierActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::NewProp_ResultingActorsSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideActorsSet", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::PropPointers), sizeof(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQueryContext_BlueprintBase_eventProvideActorsSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQueryContext_BlueprintBase Function ProvideActorsSet

// Begin Class UEnvQueryContext_BlueprintBase Function ProvideLocationsSet
struct EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms
{
	UObject* QuerierObject;
	AActor* QuerierActor;
	TArray<FVector> ResultingLocationSet;
};
static FName NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet = FName(TEXT("ProvideLocationsSet"));
void UEnvQueryContext_BlueprintBase::ProvideLocationsSet(UObject* QuerierObject, AActor* QuerierActor, TArray<FVector>& ResultingLocationSet) const
{
	EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms Parms;
	Parms.QuerierObject=QuerierObject;
	Parms.QuerierActor=QuerierActor;
	Parms.ResultingLocationSet=ResultingLocationSet;
	const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideLocationsSet),&Parms);
	ResultingLocationSet=Parms.ResultingLocationSet;
}
struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultingLocationSet_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ResultingLocationSet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet_Inner = { "ResultingLocationSet", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet = { "ResultingLocationSet", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms, ResultingLocationSet), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_QuerierActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::NewProp_ResultingLocationSet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideLocationsSet", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::PropPointers), sizeof(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQueryContext_BlueprintBase_eventProvideLocationsSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQueryContext_BlueprintBase Function ProvideLocationsSet

// Begin Class UEnvQueryContext_BlueprintBase Function ProvideSingleActor
struct EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms
{
	UObject* QuerierObject;
	AActor* QuerierActor;
	AActor* ResultingActor;
};
static FName NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor = FName(TEXT("ProvideSingleActor"));
void UEnvQueryContext_BlueprintBase::ProvideSingleActor(UObject* QuerierObject, AActor* QuerierActor, AActor*& ResultingActor) const
{
	EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms Parms;
	Parms.QuerierObject=QuerierObject;
	Parms.QuerierActor=QuerierActor;
	Parms.ResultingActor=ResultingActor;
	const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideSingleActor),&Parms);
	ResultingActor=Parms.ResultingActor;
}
struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResultingActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_ResultingActor = { "ResultingActor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms, ResultingActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_QuerierActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::NewProp_ResultingActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideSingleActor", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::PropPointers), sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQueryContext_BlueprintBase Function ProvideSingleActor

// Begin Class UEnvQueryContext_BlueprintBase Function ProvideSingleLocation
struct EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms
{
	UObject* QuerierObject;
	AActor* QuerierActor;
	FVector ResultingLocation;
};
static FName NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation = FName(TEXT("ProvideSingleLocation"));
void UEnvQueryContext_BlueprintBase::ProvideSingleLocation(UObject* QuerierObject, AActor* QuerierActor, FVector& ResultingLocation) const
{
	EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms Parms;
	Parms.QuerierObject=QuerierObject;
	Parms.QuerierActor=QuerierActor;
	Parms.ResultingLocation=ResultingLocation;
	const_cast<UEnvQueryContext_BlueprintBase*>(this)->ProcessEvent(FindFunctionChecked(NAME_UEnvQueryContext_BlueprintBase_ProvideSingleLocation),&Parms);
	ResultingLocation=Parms.ResultingLocation;
}
struct Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_QuerierActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ResultingLocation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierObject = { "QuerierObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, QuerierObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierActor = { "QuerierActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, QuerierActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_ResultingLocation = { "ResultingLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms, ResultingLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_QuerierActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::NewProp_ResultingLocation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEnvQueryContext_BlueprintBase, nullptr, "ProvideSingleLocation", nullptr, nullptr, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::PropPointers), sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::Function_MetaDataParams) };
static_assert(sizeof(EnvQueryContext_BlueprintBase_eventProvideSingleLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UEnvQueryContext_BlueprintBase Function ProvideSingleLocation

// Begin Class UEnvQueryContext_BlueprintBase
void UEnvQueryContext_BlueprintBase::StaticRegisterNativesUEnvQueryContext_BlueprintBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryContext_BlueprintBase);
UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase_NoRegister()
{
	return UEnvQueryContext_BlueprintBase::StaticClass();
}
struct Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Contexts/EnvQueryContext_BlueprintBase.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideActorsSet, "ProvideActorsSet" }, // 3172146243
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideLocationsSet, "ProvideLocationsSet" }, // 635175443
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleActor, "ProvideSingleActor" }, // 349504360
		{ &Z_Construct_UFunction_UEnvQueryContext_BlueprintBase_ProvideSingleLocation, "ProvideSingleLocation" }, // 3298231739
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryContext_BlueprintBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnvQueryContext,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::ClassParams = {
	&UEnvQueryContext_BlueprintBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000810A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEnvQueryContext_BlueprintBase()
{
	if (!Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.OuterSingleton, Z_Construct_UClass_UEnvQueryContext_BlueprintBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UEnvQueryContext_BlueprintBase>()
{
	return UEnvQueryContext_BlueprintBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryContext_BlueprintBase);
UEnvQueryContext_BlueprintBase::~UEnvQueryContext_BlueprintBase() {}
// End Class UEnvQueryContext_BlueprintBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryContext_BlueprintBase, UEnvQueryContext_BlueprintBase::StaticClass, TEXT("UEnvQueryContext_BlueprintBase"), &Z_Registration_Info_UClass_UEnvQueryContext_BlueprintBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryContext_BlueprintBase), 2106479095U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_1603767971(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Contexts_EnvQueryContext_BlueprintBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
