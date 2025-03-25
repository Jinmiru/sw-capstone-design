// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/AIModule/Classes/Perception/PawnSensingComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnSensingComponent() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature();
AIMODULE_API UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References

// Begin Delegate FSeePawnDelegate
struct Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics
{
	struct PawnSensingComponent_eventSeePawnDelegate_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventSeePawnDelegate_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SeePawnDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PawnSensingComponent_eventSeePawnDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::PawnSensingComponent_eventSeePawnDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPawnSensingComponent::FSeePawnDelegate_DelegateWrapper(const FMulticastScriptDelegate& SeePawnDelegate, APawn* Pawn)
{
	struct PawnSensingComponent_eventSeePawnDelegate_Parms
	{
		APawn* Pawn;
	};
	PawnSensingComponent_eventSeePawnDelegate_Parms Parms;
	Parms.Pawn=Pawn;
	SeePawnDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSeePawnDelegate

// Begin Delegate FHearNoiseDelegate
struct Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics
{
	struct PawnSensingComponent_eventHearNoiseDelegate_Parms
	{
		APawn* Instigator;
		FVector Location;
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Instigator), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventHearNoiseDelegate_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Instigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "HearNoiseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PawnSensingComponent_eventHearNoiseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00D30000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::PawnSensingComponent_eventHearNoiseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UPawnSensingComponent::FHearNoiseDelegate_DelegateWrapper(const FMulticastScriptDelegate& HearNoiseDelegate, APawn* Instigator, FVector const& Location, float Volume)
{
	struct PawnSensingComponent_eventHearNoiseDelegate_Parms
	{
		APawn* Instigator;
		FVector Location;
		float Volume;
	};
	PawnSensingComponent_eventHearNoiseDelegate_Parms Parms;
	Parms.Instigator=Instigator;
	Parms.Location=Location;
	Parms.Volume=Volume;
	HearNoiseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FHearNoiseDelegate

// Begin Class UPawnSensingComponent Function GetPeripheralVisionAngle
struct Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics
{
	struct PawnSensingComponent_eventGetPeripheralVisionAngle_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventGetPeripheralVisionAngle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "GetPeripheralVisionAngle", nullptr, nullptr, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PawnSensingComponent_eventGetPeripheralVisionAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::PawnSensingComponent_eventGetPeripheralVisionAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnSensingComponent::execGetPeripheralVisionAngle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionAngle();
	P_NATIVE_END;
}
// End Class UPawnSensingComponent Function GetPeripheralVisionAngle

// Begin Class UPawnSensingComponent Function GetPeripheralVisionCosine
struct Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics
{
	struct PawnSensingComponent_eventGetPeripheralVisionCosine_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventGetPeripheralVisionCosine_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "GetPeripheralVisionCosine", nullptr, nullptr, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PawnSensingComponent_eventGetPeripheralVisionCosine_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::PawnSensingComponent_eventGetPeripheralVisionCosine_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnSensingComponent::execGetPeripheralVisionCosine)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPeripheralVisionCosine();
	P_NATIVE_END;
}
// End Class UPawnSensingComponent Function GetPeripheralVisionCosine

// Begin Class UPawnSensingComponent Function SetPeripheralVisionAngle
struct Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics
{
	struct PawnSensingComponent_eventSetPeripheralVisionAngle_Parms
	{
		float NewPeripheralVisionAngle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "Comment", "/** Sets PeripheralVisionAngle. Calculates PeripheralVisionCosine from PeripheralVisionAngle */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Sets PeripheralVisionAngle. Calculates PeripheralVisionCosine from PeripheralVisionAngle" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPeripheralVisionAngle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewPeripheralVisionAngle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle = { "NewPeripheralVisionAngle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventSetPeripheralVisionAngle_Parms, NewPeripheralVisionAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPeripheralVisionAngle_MetaData), NewProp_NewPeripheralVisionAngle_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::NewProp_NewPeripheralVisionAngle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SetPeripheralVisionAngle", nullptr, nullptr, Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PawnSensingComponent_eventSetPeripheralVisionAngle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020406, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::PawnSensingComponent_eventSetPeripheralVisionAngle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnSensingComponent::execSetPeripheralVisionAngle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewPeripheralVisionAngle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPeripheralVisionAngle(Z_Param_NewPeripheralVisionAngle);
	P_NATIVE_END;
}
// End Class UPawnSensingComponent Function SetPeripheralVisionAngle

// Begin Class UPawnSensingComponent Function SetSensingInterval
struct Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics
{
	struct PawnSensingComponent_eventSetSensingInterval_Parms
	{
		float NewSensingInterval;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "Comment", "/**\n\x09 * Changes the SensingInterval.\n\x09 * If we are currently waiting for an interval, this can either extend or shorten that interval.\n\x09 * A value <= 0 prevents any updates.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Changes the SensingInterval.\nIf we are currently waiting for an interval, this can either extend or shorten that interval.\nA value <= 0 prevents any updates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSensingInterval_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSensingInterval;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval = { "NewSensingInterval", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PawnSensingComponent_eventSetSensingInterval_Parms, NewSensingInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSensingInterval_MetaData), NewProp_NewSensingInterval_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::NewProp_NewSensingInterval,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SetSensingInterval", nullptr, nullptr, Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PawnSensingComponent_eventSetSensingInterval_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020406, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::PawnSensingComponent_eventSetSensingInterval_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnSensingComponent::execSetSensingInterval)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSensingInterval);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSensingInterval(Z_Param_NewSensingInterval);
	P_NATIVE_END;
}
// End Class UPawnSensingComponent Function SetSensingInterval

// Begin Class UPawnSensingComponent Function SetSensingUpdatesEnabled
struct Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics
{
	struct PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI|Components|PawnSensing" },
		{ "Comment", "/** Enables or disables sensing updates. The timer is reset in either case. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Enables or disables sensing updates. The timer is reset in either case." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms), &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnabled_MetaData), NewProp_bEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPawnSensingComponent, nullptr, "SetSensingUpdatesEnabled", nullptr, nullptr, Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020406, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::PawnSensingComponent_eventSetSensingUpdatesEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UPawnSensingComponent::execSetSensingUpdatesEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSensingUpdatesEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UPawnSensingComponent Function SetSensingUpdatesEnabled

// Begin Class UPawnSensingComponent
void UPawnSensingComponent::StaticRegisterNativesUPawnSensingComponent()
{
	UClass* Class = UPawnSensingComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetPeripheralVisionAngle", &UPawnSensingComponent::execGetPeripheralVisionAngle },
		{ "GetPeripheralVisionCosine", &UPawnSensingComponent::execGetPeripheralVisionCosine },
		{ "SetPeripheralVisionAngle", &UPawnSensingComponent::execSetPeripheralVisionAngle },
		{ "SetSensingInterval", &UPawnSensingComponent::execSetSensingInterval },
		{ "SetSensingUpdatesEnabled", &UPawnSensingComponent::execSetSensingUpdatesEnabled },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPawnSensingComponent);
UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister()
{
	return UPawnSensingComponent::StaticClass();
}
struct Z_Construct_UClass_UPawnSensingComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * SensingComponent encapsulates sensory (ie sight and hearing) settings and functionality for an Actor,\n * allowing the actor to see/hear Pawns in the world. It does nothing on network clients.\n */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "Perception/PawnSensingComponent.h" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "SensingComponent encapsulates sensory (ie sight and hearing) settings and functionality for an Actor,\nallowing the actor to see/hear Pawns in the world. It does nothing on network clients." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingThreshold_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Max distance at which a makenoise(1.0) loudness sound can be heard, regardless of occlusion */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max distance at which a makenoise(1.0) loudness sound can be heard, regardless of occlusion" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LOSHearingThreshold_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Max distance at which a makenoise(1.0) loudness sound can be heard if unoccluded (LOSHearingThreshold should be > HearingThreshold) */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max distance at which a makenoise(1.0) loudness sound can be heard if unoccluded (LOSHearingThreshold should be > HearingThreshold)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightRadius_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Maximum sight distance. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Maximum sight distance." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SensingInterval_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Amount of time between pawn sensing updates. Use SetSensingInterval() to adjust this at runtime. A value <= 0 prevents any updates. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Amount of time between pawn sensing updates. Use SetSensingInterval() to adjust this at runtime. A value <= 0 prevents any updates." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HearingMaxSoundAge_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "// Max age of sounds we can hear. Should be greater than SensingInterval, or you might miss hearing some sounds!\n" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Max age of sounds we can hear. Should be greater than SensingInterval, or you might miss hearing some sounds!" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSensingUpdates_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, component will perform sensing updates. At runtime change this using SetSensingUpdatesEnabled(). */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, component will perform sensing updates. At runtime change this using SetSensingUpdatesEnabled()." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOnlySensePlayers_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, will only sense player-controlled pawns in the world. Default: true */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, will only sense player-controlled pawns in the world. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSeePawns_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** If true, we will perform visibility tests and will trigger notifications when a Pawn is visible. Default: true */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, we will perform visibility tests and will trigger notifications when a Pawn is visible. Default: true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHearNoises_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/**\n\x09 * If true, we will perform audibility tests and will be notified when a Pawn makes a noise that can be heard. Default: true\n\x09 * IMPORTANT NOTE: If we can see pawns (bSeePawns is true), and the pawn is visible, noise notifications are not triggered.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "If true, we will perform audibility tests and will be notified when a Pawn makes a noise that can be heard. Default: true\nIMPORTANT NOTE: If we can see pawns (bSeePawns is true), and the pawn is visible, noise notifications are not triggered." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSeePawn_MetaData[] = {
		{ "Comment", "/** Delegate to execute when we see a Pawn. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Delegate to execute when we see a Pawn." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHearNoise_MetaData[] = {
		{ "Comment", "/** Delegate to execute when we hear a noise from a Pawn's PawnNoiseEmitterComponent. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Delegate to execute when we hear a noise from a Pawn's PawnNoiseEmitterComponent." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionAngle_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "/** How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "How far to the side AI can see, in degrees. Use SetPeripheralVisionAngle to change the value at runtime." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PeripheralVisionCosine_MetaData[] = {
		{ "Comment", "/** Cosine of limits of peripheral vision. Computed from PeripheralVisionAngle. */" },
		{ "ModuleRelativePath", "Classes/Perception/PawnSensingComponent.h" },
		{ "ToolTip", "Cosine of limits of peripheral vision. Computed from PeripheralVisionAngle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LOSHearingThreshold;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SensingInterval;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HearingMaxSoundAge;
	static void NewProp_bEnableSensingUpdates_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSensingUpdates;
	static void NewProp_bOnlySensePlayers_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlySensePlayers;
	static void NewProp_bSeePawns_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSeePawns;
	static void NewProp_bHearNoises_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHearNoises;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSeePawn;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHearNoise;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PeripheralVisionCosine;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionAngle, "GetPeripheralVisionAngle" }, // 2150953400
		{ &Z_Construct_UFunction_UPawnSensingComponent_GetPeripheralVisionCosine, "GetPeripheralVisionCosine" }, // 3235692474
		{ &Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature, "HearNoiseDelegate__DelegateSignature" }, // 3464683236
		{ &Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature, "SeePawnDelegate__DelegateSignature" }, // 3915387772
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetPeripheralVisionAngle, "SetPeripheralVisionAngle" }, // 4248010863
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetSensingInterval, "SetSensingInterval" }, // 2010703650
		{ &Z_Construct_UFunction_UPawnSensingComponent_SetSensingUpdatesEnabled, "SetSensingUpdatesEnabled" }, // 3820812704
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnSensingComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold = { "HearingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, HearingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingThreshold_MetaData), NewProp_HearingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold = { "LOSHearingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, LOSHearingThreshold), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LOSHearingThreshold_MetaData), NewProp_LOSHearingThreshold_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius = { "SightRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, SightRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightRadius_MetaData), NewProp_SightRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval = { "SensingInterval", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, SensingInterval), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SensingInterval_MetaData), NewProp_SensingInterval_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge = { "HearingMaxSoundAge", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, HearingMaxSoundAge), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HearingMaxSoundAge_MetaData), NewProp_HearingMaxSoundAge_MetaData) };
void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit(void* Obj)
{
	((UPawnSensingComponent*)Obj)->bEnableSensingUpdates = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates = { "bEnableSensingUpdates", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSensingUpdates_MetaData), NewProp_bEnableSensingUpdates_MetaData) };
void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit(void* Obj)
{
	((UPawnSensingComponent*)Obj)->bOnlySensePlayers = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers = { "bOnlySensePlayers", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOnlySensePlayers_MetaData), NewProp_bOnlySensePlayers_MetaData) };
void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit(void* Obj)
{
	((UPawnSensingComponent*)Obj)->bSeePawns = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns = { "bSeePawns", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSeePawns_MetaData), NewProp_bSeePawns_MetaData) };
void Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit(void* Obj)
{
	((UPawnSensingComponent*)Obj)->bHearNoises = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises = { "bHearNoises", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UPawnSensingComponent), &Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHearNoises_MetaData), NewProp_bHearNoises_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn = { "OnSeePawn", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, OnSeePawn), Z_Construct_UDelegateFunction_UPawnSensingComponent_SeePawnDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSeePawn_MetaData), NewProp_OnSeePawn_MetaData) }; // 3915387772
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise = { "OnHearNoise", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, OnHearNoise), Z_Construct_UDelegateFunction_UPawnSensingComponent_HearNoiseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHearNoise_MetaData), NewProp_OnHearNoise_MetaData) }; // 3464683236
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle = { "PeripheralVisionAngle", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionAngle_MetaData), NewProp_PeripheralVisionAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine = { "PeripheralVisionCosine", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UPawnSensingComponent, PeripheralVisionCosine), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PeripheralVisionCosine_MetaData), NewProp_PeripheralVisionCosine_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_LOSHearingThreshold,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SightRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_SensingInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_HearingMaxSoundAge,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bEnableSensingUpdates,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bOnlySensePlayers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bSeePawns,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_bHearNoises,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnSeePawn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_OnHearNoise,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPawnSensingComponent_Statics::NewProp_PeripheralVisionCosine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UPawnSensingComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams = {
	&UPawnSensingComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UPawnSensingComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UPawnSensingComponent()
{
	if (!Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton, Z_Construct_UClass_UPawnSensingComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UPawnSensingComponent.OuterSingleton;
}
template<> AIMODULE_API UClass* StaticClass<UPawnSensingComponent>()
{
	return UPawnSensingComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnSensingComponent);
UPawnSensingComponent::~UPawnSensingComponent() {}
// End Class UPawnSensingComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UPawnSensingComponent, UPawnSensingComponent::StaticClass, TEXT("UPawnSensingComponent"), &Z_Registration_Info_UClass_UPawnSensingComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPawnSensingComponent), 1488564261U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_807838530(TEXT("/Script/AIModule"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Perception_PawnSensingComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
