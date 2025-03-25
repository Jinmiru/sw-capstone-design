// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/Components/InterpToMovementComponent.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterpToMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UInterpToMovementComponent();
ENGINE_API UClass* Z_Construct_UClass_UInterpToMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EInterpToBehaviourType();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature();
ENGINE_API UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInterpControlPoint();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EInterpToBehaviourType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterpToBehaviourType;
static UEnum* EInterpToBehaviourType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInterpToBehaviourType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInterpToBehaviourType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EInterpToBehaviourType, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EInterpToBehaviourType"));
	}
	return Z_Registration_Info_UEnum_EInterpToBehaviourType.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EInterpToBehaviourType>()
{
	return EInterpToBehaviourType_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Controls the movement behaviour\n */" },
		{ "Loop_Reset.Comment", "/** Reset back to start when reaching the end */" },
		{ "Loop_Reset.Name", "EInterpToBehaviourType::Loop_Reset" },
		{ "Loop_Reset.ToolTip", "Reset back to start when reaching the end" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "OneShot.Comment", "/** Move to destination and stop */" },
		{ "OneShot.Name", "EInterpToBehaviourType::OneShot" },
		{ "OneShot.ToolTip", "Move to destination and stop" },
		{ "OneShot_Reverse.Comment", "/** Move to destination, return and stop */" },
		{ "OneShot_Reverse.Name", "EInterpToBehaviourType::OneShot_Reverse" },
		{ "OneShot_Reverse.ToolTip", "Move to destination, return and stop" },
		{ "PingPong.Comment", "/** Repeatedly lerp from start to end and back */" },
		{ "PingPong.Name", "EInterpToBehaviourType::PingPong" },
		{ "PingPong.ToolTip", "Repeatedly lerp from start to end and back" },
		{ "ToolTip", "Controls the movement behaviour" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInterpToBehaviourType::OneShot", (int64)EInterpToBehaviourType::OneShot },
		{ "EInterpToBehaviourType::OneShot_Reverse", (int64)EInterpToBehaviourType::OneShot_Reverse },
		{ "EInterpToBehaviourType::Loop_Reset", (int64)EInterpToBehaviourType::Loop_Reset },
		{ "EInterpToBehaviourType::PingPong", (int64)EInterpToBehaviourType::PingPong },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EInterpToBehaviourType",
	"EInterpToBehaviourType",
	Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EInterpToBehaviourType()
{
	if (!Z_Registration_Info_UEnum_EInterpToBehaviourType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterpToBehaviourType.InnerSingleton, Z_Construct_UEnum_Engine_EInterpToBehaviourType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInterpToBehaviourType.InnerSingleton;
}
// End Enum EInterpToBehaviourType

// Begin ScriptStruct FInterpControlPoint
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InterpControlPoint;
class UScriptStruct* FInterpControlPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InterpControlPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InterpControlPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInterpControlPoint, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("InterpControlPoint"));
	}
	return Z_Registration_Info_UScriptStruct_InterpControlPoint.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FInterpControlPoint>()
{
	return FInterpControlPoint::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInterpControlPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PositionControlPoint_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "// The position of the point \n" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "The position of the point" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPositionIsRelative_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "// Is the location relative to the root components initial location\n" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Is the location relative to the root components initial location" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PositionControlPoint;
	static void NewProp_bPositionIsRelative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionIsRelative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInterpControlPoint>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewProp_PositionControlPoint = { "PositionControlPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInterpControlPoint, PositionControlPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PositionControlPoint_MetaData), NewProp_PositionControlPoint_MetaData) };
void Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewProp_bPositionIsRelative_SetBit(void* Obj)
{
	((FInterpControlPoint*)Obj)->bPositionIsRelative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewProp_bPositionIsRelative = { "bPositionIsRelative", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInterpControlPoint), &Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewProp_bPositionIsRelative_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPositionIsRelative_MetaData), NewProp_bPositionIsRelative_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInterpControlPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewProp_PositionControlPoint,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewProp_bPositionIsRelative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpControlPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInterpControlPoint_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"InterpControlPoint",
	Z_Construct_UScriptStruct_FInterpControlPoint_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpControlPoint_Statics::PropPointers),
	sizeof(FInterpControlPoint),
	alignof(FInterpControlPoint),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInterpControlPoint_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInterpControlPoint_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInterpControlPoint()
{
	if (!Z_Registration_Info_UScriptStruct_InterpControlPoint.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InterpControlPoint.InnerSingleton, Z_Construct_UScriptStruct_FInterpControlPoint_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InterpControlPoint.InnerSingleton;
}
// End ScriptStruct FInterpControlPoint

// Begin Delegate FOnInterpToReverseDelegate
struct Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics
{
	struct InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "OnInterpToReverseDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInterpToMovementComponent::FOnInterpToReverseDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToReverseDelegate, FHitResult const& ImpactResult, float Time)
{
	struct InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
	InterpToMovementComponent_eventOnInterpToReverseDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	Parms.Time=Time;
	OnInterpToReverseDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInterpToReverseDelegate

// Begin Delegate FOnInterpToStopDelegate
struct Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics
{
	struct InterpToMovementComponent_eventOnInterpToStopDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToStopDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToStopDelegate_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "OnInterpToStopDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToStopDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToStopDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInterpToMovementComponent::FOnInterpToStopDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToStopDelegate, FHitResult const& ImpactResult, float Time)
{
	struct InterpToMovementComponent_eventOnInterpToStopDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
	InterpToMovementComponent_eventOnInterpToStopDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	Parms.Time=Time;
	OnInterpToStopDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInterpToStopDelegate

// Begin Delegate FOnInterpToWaitBeginDelegate
struct Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics
{
	struct InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "OnInterpToWaitBeginDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInterpToMovementComponent::FOnInterpToWaitBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitBeginDelegate, FHitResult const& ImpactResult, float Time)
{
	struct InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
	InterpToMovementComponent_eventOnInterpToWaitBeginDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	Parms.Time=Time;
	OnInterpToWaitBeginDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInterpToWaitBeginDelegate

// Begin Delegate FOnInterpToWaitEndDelegate
struct Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics
{
	struct InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "OnInterpToWaitEndDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInterpToMovementComponent::FOnInterpToWaitEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToWaitEndDelegate, FHitResult const& ImpactResult, float Time)
{
	struct InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
	InterpToMovementComponent_eventOnInterpToWaitEndDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	Parms.Time=Time;
	OnInterpToWaitEndDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInterpToWaitEndDelegate

// Begin Delegate FOnInterpToResetDelegate
struct Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics
{
	struct InterpToMovementComponent_eventOnInterpToResetDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactResult;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Time;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::NewProp_ImpactResult = { "ImpactResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToResetDelegate_Parms, ImpactResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactResult_MetaData), NewProp_ImpactResult_MetaData) }; // 4100991306
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventOnInterpToResetDelegate_Parms, Time), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::NewProp_ImpactResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::NewProp_Time,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "OnInterpToResetDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToResetDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00530000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::InterpToMovementComponent_eventOnInterpToResetDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInterpToMovementComponent::FOnInterpToResetDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnInterpToResetDelegate, FHitResult const& ImpactResult, float Time)
{
	struct InterpToMovementComponent_eventOnInterpToResetDelegate_Parms
	{
		FHitResult ImpactResult;
		float Time;
	};
	InterpToMovementComponent_eventOnInterpToResetDelegate_Parms Parms;
	Parms.ImpactResult=ImpactResult;
	Parms.Time=Time;
	OnInterpToResetDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnInterpToResetDelegate

// Begin Class UInterpToMovementComponent Function AddControlPointPosition
struct Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics
{
	struct InterpToMovementComponent_eventAddControlPointPosition_Parms
	{
		FVector Pos;
		bool bPositionIsRelative;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "/* Add a control point that represents a position. */" },
		{ "CPP_Default_bPositionIsRelative", "true" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Add a control point that represents a position." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pos;
	static void NewProp_bPositionIsRelative_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPositionIsRelative;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::NewProp_Pos = { "Pos", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventAddControlPointPosition_Parms, Pos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::NewProp_bPositionIsRelative_SetBit(void* Obj)
{
	((InterpToMovementComponent_eventAddControlPointPosition_Parms*)Obj)->bPositionIsRelative = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::NewProp_bPositionIsRelative = { "bPositionIsRelative", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InterpToMovementComponent_eventAddControlPointPosition_Parms), &Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::NewProp_bPositionIsRelative_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::NewProp_Pos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::NewProp_bPositionIsRelative,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "AddControlPointPosition", nullptr, nullptr, Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::InterpToMovementComponent_eventAddControlPointPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820402, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::InterpToMovementComponent_eventAddControlPointPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterpToMovementComponent::execAddControlPointPosition)
{
	P_GET_STRUCT(FVector,Z_Param_Pos);
	P_GET_UBOOL(Z_Param_bPositionIsRelative);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddControlPointPosition(Z_Param_Pos,Z_Param_bPositionIsRelative);
	P_NATIVE_END;
}
// End Class UInterpToMovementComponent Function AddControlPointPosition

// Begin Class UInterpToMovementComponent Function FinaliseControlPoints
struct Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "/* Initialise the control points array. Call after adding control points if they are add after begin play .  */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Initialise the control points array. Call after adding control points if they are add after begin play ." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "FinaliseControlPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterpToMovementComponent::execFinaliseControlPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinaliseControlPoints();
	P_NATIVE_END;
}
// End Class UInterpToMovementComponent Function FinaliseControlPoints

// Begin Class UInterpToMovementComponent Function ResetControlPoints
struct Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "/* Clear the control points array and set to stopped. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Clear the control points array and set to stopped." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "ResetControlPoints", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterpToMovementComponent::execResetControlPoints)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetControlPoints();
	P_NATIVE_END;
}
// End Class UInterpToMovementComponent Function ResetControlPoints

// Begin Class UInterpToMovementComponent Function RestartMovement
struct Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics
{
	struct InterpToMovementComponent_eventRestartMovement_Parms
	{
		float InitialDirection;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Control" },
		{ "Comment", "/* Reset to start. Sets time to zero and direction to 1.  */" },
		{ "CPP_Default_InitialDirection", "1.000000" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Reset to start. Sets time to zero and direction to 1." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialDirection;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::NewProp_InitialDirection = { "InitialDirection", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventRestartMovement_Parms, InitialDirection), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::NewProp_InitialDirection,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "RestartMovement", nullptr, nullptr, Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::InterpToMovementComponent_eventRestartMovement_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::InterpToMovementComponent_eventRestartMovement_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterpToMovementComponent::execRestartMovement)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_InitialDirection);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RestartMovement(Z_Param_InitialDirection);
	P_NATIVE_END;
}
// End Class UInterpToMovementComponent Function RestartMovement

// Begin Class UInterpToMovementComponent Function StopSimulating
struct Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics
{
	struct InterpToMovementComponent_eventStopSimulating_Parms
	{
		FHitResult HitResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game|Components|InterpToMovement" },
		{ "Comment", "/** Clears the reference to UpdatedComponent, fires stop event, and stops ticking. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Clears the reference to UpdatedComponent, fires stop event, and stops ticking." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InterpToMovementComponent_eventStopSimulating_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitResult_MetaData), NewProp_HitResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::NewProp_HitResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterpToMovementComponent, nullptr, "StopSimulating", nullptr, nullptr, Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::InterpToMovementComponent_eventStopSimulating_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::InterpToMovementComponent_eventStopSimulating_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInterpToMovementComponent::execStopSimulating)
{
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopSimulating(Z_Param_Out_HitResult);
	P_NATIVE_END;
}
// End Class UInterpToMovementComponent Function StopSimulating

// Begin Class UInterpToMovementComponent
void UInterpToMovementComponent::StaticRegisterNativesUInterpToMovementComponent()
{
	UClass* Class = UInterpToMovementComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddControlPointPosition", &UInterpToMovementComponent::execAddControlPointPosition },
		{ "FinaliseControlPoints", &UInterpToMovementComponent::execFinaliseControlPoints },
		{ "ResetControlPoints", &UInterpToMovementComponent::execResetControlPoints },
		{ "RestartMovement", &UInterpToMovementComponent::execRestartMovement },
		{ "StopSimulating", &UInterpToMovementComponent::execStopSimulating },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterpToMovementComponent);
UClass* Z_Construct_UClass_UInterpToMovementComponent_NoRegister()
{
	return UInterpToMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UInterpToMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * Move the root component between a series of points over a given time * \n *\n * @see UMovementComponent\n */" },
		{ "HideCategories", "Velocity" },
		{ "IncludePath", "Components/InterpToMovementComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Move the root component between a series of points over a given time *\n\n@see UMovementComponent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[] = {
		{ "Category", "Control" },
		{ "ClampMin", "0.100000" },
		{ "Comment", "/* How long to take to move from the first point to the last (or vice versa) */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "How long to take to move from the first point to the last (or vice versa)" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPauseOnImpact_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/** If true, will pause movement on impact. If false it will behave as if the end of the movement range was reached based on the BehaviourType. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "If true, will pause movement on impact. If false it will behave as if the end of the movement range was reached based on the BehaviourType." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSweep_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/** If true, will sweep for blocking collision during movement. If false, it will simply teleport to the next position and ignore collision. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "If true, will sweep for blocking collision during movement. If false, it will simply teleport to the next position and ignore collision." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TeleportType_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/** Physics teleport type. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Physics teleport type." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviourType_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/* Movement behaviour of the component */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Movement behaviour of the component" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCheckIfStillInWorld_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "/* Do we want this comp to perform CheckStillInWorld checks? */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Do we want this comp to perform CheckStillInWorld checks?" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceSubStepping_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory.\n\x09 * Objects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed.\n\x09 * Sub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.\n\x09 * @see MaxSimulationTimeStep, MaxSimulationIterations\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "If true, forces sub-stepping to break up movement into discrete smaller steps to improve accuracy of the trajectory.\nObjects that move in a straight line typically do *not* need to set this, as movement always uses continuous collision detection (sweeps) so collision is not missed.\nSub-stepping is automatically enabled when under the effects of gravity or when homing towards a target.\n@see MaxSimulationTimeStep, MaxSimulationIterations" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterpToReverse_MetaData[] = {
		{ "Comment", "/** Called when InterpTo impacts something and reverse is enabled. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Called when InterpTo impacts something and reverse is enabled." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInterpToStop_MetaData[] = {
		{ "Comment", "/** Called when InterpTo has come to a stop. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Called when InterpTo has come to a stop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWaitBeginDelegate_MetaData[] = {
		{ "Comment", "/** Called when InterpTo has come to a stop but will resume when possible. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Called when InterpTo has come to a stop but will resume when possible." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnWaitEndDelegate_MetaData[] = {
		{ "Comment", "/** Called when InterpTo has resumed following a stop. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Called when InterpTo has resumed following a stop." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnResetDelegate_MetaData[] = {
		{ "Comment", "/** Called when InterpTo reached the end and reset back to start . */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Called when InterpTo reached the end and reset back to start ." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationTimeStep_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "0.50" },
		{ "ClampMin", "0.0166" },
		{ "Comment", "/**\n\x09 * Max time delta for each discrete simulation step.\n\x09 * Lowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\x09 *\n\x09 * WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n\x09 * @see MaxSimulationIterations, bForceSubStepping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Max time delta for each discrete simulation step.\nLowering this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationIterations, bForceSubStepping" },
		{ "UIMax", "0.50" },
		{ "UIMin", "0.0166" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpeedMultiplier_MetaData[] = {
		{ "Category", "Simulation" },
		{ "Comment", "/**\n\x09 * Change the speed of movement.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Change the speed of movement." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSimulationIterations_MetaData[] = {
		{ "Category", "Simulation" },
		{ "ClampMax", "25" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * Max number of iterations used for each discrete simulation step.\n\x09 * Increasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\x09 *\n\x09 * WARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n\x09 * @see MaxSimulationTimeStep, bForceSubStepping\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "Max number of iterations used for each discrete simulation step.\nIncreasing this value can address issues with fast-moving objects or complex collision scenarios, at the cost of performance.\n\nWARNING: if (MaxSimulationTimeStep * MaxSimulationIterations) is too low for the min framerate, the last simulation step may exceed MaxSimulationTimeStep to complete the simulation.\n@see MaxSimulationTimeStep, bForceSubStepping" },
		{ "UIMax", "25" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPoints_MetaData[] = {
		{ "Category", "Control" },
		{ "Comment", "/* List of control points to visit. */" },
		{ "ModuleRelativePath", "Classes/Components/InterpToMovementComponent.h" },
		{ "ToolTip", "List of control points to visit." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bPauseOnImpact_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPauseOnImpact;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeleportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeleportType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BehaviourType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BehaviourType;
	static void NewProp_bCheckIfStillInWorld_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckIfStillInWorld;
	static void NewProp_bForceSubStepping_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceSubStepping;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpToReverse;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInterpToStop;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitBeginDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWaitEndDelegate;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnResetDelegate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSimulationTimeStep;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SpeedMultiplier;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxSimulationIterations;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ControlPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterpToMovementComponent_AddControlPointPosition, "AddControlPointPosition" }, // 1682237241
		{ &Z_Construct_UFunction_UInterpToMovementComponent_FinaliseControlPoints, "FinaliseControlPoints" }, // 3139455198
		{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature, "OnInterpToResetDelegate__DelegateSignature" }, // 1935311368
		{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature, "OnInterpToReverseDelegate__DelegateSignature" }, // 262674028
		{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature, "OnInterpToStopDelegate__DelegateSignature" }, // 880619218
		{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature, "OnInterpToWaitBeginDelegate__DelegateSignature" }, // 807331365
		{ &Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature, "OnInterpToWaitEndDelegate__DelegateSignature" }, // 1466005850
		{ &Z_Construct_UFunction_UInterpToMovementComponent_ResetControlPoints, "ResetControlPoints" }, // 2599705214
		{ &Z_Construct_UFunction_UInterpToMovementComponent_RestartMovement, "RestartMovement" }, // 256514495
		{ &Z_Construct_UFunction_UInterpToMovementComponent_StopSimulating, "StopSimulating" }, // 1874149373
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterpToMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, Duration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Duration_MetaData), NewProp_Duration_MetaData) };
void Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bPauseOnImpact_SetBit(void* Obj)
{
	((UInterpToMovementComponent*)Obj)->bPauseOnImpact = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bPauseOnImpact = { "bPauseOnImpact", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInterpToMovementComponent), &Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bPauseOnImpact_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPauseOnImpact_MetaData), NewProp_bPauseOnImpact_MetaData) };
void Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((UInterpToMovementComponent*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterpToMovementComponent), &Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSweep_MetaData), NewProp_bSweep_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_TeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_TeleportType = { "TeleportType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, TeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TeleportType_MetaData), NewProp_TeleportType_MetaData) }; // 1982391065
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_BehaviourType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_BehaviourType = { "BehaviourType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, BehaviourType), Z_Construct_UEnum_Engine_EInterpToBehaviourType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviourType_MetaData), NewProp_BehaviourType_MetaData) }; // 2855876887
void Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bCheckIfStillInWorld_SetBit(void* Obj)
{
	((UInterpToMovementComponent*)Obj)->bCheckIfStillInWorld = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bCheckIfStillInWorld = { "bCheckIfStillInWorld", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInterpToMovementComponent), &Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bCheckIfStillInWorld_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCheckIfStillInWorld_MetaData), NewProp_bCheckIfStillInWorld_MetaData) };
void Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bForceSubStepping_SetBit(void* Obj)
{
	((UInterpToMovementComponent*)Obj)->bForceSubStepping = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bForceSubStepping = { "bForceSubStepping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UInterpToMovementComponent), &Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bForceSubStepping_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceSubStepping_MetaData), NewProp_bForceSubStepping_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnInterpToReverse = { "OnInterpToReverse", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, OnInterpToReverse), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToReverseDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterpToReverse_MetaData), NewProp_OnInterpToReverse_MetaData) }; // 262674028
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnInterpToStop = { "OnInterpToStop", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, OnInterpToStop), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToStopDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInterpToStop_MetaData), NewProp_OnInterpToStop_MetaData) }; // 880619218
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnWaitBeginDelegate = { "OnWaitBeginDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, OnWaitBeginDelegate), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitBeginDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWaitBeginDelegate_MetaData), NewProp_OnWaitBeginDelegate_MetaData) }; // 807331365
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnWaitEndDelegate = { "OnWaitEndDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, OnWaitEndDelegate), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToWaitEndDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnWaitEndDelegate_MetaData), NewProp_OnWaitEndDelegate_MetaData) }; // 1466005850
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnResetDelegate = { "OnResetDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, OnResetDelegate), Z_Construct_UDelegateFunction_UInterpToMovementComponent_OnInterpToResetDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnResetDelegate_MetaData), NewProp_OnResetDelegate_MetaData) }; // 1935311368
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_MaxSimulationTimeStep = { "MaxSimulationTimeStep", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, MaxSimulationTimeStep), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimulationTimeStep_MetaData), NewProp_MaxSimulationTimeStep_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_SpeedMultiplier = { "SpeedMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, SpeedMultiplier), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpeedMultiplier_MetaData), NewProp_SpeedMultiplier_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_MaxSimulationIterations = { "MaxSimulationIterations", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, MaxSimulationIterations), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSimulationIterations_MetaData), NewProp_MaxSimulationIterations_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_ControlPoints_Inner = { "ControlPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInterpControlPoint, METADATA_PARAMS(0, nullptr) }; // 1620359119
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_ControlPoints = { "ControlPoints", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInterpToMovementComponent, ControlPoints), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPoints_MetaData), NewProp_ControlPoints_MetaData) }; // 1620359119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInterpToMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bPauseOnImpact,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_TeleportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_TeleportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_BehaviourType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_BehaviourType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bCheckIfStillInWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_bForceSubStepping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnInterpToReverse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnInterpToStop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnWaitBeginDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnWaitEndDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_OnResetDelegate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_MaxSimulationTimeStep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_SpeedMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_MaxSimulationIterations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_ControlPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInterpToMovementComponent_Statics::NewProp_ControlPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpToMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInterpToMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpToMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterpToMovementComponent_Statics::ClassParams = {
	&UInterpToMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInterpToMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInterpToMovementComponent_Statics::PropPointers),
	0,
	0x00A800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInterpToMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInterpToMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInterpToMovementComponent()
{
	if (!Z_Registration_Info_UClass_UInterpToMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterpToMovementComponent.OuterSingleton, Z_Construct_UClass_UInterpToMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInterpToMovementComponent.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UInterpToMovementComponent>()
{
	return UInterpToMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInterpToMovementComponent);
UInterpToMovementComponent::~UInterpToMovementComponent() {}
// End Class UInterpToMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInterpToBehaviourType_StaticEnum, TEXT("EInterpToBehaviourType"), &Z_Registration_Info_UEnum_EInterpToBehaviourType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2855876887U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInterpControlPoint::StaticStruct, Z_Construct_UScriptStruct_FInterpControlPoint_Statics::NewStructOps, TEXT("InterpControlPoint"), &Z_Registration_Info_UScriptStruct_InterpControlPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInterpControlPoint), 1620359119U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInterpToMovementComponent, UInterpToMovementComponent::StaticClass, TEXT("UInterpToMovementComponent"), &Z_Registration_Info_UClass_UInterpToMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterpToMovementComponent), 1746588971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_244843883(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_InterpToMovementComponent_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
