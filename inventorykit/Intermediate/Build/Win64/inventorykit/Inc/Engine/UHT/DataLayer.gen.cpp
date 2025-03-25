// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/DataLayer.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/ActorDataLayer.h"
#include "Runtime/Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataLayer() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_DataLayer();
ENGINE_API UClass* Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerRuntimeState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerState();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FActorDataLayer();
UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

// Begin Enum EDataLayerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataLayerState;
static UEnum* EDataLayerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EDataLayerState, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EDataLayerState"));
	}
	return Z_Registration_Info_UEnum_EDataLayerState.OuterSingleton;
}
template<> ENGINE_API UEnum* StaticEnum<EDataLayerState>()
{
	return EDataLayerState_StaticEnum();
}
struct Z_Construct_UEnum_Engine_EDataLayerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Activated.Name", "EDataLayerState::Activated" },
		{ "BlueprintType", "true" },
		{ "Loaded.Name", "EDataLayerState::Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ScriptName", "DataLayerStateType" },
		{ "Unloaded.Name", "EDataLayerState::Unloaded" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataLayerState::Unloaded", (int64)EDataLayerState::Unloaded },
		{ "EDataLayerState::Loaded", (int64)EDataLayerState::Loaded },
		{ "EDataLayerState::Activated", (int64)EDataLayerState::Activated },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EDataLayerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Engine,
	nullptr,
	"EDataLayerState",
	"EDataLayerState",
	Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Engine_EDataLayerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Engine_EDataLayerState()
{
	if (!Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton, Z_Construct_UEnum_Engine_EDataLayerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataLayerState.InnerSingleton;
}
// End Enum EDataLayerState

// Begin Class UDEPRECATED_DataLayer Function Equals
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics
{
	struct DataLayer_eventEquals_Parms
	{
		FActorDataLayer ActorDataLayer;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorDataLayer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActorDataLayer;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ActorDataLayer = { "ActorDataLayer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayer_eventEquals_Parms, ActorDataLayer), Z_Construct_UScriptStruct_FActorDataLayer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorDataLayer_MetaData), NewProp_ActorDataLayer_MetaData) }; // 1894108120
void Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventEquals_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventEquals_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ActorDataLayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "Equals", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::DataLayer_eventEquals_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::DataLayer_eventEquals_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execEquals)
{
	P_GET_STRUCT_REF(FActorDataLayer,Z_Param_Out_ActorDataLayer);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Equals(Z_Param_Out_ActorDataLayer);
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function Equals

// Begin Class UDEPRECATED_DataLayer Function GetDataLayerLabel
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics
{
	struct DataLayer_eventGetDataLayerLabel_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayer_eventGetDataLayerLabel_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "GetDataLayerLabel", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::DataLayer_eventGetDataLayerLabel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::DataLayer_eventGetDataLayerLabel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execGetDataLayerLabel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetDataLayerLabel();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function GetDataLayerLabel

// Begin Class UDEPRECATED_DataLayer Function GetDebugColor
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics
{
	struct DataLayer_eventGetDebugColor_Parms
	{
		FColor ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayer_eventGetDebugColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "GetDebugColor", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::DataLayer_eventGetDebugColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::DataLayer_eventGetDebugColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execGetDebugColor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FColor*)Z_Param__Result=P_THIS->GetDebugColor();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function GetDebugColor

// Begin Class UDEPRECATED_DataLayer Function GetInitialRuntimeState
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics
{
	struct DataLayer_eventGetInitialRuntimeState_Parms
	{
		EDataLayerRuntimeState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayer_eventGetInitialRuntimeState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(0, nullptr) }; // 10031493
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "GetInitialRuntimeState", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::DataLayer_eventGetInitialRuntimeState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::DataLayer_eventGetInitialRuntimeState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execGetInitialRuntimeState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerRuntimeState*)Z_Param__Result=P_THIS->GetInitialRuntimeState();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function GetInitialRuntimeState

// Begin Class UDEPRECATED_DataLayer Function GetInitialState
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics
{
	struct DataLayer_eventGetInitialState_Parms
	{
		EDataLayerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetInitialRuntimeState instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DataLayer_eventGetInitialState_Parms, ReturnValue), Z_Construct_UEnum_Engine_EDataLayerState, METADATA_PARAMS(0, nullptr) }; // 593141122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "GetInitialState", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::DataLayer_eventGetInitialState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::DataLayer_eventGetInitialState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execGetInitialState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataLayerState*)Z_Param__Result=P_THIS->GetInitialState();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function GetInitialState

// Begin Class UDEPRECATED_DataLayer Function IsDynamicallyLoaded
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics
{
	struct DataLayer_eventIsDynamicallyLoaded_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use IsRuntime instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventIsDynamicallyLoaded_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventIsDynamicallyLoaded_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "IsDynamicallyLoaded", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::DataLayer_eventIsDynamicallyLoaded_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::DataLayer_eventIsDynamicallyLoaded_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execIsDynamicallyLoaded)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDynamicallyLoaded();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function IsDynamicallyLoaded

// Begin Class UDEPRECATED_DataLayer Function IsEffectiveVisible
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics
{
	struct DataLayer_eventIsEffectiveVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventIsEffectiveVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventIsEffectiveVisible_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "IsEffectiveVisible", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::DataLayer_eventIsEffectiveVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::DataLayer_eventIsEffectiveVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execIsEffectiveVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEffectiveVisible();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function IsEffectiveVisible

// Begin Class UDEPRECATED_DataLayer Function IsInitiallyActive
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics
{
	struct DataLayer_eventIsInitiallyActive_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Use GetInitialRuntimeState instead" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventIsInitiallyActive_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventIsInitiallyActive_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "IsInitiallyActive", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::DataLayer_eventIsInitiallyActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::DataLayer_eventIsInitiallyActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execIsInitiallyActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitiallyActive();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function IsInitiallyActive

// Begin Class UDEPRECATED_DataLayer Function IsInitiallyVisible
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics
{
	struct DataLayer_eventIsInitiallyVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventIsInitiallyVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventIsInitiallyVisible_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "IsInitiallyVisible", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::DataLayer_eventIsInitiallyVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::DataLayer_eventIsInitiallyVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execIsInitiallyVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsInitiallyVisible();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function IsInitiallyVisible

// Begin Class UDEPRECATED_DataLayer Function IsRuntime
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics
{
	struct DataLayer_eventIsRuntime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventIsRuntime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventIsRuntime_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "IsRuntime", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::DataLayer_eventIsRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::DataLayer_eventIsRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execIsRuntime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsRuntime();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function IsRuntime

// Begin Class UDEPRECATED_DataLayer Function IsVisible
struct Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics
{
	struct DataLayer_eventIsVisible_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((DataLayer_eventIsVisible_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DataLayer_eventIsVisible_Parms), &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDEPRECATED_DataLayer, nullptr, "IsVisible", nullptr, nullptr, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::DataLayer_eventIsVisible_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020403, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::DataLayer_eventIsVisible_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDEPRECATED_DataLayer::execIsVisible)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsVisible();
	P_NATIVE_END;
}
// End Class UDEPRECATED_DataLayer Function IsVisible

// Begin Class UDEPRECATED_DataLayer
void UDEPRECATED_DataLayer::StaticRegisterNativesUDEPRECATED_DataLayer()
{
	UClass* Class = UDEPRECATED_DataLayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Equals", &UDEPRECATED_DataLayer::execEquals },
		{ "GetDataLayerLabel", &UDEPRECATED_DataLayer::execGetDataLayerLabel },
		{ "GetDebugColor", &UDEPRECATED_DataLayer::execGetDebugColor },
		{ "GetInitialRuntimeState", &UDEPRECATED_DataLayer::execGetInitialRuntimeState },
		{ "GetInitialState", &UDEPRECATED_DataLayer::execGetInitialState },
		{ "IsDynamicallyLoaded", &UDEPRECATED_DataLayer::execIsDynamicallyLoaded },
		{ "IsEffectiveVisible", &UDEPRECATED_DataLayer::execIsEffectiveVisible },
		{ "IsInitiallyActive", &UDEPRECATED_DataLayer::execIsInitiallyActive },
		{ "IsInitiallyVisible", &UDEPRECATED_DataLayer::execIsInitiallyVisible },
		{ "IsRuntime", &UDEPRECATED_DataLayer::execIsRuntime },
		{ "IsVisible", &UDEPRECATED_DataLayer::execIsVisible },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_DataLayer);
UClass* Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister()
{
	return UDEPRECATED_DataLayer::StaticClass();
}
struct Z_Construct_UClass_UDEPRECATED_DataLayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "WorldPartition/DataLayer/DataLayer.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsVisible_MetaData[] = {
		{ "Comment", "/** Whether actors associated with the DataLayer are visible in the viewport */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether actors associated with the DataLayer are visible in the viewport" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyVisible_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "Comment", "/** Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether actors associated with the Data Layer should be initially visible in the viewport when loading the map" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInitiallyLoadedInEditor_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "Comment", "/** Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user */" },
		{ "DisplayName", "Is Initially Loaded" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Determines the default value of the data layer's loaded state in editor if it hasn't been changed in data layer outliner by the user" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditor_MetaData[] = {
		{ "Comment", "/** Wheter the data layer is loaded in editor (user setting) */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Wheter the data layer is loaded in editor (user setting)" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData[] = {
		{ "Comment", "/** Whether this data layer editor visibility was changed by a user operation */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether this data layer editor visibility was changed by a user operation" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsLocked_MetaData[] = {
		{ "Comment", "/** Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether this data layer is locked, which means the user can't change actors assignation, remove or rename it" },
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerLabel_MetaData[] = {
		{ "Comment", "/** The display name of the Data Layer */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "The display name of the Data Layer" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRuntime_MetaData[] = {
		{ "Category", "Data Layer|Advanced" },
		{ "Comment", "/** Whether the Data Layer affects actor runtime loading */" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
		{ "ToolTip", "Whether the Data Layer affects actor runtime loading" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialRuntimeState_MetaData[] = {
		{ "Category", "Data Layer|Advanced|Runtime" },
		{ "EditCondition", "bIsRuntime" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[] = {
		{ "Category", "Data Layer|Editor" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DataLayer.h" },
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static void NewProp_bIsInitiallyActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyActive;
	static void NewProp_bIsVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVisible;
	static void NewProp_bIsInitiallyVisible_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyVisible;
	static void NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInitiallyLoadedInEditor;
	static void NewProp_bIsLoadedInEditor_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditor;
	static void NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLoadedInEditorChangedByUserOperation;
	static void NewProp_bIsLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLocked;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_DataLayerLabel;
	static void NewProp_bIsRuntime_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRuntime;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InitialRuntimeState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InitialRuntimeState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Parent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Children_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_Equals, "Equals" }, // 149361497
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDataLayerLabel, "GetDataLayerLabel" }, // 3051299861
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetDebugColor, "GetDebugColor" }, // 2297170080
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialRuntimeState, "GetInitialRuntimeState" }, // 3043597148
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_GetInitialState, "GetInitialState" }, // 1801440235
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsDynamicallyLoaded, "IsDynamicallyLoaded" }, // 3649356599
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsEffectiveVisible, "IsEffectiveVisible" }, // 1648411947
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyActive, "IsInitiallyActive" }, // 46355194
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsInitiallyVisible, "IsInitiallyVisible" }, // 2270034795
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsRuntime, "IsRuntime" }, // 897330795
		{ &Z_Construct_UFunction_UDEPRECATED_DataLayer_IsVisible, "IsVisible" }, // 3686040731
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_DataLayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyActive_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsInitiallyActive_DEPRECATED = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyActive = { "bIsInitiallyActive", nullptr, (EPropertyFlags)0x0040000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitiallyActive_MetaData), NewProp_bIsInitiallyActive_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsVisible_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsVisible = { "bIsVisible", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsVisible_MetaData), NewProp_bIsVisible_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyVisible_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsInitiallyVisible = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyVisible = { "bIsInitiallyVisible", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyVisible_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitiallyVisible_MetaData), NewProp_bIsInitiallyVisible_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsInitiallyLoadedInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor = { "bIsInitiallyLoadedInEditor", nullptr, (EPropertyFlags)0x0040000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInitiallyLoadedInEditor_MetaData), NewProp_bIsInitiallyLoadedInEditor_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditor_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsLoadedInEditor = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditor = { "bIsLoadedInEditor", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditor_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadedInEditor_MetaData), NewProp_bIsLoadedInEditor_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsLoadedInEditorChangedByUserOperation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation = { "bIsLoadedInEditorChangedByUserOperation", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData), NewProp_bIsLoadedInEditorChangedByUserOperation_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLocked_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLocked = { "bIsLocked", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLocked_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsLocked_MetaData), NewProp_bIsLocked_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_DataLayerLabel = { "DataLayerLabel", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_DataLayer, DataLayerLabel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataLayerLabel_MetaData), NewProp_DataLayerLabel_MetaData) };
void Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsRuntime_SetBit(void* Obj)
{
	((UDEPRECATED_DataLayer*)Obj)->bIsRuntime = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsRuntime = { "bIsRuntime", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UDEPRECATED_DataLayer), &Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsRuntime_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRuntime_MetaData), NewProp_bIsRuntime_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_InitialRuntimeState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_InitialRuntimeState = { "InitialRuntimeState", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_DataLayer, InitialRuntimeState), Z_Construct_UEnum_Engine_EDataLayerRuntimeState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialRuntimeState_MetaData), NewProp_InitialRuntimeState_MetaData) }; // 10031493
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_DataLayer, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DebugColor_MetaData), NewProp_DebugColor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0144000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_DataLayer, Parent_DEPRECATED), Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Parent_MetaData), NewProp_Parent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0104000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UDEPRECATED_DataLayer_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0144000020002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDEPRECATED_DataLayer, Children_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Children_MetaData), NewProp_Children_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyVisible,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsInitiallyLoadedInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLoadedInEditorChangedByUserOperation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsLocked,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_DataLayerLabel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_bIsRuntime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_InitialRuntimeState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_InitialRuntimeState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_DebugColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_Parent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_Children_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::NewProp_Children,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Engine,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::ClassParams = {
	&UDEPRECATED_DataLayer::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::PropPointers),
	0,
	0x020806A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::Class_MetaDataParams), Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDEPRECATED_DataLayer()
{
	if (!Z_Registration_Info_UClass_UDEPRECATED_DataLayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_DataLayer.OuterSingleton, Z_Construct_UClass_UDEPRECATED_DataLayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDEPRECATED_DataLayer.OuterSingleton;
}
template<> ENGINE_API UClass* StaticClass<UDEPRECATED_DataLayer>()
{
	return UDEPRECATED_DataLayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_DataLayer);
UDEPRECATED_DataLayer::~UDEPRECATED_DataLayer() {}
// End Class UDEPRECATED_DataLayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataLayerState_StaticEnum, TEXT("EDataLayerState"), &Z_Registration_Info_UEnum_EDataLayerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 593141122U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_DataLayer, UDEPRECATED_DataLayer::StaticClass, TEXT("UDEPRECATED_DataLayer"), &Z_Registration_Info_UClass_UDEPRECATED_DataLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_DataLayer), 1049757113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_1684956280(TEXT("/Script/Engine"),
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DataLayer_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
