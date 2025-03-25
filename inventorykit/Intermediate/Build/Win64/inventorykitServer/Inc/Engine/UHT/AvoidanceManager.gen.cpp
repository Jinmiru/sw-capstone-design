// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvoidanceManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager();
ENGINE_API UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMovementComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin ScriptStruct FNavAvoidanceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NavAvoidanceData;
class UScriptStruct* FNavAvoidanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NavAvoidanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NavAvoidanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavAvoidanceData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("NavAvoidanceData"));
	}
	return Z_Registration_Info_UScriptStruct_NavAvoidanceData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FNavAvoidanceData>()
{
	return FNavAvoidanceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FNavAvoidanceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavAvoidanceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	&NewStructOps,
	"NavAvoidanceData",
	nullptr,
	0,
	sizeof(FNavAvoidanceData),
	alignof(FNavAvoidanceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FNavAvoidanceData()
{
	if (!Z_Registration_Info_UScriptStruct_NavAvoidanceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NavAvoidanceData.InnerSingleton, Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_NavAvoidanceData.InnerSingleton;
}
// End ScriptStruct FNavAvoidanceData

// Begin Class UAvoidanceManager Function GetAvoidanceVelocityForComponent
struct Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics
{
	struct AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms
	{
		UMovementComponent* MovementComp;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Calculate avoidance velocity for component (avoids collisions with the supplied component) */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Calculate avoidance velocity for component (avoids collisions with the supplied component)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms, MovementComp), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "GetAvoidanceVelocityForComponent", nullptr, nullptr, Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::AvoidanceManager_eventGetAvoidanceVelocityForComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAvoidanceManager::execGetAvoidanceVelocityForComponent)
{
	P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=P_THIS->GetAvoidanceVelocityForComponent(Z_Param_MovementComp);
	P_NATIVE_END;
}
// End Class UAvoidanceManager Function GetAvoidanceVelocityForComponent

// Begin Class UAvoidanceManager Function GetNewAvoidanceUID
struct Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics
{
	struct AvoidanceManager_eventGetNewAvoidanceUID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Get appropriate UID for use when reporting to this function or requesting RVO assistance. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Get appropriate UID for use when reporting to this function or requesting RVO assistance." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AvoidanceManager_eventGetNewAvoidanceUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "GetNewAvoidanceUID", nullptr, nullptr, Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::AvoidanceManager_eventGetNewAvoidanceUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::AvoidanceManager_eventGetNewAvoidanceUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAvoidanceManager::execGetNewAvoidanceUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNewAvoidanceUID();
	P_NATIVE_END;
}
// End Class UAvoidanceManager Function GetNewAvoidanceUID

// Begin Class UAvoidanceManager Function GetObjectCount
struct Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics
{
	struct AvoidanceManager_eventGetObjectCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Get the number of avoidance objects currently in the manager. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Get the number of avoidance objects currently in the manager." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AvoidanceManager_eventGetObjectCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "GetObjectCount", nullptr, nullptr, Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::AvoidanceManager_eventGetObjectCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::AvoidanceManager_eventGetObjectCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAvoidanceManager_GetObjectCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_GetObjectCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAvoidanceManager::execGetObjectCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetObjectCount();
	P_NATIVE_END;
}
// End Class UAvoidanceManager Function GetObjectCount

// Begin Class UAvoidanceManager Function RegisterMovementComponent
struct Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics
{
	struct AvoidanceManager_eventRegisterMovementComponent_Parms
	{
		UMovementComponent* MovementComp;
		float AvoidanceWeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
		{ "Comment", "/** Register with the given avoidance manager.\n\x09 *  @param AvoidanceWeight\x09When avoiding each other, actors divert course in proportion to their relative weights. Range is 0.0 to 1.0. Special: at 1.0, actor will not divert course at all.\n\x09 */" },
		{ "CPP_Default_AvoidanceWeight", "0.500000" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Register with the given avoidance manager.\n@param AvoidanceWeight      When avoiding each other, actors divert course in proportion to their relative weights. Range is 0.0 to 1.0. Special: at 1.0, actor will not divert course at all." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AvoidanceWeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AvoidanceManager_eventRegisterMovementComponent_Parms, MovementComp), Z_Construct_UClass_UMovementComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementComp_MetaData), NewProp_MovementComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_AvoidanceWeight = { "AvoidanceWeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AvoidanceManager_eventRegisterMovementComponent_Parms, AvoidanceWeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((AvoidanceManager_eventRegisterMovementComponent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AvoidanceManager_eventRegisterMovementComponent_Parms), &Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_MovementComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_AvoidanceWeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAvoidanceManager, nullptr, "RegisterMovementComponent", nullptr, nullptr, Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::AvoidanceManager_eventRegisterMovementComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::AvoidanceManager_eventRegisterMovementComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UAvoidanceManager::execRegisterMovementComponent)
{
	P_GET_OBJECT(UMovementComponent,Z_Param_MovementComp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AvoidanceWeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RegisterMovementComponent(Z_Param_MovementComp,Z_Param_AvoidanceWeight);
	P_NATIVE_END;
}
// End Class UAvoidanceManager Function RegisterMovementComponent

// Begin Class UAvoidanceManager
void UAvoidanceManager::StaticRegisterNativesUAvoidanceManager()
{
	UClass* Class = UAvoidanceManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAvoidanceVelocityForComponent", &UAvoidanceManager::execGetAvoidanceVelocityForComponent },
		{ "GetNewAvoidanceUID", &UAvoidanceManager::execGetNewAvoidanceUID },
		{ "GetObjectCount", &UAvoidanceManager::execGetObjectCount },
		{ "RegisterMovementComponent", &UAvoidanceManager::execRegisterMovementComponent },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAvoidanceManager);
UClass* Z_Construct_UClass_UAvoidanceManager_NoRegister()
{
	return UAvoidanceManager::StaticClass();
}
struct Z_Construct_UClass_UAvoidanceManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AI/Navigation/AvoidanceManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTimeToLive_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How long an avoidance UID must not be updated before the system will put it back in the pool. Actual delay is up to 150% of this value. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "How long an avoidance UID must not be updated before the system will put it back in the pool. Actual delay is up to 150% of this value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockTimeAfterAvoid_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How long to stay on course (barring collision) after making an avoidance move */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "How long to stay on course (barring collision) after making an avoidance move" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LockTimeAfterClean_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How long to stay on course (barring collision) after making an unobstructed move (should be > 0.0, but can be less than a full frame) */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "How long to stay on course (barring collision) after making an unobstructed move (should be > 0.0, but can be less than a full frame)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeltaTimeToPredict_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** This is how far forward in time (seconds) we extend our velocity cones and thus our prediction */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "This is how far forward in time (seconds) we extend our velocity cones and thus our prediction" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArtificialRadiusExpansion_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Multiply the radius of all STORED avoidance objects by this value to allow a little extra room for avoidance maneuvers. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Multiply the radius of all STORED avoidance objects by this value to allow a little extra room for avoidance maneuvers." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TestHeightDifference_MetaData[] = {
		{ "Comment", "/** Deprecated - use HeightCheckMargin, generally a much smaller value. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Deprecated - use HeightCheckMargin, generally a much smaller value." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeightCheckMargin_MetaData[] = {
		{ "Category", "Avoidance" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Allowable height margin between obstacles and agents. This is over and above the difference in agent heights. */" },
		{ "ModuleRelativePath", "Classes/AI/Navigation/AvoidanceManager.h" },
		{ "ToolTip", "Allowable height margin between obstacles and agents. This is over and above the difference in agent heights." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultTimeToLive;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockTimeAfterAvoid;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LockTimeAfterClean;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeToPredict;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ArtificialRadiusExpansion;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TestHeightDifference;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightCheckMargin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UAvoidanceManager_GetAvoidanceVelocityForComponent, "GetAvoidanceVelocityForComponent" }, // 2176262684
		{ &Z_Construct_UFunction_UAvoidanceManager_GetNewAvoidanceUID, "GetNewAvoidanceUID" }, // 2061089178
		{ &Z_Construct_UFunction_UAvoidanceManager_GetObjectCount, "GetObjectCount" }, // 3880460294
		{ &Z_Construct_UFunction_UAvoidanceManager_RegisterMovementComponent, "RegisterMovementComponent" }, // 349172568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAvoidanceManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive = { "DefaultTimeToLive", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, DefaultTimeToLive), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultTimeToLive_MetaData), NewProp_DefaultTimeToLive_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid = { "LockTimeAfterAvoid", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, LockTimeAfterAvoid), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockTimeAfterAvoid_MetaData), NewProp_LockTimeAfterAvoid_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean = { "LockTimeAfterClean", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, LockTimeAfterClean), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LockTimeAfterClean_MetaData), NewProp_LockTimeAfterClean_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict = { "DeltaTimeToPredict", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, DeltaTimeToPredict), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeltaTimeToPredict_MetaData), NewProp_DeltaTimeToPredict_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion = { "ArtificialRadiusExpansion", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, ArtificialRadiusExpansion), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArtificialRadiusExpansion_MetaData), NewProp_ArtificialRadiusExpansion_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference = { "TestHeightDifference", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, TestHeightDifference_DEPRECATED), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TestHeightDifference_MetaData), NewProp_TestHeightDifference_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin = { "HeightCheckMargin", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAvoidanceManager, HeightCheckMargin), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeightCheckMargin_MetaData), NewProp_HeightCheckMargin_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DefaultTimeToLive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterAvoid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_LockTimeAfterClean,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_DeltaTimeToPredict,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_ArtificialRadiusExpansion,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_TestHeightDifference,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAvoidanceManager_Statics::NewProp_HeightCheckMargin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAvoidanceManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAvoidanceManager_Statics::ClassParams = {
	&UAvoidanceManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::PropPointers),
	0,
	0x000800A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAvoidanceManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UAvoidanceManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAvoidanceManager()
{
	if (!Z_Registration_Info_UClass_UAvoidanceManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAvoidanceManager.OuterSingleton, Z_Construct_UClass_UAvoidanceManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAvoidanceManager.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UAvoidanceManager>()
{
	return UAvoidanceManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAvoidanceManager);
UAvoidanceManager::~UAvoidanceManager() {}
// End Class UAvoidanceManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FNavAvoidanceData::StaticStruct, Z_Construct_UScriptStruct_FNavAvoidanceData_Statics::NewStructOps, TEXT("NavAvoidanceData"), &Z_Registration_Info_UScriptStruct_NavAvoidanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNavAvoidanceData), 1816864564U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAvoidanceManager, UAvoidanceManager::StaticClass, TEXT("UAvoidanceManager"), &Z_Registration_Info_UClass_UAvoidanceManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAvoidanceManager), 1969003441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_3335232181(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_AI_Navigation_AvoidanceManager_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
